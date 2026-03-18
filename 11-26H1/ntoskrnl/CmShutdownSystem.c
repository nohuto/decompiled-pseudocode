/*
 * XREFs of CmShutdownSystem @ 0x140854284
 * Callers:
 *     ExRebootSystemForRecovery @ 0x1406CB54C (ExRebootSystemForRecovery.c)
 *     PopGracefulShutdown @ 0x140BF9180 (PopGracefulShutdown.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     CmShutdownSystem0 @ 0x1406E2248 (CmShutdownSystem0.c)
 *     CmShutdownSystem1 @ 0x1406E2270 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x1406E24C0 (CmShutdownSystem2.c)
 */

_KAFFINITY_EX *CmShutdownSystem()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  int v3; // r9d
  __int64 v4; // r9
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v6 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v6);
  if ( v3 )
  {
    v4 = (unsigned int)(v3 - 1);
    if ( (_DWORD)v4 )
    {
      if ( (_DWORD)v4 == 1 )
        CmShutdownSystem2();
    }
    else
    {
      CmShutdownSystem1(v1, v0, v2, v4);
    }
  }
  else
  {
    CmShutdownSystem0();
  }
  return CmCleanupThreadInfo((_KAFFINITY_EX **)&v6);
}
