/*
 * XREFs of CmReconcileAndValidateAllHives @ 0x14085CFC0
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmpDoFlushAll @ 0x14049BE84 (CmpDoFlushAll.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

__int64 CmReconcileAndValidateAllHives()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-58h] BYREF
  __int64 v5; // [rsp+30h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-40h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v4);
  if ( (unsigned __int8)CmpAcquireShutdownRundown(v1, v0) )
  {
    CmpAttachToRegistryProcess(&ApcState);
    CmpDoFlushAll(0xCu);
    CmpDetachFromRegistryProcess(&ApcState);
    CmpReleaseShutdownRundown(v2);
  }
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v4);
  return 0LL;
}
