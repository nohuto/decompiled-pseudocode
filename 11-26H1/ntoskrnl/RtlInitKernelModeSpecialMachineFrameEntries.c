/*
 * XREFs of RtlInitKernelModeSpecialMachineFrameEntries @ 0x140CD9FFC
 * Callers:
 *     KiInitializeKernel @ 0x140BF6190 (KiInitializeKernel.c)
 * Callees:
 *     RtlpInitMachineFrameEntries @ 0x140CDA094 (RtlpInitMachineFrameEntries.c)
 */

__int64 RtlInitKernelModeSpecialMachineFrameEntries()
{
  return RtlpInitMachineFrameEntries(&RtlpNoShadowStackUnwindMachineFrameEntries, 3LL);
}
