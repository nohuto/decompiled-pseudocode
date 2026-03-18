/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x140726A10
 * Callers:
 *     CmSiPrefetchVirtualMemoryRange @ 0x1404C6D80 (CmSiPrefetchVirtualMemoryRange.c)
 *     DifZwSetInformationVirtualMemoryWrapper @ 0x1406BB0F0 (DifZwSetInformationVirtualMemoryWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
