/*
 * XREFs of ?vNextStyleEvent@STYLER@pathwide@@QEAAXXZ @ 0x1401090F4
 * Callers:
 *     ?bWiden@WIDENER@pathwide@@IEAAHXZ @ 0x140108D94 (-bWiden@WIDENER@pathwide@@IEAAHXZ.c)
 * Callees:
 *     ?ptfxFraction@pathwide@@YA?AU_POINTFIX@@U2@PEAVLINEDATA@1@AEAVEFLOAT@@2@Z @ 0x140108814 (-ptfxFraction@pathwide@@YA-AU_POINTFIX@@U2@PEAVLINEDATA@1@AEAVEFLOAT@@2@Z.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x140108968 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?vNextEvent@LINER@pathwide@@QEAAXXZ @ 0x14010959C (-vNextEvent@LINER@pathwide@@QEAAXXZ.c)
 *     ?efWorldLength@STYLER@pathwide@@IEAA?AVEFLOAT@@VEVECTORFX@@@Z @ 0x14010C030 (-efWorldLength@STYLER@pathwide@@IEAA-AVEFLOAT@@VEVECTORFX@@@Z.c)
 */

void __fastcall pathwide::STYLER::vNextStyleEvent(pathwide::STYLER *this)
{
  unsigned int *v1; // r14
  int v3; // eax
  _DWORD *v4; // rdi
  float *v5; // rsi
  float v6; // xmm0_4
  _DWORD *v7; // r15
  __int64 v8; // r8
  int v9; // xmm0_4
  unsigned int v10; // eax
  struct EFLOAT *v11; // rbp
  struct pathwide::LINEDATA *v12; // r15
  float v13; // xmm0_4
  __int64 v14; // r8
  int v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  BOOL IsZero; // eax
  __int64 v19; // rdx
  float *v20; // r9
  float *v21; // r11
  int v22; // r8d
  float v23; // r10d
  float *v24; // rcx
  float v25; // xmm3_4
  float v26; // xmm4_4
  float v27; // xmm2_4
  __m128i v28; // xmm0
  __int64 v29; // r9
  __m128i v30; // xmm1
  int v31; // edi
  unsigned int v32; // r11d
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // r11d
  unsigned int v36; // ecx
  __int64 v37; // rax
  __int64 v38; // rax
  int *v39; // rax
  int v40; // xmm0_4
  float v41; // xmm1_4
  int *v42; // rax
  int v43; // xmm0_4
  int *v44; // rcx
  int v45; // xmm0_4
  __int64 v46; // r8
  int v47; // xmm0_4
  __int64 v48; // rax
  __int64 v49; // [rsp+40h] [rbp+8h] BYREF

  v1 = (unsigned int *)((char *)this + 40);
  v3 = *((_DWORD *)this + 10);
  if ( (v3 & 2) == 0 )
  {
    pathwide::LINER::vNextEvent(this);
    return;
  }
  v4 = (_DWORD *)((char *)this + 688);
  v5 = (float *)((char *)this + 744);
  if ( (v3 & 4) == 0 )
  {
    v7 = (_DWORD *)((char *)this + 40);
LABEL_7:
    pathwide::LINER::vNextEvent(this);
    if ( *v4 )
    {
      if ( (unsigned int)(*v4 - 3) > 1 )
      {
        v10 = *v7 & 0xFFFFFFFB;
      }
      else
      {
        v8 = *((_QWORD *)this + 89);
        *((_DWORD *)this + 188) = FP_0_0;
        v9 = *(_DWORD *)pathwide::STYLER::efWorldLength(this, &v49, *(_QWORD *)(v8 + 40));
        *((_QWORD *)this + 95) = *(_QWORD *)((char *)this + 692);
        v10 = *v7 | 4;
        *((_DWORD *)this + 189) = v9;
        *(_DWORD *)v5 = v9;
      }
      *v1 = v10;
    }
    else
    {
      v44 = (int *)*((_QWORD *)this + 90);
      *((_QWORD *)this + 91) = v44;
      v45 = *v44;
      *((_QWORD *)this + 91) = v44 + 1;
      if ( (unsigned __int64)(v44 + 1) >= *((_QWORD *)this + 92) )
        *((_QWORD *)this + 91) = v44;
      v46 = *((_QWORD *)this + 89);
      *((_DWORD *)this + 187) = v45;
      *((_DWORD *)this + 188) = FP_0_0;
      v47 = *(_DWORD *)pathwide::STYLER::efWorldLength(this, &v49, *(_QWORD *)(v46 + 40));
      v48 = *(_QWORD *)((char *)this + 692);
      *v7 |= 4u;
      *((_QWORD *)this + 95) = v48;
      *((_DWORD *)this + 189) = v47;
      *(_DWORD *)v5 = v47;
    }
    return;
  }
  if ( *v4 == 5 )
  {
    v11 = (pathwide::STYLER *)((char *)this + 756);
    v12 = (pathwide::STYLER *)((char *)this + 752);
    while ( 1 )
    {
      v13 = *((float *)this + 187);
      if ( v13 < *v5 )
        break;
      *((float *)this + 187) = v13 - *v5;
      pathwide::LINER::vNextEvent(this);
      if ( (unsigned int)(*v4 - 3) > 1 )
      {
        if ( *v4 == 1 )
          pathwide::LINER::vNextEvent(this);
        *v1 &= ~4u;
        *v4 = 8;
        return;
      }
      v14 = *((_QWORD *)this + 89);
      *((_DWORD *)this + 188) = FP_0_0;
      v15 = *(_DWORD *)pathwide::STYLER::efWorldLength(this, &v49, *(_QWORD *)(v14 + 40));
      *((_QWORD *)this + 95) = *(_QWORD *)((char *)this + 692);
      *(_DWORD *)v11 = v15;
      *(_DWORD *)v5 = v15;
    }
    v41 = *((float *)this + 187);
    *v5 = *v5 - v41;
    *(float *)v12 = v41 + *(float *)v12;
    *(struct _POINTFIX *)((char *)this + 692) = pathwide::ptfxFraction(
                                                  *((pathwide **)this + 95),
                                                  *(struct _POINTFIX *)((char *)this + 712),
                                                  v12,
                                                  v11);
    v42 = (int *)*((_QWORD *)this + 91);
    v43 = *v42++;
    *((_QWORD *)this + 91) = v42;
    if ( (unsigned __int64)v42 >= *((_QWORD *)this + 92) )
      *((_QWORD *)this + 91) = *((_QWORD *)this + 90);
    *((_DWORD *)this + 187) = v43;
    *v4 = 6;
  }
  else
  {
    v6 = *((float *)this + 187);
    if ( v6 > *v5 )
    {
      v7 = (_DWORD *)((char *)this + 40);
      *((float *)this + 187) = v6 - *v5;
      goto LABEL_7;
    }
    v16 = *((float *)this + 187);
    *v5 = *v5 - v16;
    v17 = v16 + *((float *)this + 188);
    LODWORD(v49) = *((_DWORD *)this + 187);
    *((float *)this + 188) = v17;
    IsZero = EFLOAT::bIsZero((pathwide::STYLER *)((char *)this + 756));
    v22 = 0;
    if ( !IsZero )
    {
      v23 = *v20;
      v24 = v20 + 20;
      if ( (*(_DWORD *)v20 & 0x10) == 0 )
      {
        v25 = (float)*((int *)v20 + 10);
        v26 = (float)*((int *)v20 + 11);
        *v24 = v25;
        v20[21] = v26;
        v27 = FP_1_0 / *v21;
        *(_DWORD *)v20 = LODWORD(v23) | 0x10;
        v20[21] = v27 * v26;
        *v24 = v27 * v25;
      }
      v28 = (__m128i)*((unsigned int *)this + 188);
      v30 = v28;
      *(float *)v28.m128i_i32 = *(float *)v28.m128i_i32 * *v24;
      LODWORD(v29) = 0;
      *(float *)v30.m128i_i32 = *(float *)v30.m128i_i32 * v24[1];
      v31 = _mm_cvtsi128_si32(v28);
      v32 = (unsigned __int8)(v31 >> 23);
      if ( v32 <= 0x9E )
      {
        v33 = v31 & 0x7FFFFFLL | 0x800000;
        v34 = v32 < 0x76 ? v33 >> (118 - (unsigned __int8)v32) : v33 << ((unsigned __int8)v32 - 118);
        v29 = (v34 + 0x80000000LL) >> 32;
        if ( v31 < 0 )
          LODWORD(v29) = -(int)v29;
      }
      v35 = _mm_cvtsi128_si32(v30);
      v36 = (unsigned __int8)(v35 >> 23);
      if ( v36 <= 0x9E )
      {
        v37 = v35 & 0x7FFFFFLL | 0x800000;
        v38 = v36 < 0x76 ? v37 >> (118 - (unsigned __int8)v36) : v37 << ((unsigned __int8)v36 - 118);
        v22 = (unsigned __int64)(v38 + 0x80000000LL) >> 32;
        if ( v35 < 0 )
          v22 = -v22;
      }
      HIDWORD(v49) = v22 + HIDWORD(v19);
      LODWORD(v49) = v19 + v29;
      v19 = v49;
    }
    *((_QWORD *)this + 88) = *((_QWORD *)this + 89);
    v39 = (int *)*((_QWORD *)this + 91);
    *(_QWORD *)((char *)this + 692) = v19;
    v40 = *v39++;
    *((_QWORD *)this + 91) = v39;
    if ( (unsigned __int64)v39 >= *((_QWORD *)this + 92) )
      *((_QWORD *)this + 91) = *((_QWORD *)this + 90);
    *((_DWORD *)this + 187) = v40;
    *((_DWORD *)this + 172) = 5;
  }
}
