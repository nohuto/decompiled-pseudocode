/*
 * XREFs of ZwReadVirtualMemory @ 0x140723BD0
 * Callers:
 *     DifZwReadVirtualMemoryWrapper @ 0x1406B6270 (DifZwReadVirtualMemoryWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwReadVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
