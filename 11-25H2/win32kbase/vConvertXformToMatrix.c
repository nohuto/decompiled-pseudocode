/*
 * XREFs of vConvertXformToMatrix @ 0x140098460
 * Callers:
 *     GreExtCreateRegion @ 0x140096D00 (GreExtCreateRegion.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1400985F8 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?bIs1@EFLOAT@@QEBAHXZ @ 0x140098618 (-bIs1@EFLOAT@@QEBAHXZ.c)
 */

__int64 __fastcall vConvertXformToMatrix(_DWORD *a1, _DWORD *a2)
{
  EFLOAT *v2; // r11
  _DWORD *v3; // r8
  __m128i v4; // xmm1
  __m128i v5; // xmm0
  int v6; // r10d
  unsigned int v7; // r9d
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // ecx
  int v12; // r9d
  unsigned int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // ecx
  bool v18; // zf
  __int64 result; // rax
  __int64 v20; // r8
  int v21; // edx
  EFLOAT *v22; // r8
  __int64 v23; // r8
  int v24; // edx
  __int64 v25; // r8

  v2 = (EFLOAT *)(a2 + 5);
  *a2 = *a1;
  v3 = a2;
  a2[1] = a1[1];
  a2[2] = a1[2];
  a2[3] = a1[3];
  v4 = (__m128i)(unsigned int)a1[4];
  a2[4] = v4.m128i_i32[0];
  v5 = (__m128i)(unsigned int)a1[5];
  v6 = _mm_cvtsi128_si32(v4);
  a2[5] = v5.m128i_i32[0];
  v7 = (unsigned __int8)(v6 >> 23);
  if ( v7 > 0x9E )
  {
    v11 = 0;
  }
  else
  {
    v8 = v6 & 0x7FFFFF | 0x800000LL;
    if ( v7 < 0x76 )
      v9 = v8 >> (118 - (unsigned __int8)v7);
    else
      v9 = v8 << ((unsigned __int8)v7 - 118);
    v10 = (v9 + 0x80000000LL) >> 32;
    v11 = -(int)v10;
    if ( v6 >= 0 )
      v11 = v10;
  }
  v12 = _mm_cvtsi128_si32(v5);
  a2[6] = v11;
  v13 = (unsigned __int8)(v12 >> 23);
  if ( v13 > 0x9E )
  {
    v17 = 0;
  }
  else
  {
    v14 = v12 & 0x7FFFFF | 0x800000LL;
    if ( v13 < 0x76 )
      v15 = v14 >> (118 - (unsigned __int8)v13);
    else
      v15 = v14 << ((unsigned __int8)v13 - 118);
    v16 = (v15 + 0x80000000LL) >> 32;
    v17 = -(int)v16;
    if ( v12 >= 0 )
      v17 = v16;
  }
  a2[7] = v17;
  v18 = *(float *)v4.m128i_i32 == *(float *)v2;
  a2[8] = 32;
  if ( v18 && (unsigned int)EFLOAT::bIsZero(v2) )
    v3[8] = 96;
  result = EFLOAT::bIsZero((EFLOAT *)(v3 + 1));
  if ( (_DWORD)result )
  {
    result = EFLOAT::bIsZero((EFLOAT *)(v20 + 8));
    if ( (_DWORD)result )
    {
      *((_DWORD *)v22 + 8) = v21 | 1;
      result = EFLOAT::bIs1(v22);
      if ( (_DWORD)result )
      {
        result = EFLOAT::bIs1((EFLOAT *)(v23 + 12));
        if ( (_DWORD)result )
          *(_DWORD *)(v25 + 32) = v24 | 2;
      }
    }
  }
  return result;
}
