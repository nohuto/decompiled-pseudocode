/*
 * XREFs of HviLeaveKernelAperture @ 0x14063A964
 * Callers:
 *     HviCopyMemory @ 0x140465548 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x1404F2B70 (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureDirectHypercall @ 0x14063AA4C (HvipApertureDirectHypercall.c)
 *     HvipApertureVmfuncSwitchEptp @ 0x140736E50 (HvipApertureVmfuncSwitchEptp.c)
 */

__int64 HviLeaveKernelAperture()
{
  __int64 result; // rax

  if ( !byte_140E0CD82 )
  {
    if ( LOBYTE(RtlpBootStatHandleLock.ExpectedRunTime) )
      result = HvipApertureVmfuncSwitchEptp(0LL);
    else
      result = HvipApertureDirectHypercall(6LL, 0LL);
  }
  _mm_lfence();
  _enable();
  return result;
}
