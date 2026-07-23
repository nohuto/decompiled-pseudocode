/*
 * XREFs of HvipApertureDirectHypercall @ 0x14063AA4C
 * Callers:
 *     HviEnterKernelAperture @ 0x14063A88C (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x14063A964 (HviLeaveKernelAperture.c)
 * Callees:
 *     HvipApertureIntelVmcall @ 0x140736E60 (HvipApertureIntelVmcall.c)
 *     HvipApertureAmdVmcall @ 0x140736E70 (HvipApertureAmdVmcall.c)
 */

__int64 __fastcall HvipApertureDirectHypercall(__int64 a1, __int64 a2)
{
  if ( BYTE2(RtlpBootStatHandleLock.ExpectedRunTime) )
    return HvipApertureIntelVmcall(a1, a2, 0LL);
  else
    return HvipApertureAmdVmcall(a1, a2, 0LL);
}
