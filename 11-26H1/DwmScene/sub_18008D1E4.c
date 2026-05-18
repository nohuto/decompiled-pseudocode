/*
 * XREFs of sub_18008D1E4 @ 0x18008D1E4
 * Callers:
 *     sub_18008CB04 @ 0x18008CB04 (sub_18008CB04.c)
 * Callees:
 *     memmove @ 0x18000D92D (memmove.c)
 */

__int64 __fastcall sub_18008D1E4(float *Src, float *a2, float *a3, _OWORD *a4)
{
  float *v4; // rdi
  void *v5; // rbx
  __int128 v6; // xmm0
  __int128 v7; // xmm0
  signed __int64 v8; // rsi
  size_t v10; // rdi

  v4 = a2;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = a4 + 1;
      if ( *a2 > *Src )
        break;
      v7 = *(_OWORD *)Src;
      Src += 4;
      *a4++ = v7;
      if ( Src == v4 )
      {
        v8 = (char *)a3 - (char *)a2;
        memmove(v5, a2, (char *)a3 - (char *)a2);
        return (__int64)v5 + v8;
      }
    }
    v6 = *(_OWORD *)a2;
    a2 += 4;
    *a4 = v6;
    if ( a2 == a3 )
      break;
    ++a4;
  }
  v10 = (char *)v4 - (char *)Src;
  memmove(a4 + 1, Src, v10);
  return (__int64)v5 + v10;
}
