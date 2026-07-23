/*
 * XREFs of NtRollbackRegistryTransaction @ 0x140856380
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmpRollbackLightWeightTransaction @ 0x1408B48C4 (CmpRollbackLightWeightTransaction.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

NTSTATUS __cdecl NtRollbackRegistryTransaction(HANDLE RegistryTransactionHandle, ULONG Flags)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  NTSTATUS v7; // ebx
  NTSTATUS v8; // eax
  PVOID v9; // rdi
  PVOID Object; // [rsp+38h] [rbp-9h] BYREF
  __int128 v12; // [rsp+40h] [rbp-1h] BYREF
  __int64 v13; // [rsp+50h] [rbp+Fh]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp+17h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v12);
  if ( (unsigned __int8)CmpAcquireShutdownRundown(v5, v4) )
  {
    if ( Flags )
    {
      v7 = -1073741811;
    }
    else
    {
      Object = 0LL;
      v8 = ObReferenceObjectByHandle(
             RegistryTransactionHandle,
             0x10u,
             CmRegistryTransactionType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
      v9 = Object;
      v7 = v8;
      if ( v8 >= 0 )
      {
        CmpAttachToRegistryProcess(&ApcState);
        v7 = CmpRollbackLightWeightTransaction(v9);
        CmpDetachFromRegistryProcess(&ApcState);
        if ( v7 >= 0 )
          v7 = 0;
      }
      if ( v9 )
        ObfDereferenceObject(v9);
    }
    CmpReleaseShutdownRundown(v6);
  }
  else
  {
    v7 = -1073741431;
  }
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v12);
  return v7;
}
