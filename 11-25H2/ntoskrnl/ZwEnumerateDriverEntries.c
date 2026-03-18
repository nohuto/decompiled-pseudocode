/*
 * XREFs of ZwEnumerateDriverEntries @ 0x14069CE40
 * Callers:
 *     DifZwEnumerateDriverEntriesWrapper @ 0x1406338B0 (DifZwEnumerateDriverEntriesWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwEnumerateDriverEntries(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
