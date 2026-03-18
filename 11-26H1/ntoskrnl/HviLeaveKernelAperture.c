/*
 * XREFs of HviLeaveKernelAperture @ 0x140637960
 * Callers:
 *     HviCopyMemory @ 0x14046BDC8 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x1404F9560 (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureDirectHypercall @ 0x140637A48 (HvipApertureDirectHypercall.c)
 *     HvipApertureVmfuncSwitchEptp @ 0x140732280 (HvipApertureVmfuncSwitchEptp.c)
 */

__int64 HviLeaveKernelAperture()
{
  __int64 result; // rax

  if ( !byte_140E0CD12 )
  {
    if ( BYTE1(RtlpBootStatHandleLock.ExpectedRunTime) )
      result = HvipApertureVmfuncSwitchEptp(0LL);
    else
      result = HvipApertureDirectHypercall(6LL, 0LL);
  }
  _mm_lfence();
  _enable();
  return result;
}
