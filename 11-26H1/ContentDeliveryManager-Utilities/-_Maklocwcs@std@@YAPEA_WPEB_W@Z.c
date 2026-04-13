/*
 * XREFs of ?_Maklocwcs@std@@YAPEA_WPEB_W@Z @ 0x1800B5D8C
 * Callers:
 *     ??$_Getvals@_W@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@IEAAX_WAEBV_Locinfo@1@@Z @ 0x1800B5228 (--$_Getvals@_W@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@IEAAX_WA.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x18000626C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x180021CF6 (memcpy_0.c)
 */

wchar_t *__fastcall std::_Maklocwcs(const wchar_t *Src)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rdi
  void *v4; // rbx

  v2 = -1LL;
  do
    ++v2;
  while ( Src[v2] );
  v3 = v2 + 1;
  v4 = operator new[](saturated_mul(v3, 2uLL));
  memcpy_0(v4, Src, 2 * v3);
  return (wchar_t *)v4;
}
