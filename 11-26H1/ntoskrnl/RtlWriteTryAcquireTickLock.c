/*
 * XREFs of RtlWriteTryAcquireTickLock @ 0x140497E4C
 * Callers:
 *     KiUpdateTime @ 0x14021D690 (KiUpdateTime.c)
 *     KiUpdateTimeAssist @ 0x14021E0C8 (KiUpdateTimeAssist.c)
 *     KeFreezeExecution @ 0x140508FA0 (KeFreezeExecution.c)
 *     KiSchedulerDpc @ 0x1407136E0 (KiSchedulerDpc.c)
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
