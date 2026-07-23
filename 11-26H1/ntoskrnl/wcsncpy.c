/*
 * XREFs of wcsncpy @ 0x14053A660
 * Callers:
 *     __asan_wrap_wcsncpy @ 0x1405E5740 (__asan_wrap_wcsncpy.c)
 * Callees:
 *     wcsnlen @ 0x14053A6E0 (wcsnlen.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

wchar_t *__cdecl wcsncpy(wchar_t *Dest, const wchar_t *Source, size_t Count)
{
  size_t v6; // r14

  v6 = wcsnlen(Source, Count);
  memmove(Dest, Source, 2 * v6);
  if ( v6 < Count )
    memset_0(&Dest[v6], 0, 2 * (Count - v6));
  return Dest;
}
