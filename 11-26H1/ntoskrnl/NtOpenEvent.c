/*
 * XREFs of NtOpenEvent @ 0x140AAB9F0
 * Callers:
 *     DifNtOpenEventWrapper @ 0x14067D020 (DifNtOpenEventWrapper.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x14041BBC0 (PsGetCurrentSilo.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ObOpenObjectByName @ 0x1408FC870 (ObOpenObjectByName.c)
 *     ObOpenObjectByNameEx @ 0x1408FCDF0 (ObOpenObjectByNameEx.c)
 */

__int64 __fastcall NtOpenEvent(_QWORD *a1, int a2, __int64 a3)
{
  char PreviousMode; // si
  POBJECT_TYPE *v7; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  int v9; // ebx
  __int64 ULong64FromUser; // rax
  __int64 v12[2]; // [rsp+50h] [rbp-28h] BYREF

  v12[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
  }
  v7 = ExEventObjectType;
  CurrentSilo = PsGetCurrentSilo();
  v9 = ObOpenObjectByNameEx(a3, (__int64)v7, PreviousMode, 0LL, a2, 0LL, (__int64)CurrentSilo, v12);
  if ( v9 == -1073741788 && *(_QWORD *)&WheapConfigTableLock.WaitBlockFill11[64] )
    v9 = ObOpenObjectByName(
           a3,
           *(__int64 *)&WheapConfigTableLock.WaitBlockFill11[64],
           PreviousMode,
           0LL,
           a2,
           0LL,
           (__int64)v12);
  if ( v9 >= 0 )
  {
    if ( PreviousMode )
      RtlWriteULong64ToUser(a1, v12[0]);
    else
      *a1 = v12[0];
  }
  return (unsigned int)v9;
}
