/*
 * XREFs of memchr @ 0x1405392E0
 * Callers:
 *     __asan_wrap_memchr @ 0x1405E4000 (__asan_wrap_memchr.c)
 * Callees:
 *     <none>
 */

void *__cdecl memchr(const void *Buf, int Val, size_t MaxCount)
{
  unsigned int v3; // edx
  __m128i v4; // xmm0
  void *result; // rax
  bool v6; // zf
  __m128i si128; // xmm1

  v3 = 16843009 * (unsigned __int8)Val;
  v4 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v3), 0);
  result = 0LL;
  if ( MaxCount >= 0x20 )
  {
    if ( ((unsigned __int8)Buf & 0xF) != 0 )
    {
      result = (void *)(((unsigned __int8)Buf & 0xF) - 16LL);
      MaxCount += (size_t)result;
      Buf = (const void *)((_BYTE *)Buf - (_BYTE *)result);
      while ( (_BYTE)v3 != *((_BYTE *)result + (_QWORD)Buf) )
      {
        result = (char *)result + 1;
        if ( !result )
        {
          if ( MaxCount >= 0x20 )
            goto LABEL_7;
          goto LABEL_10;
        }
      }
    }
    else
    {
LABEL_7:
      while ( 1 )
      {
        v6 = !_BitScanForward64(
                (unsigned __int64 *)&result,
                (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128((const __m128i *)Buf), v4)));
        if ( !v6 )
          break;
        si128 = _mm_load_si128((const __m128i *)Buf + 1);
        Buf = (char *)Buf + 16;
        v6 = !_BitScanForward64((unsigned __int64 *)&result, (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(si128, v4)));
        if ( !v6 )
          break;
        Buf = (char *)Buf + 16;
        MaxCount -= 32LL;
        if ( MaxCount < 0x20 )
          goto LABEL_10;
      }
    }
    return (char *)result + (_QWORD)Buf;
  }
LABEL_10:
  if ( MaxCount )
  {
    while ( (_BYTE)v3 != *(_BYTE *)Buf )
    {
      Buf = (char *)Buf + 1;
      if ( !--MaxCount )
        return result;
    }
    return (char *)result + (_QWORD)Buf;
  }
  return result;
}
