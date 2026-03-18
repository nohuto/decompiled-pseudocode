/*
 * XREFs of NtWaitLowEventPair @ 0x14077D200
 * Callers:
 *     DifNtAdjustTokenClaimsAndDeviceGroupsWrapper @ 0x14066A9D0 (DifNtAdjustTokenClaimsAndDeviceGroupsWrapper.c)
 *     DifNtCreateEventPairWrapper @ 0x140670970 (DifNtCreateEventPairWrapper.c)
 *     DifNtDirectGraphicsCallWrapper @ 0x1406762F0 (DifNtDirectGraphicsCallWrapper.c)
 *     DifNtFilterTokenExWrapper @ 0x140677760 (DifNtFilterTokenExWrapper.c)
 *     DifNtOpenEventPairWrapper @ 0x14067CEA0 (DifNtOpenEventPairWrapper.c)
 *     DifNtVdmControlWrapper @ 0x140690D10 (DifNtVdmControlWrapper.c)
 *     MiKernelWriteToExecutableMemory @ 0x1406FF57C (MiKernelWriteToExecutableMemory.c)
 * Callees:
 *     <none>
 */

__int64 NtWaitLowEventPair()
{
  return 3221225474LL;
}
