/*
 * XREFs of RtlWriteTryAcquireTickLock @ 0x14049199C
 * Callers:
 *     KiUpdateTime @ 0x14021F020 (KiUpdateTime.c)
 *     KiUpdateTimeAssist @ 0x14021FA58 (KiUpdateTimeAssist.c)
 *     KeFreezeExecution @ 0x140502A50 (KeFreezeExecution.c)
 *     KiSchedulerDpc @ 0x1407183D0 (KiSchedulerDpc.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlWriteTryAcquireTickLock(signed __int64 *a1)
{
  signed __int64 v1; // rdx
  signed __int64 v2; // rax

  _m_prefetchw(a1);
  v1 = *a1;
  while ( (v1 & 1) == 0 )
  {
    v2 = _InterlockedCompareExchange64(a1, v1 + 1, v1);
    if ( v1 == v2 )
      return 1;
    v1 = v2;
    _mm_pause();
  }
  return 0;
}
