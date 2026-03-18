/*
 * XREFs of ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1400CA26C
 * Callers:
 *     ?bFoundForcedMatch@MAPPER@@QEAAHXZ @ 0x1400C74D0 (-bFoundForcedMatch@MAPPER@@QEAAHXZ.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1400C8780 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?bGetFaceName@MAPPER@@QEAAHXZ @ 0x1400CA000 (-bGetFaceName@MAPPER@@QEAAHXZ.c)
 * Callees:
 *     bFToL @ 0x140111E60 (bFToL.c)
 */

__int64 __fastcall MAPPER::bCalculateWishCell(MAPPER *this)
{
  int v2; // eax
  int v3; // r8d
  __int64 v4; // rcx
  int v5; // r8d
  __int64 result; // rax
  float v7; // xmm0_4
  BOOL v8; // ebp
  bool v9; // cf
  bool v10; // zf
  float v11; // xmm0_4
  int v12; // ebp
  BOOL v13; // r11d
  float v14; // xmm0_4
  int v15; // r11d
  BOOL v16; // r9d
  float v17; // xmm0_4
  int v18; // r9d
  int v19; // esi
  int v20; // eax
  int v21; // edi
  unsigned int v22; // r11d
  __int64 v23; // r8
  __m128i v24; // xmm0
  int v25; // r9d
  unsigned int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __m128i v31; // xmm0
  int v32; // r8d
  unsigned int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // [rsp+50h] [rbp+8h] BYREF

  v2 = lNormAngle(*(unsigned int *)(*((_QWORD *)this + 1) + 12LL));
  v3 = *((_DWORD *)this + 61);
  if ( (v3 & 0x20) != 0 )
    return 0LL;
  v4 = *(_QWORD *)this;
  if ( *(_BYTE *)(*(_QWORD *)this + 74LL) || *(_BYTE *)(v4 + 85) )
  {
    *((_DWORD *)this + 44) = v2;
    v5 = v3 | 0x1C;
    result = 1LL;
LABEL_4:
    *((_DWORD *)this + 61) = v5;
    return result;
  }
  v7 = *(float *)(v4 + 8);
  v8 = v7 > 0.0;
  v9 = v7 > 0.0;
  v10 = v7 == 0.0;
  v11 = *(float *)(v4 + 12);
  v12 = v8 - (!v9 && !v10);
  v13 = v11 > 0.0;
  v9 = v11 > 0.0;
  v10 = v11 == 0.0;
  v14 = *(float *)(v4 + 16);
  v15 = v13 - (!v9 && !v10);
  v16 = v14 > 0.0;
  v9 = v14 > 0.0;
  v10 = v14 == 0.0;
  v17 = *(float *)(v4 + 20);
  v18 = v16 - (!v9 && !v10);
  v19 = (__PAIR64__(v17 > 0.0, LODWORD(v17)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
  if ( *(_BYTE *)(v4 + 79) )
  {
    v18 = -v18;
    v19 = (__PAIR64__(v17 < 0.0, 0.0) - LODWORD(v17)) >> 32;
  }
  if ( (v3 & 0x81000) != 0 )
    goto LABEL_14;
  if ( v2 != 900 * (v2 / 900)
    || (v4 = (v18 + v15) | (v12 - v19) | ((unsigned __int8)v12 ^ (unsigned __int8)~(_BYTE)v15) & 1u) != 0 )
  {
    v5 = v3 | 0x20;
    result = 0LL;
    goto LABEL_4;
  }
  v20 = (v15 & 0x384) + (v18 & 0xA8C) + v2 + (v12 & 0x708);
  *((_DWORD *)this + 44) = v20;
  if ( v20 >= 3600 )
    *((_DWORD *)this + 44) = v20 - 3600;
  *((_DWORD *)this + 61) = v3 | 0x80000;
LABEL_14:
  v21 = *((_DWORD *)this + 61);
  v22 = 118;
  if ( (v21 & 8) == 0 )
  {
    LODWORD(v23) = 0;
    v24 = (__m128i)COERCE_UNSIGNED_INT((float)*((int *)this + 41));
    if ( v19 )
    {
      *(float *)v24.m128i_i32 = *(float *)v24.m128i_i32 * *(float *)(*(_QWORD *)this + 20LL);
      v25 = _mm_cvtsi128_si32(v24);
      v26 = (unsigned __int8)(v25 >> 23);
      if ( v26 <= 0x9E )
      {
        v27 = v25 & 0x7FFFFFLL | 0x800000;
        v28 = v26 < 0x76 ? v27 >> (118 - (unsigned __int8)v26) : v27 << ((unsigned __int8)v26 - 118);
        v23 = (v28 + 0x80000000LL) >> 32;
        if ( v25 < 0 )
          LODWORD(v23) = -(int)v23;
      }
    }
    else
    {
      v36 = 0;
      bFToL(v4, &v36, 0LL);
      LODWORD(v23) = v36;
    }
    *((_DWORD *)this + 41) = v23;
    if ( (int)v23 < 0 )
    {
      LODWORD(v23) = -(int)v23;
      *((_DWORD *)this + 41) = v23;
    }
    *((_DWORD *)this + 41) = ((int)v23 + 8) >> 4;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) && (v21 & 0x10) == 0 )
  {
    LODWORD(v29) = 0;
    v30 = *(_QWORD *)this;
    v31 = (__m128i)COERCE_UNSIGNED_INT((float)*((int *)this + 42));
    if ( v12 )
      *(float *)v31.m128i_i32 = *(float *)v31.m128i_i32 * *(float *)(v30 + 8);
    else
      *(float *)v31.m128i_i32 = *(float *)v31.m128i_i32 * *(float *)(v30 + 12);
    v32 = _mm_cvtsi128_si32(v31);
    v33 = (unsigned __int8)(v32 >> 23);
    if ( v33 <= 0x9E )
    {
      v34 = v32 & 0x7FFFFFLL | 0x800000;
      v35 = v33 < v22 ? v34 >> ((unsigned __int8)v22 - (unsigned __int8)v33) : v34 << ((unsigned __int8)v33 - 118);
      v29 = (v35 + 0x80000000LL) >> 32;
      if ( v32 < 0 )
        LODWORD(v29) = -(int)v29;
    }
    if ( (int)v29 < 0 )
      LODWORD(v29) = -(int)v29;
    *((_DWORD *)this + 42) = ((int)v29 + 8) >> 4;
  }
  result = 1LL;
  *((_DWORD *)this + 61) = v21 | 0x1C;
  return result;
}
