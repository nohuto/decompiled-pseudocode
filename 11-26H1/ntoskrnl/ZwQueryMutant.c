/*
 * XREFs of ZwQueryMutant @ 0x140726050
 * Callers:
 *     DifZwQueryMutantWrapper @ 0x1406B2DF0 (DifZwQueryMutantWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryMutant(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
