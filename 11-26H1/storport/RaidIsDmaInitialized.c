/*
 * XREFs of RaidIsDmaInitialized @ 0x140187DDC
 * Callers:
 *     RaidInitializePerfOpts @ 0x14005232C (RaidInitializePerfOpts.c)
 *     RaidAdapterCompleteInitialization @ 0x140060120 (RaidAdapterCompleteInitialization.c)
 *     NVMeGetUncachedExtensionEx @ 0x1400797D4 (NVMeGetUncachedExtensionEx.c)
 *     NvmeControllerAllocateInternalBufferAllocation @ 0x1400799F4 (NvmeControllerAllocateInternalBufferAllocation.c)
 *     StorPortGetUncachedExtension @ 0x14007B850 (StorPortGetUncachedExtension.c)
 *     NvmeAdapterCompleteInitialization @ 0x1400D3950 (NvmeAdapterCompleteInitialization.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidIsDmaInitialized(_QWORD *a1)
{
  return a1 && *a1 != 0LL;
}
