/*
 * XREFs of KiAreCodePatchesAllowed @ 0x140CCE210
 * Callers:
 *     CcInitializeBcbProfiler @ 0x140C86424 (CcInitializeBcbProfiler.c)
 *     KeCheckedKernelInitialize @ 0x140C86C28 (KeCheckedKernelInitialize.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 *     VslConnectSwInterrupt @ 0x140D0CEFC (VslConnectSwInterrupt.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x140415184 (VslGetNestedPageProtectionFlags.c)
 */

_BOOL8 KiAreCodePatchesAllowed()
{
  return (VslGetNestedPageProtectionFlags(0LL) & 0x500) != 0;
}
