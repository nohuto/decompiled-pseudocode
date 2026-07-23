/*
 * XREFs of RtlInitKernelModeSpecialMachineFrameEntries @ 0x140CE037C
 * Callers:
 *     KiInitializeKernel @ 0x140BFC190 (KiInitializeKernel.c)
 * Callees:
 *     RtlpInitMachineFrameEntries @ 0x140CE0414 (RtlpInitMachineFrameEntries.c)
 */

__int64 RtlInitKernelModeSpecialMachineFrameEntries()
{
  return RtlpInitMachineFrameEntries(&RtlpNoShadowStackUnwindMachineFrameEntries, 3LL);
}
