/*
 * XREFs of wcsncpy @ 0x18012DA30
 * Callers:
 *     <none>
 * Callees:
 *     wcsnlen @ 0x18012DAB0 (wcsnlen.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

wchar_t *__cdecl wcsncpy(wchar_t *Destination, const wchar_t *Source, size_t Count)
{
  size_t v6; // r14

  v6 = wcsnlen(Source, Count);
  memmove(Destination, Source, 2 * v6);
  if ( v6 < Count )
    memset_thunk_772440563353939046(&Destination[v6], 0, 2 * (Count - v6));
  return Destination;
}
