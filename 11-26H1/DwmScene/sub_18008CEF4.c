/*
 * XREFs of sub_18008CEF4 @ 0x18008CEF4
 * Callers:
 *     sub_18008C5BC @ 0x18008C5BC (sub_18008C5BC.c)
 * Callees:
 *     memmove @ 0x18000D92D (memmove.c)
 *     sub_180017A18 @ 0x180017A18 (sub_180017A18.c)
 */

void *__fastcall sub_18008CEF4(float *Src, char *a2, __int64 a3, float *a4)
{
  __int64 v8; // rax
  __int128 v9; // xmm0
  _OWORD *v10; // rbx
  float *v11; // rdi
  float *v12; // r8
  __int128 v13; // xmm0
  _OWORD *v14; // rbx
  void *result; // rax
  _OWORD *v16; // rbx

  v8 = sub_180017A18(a2, a3, a4);
  v9 = *((_OWORD *)a2 - 1);
  v10 = (_OWORD *)(a3 - 16);
  v11 = (float *)(a2 - 32);
  v12 = (float *)(v8 - 16);
  *v10 = v9;
  while ( 1 )
  {
    while ( 1 )
    {
      --v10;
      if ( *v12 > *v11 )
        break;
      v13 = *(_OWORD *)v12;
      v12 -= 4;
      *v10 = v13;
      if ( a4 == v12 )
      {
        v14 = v10 - 1;
        *v14 = *(_OWORD *)v11;
        result = memmove((char *)v14 - ((char *)v11 - (char *)Src), Src, (char *)v11 - (char *)Src);
        *(_OWORD *)Src = *(_OWORD *)a4;
        return result;
      }
    }
    *v10 = *(_OWORD *)v11;
    if ( Src == v11 )
      break;
    v11 -= 4;
  }
  v16 = v10 - 1;
  *v16 = *(_OWORD *)v12;
  return memmove((char *)v16 - ((char *)v12 - (char *)a4), a4, (char *)v12 - (char *)a4);
}
