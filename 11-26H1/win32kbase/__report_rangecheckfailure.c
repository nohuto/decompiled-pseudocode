/*
 * XREFs of __report_rangecheckfailure @ 0x1401C6D80
 * Callers:
 *     GetMonitorCapabilityFromInf @ 0x14002AD24 (GetMonitorCapabilityFromInf.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
