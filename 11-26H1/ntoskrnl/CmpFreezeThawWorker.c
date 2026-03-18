/*
 * XREFs of CmpFreezeThawWorker @ 0x140857350
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     CmThawRegistry @ 0x1408571F0 (CmThawRegistry.c)
 */

_KAFFINITY_EX *CmpFreezeThawWorker()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF
  __int64 v2; // [rsp+30h] [rbp-18h]

  v1 = 0LL;
  v2 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v1);
  *(_DWORD *)&WheapPfaLock.ApcStateFill[8] = 0;
  if ( *(_DWORD *)&WheapPfaLock.ApcStateFill[12] == 1 )
    CmThawRegistry();
  return CmCleanupThreadInfo((_KAFFINITY_EX **)&v1);
}
