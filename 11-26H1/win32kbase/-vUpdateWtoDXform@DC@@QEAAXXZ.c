/*
 * XREFs of ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x140039A40
 * Callers:
 *     ?InitXform@DC@@QEAAPEAUMATRIX@@K@Z @ 0x140039390 (-InitXform@DC@@QEAAPEAUMATRIX@@K@Z.c)
 *     ?QuickInitXform@DC@@QEAA?AVEXFORMOBJ@@K@Z @ 0x140039640 (-QuickInitXform@DC@@QEAA-AVEXFORMOBJ@@K@Z.c)
 *     GreIntersectClipRect @ 0x14003F300 (GreIntersectClipRect.c)
 * Callees:
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1400388B4 (-vMakeIso@DC@@QEAAXXZ.c)
 *     ?bIs16@EFLOAT@@QEBAHXZ @ 0x140038C88 (-bIs16@EFLOAT@@QEBAHXZ.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x140038E54 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x140038EBC (bFToL.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x140039928 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 */

void __fastcall DC::vUpdateWtoDXform(DC *this)
{
  __int64 v1; // r8
  __m128 *v2; // rbx
  int v4; // r12d
  int v5; // eax
  __int64 v6; // rax
  __m128 *v7; // rsi
  __int32 *v8; // rbp
  __int64 v9; // rcx
  __int32 *v10; // r14
  int v11; // eax
  __int64 v12; // rcx
  float v13; // xmm0_4
  __int64 v14; // rcx
  int v15; // eax
  __m128 *v16; // rcx
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  DC *v21; // rcx
  __int64 v22; // r8
  __m128i v23; // xmm2
  int v24; // r9d
  unsigned int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __m128i v29; // xmm0
  int v30; // r9d
  unsigned int v31; // edx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // r8d
  int v36; // r11d
  float v37; // xmm3_4
  __m128i v38; // xmm1
  __m128i v39; // xmm4
  int v40; // r9d
  unsigned int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  int v45; // edx
  unsigned int v46; // ecx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  int v50; // r10d
  float v51; // xmm0_4
  __int64 v52; // rcx
  float v53; // xmm0_4
  __int64 v54; // rax
  _DWORD *v55; // rcx
  unsigned __int64 v56; // r10
  unsigned int v57; // r8d
  float *v58; // rcx
  int v59; // edx
  int v60; // r8d
  float v61; // xmm1_4
  __int64 v62; // rcx
  float v63; // xmm1_4
  __int64 v64; // rdx
  int v65; // eax
  unsigned int v66; // eax
  __int64 v67; // rdx
  int v68; // ecx
  unsigned int v69; // ecx
  __int64 v70; // rax
  float v71; // xmm0_4
  __int64 v72; // rcx
  float v73; // xmm0_4
  unsigned int v74; // r8d
  float v75; // xmm3_4
  float v76; // xmm4_4
  float v77; // xmm0_4
  __int64 v78; // rcx
  float v79; // xmm0_4

  v1 = *((_QWORD *)this + 122);
  v2 = (__m128 *)((char *)this + 320);
  v4 = 11;
  v5 = *(_DWORD *)(v1 + 340);
  if ( (v5 & 0xE000) != 0 )
  {
    if ( (v5 & 0x4000) != 0 )
    {
      if ( *(_DWORD *)(v1 + 104) == 7 )
        DC::vMakeIso(this);
      v58 = (float *)*((_QWORD *)this + 122);
      v59 = *((_DWORD *)v58 + 83);
      v60 = *((_DWORD *)v58 + 79);
      if ( v60 == v59 && *((_DWORD *)v58 + 80) == *((_DWORD *)v58 + 84) )
      {
        v58[98] = 16.0;
        v70 = *((_QWORD *)this + 122);
        *((_DWORD *)this + 107) = _xmm;
        *(_DWORD *)(v70 + 396) = 1098907648;
        *((_DWORD *)this + 108) = _xmm;
        v2[2].m128_i32[0] = 11;
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x1000u;
      }
      else
      {
        v61 = (float)(16 * v59) / (float)v60;
        v58[98] = v61;
        v62 = *((_QWORD *)this + 122);
        *((float *)this + 107) = v61;
        v63 = (float)(16 * *(_DWORD *)(v62 + 336)) / (float)*(int *)(v62 + 320);
        *(float *)(v62 + 396) = v63;
        *((float *)this + 108) = v63;
        v2[2].m128_i32[0] = 9;
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFE7FF;
      }
      v64 = *((_QWORD *)this + 122);
      v65 = *(_DWORD *)(v64 + 340);
      if ( *((float *)this + 107) < 0.0 )
        v66 = v65 | 0x100;
      else
        v66 = v65 & 0xFFFFFEFF;
      *(_DWORD *)(v64 + 340) = v66;
      v67 = *((_QWORD *)this + 122);
      v68 = *(_DWORD *)(v67 + 340);
      if ( *((float *)this + 108) < 0.0 )
        v69 = v68 | 0x200;
      else
        v69 = v68 & 0xFFFFFDFF;
      *(_DWORD *)(v67 + 340) = v69;
    }
    v6 = *((_QWORD *)this + 122);
    if ( !*(_DWORD *)(v6 + 308) && !*(_DWORD *)(v6 + 312) )
    {
      v17 = *(_DWORD *)(v6 + 324);
      if ( v17 || *(_DWORD *)(v6 + 328) )
      {
        v8 = (__int32 *)((char *)this + 436);
        v10 = (__int32 *)((char *)this + 440);
        v7 = v2 + 2;
        v51 = (float)(16 * v17);
        *(float *)(v6 + 400) = v51;
        v52 = *((_QWORD *)this + 122);
        *((float *)this + 109) = v51;
        v53 = (float)(16 * *(_DWORD *)(v52 + 328));
        *(float *)(v52 + 404) = v53;
        v54 = *((_QWORD *)this + 122);
        *((float *)this + 110) = v53;
        v2[1].m128_i32[2] = 16 * *(_DWORD *)(v54 + 324);
        LODWORD(v52) = *(_DWORD *)(*((_QWORD *)this + 122) + 328LL);
        v2[2].m128_i32[0] &= ~0x40u;
        v2[1].m128_i32[3] = 16 * v52;
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= ~0x800u;
      }
      else
      {
        *(_DWORD *)(v6 + 400) = 0;
        v8 = (__int32 *)((char *)this + 436);
        v18 = *((_QWORD *)this + 122);
        v10 = (__int32 *)((char *)this + 440);
        v7 = v2 + 2;
        *((_DWORD *)this + 109) = 0;
        *(_DWORD *)(v18 + 404) = 0;
        *((_DWORD *)this + 110) = 0;
        v2[2].m128_i32[0] |= 0x40u;
        v2[1].m128_u64[1] = 0LL;
        v19 = *((_QWORD *)this + 122);
        v20 = *(_DWORD *)(v19 + 340);
        if ( (v20 & 0x1000) != 0 )
          *(_DWORD *)(v19 + 340) = v20 | 0x800;
      }
LABEL_8:
      if ( (*(_DWORD *)(*((_QWORD *)this + 122) + 340LL) & 2) != 0 )
      {
        v15 = *((_DWORD *)this + 130);
        if ( (v15 & 1) == 0 || (v15 & 2) != 0 )
        {
          v2->m128_i32[0] = *((_DWORD *)this + 107);
          v2->m128_i32[3] = *((_DWORD *)this + 108);
          *(unsigned __int64 *)((char *)v2->m128_u64 + 4) = 0LL;
          v2[1].m128_i32[0] = *v8;
          v2[1].m128_i32[1] = *v10;
          if ( (*(_DWORD *)(*((_QWORD *)this + 122) + 340LL) & 0x800) != 0 )
            v7->m128_i32[0] = 75;
          else
            v7->m128_i32[0] = (*(_DWORD *)(*((_QWORD *)this + 122) + 340LL) & 0x1000 | 0x4800u) >> 11;
LABEL_12:
          *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFF1FFF;
LABEL_13:
          v16 = (__m128 *)*((_QWORD *)this + 122);
          v16[2] = *v2;
          v16[3] = v2[1];
          v16[4].m128_i32[0] = v2[2].m128_i32[0];
          return;
        }
      }
      goto LABEL_21;
    }
    *(_DWORD *)(v6 + 340) &= ~0x800u;
    v7 = v2 + 2;
    v2[2].m128_i32[0] &= ~0x40u;
    v8 = (__int32 *)((char *)this + 436);
    v9 = *((_QWORD *)this + 122);
    v10 = (__int32 *)((char *)this + 440);
    v11 = -*(_DWORD *)(v9 + 308);
    if ( (*(_DWORD *)(v9 + 340) & 0x1000) != 0 )
    {
      *(float *)(v9 + 400) = (float)(-16 * *(_DWORD *)(v9 + 308));
      v12 = *((_QWORD *)this + 122);
      *(float *)v8 = (float)(16 * v11);
      v13 = (float)(-16 * *(_DWORD *)(v12 + 312));
      *(float *)(v12 + 404) = v13;
      v14 = *((_QWORD *)this + 122);
      *(float *)v10 = v13;
      if ( !*(_DWORD *)(v14 + 324) && !*(_DWORD *)(v14 + 328) )
      {
        v2[1].m128_i32[2] = -16 * *(_DWORD *)(v14 + 308);
        v2[1].m128_i32[3] = -16 * *(_DWORD *)(*((_QWORD *)this + 122) + 312LL);
        goto LABEL_8;
      }
    }
    else
    {
      v71 = (float)v11 * *((float *)this + 107);
      *(float *)(v9 + 400) = v71;
      v72 = *((_QWORD *)this + 122);
      *(float *)v8 = v71;
      v73 = (float)-*(_DWORD *)(v72 + 312) * *((float *)this + 108);
      *(float *)(v72 + 404) = v73;
      v14 = *((_QWORD *)this + 122);
      *(float *)v10 = v73;
      if ( !*(_DWORD *)(v14 + 324) && !*(_DWORD *)(v14 + 328) )
        goto LABEL_79;
    }
    v77 = (float)(16 * *(_DWORD *)(v14 + 324)) + *(float *)v8;
    *(float *)(v14 + 400) = v77;
    v78 = *((_QWORD *)this + 122);
    *(float *)v8 = v77;
    v79 = (float)(16 * *(_DWORD *)(v78 + 328)) + *(float *)v10;
    *(float *)(v78 + 404) = v79;
    *(float *)v10 = v79;
LABEL_79:
    bFToL(COERCE_DOUBLE((unsigned __int64)*v8), &v2[1].m128_i32[2], 6u);
    bFToL(COERCE_DOUBLE((unsigned __int64)*v10), &v2[1].m128_i32[3], v74);
    goto LABEL_8;
  }
  if ( (v5 & 2) != 0 && !(unsigned int)DC::bDpiScaleTransform(this) )
  {
    v2->m128_i32[0] = v55[107];
    v2->m128_i32[3] = v55[108];
    *(unsigned __int64 *)((char *)v2->m128_u64 + 4) = v56;
    v2[1].m128_i32[0] = v55[109];
    v2[1].m128_i32[1] = v55[110];
    bFToL(COERCE_DOUBLE((unsigned __int64)v55[109]), &v2[1].m128_i32[2], 6u);
    bFToL(COERCE_DOUBLE((unsigned __int64)*((_DWORD *)this + 110)), &v2[1].m128_i32[3], v57);
    if ( (*(_DWORD *)(*((_QWORD *)this + 122) + 340LL) & 0x800) != 0 )
      v2[2].m128_i32[0] = 75;
    else
      v2[2].m128_i32[0] = (*(_DWORD *)(*((_QWORD *)this + 122) + 340LL) & 0x1000 | 0x4800u) >> 11;
    goto LABEL_12;
  }
LABEL_21:
  if ( (unsigned int)DC::bDpiScaleTransform(this) )
    *(_DWORD *)(v22 + 340) &= 0xFFFFE7FF;
  if ( (*(_DWORD *)(*((_QWORD *)this + 122) + 340LL) & 0x1000) != 0 )
  {
    *v2 = *(__m128 *)((char *)this + 392);
    v2[1] = *(__m128 *)((char *)this + 408);
    *v2 = _mm_mul_ps(*v2, (__m128)_xmm);
    v23 = (__m128i)v2[1].m128_u32[0];
    *(float *)v23.m128i_i32 = *(float *)v23.m128i_i32 * 16.0;
    v2[1].m128_i32[0] = v23.m128i_i32[0];
    v2[1].m128_f32[1] = v2[1].m128_f32[1] * 16.0;
  }
  else
  {
    v75 = *((float *)this + 107);
    if ( (unsigned int)DC::bDpiScaleTransform(v21) )
    {
      v75 = v75 * *((float *)this + 131);
      v76 = v76 * *((float *)this + 132);
    }
    v2->m128_f32[0] = v75 * *((float *)this + 98);
    v2->m128_f32[2] = v75 * *((float *)this + 100);
    v2->m128_f32[1] = v76 * *((float *)this + 99);
    v2->m128_f32[3] = v76 * *((float *)this + 101);
    v23 = (__m128i)*((unsigned int *)this + 107);
    *(float *)v23.m128i_i32 = *(float *)v23.m128i_i32 * *((float *)this + 102);
    v2[1].m128_i32[0] = v23.m128i_i32[0];
    v2[1].m128_f32[1] = *((float *)this + 108) * *((float *)this + 103);
  }
  *(float *)v23.m128i_i32 = *(float *)v23.m128i_i32 + *((float *)this + 109);
  v24 = _mm_cvtsi128_si32(v23);
  v2[1].m128_i32[0] = v23.m128i_i32[0];
  v25 = (unsigned __int8)(v24 >> 23);
  if ( v25 <= 0x9E )
  {
    v26 = v24 & 0x7FFFFFLL | 0x800000;
    if ( v25 < 0x76 )
      v27 = v26 >> (118 - (unsigned __int8)v25);
    else
      v27 = v26 << ((unsigned __int8)v25 - 118);
    v28 = (v27 + 0x80000000LL) >> 32;
    if ( v24 < 0 )
      LODWORD(v28) = -(int)v28;
    v2[1].m128_i32[2] = v28;
  }
  v29 = (__m128i)*((unsigned int *)this + 110);
  *(float *)v29.m128i_i32 = *(float *)v29.m128i_i32 + v2[1].m128_f32[1];
  v30 = _mm_cvtsi128_si32(v29);
  v2[1].m128_i32[1] = v29.m128i_i32[0];
  v31 = (unsigned __int8)(v30 >> 23);
  if ( v31 <= 0x9E )
  {
    v32 = v30 & 0x7FFFFFLL | 0x800000;
    if ( v31 < 0x76 )
      v33 = v32 >> (118 - (unsigned __int8)v31);
    else
      v33 = v32 << ((unsigned __int8)v31 - 118);
    v34 = (v33 + 0x80000000LL) >> 32;
    if ( v30 < 0 )
      LODWORD(v34) = -(int)v34;
    v2[1].m128_i32[3] = v34;
  }
  if ( (unsigned int)DC::bDpiScaleTransform(this) )
  {
    v37 = *((float *)this + 131) * *(float *)v23.m128i_i32;
    v2[1].m128_f32[0] = v37;
    v39 = (__m128i)*((unsigned int *)this + 132);
    *(float *)v39.m128i_i32 = *(float *)v39.m128i_i32 * *(float *)v29.m128i_i32;
    v2[1].m128_i32[1] = v39.m128i_i32[0];
    v38 = (__m128i)COERCE_UNSIGNED_INT((float)*((int *)this + 2 * (*((_DWORD *)this + 10) & 1) + 254));
    *(float *)v39.m128i_i32 = *(float *)v39.m128i_i32
                            + (float)((float)((float)((float)*((int *)this + 2 * (*((_DWORD *)this + 10) & 1) + 255)
                                                    * *((float *)this + 132))
                                            - (float)*((int *)this + 2 * (*((_DWORD *)this + 10) & 1) + 255))
                                    * 16.0);
    *(float *)v38.m128i_i32 = (float)((float)((float)(*(float *)v38.m128i_i32 * *((float *)this + 131))
                                            - (float)*((int *)this + 2 * (*((_DWORD *)this + 10) & 1) + 254))
                                    * 16.0)
                            + v37;
    v40 = _mm_cvtsi128_si32(v38);
    v2[1].m128_i32[0] = v38.m128i_i32[0];
    v2[1].m128_i32[1] = v39.m128i_i32[0];
    v41 = (unsigned __int8)(v40 >> 23);
    if ( v41 <= 0x9E )
    {
      v42 = v36 & (unsigned int)v40 | 0x800000LL;
      if ( v41 < v35 )
        v43 = v42 >> ((unsigned __int8)v35 - (unsigned __int8)v41);
      else
        v43 = v42 << ((unsigned __int8)v41 - 118);
      v44 = (v43 + 0x80000000LL) >> 32;
      if ( v40 < 0 )
        LODWORD(v44) = -(int)v44;
      v2[1].m128_i32[2] = v44;
    }
    v45 = _mm_cvtsi128_si32(v39);
    v46 = (unsigned __int8)(v45 >> 23);
    if ( v46 <= 0x9E )
    {
      v47 = v36 & (unsigned int)v45 | 0x800000LL;
      if ( v46 < v35 )
        v48 = v47 >> ((unsigned __int8)v35 - (unsigned __int8)v46);
      else
        v48 = v47 << ((unsigned __int8)v46 - 118);
      v49 = (v48 + 0x80000000LL) >> 32;
      if ( v45 < 0 )
        LODWORD(v49) = -(int)v49;
      v2[1].m128_i32[3] = v49;
    }
  }
  *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= ~0x10000u;
  if ( EFLOAT::bIsZero((EFLOAT *)&v2->m128_i16[2]) && EFLOAT::bIsZero((EFLOAT *)&v2->m128_u16[4]) )
  {
    if ( !EFLOAT::bIs16((EFLOAT *)v2) || !EFLOAT::bIs16((EFLOAT *)&v2->m128_u32[3]) )
      v4 = 9;
  }
  else
  {
    v4 = 8;
  }
  v2[2].m128_i32[0] = v4;
  if ( v2[1].m128_i32[2] == v50 && v2[1].m128_i32[3] == v50 )
    v2[2].m128_i32[0] = v4 | 0x40;
  *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFF1FFF;
  if ( !(unsigned int)DC::bDpiScaleTransform(this) )
    goto LABEL_13;
}
