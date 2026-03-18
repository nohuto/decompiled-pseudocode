/*
 * XREFs of HviEnterKernelAperture @ 0x140637888
 * Callers:
 *     HviCopyMemory @ 0x14046BDC8 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x1404F9560 (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureDetectParameters @ 0x1406379B0 (HvipApertureDetectParameters.c)
 *     HvipApertureDirectHypercall @ 0x140637A48 (HvipApertureDirectHypercall.c)
 *     HvipApertureVmfuncSwitchEptp @ 0x140732280 (HvipApertureVmfuncSwitchEptp.c)
 */

char HviEnterKernelAperture()
{
  char result; // al

  result = BYTE2(RtlpBootStatHandleLock.ExpectedRunTime);
  if ( !BYTE2(RtlpBootStatHandleLock.ExpectedRunTime) )
    result = HvipApertureDetectParameters();
  _disable();
  if ( !byte_140E0CD12 )
  {
    if ( BYTE1(RtlpBootStatHandleLock.ExpectedRunTime) )
      return HvipApertureVmfuncSwitchEptp(1LL);
    else
      return HvipApertureDirectHypercall(6LL, 1LL);
  }
  return result;
}
