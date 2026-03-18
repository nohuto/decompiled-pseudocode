/*
 * XREFs of XilCommonBuffer_AcquireBufferFromPhysicalAddress @ 0x1400406F8
 * Callers:
 *     Interrupter_PrepareInterrupter @ 0x14007BEE4 (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     CommonBuffer_AcquireCommonBufferFromPhysicalAddress @ 0x14003FEF4 (CommonBuffer_AcquireCommonBufferFromPhysicalAddress.c)
 */

_QWORD *__fastcall XilCommonBuffer_AcquireBufferFromPhysicalAddress(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5)
{
  return CommonBuffer_AcquireCommonBufferFromPhysicalAddress(a1, a2, a3, a4, a5);
}
