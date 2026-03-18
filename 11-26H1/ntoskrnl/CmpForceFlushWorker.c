/*
 * XREFs of CmpForceFlushWorker @ 0x140AECE60
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     CmpDoFlushAll @ 0x1404A2354 (CmpDoFlushAll.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 */

_KAFFINITY_EX *CmpForceFlushWorker()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v3; // rcx
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
    CmpDoFlushAll(0);
    CmpDetachFromRegistryProcess(&ApcState);
    CmpReleaseShutdownRundown(v3);
  }
  _InterlockedExchange(&CmpForceFlushPending, 0);
  return CmCleanupThreadInfo((_KAFFINITY_EX **)&v4);
}
