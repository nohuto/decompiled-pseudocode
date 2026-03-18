/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x14069E740
 * Callers:
 *     CmSiPrefetchVirtualMemoryRange @ 0x1404893D4 (CmSiPrefetchVirtualMemoryRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
