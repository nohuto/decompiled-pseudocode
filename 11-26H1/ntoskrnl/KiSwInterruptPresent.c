/*
 * XREFs of KiSwInterruptPresent @ 0x140C80394
 * Callers:
 *     KiLockExtendedServiceTable @ 0x1405405C8 (KiLockExtendedServiceTable.c)
 *     KiVerifyXcpt15 @ 0x140C803F0 (KiVerifyXcpt15.c)
 *     CcInitializeBcbProfiler @ 0x140C80424 (CcInitializeBcbProfiler.c)
 *     KeCheckedKernelInitialize @ 0x140C80C28 (KeCheckedKernelInitialize.c)
 *     KeFreeInitializationCode @ 0x140C80CCC (KeFreeInitializationCode.c)
 *     KiFilterFiberContext @ 0x140C80D10 (KiFilterFiberContext.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 * Callees:
 *     <none>
 */

__int64 KiSwInterruptPresent()
{
  return *(_QWORD *)&HvlpVsmVtlCallVa == 0LL ? 0xC0000001 : 0;
}
