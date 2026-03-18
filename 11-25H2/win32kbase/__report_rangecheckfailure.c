/*
 * XREFs of __report_rangecheckfailure @ 0x1401A28C0
 * Callers:
 *     GetMonitorCapabilityFromInf @ 0x14008124C (GetMonitorCapabilityFromInf.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
