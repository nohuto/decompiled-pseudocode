/*
 * XREFs of RtlpSetUserKernelFunctionOverrideCapability @ 0x140809F50
 * Callers:
 *     RtlpInitFunctionOverrideCapabilities @ 0x14080F35C (RtlpInitFunctionOverrideCapabilities.c)
 * Callees:
 *     RtlpSetFunctionOverrideCapability @ 0x140809F0C (RtlpSetFunctionOverrideCapability.c)
 */

char __fastcall RtlpSetUserKernelFunctionOverrideCapability(unsigned int a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned int v3; // r11d

  RtlpSetFunctionOverrideCapability(a1, a2, 0);
  return RtlpSetFunctionOverrideCapability(v3, v2, 1);
}
