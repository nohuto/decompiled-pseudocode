/*
 * XREFs of NtOpenMutant @ 0x140AC7630
 * Callers:
 *     DifNtOpenMutantWrapper @ 0x140681A00 (DifNtOpenMutantWrapper.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140413410 (PsGetCurrentSilo.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObOpenObjectByName @ 0x14092C800 (ObOpenObjectByName.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 */

NTSTATUS __cdecl NtOpenMutant(PHANDLE MutantHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // si
  POBJECT_TYPE v7; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  NTSTATUS v9; // ebx
  __int64 ULong64FromUser; // rax
  __int64 v12[4]; // [rsp+48h] [rbp-20h] BYREF

  v12[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(MutantHandle);
    RtlWriteULong64ToUser(MutantHandle, ULong64FromUser);
  }
  v7 = ExMutantObjectType;
  CurrentSilo = PsGetCurrentSilo();
  v9 = ObOpenObjectByNameEx(
         (__int64)ObjectAttributes,
         (__int64)v7,
         PreviousMode,
         0LL,
         DesiredAccess,
         0LL,
         (__int64)CurrentSilo,
         v12);
  if ( v9 == -1073741788 && *(_QWORD *)&WheapConfigTableLock.WaitBlockFill11[64] )
    v9 = ObOpenObjectByName(
           (__int64)ObjectAttributes,
           *(__int64 *)&WheapConfigTableLock.WaitBlockFill11[64],
           PreviousMode,
           0LL,
           DesiredAccess,
           0LL,
           (__int64)v12);
  if ( v9 >= 0 )
  {
    if ( PreviousMode )
      RtlWriteULong64ToUser(MutantHandle, v12[0]);
    else
      *MutantHandle = (HANDLE)v12[0];
  }
  return v9;
}
