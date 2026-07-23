/*
 * XREFs of RtlWriteAcquireTickLock @ 0x1404643A4
 * Callers:
 *     KiUpdateTime @ 0x14021F020 (KiUpdateTime.c)
 *     KiUpdateTimeAssist @ 0x14021FA58 (KiUpdateTimeAssist.c)
 *     KiUpdateSystemTime @ 0x1404641A4 (KiUpdateSystemTime.c)
 *     KiWriteAcquireCpuStateTickLock @ 0x14046438C (KiWriteAcquireCpuStateTickLock.c)
 *     KiUpdateProcessAvailableCpuState @ 0x1405E8528 (KiUpdateProcessAvailableCpuState.c)
 *     KiUpdateSystemAvailableCpuState @ 0x1405E8664 (KiUpdateSystemAvailableCpuState.c)
 *     KeSetTagCpuSets @ 0x1405F68DC (KeSetTagCpuSets.c)
 *     KiModifySystemAllowedCpuSetsWithLock @ 0x1405F6F08 (KiModifySystemAllowedCpuSetsWithLock.c)
 *     KiCreateCpuSetForProcessor @ 0x140BFB578 (KiCreateCpuSetForProcessor.c)
 *     KiCalibrateTimeAdjustment @ 0x140C0DAB0 (KiCalibrateTimeAdjustment.c)
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
