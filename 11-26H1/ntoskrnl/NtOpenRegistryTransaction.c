/*
 * XREFs of NtOpenRegistryTransaction @ 0x14084F1E0
 * Callers:
 *     DifNtOpenRegistryTransactionWrapper @ 0x14067E970 (DifNtOpenRegistryTransactionWrapper.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     NtClose @ 0x1408F9F30 (NtClose.c)
 *     ObOpenObjectByName @ 0x1408FC870 (ObOpenObjectByName.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtOpenRegistryTransaction(HANDLE *a1, int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // si
  int v9; // r8d
  int v10; // ebx
  char PreviousMode; // r14
  HANDLE v12; // rcx
  HANDLE Handle; // [rsp+48h] [rbp-40h] BYREF
  __int128 v15; // [rsp+50h] [rbp-38h] BYREF
  __int64 v16; // [rsp+60h] [rbp-28h]

  v15 = 0LL;
  v16 = 0LL;
  Handle = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v15);
  v8 = CmpAcquireShutdownRundown(v7, v6);
  if ( v8 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
      RtlWriteULong64ToUser(a1, 0LL);
    else
      *a1 = 0LL;
    LOBYTE(v9) = PreviousMode;
    v10 = ObOpenObjectByName(a3, (_DWORD)CmRegistryTransactionType, v9, 0, a2, 0LL, (__int64)&Handle);
    if ( v10 >= 0 )
    {
      if ( PreviousMode )
        RtlWriteULong64ToUser(a1, (__int64)Handle);
      else
        *a1 = Handle;
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
  return (unsigned int)v10;
}
