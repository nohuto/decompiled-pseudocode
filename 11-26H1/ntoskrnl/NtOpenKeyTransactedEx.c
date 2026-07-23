/*
 * XREFs of NtOpenKeyTransactedEx @ 0x140936740
 * Callers:
 *     DifNtOpenKeyTransactedExWrapper @ 0x1406813C0 (DifNtOpenKeyTransactedExWrapper.c)
 *     NtOpenKeyTransacted @ 0x1408554D0 (NtOpenKeyTransacted.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmpTransDereferenceTransaction @ 0x1408F31C8 (CmpTransDereferenceTransaction.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     CmOpenKey @ 0x140937170 (CmOpenKey.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

NTSTATUS __cdecl NtOpenKeyTransactedEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions,
        HANDLE TransactionHandle)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  NTSTATUS v15; // edi
  KPROCESSOR_MODE v16; // r9
  NTSTATUS v17; // eax
  int HandleInformation; // [rsp+28h] [rbp-40h]
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  __int128 v21; // [rsp+38h] [rbp-30h] BYREF
  __int64 v22; // [rsp+48h] [rbp-20h]

  v21 = 0LL;
  v22 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v21);
  if ( !(unsigned __int8)CmpAcquireShutdownRundown(v10, v9) )
  {
    v15 = -1073741431;
    goto LABEL_10;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(TransactionHandle, 4u, CmRegistryTransactionType, PreviousMode, &Object, 0LL);
  v14 = (__int64)Object;
  v15 = v12;
  if ( v12 == -1073741788 )
  {
    v16 = KeGetCurrentThread()->PreviousMode;
    Object = 0LL;
    v17 = ObReferenceObjectByHandle(TransactionHandle, 4u, (POBJECT_TYPE)TmTransactionObjectType, v16, &Object, 0LL);
    v14 = (__int64)Object;
    v15 = v17;
    if ( v17 >= 0 )
      goto LABEL_6;
  }
  else if ( v12 >= 0 )
  {
    v14 = (unsigned __int64)Object | 1;
LABEL_6:
    LOBYTE(HandleInformation) = KeGetCurrentThread()->PreviousMode;
    v15 = CmOpenKey(KeyHandle, DesiredAccess, ObjectAttributes, OpenOptions, v14, HandleInformation);
  }
  if ( v14 )
    CmpTransDereferenceTransaction(v14);
  CmpReleaseShutdownRundown(v13);
LABEL_10:
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v21);
  return v15;
}
