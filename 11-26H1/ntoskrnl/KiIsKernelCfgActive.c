/*
 * XREFs of KiIsKernelCfgActive @ 0x140CC8184
 * Callers:
 *     KiInitializeKernel @ 0x140BF6190 (KiInitializeKernel.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14041D934 (VslGetNestedPageProtectionFlags.c)
 */

__int64 KiIsKernelCfgActive()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags(0LL) >> 7) & 1;
}
