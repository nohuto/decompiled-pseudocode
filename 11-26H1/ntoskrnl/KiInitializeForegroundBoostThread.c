/*
 * XREFs of KiInitializeForegroundBoostThread @ 0x140202D64
 * Callers:
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1402044D0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiComputeThreadPriority @ 0x14023B414 (KiComputeThreadPriority.c)
 *     KiReleaseThreadStateLock @ 0x140305180 (KiReleaseThreadStateLock.c)
 *     KiUpdateThreadPriority @ 0x140380850 (KiUpdateThreadPriority.c)
 *     KiSetForegroundBoost @ 0x14052461C (KiSetForegroundBoost.c)
 */

__int64 __fastcall KiInitializeForegroundBoostThread(struct _KTHREAD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  int v4; // edx
  __int64 v5; // rcx
  _OWORD v6[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]

  v7 = 0LL;
  result = (__int64)a1->Process;
  memset(v6, 0, sizeof(v6));
  v3 = *(unsigned int *)(result + 136);
  if ( (v3 & 0x2000) != 0 )
  {
    result = *((unsigned int *)&a1->MiscFlags + 1);
    if ( (result & 8) == 0 && a1->Priority > 0 )
    {
      KiSetForegroundBoost(a1, v3);
      result = KiComputeThreadPriority(a1, 0, 0);
      if ( (int)result > a1->Priority )
      {
        KiUpdateThreadPriority(0, v4, (_DWORD)a1, result, 0);
        KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
        return KiReleaseThreadStateLock(v5, v6);
      }
    }
  }
  return result;
}
