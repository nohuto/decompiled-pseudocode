/*
 * XREFs of ZwUnmapViewOfSectionEx @ 0x140726FF0
 * Callers:
 *     DifZwUnmapViewOfSectionExWrapper @ 0x1406BE880 (DifZwUnmapViewOfSectionExWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnmapViewOfSectionEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
