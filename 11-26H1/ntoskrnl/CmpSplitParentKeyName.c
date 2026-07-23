/*
 * XREFs of CmpSplitParentKeyName @ 0x140C5EBFC
 * Callers:
 *     CmpDoReDoCreateKey @ 0x140869B10 (CmpDoReDoCreateKey.c)
 *     CmpDoReOpenTransKey @ 0x140869E38 (CmpDoReOpenTransKey.c)
 *     CmLoadAppKey @ 0x1408B87F4 (CmLoadAppKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpSplitParentKeyName(__m128i *a1, __m128i *a2, __m128i *a3)
{
  __int64 result; // rax
  __m128i v5; // xmm1
  __int64 v6; // rdx
  __m128i v7; // xmm0
  int v8; // edx
  bool v9; // zf
  __m128i v10; // [rsp+0h] [rbp-28h]
  __m128i v11; // [rsp+10h] [rbp-18h]

  if ( !a1->m128i_i16[0] )
  {
    v5 = 0LL;
    goto LABEL_16;
  }
  v5 = *a1;
  result = (unsigned int)_mm_cvtsi128_si32(*a1);
  v10 = *a1;
  v6 = ((unsigned __int16)result >> 1) - 1;
  v11 = *a1;
  if ( (int)v6 < 0 )
  {
LABEL_16:
    v7 = 0LL;
    goto LABEL_10;
  }
  while ( *(_WORD *)(v11.m128i_i64[1] + 2 * v6) != 92 )
  {
    v6 = (unsigned int)(v6 - 1);
    if ( (int)v6 < 0 )
      goto LABEL_16;
  }
  if ( 2 * (_WORD)v6 )
  {
    v11.m128i_i16[1] = 2 * v6;
    v11.m128i_i16[0] = 2 * v6;
    v7 = v11;
  }
  else
  {
    v7 = 0LL;
  }
  v8 = v6 + 1;
  v9 = -2 * (_WORD)v8 + v10.m128i_i16[0] == 0;
  v10.m128i_i16[0] += -2 * v8;
  v10.m128i_i16[1] = v10.m128i_i16[0];
  result = a1->m128i_i64[1];
  if ( v9 )
  {
    v5 = 0LL;
  }
  else
  {
    v10.m128i_i64[1] = result + 2LL * v8;
    v5 = v10;
  }
LABEL_10:
  if ( a2 )
    *a2 = v7;
  if ( a3 )
    *a3 = v5;
  return result;
}
