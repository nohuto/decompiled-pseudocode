/*
 * XREFs of wcsncpy @ 0x1405381E0
 * Callers:
 *     __asan_wrap_wcsncpy @ 0x1405E2DD0 (__asan_wrap_wcsncpy.c)
 * Callees:
 *     wcsnlen @ 0x140538260 (wcsnlen.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
