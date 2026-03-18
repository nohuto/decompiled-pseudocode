/*
 * XREFs of ZwMapViewOfSectionEx @ 0x1407257D0
 * Callers:
 *     DifZwMapViewOfSectionExWrapper @ 0x1406AA190 (DifZwMapViewOfSectionExWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwMapViewOfSectionEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
