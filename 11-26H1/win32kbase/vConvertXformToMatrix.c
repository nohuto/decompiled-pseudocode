/*
 * XREFs of vConvertXformToMatrix @ 0x140038CB0
 * Callers:
 *     GreExtCreateRegion @ 0x140011690 (GreExtCreateRegion.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x140038E54 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?bIs1@EFLOAT@@QEBAHXZ @ 0x140038E74 (-bIs1@EFLOAT@@QEBAHXZ.c)
 */

__int64 __fastcall vConvertXformToMatrix(float *a1, float *a2)
{
  EFLOAT *v2; // r10
  float *v3; // r8
  __m128i v4; // xmm0
  int v5; // r11d
  unsigned int v6; // r9d
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // ecx
  int v11; // r9d
  unsigned int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // ecx
  bool v17; // zf
  __int64 result; // rax
  __int64 v19; // r8
  int v20; // edx
  EFLOAT *v21; // r8
  __int64 v22; // r8
  int v23; // edx
  __int64 v24; // r8

  v2 = (EFLOAT *)(a2 + 5);
  *a2 = *a1;
  v3 = a2;
  a2[1] = a1[1];
  a2[2] = a1[2];
  a2[3] = a1[3];
  v4 = (__m128i)*((unsigned int *)a1 + 4);
  a2[4] = *(float *)v4.m128i_i32;
  a2[5] = a1[5];
  v5 = _mm_cvtsi128_si32(v4);
  v6 = (unsigned __int8)(v5 >> 23);
  if ( v6 > 0x9E )
  {
    v10 = 0;
  }
  else
  {
    v7 = v5 & 0x7FFFFF | 0x800000LL;
    if ( v6 < 0x76 )
      v8 = v7 >> (118 - (unsigned __int8)v6);
    else
      v8 = v7 << ((unsigned __int8)v6 - 118);
    v9 = (v8 + 0x80000000LL) >> 32;
    v10 = -(int)v9;
    if ( v5 >= 0 )
      v10 = v9;
  }
  *((_DWORD *)a2 + 6) = v10;
  v11 = *(_DWORD *)v2;
  v12 = (unsigned __int8)(*(int *)v2 >> 23);
  if ( v12 > 0x9E )
  {
    v16 = 0;
  }
  else
  {
    v13 = v11 & 0x7FFFFF | 0x800000LL;
    if ( v12 < 0x76 )
      v14 = v13 >> (118 - (unsigned __int8)v12);
    else
      v14 = v13 << ((unsigned __int8)v12 - 118);
    v15 = (v14 + 0x80000000LL) >> 32;
    v16 = -(int)v15;
    if ( v11 >= 0 )
      v16 = v15;
  }
  *((_DWORD *)a2 + 7) = v16;
  v17 = a2[4] == *(float *)v2;
  *((_DWORD *)a2 + 8) = 32;
  if ( v17 && (unsigned int)EFLOAT::bIsZero(v2) )
    *((_DWORD *)v3 + 8) = 96;
  result = EFLOAT::bIsZero((EFLOAT *)(v3 + 1));
  if ( (_DWORD)result )
  {
    result = EFLOAT::bIsZero((EFLOAT *)(v19 + 8));
    if ( (_DWORD)result )
    {
      *((_DWORD *)v21 + 8) = v20 | 1;
      result = EFLOAT::bIs1(v21);
      if ( (_DWORD)result )
      {
        result = EFLOAT::bIs1((EFLOAT *)(v22 + 12));
        if ( (_DWORD)result )
          *(_DWORD *)(v24 + 32) = v23 | 2;
      }
    }
  }
  return result;
}
