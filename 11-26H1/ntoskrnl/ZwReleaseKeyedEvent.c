/*
 * XREFs of ZwReleaseKeyedEvent @ 0x1407263B0
 * Callers:
 *     DifZwReleaseKeyedEventWrapper @ 0x1406B6730 (DifZwReleaseKeyedEventWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwReleaseKeyedEvent(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
