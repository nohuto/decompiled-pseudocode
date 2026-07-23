/*
 * XREFs of NtWaitLowEventPair @ 0x14077FD00
 * Callers:
 *     DifNtAdjustTokenClaimsAndDeviceGroupsWrapper @ 0x14066E5B0 (DifNtAdjustTokenClaimsAndDeviceGroupsWrapper.c)
 *     DifNtCreateEventPairWrapper @ 0x140674550 (DifNtCreateEventPairWrapper.c)
 *     DifNtDirectGraphicsCallWrapper @ 0x140679ED0 (DifNtDirectGraphicsCallWrapper.c)
 *     DifNtFilterTokenExWrapper @ 0x14067B340 (DifNtFilterTokenExWrapper.c)
 *     DifNtOpenEventPairWrapper @ 0x140680A80 (DifNtOpenEventPairWrapper.c)
 *     DifNtVdmControlWrapper @ 0x1406948F0 (DifNtVdmControlWrapper.c)
 *     MiKernelWriteToExecutableMemory @ 0x14070424C (MiKernelWriteToExecutableMemory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtWaitLowEventPair(HANDLE EventPairHandle)
{
  return -1073741822;
}
