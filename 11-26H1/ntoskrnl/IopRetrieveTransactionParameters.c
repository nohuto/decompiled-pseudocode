/*
 * XREFs of IopRetrieveTransactionParameters @ 0x1409342BC
 * Callers:
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x1409337E0 (IopAllocRealFileObject.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IopGetSetSpecificExtension @ 0x140455360 (IopGetSetSpecificExtension.c)
 *     IopCheckStackForTransactionSupport @ 0x1404F312C (IopCheckStackForTransactionSupport.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IopRetrieveTransactionParameters(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int16 ULongFromUser; // r15
  int SetSpecificExtension; // ebx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int *Teb; // rcx
  _WORD *v12; // rcx
  HANDLE Handle; // [rsp+38h] [rbp-50h] BYREF
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  __int64 v15[8]; // [rsp+48h] [rbp-40h] BYREF

  v15[0] = 0LL;
  Handle = 0LL;
  ULongFromUser = 0;
  SetSpecificExtension = TmCurrentTransaction(&Handle);
  if ( SetSpecificExtension == -1073741637 )
    SetSpecificExtension = 0;
  if ( SetSpecificExtension < 0 )
    return (unsigned int)SetSpecificExtension;
  if ( Handle )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
      Teb = 0LL;
    else
      Teb = (unsigned int *)CurrentThread->Teb;
    if ( Teb )
      ULongFromUser = RtlReadULongFromUser(Teb + 186);
    else
      SetSpecificExtension = -1072103400;
  }
  if ( SetSpecificExtension < 0 || !Handle )
    return (unsigned int)SetSpecificExtension;
  if ( IopCheckStackForTransactionSupport(a1)
    || (*(_WORD *)(a2 + 70) &= 1u, *(_DWORD *)(a2 + 88) == 1) && (a3 & 0xFEEDFF56) == 0
    || *(_BYTE *)(a2 + 137) )
  {
    Object = 0LL;
    if ( ObReferenceObjectByHandle(Handle, 0x120037u, (POBJECT_TYPE)TmTransactionObjectType, 1, &Object, 0LL) < 0 )
    {
      return (unsigned int)-1072103400;
    }
    else
    {
      SetSpecificExtension = IopGetSetSpecificExtension(a4, 0, 16LL, 1, v15, 0LL);
      if ( SetSpecificExtension < 0 )
      {
        ObfDereferenceObject(Object);
      }
      else
      {
        v12 = (_WORD *)v15[0];
        *(_WORD *)v15[0] = 16;
        v12[1] = ULongFromUser;
        *((_QWORD *)v12 + 1) = Object;
      }
    }
    return (unsigned int)SetSpecificExtension;
  }
  return 3222863935LL;
}
