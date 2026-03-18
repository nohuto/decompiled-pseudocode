/*
 * XREFs of MmAllocateIndependentPages @ 0x140B3D7A0
 * Callers:
 *     KeAllocateInterrupt @ 0x1404C278C (KeAllocateInterrupt.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x1404E439C (IopLiveDumpAllocateDumpBuffers.c)
 *     HvlStartBootLogicalProcessors @ 0x1405B9968 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x1405C0B08 (HvlpInitializeHvCrashdump.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x1405CD084 (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpAllocateIptBuffers @ 0x1405CDC6C (IopLiveDumpAllocateIptBuffers.c)
 *     KeAllocateProcessorProfileStructures @ 0x1405E4550 (KeAllocateProcessorProfileStructures.c)
 *     KiAllocateProcessorStateInitializationParameters @ 0x1405EA1C0 (KiAllocateProcessorStateInitializationParameters.c)
 *     KiInitializePrcbContext @ 0x140BF430C (KiInitializePrcbContext.c)
 * Callees:
 *     MmAllocateIndependentPagesEx @ 0x140B3D7BC (MmAllocateIndependentPagesEx.c)
 */

__int64 __fastcall MmAllocateIndependentPages(__int64 a1, __int64 a2)
{
  return MmAllocateIndependentPagesEx(a1, a2, 0LL, 0LL);
}
