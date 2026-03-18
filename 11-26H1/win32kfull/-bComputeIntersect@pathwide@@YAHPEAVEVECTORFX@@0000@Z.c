/*
 * XREFs of ?bComputeIntersect@pathwide@@YAHPEAVEVECTORFX@@0000@Z @ 0x14010851C
 * Callers:
 *     ?vAddJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x140108988 (-vAddJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall pathwide::bComputeIntersect(
        pathwide *this,
        struct EVECTORFX *a2,
        struct EVECTORFX *a3,
        struct EVECTORFX *a4,
        struct EVECTORFX *a5)
{
  int v5; // r10d
  int v6; // r11d
  float v7; // xmm5_4
  float v8; // xmm6_4
  float v9; // xmm1_4
  float v10; // xmm2_4
  __m128i v11; // xmm3
  float v12; // xmm4_4
  __m128i v13; // xmm0
  int v14; // r9d
  unsigned int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // r9d
  unsigned int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx

  v5 = *((_DWORD *)this + 1);
  v6 = *(_DWORD *)this;
  v11 = 0LL;
  v7 = (float)*((int *)a2 + 1);
  v8 = (float)*(int *)a2;
  v9 = (float)-*((_DWORD *)a4 + 1);
  v10 = (float)*(int *)a4;
  *(float *)v11.m128i_i32 = (float)((float)(*((_DWORD *)a3 + 1) - v5) * v10)
                          + (float)((float)(*(_DWORD *)a3 - *(_DWORD *)this) * v9);
  v12 = (float)(v8 * v9) + (float)(v7 * v10);
  if ( v12 == 0.0 )
    return 0LL;
  *(float *)v11.m128i_i32 = *(float *)v11.m128i_i32 / v12;
  v13 = v11;
  *(float *)v11.m128i_i32 = *(float *)v11.m128i_i32 * v8;
  *(float *)v13.m128i_i32 = *(float *)v13.m128i_i32 * v7;
  v14 = _mm_cvtsi128_si32(v11);
  v15 = (unsigned __int8)(v14 >> 23);
  if ( v15 > 0x9E )
    return 0LL;
  v16 = v14 & 0x7FFFFF | 0x800000LL;
  if ( v15 < 0x76 )
    v17 = v16 >> (118 - (unsigned __int8)v15);
  else
    v17 = v16 << ((unsigned __int8)v15 - 118);
  v18 = (v17 + 0x80000000LL) >> 32;
  if ( v14 < 0 )
    LODWORD(v18) = -(int)v18;
  v19 = _mm_cvtsi128_si32(v13);
  v20 = (unsigned __int8)(v19 >> 23);
  if ( v20 > 0x9E )
    return 0LL;
  v21 = v19 & 0x7FFFFF | 0x800000LL;
  v22 = v20 < 0x76 ? v21 >> (118 - (unsigned __int8)v20) : v21 << ((unsigned __int8)v20 - 118);
  v23 = (v22 + 0x80000000LL) >> 32;
  if ( v19 < 0 )
    LODWORD(v23) = -(int)v23;
  if ( (unsigned int)(v18 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  if ( (unsigned int)(v23 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  *(_DWORD *)a5 = v6 + v18;
  *((_DWORD *)a5 + 1) = v5 + v23;
  return v6 + (int)v18 < 0x3FFFFFFF
      && v6 + (int)v18 > -1073741824
      && (unsigned int)(v5 + v23 + 0x3FFFFFFF) <= 0x7FFFFFFD;
}
