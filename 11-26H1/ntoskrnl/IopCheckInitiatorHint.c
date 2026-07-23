/*
 * XREFs of IopCheckInitiatorHint @ 0x14044CEE0
 * Callers:
 *     IopAllocRealFileObject @ 0x14090F390 (IopAllocRealFileObject.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoGetInitiatorProcess @ 0x140428740 (IoGetInitiatorProcess.c)
 *     IopGetSetSpecificExtension @ 0x14044D490 (IopGetSetSpecificExtension.c)
 *     IopSetFileObjectExtensionFlag @ 0x140462F80 (IopSetFileObjectExtensionFlag.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlIsSandboxedToken @ 0x1408FBA10 (RtlIsSandboxedToken.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IopCheckInitiatorHint(__int64 a1, __int64 a2)
{
  NTSTATUS SetSpecificExtension; // ebx
  struct _KTHREAD *CurrentThread; // r8
  char *Teb; // rdi
  __int64 v8; // rax
  char v9; // di
  int v10; // r9d
  PVOID InitiatorProcess; // rax
  __int64 ULong64FromUser; // [rsp+38h] [rbp-30h]
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  SetSpecificExtension = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = (char *)CurrentThread->Teb;
  ULong64FromUser = RtlReadULong64FromUser(Teb + 72);
  if ( (ULong64FromUser | 1) == RtlReadULong64FromUser(Teb + 2016) && !(unsigned __int8)RtlIsSandboxedToken(0LL) )
  {
    v8 = RtlReadULong64FromUser(Teb + 2008);
    v9 = v8 & 1;
    Object = 0LL;
    SetSpecificExtension = ObReferenceObjectByHandle(
                             (HANDLE)(v8 & 0xFFFFFFFFFFFFFFFEuLL),
                             1u,
                             (POBJECT_TYPE)PsProcessType,
                             1,
                             &Object,
                             0LL);
    if ( SetSpecificExtension >= 0 )
    {
      v14 = 0LL;
      LOBYTE(v10) = 1;
      SetSpecificExtension = IopGetSetSpecificExtension(a1, 1, 32, v10, (__int64)&v14, 0LL);
      if ( SetSpecificExtension >= 0 )
      {
        if ( a2 )
        {
          InitiatorProcess = (PVOID)IoGetInitiatorProcess(a2);
          if ( InitiatorProcess != Object )
          {
            SetSpecificExtension = -1073741811;
            ObfDereferenceObjectWithTag(Object, 0x746C6644u);
          }
        }
        if ( SetSpecificExtension >= 0 )
        {
          *(_QWORD *)(v14 + 8) = Object;
          if ( v9 )
          {
            *(_DWORD *)(a1 + 80) |= 0x20000000u;
            IopSetFileObjectExtensionFlag(a1, 8LL);
          }
        }
      }
      else
      {
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      }
    }
  }
  return (unsigned int)SetSpecificExtension;
}
