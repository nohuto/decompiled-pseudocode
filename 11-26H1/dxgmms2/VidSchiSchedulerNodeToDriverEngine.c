/*
 * XREFs of VidSchiSchedulerNodeToDriverEngine @ 0x1400379BC
 * Callers:
 *     VidSchiPrepareToResetEngine @ 0x1400C0880 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1400C1A0C (VidSchiResetEngines.c)
 *     VidSchiCheckNodeTimeout @ 0x1400C5470 (VidSchiCheckNodeTimeout.c)
 *     VidSchiSubmitPagingCommand @ 0x1400E8924 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1400EAB34 (VidSchiSubmitRenderCommand.c)
 *     VidSchCreateSystemDevices @ 0x1400FC140 (VidSchCreateSystemDevices.c)
 *     VidSchSubmitPagingCommand @ 0x1401092D8 (VidSchSubmitPagingCommand.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1401095AC (VidSchiSubmitHwPagingCommand.c)
 *     VidSchReportAdapter @ 0x140119A10 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x14011D0A0 (VidSchReportDevice.c)
 *     VidSchiSerializeSchedulingLog @ 0x140122E7C (VidSchiSerializeSchedulingLog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiSchedulerNodeToDriverEngine(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 696);
  if ( a2 < *(_DWORD *)(a1 + 768) )
    v2 += 8LL * a2;
  return *(unsigned __int16 *)(*(_QWORD *)v2 + 6LL);
}
