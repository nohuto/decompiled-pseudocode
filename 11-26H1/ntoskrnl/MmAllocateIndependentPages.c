/*
 * XREFs of MmAllocateIndependentPages @ 0x140B3F870
 * Callers:
 *     KeAllocateInterrupt @ 0x1404BBFDC (KeAllocateInterrupt.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x1404DD93C (IopLiveDumpAllocateDumpBuffers.c)
 *     HvlStartBootLogicalProcessors @ 0x1405BC1D8 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x1405C3378 (HvlpInitializeHvCrashdump.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x1405CF894 (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpAllocateIptBuffers @ 0x1405D047C (IopLiveDumpAllocateIptBuffers.c)
 *     KeAllocateProcessorProfileStructures @ 0x1405E6EC0 (KeAllocateProcessorProfileStructures.c)
 *     KiAllocateProcessorStateInitializationParameters @ 0x1405ECB30 (KiAllocateProcessorStateInitializationParameters.c)
 *     KiInitializePrcbContext @ 0x140BFA30C (KiInitializePrcbContext.c)
 * Callees:
 *     MmAllocateIndependentPagesEx @ 0x140B3F88C (MmAllocateIndependentPagesEx.c)
 */

__int64 __fastcall MmAllocateIndependentPages(__int64 a1, __int64 a2)
{
  return MmAllocateIndependentPagesEx(a1, a2, 0LL, 0LL);
}
