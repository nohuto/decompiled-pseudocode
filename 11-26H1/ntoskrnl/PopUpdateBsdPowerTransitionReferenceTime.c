/*
 * XREFs of PopUpdateBsdPowerTransitionReferenceTime @ 0x140B33C48
 * Callers:
 *     PopBsdHandleRequest @ 0x1404DEFD0 (PopBsdHandleRequest.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x14047DD50 (RtlComputeCrc32.c)
 */

ULONG32 PopUpdateBsdPowerTransitionReferenceTime()
{
  ULONG32 result; // eax

  stru_140E67200.KernelWaitTime = MEMORY[0xFFFFF78000000014];
  result = RtlComputeCrc32(0, &stru_140E67200.KernelWaitTime, 8u);
  LODWORD(stru_140E67200.UserWaitTime) = result;
  return result;
}
