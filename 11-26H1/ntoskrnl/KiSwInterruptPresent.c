/*
 * XREFs of KiSwInterruptPresent @ 0x140C86394
 * Callers:
 *     KiLockExtendedServiceTable @ 0x140542A48 (KiLockExtendedServiceTable.c)
 *     KiVerifyXcpt15 @ 0x140C863F0 (KiVerifyXcpt15.c)
 *     CcInitializeBcbProfiler @ 0x140C86424 (CcInitializeBcbProfiler.c)
 *     KeCheckedKernelInitialize @ 0x140C86C28 (KeCheckedKernelInitialize.c)
 *     KeFreeInitializationCode @ 0x140C86CCC (KeFreeInitializationCode.c)
 *     KiFilterFiberContext @ 0x140C86D10 (KiFilterFiberContext.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 * Callees:
 *     <none>
 */

__int64 KiSwInterruptPresent()
{
  return *(_QWORD *)&HvlpVsmVtlCallVa == 0LL ? 0xC0000001 : 0;
}
