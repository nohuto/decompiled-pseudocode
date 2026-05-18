/*
 * XREFs of sub_18008CE40 @ 0x18008CE40
 * Callers:
 *     sub_18008C6C0 @ 0x18008C6C0 (sub_18008C6C0.c)
 * Callees:
 *     sub_180017A18 @ 0x180017A18 (sub_180017A18.c)
 */

_OWORD *__fastcall sub_18008CE40(_OWORD *a1, _OWORD *a2, __int64 a3, float *a4)
{
  float *v5; // rsi
  __int64 v8; // rax
  _OWORD *v9; // rdi
  float *v10; // rcx
  float *v11; // rbx
  void *v12; // r8
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  __int128 v15; // xmm6
  _OWORD *result; // rax

  v5 = a4;
  v8 = sub_180017A18(a1, (__int64)a2, a4);
  *a1 = *a2;
  v9 = a1 + 1;
  v10 = (float *)(v8 - 16);
  v11 = (float *)(a2 + 1);
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = v9 + 1;
      if ( *v5 > *v11 )
        break;
      v14 = *(_OWORD *)v5;
      v5 += 4;
      *v9++ = v14;
      if ( v5 == v10 )
      {
        v15 = *(_OWORD *)v10;
        result = (_OWORD *)sub_180017A18(v11, a3, v12);
        *result = v15;
        return result;
      }
    }
    v13 = *(_OWORD *)v11;
    v11 += 4;
    *v9 = v13;
    if ( v11 == (float *)a3 )
      break;
    ++v9;
  }
  return (_OWORD *)sub_180017A18(v5, v8, v12);
}
