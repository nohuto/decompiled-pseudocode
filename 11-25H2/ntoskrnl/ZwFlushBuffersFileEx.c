/*
 * XREFs of ZwFlushBuffersFileEx @ 0x14069CF20
 * Callers:
 *     DifZwFlushBuffersFileExWrapper @ 0x140633D80 (DifZwFlushBuffersFileExWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFlushBuffersFileEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
