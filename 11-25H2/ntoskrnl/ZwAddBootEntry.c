/*
 * XREFs of ZwAddBootEntry @ 0x14069BE80
 * Callers:
 *     DifZwAddBootEntryWrapper @ 0x14062F440 (DifZwAddBootEntryWrapper.c)
 *     BiAddBootEntry @ 0x140804DD4 (BiAddBootEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAddBootEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
