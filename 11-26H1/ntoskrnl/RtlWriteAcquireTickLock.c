/*
 * XREFs of RtlWriteAcquireTickLock @ 0x14046AC24
 * Callers:
 *     KiUpdateTime @ 0x14021D690 (KiUpdateTime.c)
 *     KiUpdateTimeAssist @ 0x14021E0C8 (KiUpdateTimeAssist.c)
 *     KiUpdateSystemTime @ 0x14046AA24 (KiUpdateSystemTime.c)
 *     KiWriteAcquireCpuStateTickLock @ 0x14046AC0C (KiWriteAcquireCpuStateTickLock.c)
 *     KiUpdateProcessAvailableCpuState @ 0x1405E5BB8 (KiUpdateProcessAvailableCpuState.c)
 *     KiUpdateSystemAvailableCpuState @ 0x1405E5CF4 (KiUpdateSystemAvailableCpuState.c)
 *     KeSetTagCpuSets @ 0x1405F3F1C (KeSetTagCpuSets.c)
 *     KiModifySystemAllowedCpuSetsWithLock @ 0x1405F4548 (KiModifySystemAllowedCpuSetsWithLock.c)
 *     KiCreateCpuSetForProcessor @ 0x140BF5578 (KiCreateCpuSetForProcessor.c)
 *     KiCalibrateTimeAdjustment @ 0x140C078A0 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlWriteAcquireTickLock(signed __int64 *a1)
{
  signed __int64 result; // rax
  signed __int64 v2; // rtt

  _m_prefetchw(a1);
  result = *a1;
  while ( (result & 1) != 0 )
  {
    result = *a1;
LABEL_6:
    _mm_pause();
  }
  v2 = result;
  result = _InterlockedCompareExchange64(a1, result + 1, result);
  if ( v2 != result )
    goto LABEL_6;
  return result;
}
