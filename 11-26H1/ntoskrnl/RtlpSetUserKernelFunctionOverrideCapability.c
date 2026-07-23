/*
 * XREFs of RtlpSetUserKernelFunctionOverrideCapability @ 0x14080F9E0
 * Callers:
 *     RtlpInitFunctionOverrideCapabilities @ 0x140814DEC (RtlpInitFunctionOverrideCapabilities.c)
 * Callees:
 *     RtlpSetFunctionOverrideCapability @ 0x14080F99C (RtlpSetFunctionOverrideCapability.c)
 */

char __fastcall RtlpSetUserKernelFunctionOverrideCapability(unsigned int a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned int v3; // r11d

  RtlpSetFunctionOverrideCapability(a1, a2, 0);
  return RtlpSetFunctionOverrideCapability(v3, v2, 1);
}
