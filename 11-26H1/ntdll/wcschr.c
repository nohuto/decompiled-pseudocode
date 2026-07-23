/*
 * XREFs of wcschr @ 0x18012D710
 * Callers:
 *     LdrSetDllDirectory @ 0x180028210 (LdrSetDllDirectory.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18003FCD0 (EtwpAddLogHeaderToLogFile.c)
 *     RtlpNeedCurrentDirectoryForExePath @ 0x18009A058 (RtlpNeedCurrentDirectoryForExePath.c)
 *     RtlpGetDirPath @ 0x18009B03C (RtlpGetDirPath.c)
 *     wcscspn @ 0x18012D7E0 (wcscspn.c)
 *     wcspbrk @ 0x18012DC80 (wcspbrk.c)
 *     wcsspn @ 0x18012DDA0 (wcsspn.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  int v2; // r10d
  wchar_t *v4; // r9
  __m128i v5; // xmm2
  __m128i v6; // xmm0
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdx
  wchar_t *v10; // rdx

  v2 = Ch;
  v4 = 0LL;
  v5 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(Ch), 0), 0);
  while ( ((unsigned __int16)Str & 0xFFFu) > 0xFF0uLL )
  {
    if ( *Str == Ch )
      return (wchar_t *)Str;
    if ( !*Str )
      return 0LL;
    v8 = 2LL;
LABEL_8:
    Str = (const wchar_t *)((char *)Str + v8);
  }
  v6 = _mm_loadu_si128((const __m128i *)Str);
  v7 = _mm_movemask_epi8((__m128i)_mm_or_ps((__m128)_mm_cmpeq_epi16((__m128i)0LL, v6), (__m128)_mm_cmpeq_epi16(v6, v5)));
  if ( !v7 )
  {
    v8 = 16LL;
    goto LABEL_8;
  }
  _BitScanForward((unsigned int *)&v9, v7);
  v10 = (wchar_t *)((char *)Str + v9);
  if ( *v10 == v2 )
    return v10;
  return v4;
}
