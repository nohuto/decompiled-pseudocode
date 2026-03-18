/*
 * XREFs of ZwAddBootEntry @ 0x140724130
 * Callers:
 *     DifZwAddBootEntryWrapper @ 0x140698860 (DifZwAddBootEntryWrapper.c)
 *     BiAddBootEntry @ 0x14089359C (BiAddBootEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAddBootEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
