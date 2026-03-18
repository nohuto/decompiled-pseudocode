/*
 * XREFs of KiAreCodePatchesAllowed @ 0x140CC8120
 * Callers:
 *     CcInitializeBcbProfiler @ 0x140C80424 (CcInitializeBcbProfiler.c)
 *     KeCheckedKernelInitialize @ 0x140C80C28 (KeCheckedKernelInitialize.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 *     VslConnectSwInterrupt @ 0x140D06C2C (VslConnectSwInterrupt.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14041D934 (VslGetNestedPageProtectionFlags.c)
 */

_BOOL8 KiAreCodePatchesAllowed()
{
  return (VslGetNestedPageProtectionFlags(0LL) & 0x500) != 0;
}
