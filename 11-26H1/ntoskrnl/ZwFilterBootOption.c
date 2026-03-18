/*
 * XREFs of ZwFilterBootOption @ 0x140725170
 * Callers:
 *     DifZwFilterBootOptionWrapper @ 0x1406A5C70 (DifZwFilterBootOptionWrapper.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 *     IopInitializeInMemoryDumpData @ 0x140CBA480 (IopInitializeInMemoryDumpData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFilterBootOption(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
