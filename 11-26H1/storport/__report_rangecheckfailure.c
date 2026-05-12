/*
 * XREFs of __report_rangecheckfailure @ 0x14005CFD0
 * Callers:
 *     StorCompareScsiDeviceId @ 0x14003DD80 (StorCompareScsiDeviceId.c)
 *     ParseTPerProperties @ 0x140135DF0 (ParseTPerProperties.c)
 *     WppInitGlobalLogger @ 0x1401880B4 (WppInitGlobalLogger.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
