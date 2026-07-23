/*
 * XREFs of CmpFreezeThawWorker @ 0x14085D6E0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmThawRegistry @ 0x14085D580 (CmThawRegistry.c)
 */

_KAFFINITY_EX *CmpFreezeThawWorker()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF
  __int64 v2; // [rsp+30h] [rbp-18h]

  v1 = 0LL;
  v2 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v1);
  LODWORD(WheapPfaLock.WaitListEntry.Flink) = 0;
  if ( HIDWORD(WheapPfaLock.SwapListEntry.Next) == 1 )
    CmThawRegistry();
  return CmCleanupThreadInfo((_KAFFINITY_EX **)&v1);
}
