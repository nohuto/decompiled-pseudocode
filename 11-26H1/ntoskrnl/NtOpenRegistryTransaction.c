/*
 * XREFs of NtOpenRegistryTransaction @ 0x1408554F0
 * Callers:
 *     DifNtOpenRegistryTransactionWrapper @ 0x140682550 (DifNtOpenRegistryTransactionWrapper.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     ObOpenObjectByName @ 0x14092C800 (ObOpenObjectByName.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

NTSTATUS __cdecl NtOpenRegistryTransaction(
        HANDLE *RegistryTransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjAttributes)
{
  int v3; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // si
  int v9; // r8d
  NTSTATUS v10; // ebx
  char PreviousMode; // r14
  HANDLE v12; // rcx
  HANDLE Handle; // [rsp+48h] [rbp-40h] BYREF
  __int128 v15; // [rsp+50h] [rbp-38h] BYREF
  __int64 v16; // [rsp+60h] [rbp-28h]

  v3 = (int)ObjAttributes;
  v15 = 0LL;
  v16 = 0LL;
  Handle = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v15);
  v8 = CmpAcquireShutdownRundown(v7, v6);
  if ( v8 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
      RtlWriteULong64ToUser(RegistryTransactionHandle, 0LL);
    else
      *RegistryTransactionHandle = 0LL;
    LOBYTE(v9) = PreviousMode;
    v10 = ObOpenObjectByName(v3, (_DWORD)CmRegistryTransactionType, v9, 0, DesiredAccess, 0LL, (__int64)&Handle);
    if ( v10 >= 0 )
    {
      if ( PreviousMode )
        RtlWriteULong64ToUser(RegistryTransactionHandle, (__int64)Handle);
      else
        *RegistryTransactionHandle = Handle;
      Handle = 0LL;
      v10 = 0;
    }
  }
  else
  {
    v10 = -1073741431;
  }
  v12 = Handle;
  if ( Handle )
    NtClose(Handle);
  if ( v8 )
    CmpReleaseShutdownRundown(v12);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v15);
  return v10;
}
