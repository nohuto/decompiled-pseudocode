/*
 * XREFs of HvipApertureDirectHypercall @ 0x140637A48
 * Callers:
 *     HviEnterKernelAperture @ 0x140637888 (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x140637960 (HviLeaveKernelAperture.c)
 * Callees:
 *     HvipApertureIntelVmcall @ 0x140732290 (HvipApertureIntelVmcall.c)
 *     HvipApertureAmdVmcall @ 0x1407322A0 (HvipApertureAmdVmcall.c)
 */

__int64 __fastcall HvipApertureDirectHypercall(__int64 a1, __int64 a2)
{
  if ( LOBYTE(RtlpBootStatHandleLock.ExpectedRunTime) )
    return HvipApertureIntelVmcall(a1, a2, 0LL);
  else
    return HvipApertureAmdVmcall(a1, a2, 0LL);
}
