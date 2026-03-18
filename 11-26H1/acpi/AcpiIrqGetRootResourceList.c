/*
 * XREFs of AcpiIrqGetRootResourceList @ 0x140055CD0
 * Callers:
 *     ProcessorpReserveUnownedRanges @ 0x1400D3D20 (ProcessorpReserveUnownedRanges.c)
 * Callees:
 *     <none>
 */

__int64 AcpiIrqGetRootResourceList()
{
  return *(_QWORD *)(RootDeviceExtension + 672);
}
