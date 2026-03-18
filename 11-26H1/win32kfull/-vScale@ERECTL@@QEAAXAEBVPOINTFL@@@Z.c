/*
 * XREFs of ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1401AE128
 * Callers:
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1400757E8 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 * Callees:
 *     <none>
 */

void __fastcall ERECTL::vScale(ERECTL *this, const struct POINTFL *a2)
{
  float v2; // xmm0_4
  __m128i v4; // xmm2
  __m128i v5; // xmm4
  __m128i v6; // xmm0
  __m128i v7; // xmm3
  int v8; // r10d
  unsigned int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  bool v14; // sf
  int v15; // r10d
  unsigned int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  int v21; // r10d
  unsigned int v22; // r9d
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // r9d
  __int64 v26; // rcx
  int v27; // eax
  unsigned int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // ecx

  v2 = *((float *)a2 + 1);
  v4 = (__m128i)COERCE_UNSIGNED_INT((float)*((int *)this + 1));
  v5 = (__m128i)COERCE_UNSIGNED_INT((float)*((int *)this + 3));
  *(float *)v4.m128i_i32 = *(float *)v4.m128i_i32 * v2;
  *(float *)v5.m128i_i32 = *(float *)v5.m128i_i32 * v2;
  v6 = (__m128i)COERCE_UNSIGNED_INT((float)*(int *)this);
  v7 = (__m128i)COERCE_UNSIGNED_INT((float)*((int *)this + 2));
  *(float *)v6.m128i_i32 = *(float *)v6.m128i_i32 * *(float *)a2;
  *(float *)v7.m128i_i32 = *(float *)v7.m128i_i32 * *(float *)a2;
  v8 = _mm_cvtsi128_si32(v6);
  v9 = (unsigned __int8)(v8 >> 23);
  if ( v9 > 0x9E )
    goto LABEL_26;
  v10 = v8 & 0x7FFFFFLL | 0x800000;
  if ( v9 < 0x76 )
    v11 = v10 >> (118 - (unsigned __int8)v9);
  else
    v11 = v10 << ((unsigned __int8)v9 - 118);
  v12 = (v11 + 0x80000000LL) >> 32;
  v13 = -((unsigned __int64)(v11 + 0x80000000LL) >> 32);
  v14 = v8 < 0;
  v15 = _mm_cvtsi128_si32(v4);
  if ( !v14 )
    v13 = v12;
  *(_DWORD *)this = v13;
  v16 = (unsigned __int8)(v15 >> 23);
  if ( v16 > 0x9E )
    goto LABEL_26;
  v17 = v15 & 0x7FFFFFLL | 0x800000;
  if ( v16 < 0x76 )
    v18 = v17 >> (118 - (unsigned __int8)v16);
  else
    v18 = v17 << ((unsigned __int8)v16 - 118);
  v19 = (v18 + 0x80000000LL) >> 32;
  v20 = -((unsigned __int64)(v18 + 0x80000000LL) >> 32);
  v14 = v15 < 0;
  v21 = _mm_cvtsi128_si32(v7);
  if ( !v14 )
    v20 = v19;
  *((_DWORD *)this + 1) = v20;
  v22 = (unsigned __int8)(v21 >> 23);
  if ( v22 > 0x9E )
    goto LABEL_26;
  v23 = v21 & 0x7FFFFFLL | 0x800000;
  if ( v22 < 0x76 )
    v24 = v23 >> (118 - (unsigned __int8)v22);
  else
    v24 = v23 << ((unsigned __int8)v22 - 118);
  v25 = _mm_cvtsi128_si32(v5);
  v26 = (v24 + 0x80000000LL) >> 32;
  v27 = -((unsigned __int64)(v24 + 0x80000000LL) >> 32);
  if ( v21 >= 0 )
    v27 = v26;
  *((_DWORD *)this + 2) = v27;
  v28 = (unsigned __int8)(v25 >> 23);
  if ( v28 > 0x9E )
  {
LABEL_26:
    *(_QWORD *)((char *)this + 4) = 0LL;
    v32 = 0;
    *(_DWORD *)this = 0;
  }
  else
  {
    v29 = v25 & 0x7FFFFFLL | 0x800000;
    if ( v28 < 0x76 )
      v30 = v29 >> (118 - (unsigned __int8)v28);
    else
      v30 = v29 << ((unsigned __int8)v28 - 118);
    v31 = (v30 + 0x80000000LL) >> 32;
    v32 = -(int)v31;
    if ( v25 >= 0 )
      v32 = v31;
  }
  *((_DWORD *)this + 3) = v32;
}
