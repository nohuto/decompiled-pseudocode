/*
 * XREFs of HviEnterKernelAperture @ 0x14063A88C
 * Callers:
 *     HviCopyMemory @ 0x140465548 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x1404F2B70 (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureDetectParameters @ 0x14063A9B4 (HvipApertureDetectParameters.c)
 *     HvipApertureDirectHypercall @ 0x14063AA4C (HvipApertureDirectHypercall.c)
 *     HvipApertureVmfuncSwitchEptp @ 0x140736E50 (HvipApertureVmfuncSwitchEptp.c)
 */

char HviEnterKernelAperture()
{
  char result; // al

  result = BYTE1(RtlpBootStatHandleLock.ExpectedRunTime);
  if ( !BYTE1(RtlpBootStatHandleLock.ExpectedRunTime) )
    result = HvipApertureDetectParameters();
  _disable();
  if ( !byte_140E0CD82 )
  {
    if ( LOBYTE(RtlpBootStatHandleLock.ExpectedRunTime) )
      return HvipApertureVmfuncSwitchEptp(1LL);
    else
      return HvipApertureDirectHypercall(6LL, 1LL);
  }
  return result;
}
