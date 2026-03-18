/*
 * XREFs of ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x14008F4E0
 * Callers:
 *     GreIntersectClipRect @ 0x140043770 (GreIntersectClipRect.c)
 *     ?InitXform@DC@@QEAAPEAUMATRIX@@K@Z @ 0x14008F050 (-InitXform@DC@@QEAAPEAUMATRIX@@K@Z.c)
 *     ?QuickInitXform@DC@@QEAA?AVEXFORMOBJ@@K@Z @ 0x14008F280 (-QuickInitXform@DC@@QEAA-AVEXFORMOBJ@@K@Z.c)
 * Callees:
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x140088FE8 (-vMakeIso@DC@@QEAAXXZ.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x14008FFF0 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     bFToL @ 0x1400910A4 (bFToL.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1400985F8 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?bIs16@EFLOAT@@QEBAHXZ @ 0x1400E4F44 (-bIs16@EFLOAT@@QEBAHXZ.c)
 */

void __fastcall DC::vUpdateWtoDXform(DC *this)
{
  __int64 v1; // r8
  char *v2; // rdi
  int v3; // r15d
  int v5; // eax
  __int64 v6; // rax
  unsigned int *v7; // rsi
  _DWORD *v8; // rbp
  __int64 v9; // rcx
  _DWORD *v10; // r14
  int v11; // eax
  __int64 v12; // rcx
  float v13; // xmm0_4
  __int64 v14; // rcx
  int v15; // xmm1_4
  __int64 v16; // rcx
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  DC *v21; // rcx
  __int64 v22; // r8
  EFLOAT *v23; // rbp
  EFLOAT *v24; // rsi
  float v25; // xmm2_4
  __int64 v26; // rcx
  __int64 v27; // r8
  float v28; // xmm2_4
  float v29; // xmm4_4
  float v30; // xmm1_4
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r8
  float v35; // xmm0_4
  __int64 v36; // rcx
  float v37; // xmm0_4
  __int64 v38; // rax
  _DWORD *v39; // rcx
  __int64 v40; // r10
  __int64 v41; // rcx
  __int64 v42; // r8
  float *v43; // rcx
  int v44; // r8d
  int v45; // edx
  float v46; // xmm1_4
  __int64 v47; // rcx
  float v48; // xmm1_4
  __int64 v49; // rdx
  int v50; // ecx
  unsigned int v51; // ecx
  __int64 v52; // rdx
  int v53; // ecx
  unsigned int v54; // ecx
  float v55; // xmm0_4
  __int64 v56; // rcx
  float v57; // xmm0_4
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rax
  float v62; // xmm3_4
  float v63; // xmm4_4
  float v64; // xmm0_4
  float v65; // xmm0_4

  v1 = *((_QWORD *)this + 122);
  v2 = (char *)this + 320;
  v3 = 11;
  v5 = *(_DWORD *)(v1 + 340);
  if ( (v5 & 0xE000) != 0 )
  {
    if ( (v5 & 0x4000) != 0 )
    {
      if ( *(_DWORD *)(v1 + 104) == 7 )
        DC::vMakeIso(this);
      v43 = (float *)*((_QWORD *)this + 122);
      v44 = *((_DWORD *)v43 + 79);
      v45 = *((_DWORD *)v43 + 83);
      if ( v44 == v45 && *((_DWORD *)v43 + 80) == *((_DWORD *)v43 + 84) )
      {
        v43[98] = 16.0;
        v61 = *((_QWORD *)this + 122);
        *((float *)this + 107) = FLOAT_16_0;
        *(_DWORD *)(v61 + 396) = 1098907648;
        *((float *)this + 108) = FLOAT_16_0;
        *((_DWORD *)v2 + 8) = 11;
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x1000u;
      }
      else
      {
        v46 = (float)(16 * v45) / (float)v44;
        v43[98] = v46;
        v47 = *((_QWORD *)this + 122);
        *((float *)this + 107) = v46;
        v48 = (float)(16 * *(_DWORD *)(v47 + 336)) / (float)*(int *)(v47 + 320);
        *(float *)(v47 + 396) = v48;
        *((float *)this + 108) = v48;
        *((_DWORD *)v2 + 8) = 9;
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFE7FF;
      }
      v49 = *((_QWORD *)this + 122);
      v50 = *(_DWORD *)(v49 + 340);
      if ( *((float *)this + 107) < 0.0 )
        v51 = v50 | 0x100;
      else
        v51 = v50 & 0xFFFFFEFF;
      *(_DWORD *)(v49 + 340) = v51;
      v52 = *((_QWORD *)this + 122);
      v53 = *(_DWORD *)(v52 + 340);
      if ( *((float *)this + 108) < 0.0 )
        v54 = v53 | 0x200;
      else
        v54 = v53 & 0xFFFFFDFF;
      *(_DWORD *)(v52 + 340) = v54;
    }
    v6 = *((_QWORD *)this + 122);
    if ( !*(_DWORD *)(v6 + 308) && !*(_DWORD *)(v6 + 312) )
    {
      v17 = *(_DWORD *)(v6 + 324);
      if ( v17 || *(_DWORD *)(v6 + 328) )
      {
        v8 = (_DWORD *)((char *)this + 436);
        v10 = (_DWORD *)((char *)this + 440);
        v7 = (unsigned int *)(v2 + 32);
        v35 = (float)(16 * v17);
        *(float *)(v6 + 400) = v35;
        v36 = *((_QWORD *)this + 122);
        *((float *)this + 109) = v35;
        v37 = (float)(16 * *(_DWORD *)(v36 + 328));
        *(float *)(v36 + 404) = v37;
        v38 = *((_QWORD *)this + 122);
        *((float *)this + 110) = v37;
        *((_DWORD *)v2 + 6) = 16 * *(_DWORD *)(v38 + 324);
        LODWORD(v36) = *(_DWORD *)(*((_QWORD *)this + 122) + 328LL);
        *((_DWORD *)v2 + 8) &= ~0x40u;
        *((_DWORD *)v2 + 7) = 16 * v36;
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= ~0x800u;
      }
      else
      {
        *(_DWORD *)(v6 + 400) = 0;
        v8 = (_DWORD *)((char *)this + 436);
        v18 = *((_QWORD *)this + 122);
        v10 = (_DWORD *)((char *)this + 440);
        v7 = (unsigned int *)(v2 + 32);
        *((_DWORD *)this + 109) = 0;
        *(_DWORD *)(v18 + 404) = 0;
        *((_DWORD *)this + 110) = 0;
        *((_QWORD *)v2 + 3) = 0LL;
        *((_DWORD *)v2 + 8) |= 0x40u;
        v19 = *((_QWORD *)this + 122);
        v20 = *(_DWORD *)(v19 + 340);
        if ( (v20 & 0x1000) != 0 )
          *(_DWORD *)(v19 + 340) = v20 | 0x800;
      }
LABEL_8:
      if ( (*(_DWORD *)(*((_QWORD *)this + 122) + 340LL) & 2) != 0 && !(unsigned int)DC::bDpiScaleTransform(this) )
      {
        *(_DWORD *)v2 = *((_DWORD *)this + 107);
        v15 = *((_DWORD *)this + 108);
        *(_QWORD *)(v2 + 4) = 0LL;
        *((_DWORD *)v2 + 3) = v15;
        *((_DWORD *)v2 + 4) = *v8;
        *((_DWORD *)v2 + 5) = *v10;
        if ( (*(_DWORD *)(*((_QWORD *)this + 122) + 340LL) & 0x800) != 0 )
          *v7 = 75;
        else
          *v7 = (*(_DWORD *)(*((_QWORD *)this + 122) + 340LL) & 0x1000 | 0x4800u) >> 11;
LABEL_12:
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFF1FFF;
LABEL_13:
        v16 = *((_QWORD *)this + 122);
        *(_OWORD *)(v16 + 32) = *(_OWORD *)v2;
        *(_OWORD *)(v16 + 48) = *((_OWORD *)v2 + 1);
        *(_DWORD *)(v16 + 64) = *((_DWORD *)v2 + 8);
        return;
      }
      goto LABEL_21;
    }
    *(_DWORD *)(v6 + 340) &= ~0x800u;
    v7 = (unsigned int *)(v2 + 32);
    *((_DWORD *)v2 + 8) &= ~0x40u;
    v8 = (_DWORD *)((char *)this + 436);
    v9 = *((_QWORD *)this + 122);
    v10 = (_DWORD *)((char *)this + 440);
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
        *((_DWORD *)v2 + 6) = -16 * *(_DWORD *)(v14 + 308);
        *((_DWORD *)v2 + 7) = -16 * *(_DWORD *)(*((_QWORD *)this + 122) + 312LL);
        goto LABEL_8;
      }
    }
    else
    {
      v55 = (float)v11 * *((float *)this + 107);
      *(float *)(v9 + 400) = v55;
      v56 = *((_QWORD *)this + 122);
      *(float *)v8 = v55;
      v57 = (float)-*(_DWORD *)(v56 + 312) * *((float *)this + 108);
      *(float *)(v56 + 404) = v57;
      v58 = *((_QWORD *)this + 122);
      *(float *)v10 = v57;
      v14 = v58;
      if ( !*(_DWORD *)(v58 + 324) && !*(_DWORD *)(v58 + 328) )
        goto LABEL_52;
    }
    v64 = (float)(16 * *(_DWORD *)(v14 + 324)) + *(float *)v8;
    *(float *)(v14 + 400) = v64;
    v14 = *((_QWORD *)this + 122);
    *(float *)v8 = v64;
    v65 = (float)(16 * *(_DWORD *)(v14 + 328)) + *(float *)v10;
    *(float *)(v14 + 404) = v65;
    *(float *)v10 = v65;
LABEL_52:
    bFToL(v14, v2 + 24, 6LL);
    bFToL(v59, v2 + 28, v60);
    goto LABEL_8;
  }
  if ( (v5 & 2) != 0 && !(unsigned int)DC::bDpiScaleTransform(this) )
  {
    *(_DWORD *)v2 = v39[107];
    *((_DWORD *)v2 + 3) = v39[108];
    *(_QWORD *)(v2 + 4) = v40;
    *((_DWORD *)v2 + 4) = v39[109];
    *((_DWORD *)v2 + 5) = v39[110];
    bFToL(v39, v2 + 24, 6LL);
    bFToL(v41, v2 + 28, v42);
    if ( (*(_DWORD *)(*((_QWORD *)this + 122) + 340LL) & 0x800) != 0 )
      *((_DWORD *)v2 + 8) = 75;
    else
      *((_DWORD *)v2 + 8) = (*(_DWORD *)(*((_QWORD *)this + 122) + 340LL) & 0x1000 | 0x4800u) >> 11;
    goto LABEL_12;
  }
LABEL_21:
  if ( (unsigned int)DC::bDpiScaleTransform(this) )
    *(_DWORD *)(v22 + 340) &= 0xFFFFE7FF;
  if ( (*(_DWORD *)(*((_QWORD *)this + 122) + 340LL) & 0x1000) != 0 )
  {
    v23 = (EFLOAT *)(v2 + 4);
    v24 = (EFLOAT *)(v2 + 8);
    *(_OWORD *)v2 = *(_OWORD *)((char *)this + 392);
    *((_OWORD *)v2 + 1) = *(_OWORD *)((char *)this + 408);
    *(float *)v2 = *(float *)v2 * 16.0;
    *((float *)v2 + 1) = *((float *)v2 + 1) * 16.0;
    *((float *)v2 + 2) = *((float *)v2 + 2) * 16.0;
    *((float *)v2 + 3) = *((float *)v2 + 3) * 16.0;
    v25 = *((float *)v2 + 4) * 16.0;
    *((float *)v2 + 4) = v25;
    *((float *)v2 + 5) = *((float *)v2 + 5) * 16.0;
  }
  else
  {
    v62 = *((float *)this + 107);
    if ( (unsigned int)DC::bDpiScaleTransform(v21) )
    {
      v62 = v62 * *((float *)this + 131);
      v63 = v63 * *((float *)this + 132);
    }
    v24 = (EFLOAT *)(v2 + 8);
    v23 = (EFLOAT *)(v2 + 4);
    *(float *)v2 = v62 * *((float *)this + 98);
    *((float *)v2 + 2) = v62 * *((float *)this + 100);
    *((float *)v2 + 1) = v63 * *((float *)this + 99);
    *((float *)v2 + 3) = v63 * *((float *)this + 101);
    v25 = *((float *)this + 107) * *((float *)this + 102);
    *((float *)v2 + 4) = v25;
    *((float *)v2 + 5) = *((float *)this + 108) * *((float *)this + 103);
  }
  *((float *)v2 + 4) = *((float *)this + 109) + v25;
  bFToL(v21, v2 + 24, 6LL);
  *((float *)v2 + 5) = *((float *)this + 110) + *((float *)v2 + 5);
  bFToL(v26, v2 + 28, v27);
  if ( (unsigned int)DC::bDpiScaleTransform(this) )
  {
    v28 = *((float *)this + 131) * *((float *)v2 + 4);
    *((float *)v2 + 4) = v28;
    v29 = *((float *)this + 132) * *((float *)v2 + 5);
    *((float *)v2 + 5) = v29;
    v30 = *((float *)this + 132);
    v31 = *((_DWORD *)this + 10) & 1;
    v32 = *((_DWORD *)this + 2 * v31 + 255);
    *((float *)v2 + 4) = (float)((float)((float)((float)*((int *)this + 2 * v31 + 254) * *((float *)this + 131))
                                       - (float)*((int *)this + 2 * v31 + 254))
                               * 16.0)
                       + v28;
    *((float *)v2 + 5) = (float)((float)((float)((float)v32 * v30) - (float)v32) * 16.0) + v29;
    bFToL(v31, v2 + 24, 6LL);
    bFToL(v33, v2 + 28, v34);
  }
  *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= ~0x10000u;
  if ( (unsigned int)EFLOAT::bIsZero(v23) && (unsigned int)EFLOAT::bIsZero(v24) )
  {
    if ( !(unsigned int)EFLOAT::bIs16((EFLOAT *)v2) || !(unsigned int)EFLOAT::bIs16((EFLOAT *)(v2 + 12)) )
      v3 = 9;
  }
  else
  {
    v3 = 8;
  }
  *((_DWORD *)v2 + 8) = v3;
  if ( !*((_DWORD *)v2 + 6) && !*((_DWORD *)v2 + 7) )
    *((_DWORD *)v2 + 8) = v3 | 0x40;
  *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFF1FFF;
  if ( !(unsigned int)DC::bDpiScaleTransform(this) )
    goto LABEL_13;
}
