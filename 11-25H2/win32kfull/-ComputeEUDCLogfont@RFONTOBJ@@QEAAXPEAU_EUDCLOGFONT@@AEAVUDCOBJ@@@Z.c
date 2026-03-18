/*
 * XREFs of ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVUDCOBJ@@@Z @ 0x1400BC67C
 * Callers:
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVUDCOBJ@@@Z @ 0x1401E4844 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVUDCOBJ@@@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x140262338 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x140262AA0 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     bFToL @ 0x1400A4410 (bFToL.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1400A6340 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1400BB6C4 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x1400BCD48 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVUDCOBJ@@@Z @ 0x1400BCE40 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVUDCOBJ@@@Z.c)
 */

void __fastcall RFONTOBJ::ComputeEUDCLogfont(RFONTOBJ *this, struct _EUDCLOGFONT *a2, struct UDCOBJ *a3)
{
  struct UDCOBJ *v4; // r15
  __int64 v6; // r8
  _DWORD *v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rcx
  int v10; // r12d
  __int64 SessionState; // rax
  bool v12; // zf
  __int64 v13; // r13
  __int64 v14; // r8
  int v15; // edi
  int v16; // esi
  int v17; // eax
  int v18; // ecx
  __m128i v19; // xmm0
  int v20; // r15d
  unsigned int v21; // edi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // edi
  int v26; // eax
  int v27; // eax
  __m128i v28; // xmm0
  int v29; // edi
  int v30; // ecx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  int v35; // ecx
  __m128i v36; // xmm0
  __m128i v37; // xmm0
  int v38; // esi
  unsigned int v39; // r8d
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rcx
  int v45; // ecx
  __m128i v46; // xmm0
  int v47; // r15d
  unsigned int v48; // ecx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __m128i v52; // xmm0
  __int64 v53; // rcx
  __int64 v54; // rcx
  int v55; // r8d
  int v56; // r9d
  int v57; // ecx
  __m128i v58; // xmm1
  int v59; // r15d
  unsigned int v60; // r8d
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  int v64; // eax
  double v65; // xmm0_8
  float v66; // xmm2_4
  float v67; // xmm1_4
  __int64 v68; // rdx
  unsigned int v69; // r8d
  unsigned int v70; // eax
  _DWORD *v71; // [rsp+20h] [rbp-60h]
  _DWORD *v72; // [rsp+28h] [rbp-58h] BYREF
  struct LFONT *v73; // [rsp+30h] [rbp-50h]
  __int64 v74[5]; // [rsp+40h] [rbp-40h] BYREF
  int v75; // [rsp+68h] [rbp-18h]
  __int64 v76; // [rsp+C0h] [rbp+40h] BYREF
  struct UDCOBJ *v77; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v78; // [rsp+D8h] [rbp+58h]

  v77 = a3;
  v4 = a3;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v72, *(struct HLFONT__ **)(*(_QWORD *)a3 + 1744LL), *(HDEV *)(*(_QWORD *)a3 + 48LL));
  v76 = *(_QWORD *)this;
  IFIOBJR::IFIOBJR(
    (IFIOBJR *)v74,
    *(const struct _IFIMETRICS **)(*(_QWORD *)(v76 + 120) + 32LL),
    (struct RFONTOBJ *)&v76,
    v4);
  v7 = v72;
  v71 = v72;
  if ( !v72 )
  {
    v76 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v76);
    LFONTOBJ::~LFONTOBJ((LFONTOBJ *)&v72);
    return;
  }
  v8 = v74[0];
  v78 = v74[0];
  *(_DWORD *)a2 = *(unsigned __int16 *)(v74[0] + 52);
  v9 = *(unsigned int *)(*(_QWORD *)this + 12LL);
  *((_DWORD *)a2 + 1) = v9;
  *((_DWORD *)a2 + 3) = v7[63];
  *((_DWORD *)a2 + 2) = v7[64];
  *((_DWORD *)a2 + 4) = v7[65];
  *((_DWORD *)a2 + 5) = v7[66];
  *((_DWORD *)a2 + 7) = 1065353216;
  v10 = *(_DWORD *)(v8 + 48) & 0x401000;
  SessionState = W32GetSessionState(v9, v7, v6);
  v12 = (*(_DWORD *)(v8 + 48) & 0x3000010) == 0;
  v13 = *(_QWORD *)(SessionState + 96);
  *((_DWORD *)a2 + 6) = *(_DWORD *)(v8 + 48) & 0x3000010;
  if ( v12 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x802) != 0x802 )
    {
      if ( v10 )
      {
        v64 = *(__int16 *)(v8 + 76);
        LODWORD(v77) = 0;
        *(_QWORD *)&v65 = COERCE_UNSIGNED_INT((float)(16 * v64));
        *(float *)&v65 = *(float *)&v65 * *(float *)(*(_QWORD *)this + 688LL);
        bFToL(v65, (int *)&v77, 0);
        *((_DWORD *)a2 + 2) = (_DWORD)v77;
      }
      v34 = *(_QWORD *)this;
      v35 = 0;
      if ( (*(_DWORD *)(v13 + 13516) & 0x4000) != 0 )
        v36 = _mm_cvtsi32_si128(*(_DWORD *)(v34 + 316));
      else
        v36 = _mm_cvtsi32_si128(*(_DWORD *)(v34 + 308));
      v37 = (__m128i)_mm_cvtepi32_ps(v36);
      *(float *)v37.m128i_i32 = *(float *)v37.m128i_i32 * *(float *)(v34 + 692);
      v38 = _mm_cvtsi128_si32(v37);
      v39 = (unsigned __int8)(v38 >> 23);
      if ( v39 <= 0x9E )
      {
        v40 = v38 & 0x7FFFFFLL | 0x800000;
        v41 = v39 < 0x76 ? v40 >> (118 - (unsigned __int8)v39) : v40 << ((unsigned __int8)v39 - 118);
        v42 = (v41 + 0x80000000LL) >> 32;
        v35 = -(int)v42;
        if ( v38 >= 0 )
          v35 = v42;
      }
      goto LABEL_42;
    }
    if ( v10 )
      *((_DWORD *)a2 + 2) = *(__int16 *)(v8 + 76);
    v43 = _wcsicmp((const wchar_t *)(v8 + *(int *)(v8 + 16)), L"Ms Sans Serif");
    v44 = *(_QWORD *)this;
    if ( v43 )
    {
      if ( (*(_DWORD *)(v13 + 13516) & 0x4000) != 0 )
      {
        v45 = *(_DWORD *)(v44 + 316);
LABEL_52:
        v35 = (v45 + 8) >> 4;
        goto LABEL_42;
      }
    }
    else if ( (unsigned int)(*(_DWORD *)(v44 + 316) - 193) <= 0x4E )
    {
      v35 = 12;
LABEL_42:
      *((_DWORD *)a2 + 3) = v35;
      if ( v10 )
        *((_DWORD *)a2 + 2) *= *(_DWORD *)(*(_QWORD *)this + 656LL);
      goto LABEL_17;
    }
    v45 = *(_DWORD *)(v44 + 308);
    goto LABEL_52;
  }
  v14 = *(_QWORD *)this;
  v15 = *(_DWORD *)(*(_QWORD *)this + 316LL);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x802) == 0x802 )
  {
    v16 = (v15 + 8) >> 4;
  }
  else
  {
    v16 = 0;
    v28 = (__m128i)COERCE_UNSIGNED_INT((float)v15);
    *(float *)v28.m128i_i32 = *(float *)v28.m128i_i32 * *(float *)(v14 + 692);
    v29 = _mm_cvtsi128_si32(v28);
    v30 = (unsigned __int8)(v29 >> 23) - 118;
    if ( v30 <= 40 )
    {
      v31 = v29 & 0x7FFFFFLL | 0x800000;
      v32 = v30 < 0 ? v31 >> (118 - (unsigned __int8)(v29 >> 23)) : v31 << v30;
      v33 = (v32 + 0x80000000LL) >> 32;
      v16 = -(int)v33;
      if ( v29 >= 0 )
        v16 = v33;
    }
  }
  v17 = *(_DWORD *)(v14 + 376);
  if ( v17 == 0x80000000 )
  {
    v18 = 0;
    LODWORD(v76) = *(_DWORD *)(v14 + 216);
    v19 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v78 + 56));
    *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 * *(float *)&v76;
    v20 = _mm_cvtsi128_si32(v19);
    v21 = (unsigned __int8)(v20 >> 23);
    if ( v21 <= 0x9E )
    {
      v22 = v20 & 0x7FFFFFLL | 0x800000;
      v23 = v21 < 0x76 ? v22 >> (118 - (unsigned __int8)v21) : v22 << ((unsigned __int8)v21 - 118);
      v24 = (v23 + 0x80000000LL) >> 32;
      v18 = -(int)v24;
      if ( v20 >= 0 )
        v18 = v24;
    }
    v25 = v16 - v18;
    if ( v10 && !*(_DWORD *)(v13 + 19608) )
    {
      v57 = 0;
      v58 = (__m128i)COERCE_UNSIGNED_INT((float)v75);
      LODWORD(v76) = *(_DWORD *)(v14 + 212);
      *(float *)v58.m128i_i32 = *(float *)v58.m128i_i32 * *(float *)&v76;
      v59 = _mm_cvtsi128_si32(v58);
      v60 = (unsigned __int8)(v59 >> 23);
      if ( v60 <= 0x9E )
      {
        v61 = v59 & 0x7FFFFFLL | 0x800000;
        v62 = v60 < 0x76 ? v61 >> (118 - (unsigned __int8)v60) : v61 << ((unsigned __int8)v60 - 118);
        v63 = (v62 + 0x80000000LL) >> 32;
        v57 = -(int)v63;
        if ( v59 >= 0 )
          v57 = v63;
      }
      *((_DWORD *)a2 + 2) = v57;
    }
  }
  else
  {
    v25 = 0;
    v46 = (__m128i)COERCE_UNSIGNED_INT((float)v17);
    *(float *)v46.m128i_i32 = *(float *)v46.m128i_i32 * *(float *)(v14 + 692);
    v47 = _mm_cvtsi128_si32(v46);
    v48 = (unsigned __int8)(v47 >> 23);
    if ( v48 <= 0x9E )
    {
      v49 = v47 & 0x7FFFFFLL | 0x800000;
      v50 = v48 < 0x76 ? v49 >> (118 - (unsigned __int8)v48) : v49 << ((unsigned __int8)v48 - 118);
      v51 = (v50 + 0x80000000LL) >> 32;
      v25 = -(int)v51;
      if ( v47 >= 0 )
        v25 = v51;
    }
    if ( v10 && !*(_DWORD *)(v13 + 19608) )
    {
      v52 = _mm_cvtsi32_si128(*(_DWORD *)(v14 + 384));
      LODWORD(v76) = 0;
      v52.m128i_i64[0] = _mm_cvtepi32_ps(v52).m128_u64[0];
      *(float *)v52.m128i_i32 = *(float *)v52.m128i_i32 * *(float *)(v14 + 688);
      bFToL(*(double *)v52.m128i_i64, (int *)&v76, 0);
      *((_DWORD *)a2 + 2) = v76;
    }
  }
  if ( v25 < 0 )
    v26 = v16 + v25;
  else
    v26 = v16 - v25;
  *((_DWORD *)a2 + 3) = v26;
  if ( v26 <= 13 )
  {
    if ( v26 == 11 )
    {
      if ( v16 >= 12 )
        *((_DWORD *)a2 + 3) = 12;
    }
    else if ( v26 == 13 && v16 >= 15 )
    {
      *((_DWORD *)a2 + 3) = 15;
    }
  }
  if ( v71[64] && !v10 )
  {
    *((_DWORD *)a2 + 2) = 0;
    v66 = *(float *)(*(_QWORD *)this + 152LL);
    v67 = *(float *)(*(_QWORD *)this + 136LL);
    *(float *)&v76 = v66;
    if ( EFLOAT::bIsZero((EFLOAT *)&v76) )
    {
      v67 = *(float *)(v68 + 140);
      v66 = *(float *)(v68 + 156);
    }
    *((float *)a2 + 7) = v67 / v66;
  }
  v4 = v77;
LABEL_17:
  v27 = *(_DWORD *)(v78 + 48);
  if ( (v27 & 0x10) == 0 )
  {
    if ( (v27 & 0x200000) != 0 )
    {
      v53 = *((unsigned int *)a2 + 5);
      if ( (_DWORD)v53 )
      {
        v69 = lNormAngle(v53);
        v70 = 900 * (v69 / 0x384);
        *((_DWORD *)a2 + 5) = v70;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x40) != 0 && v69 != v70 )
          *((_DWORD *)a2 + 5) = lNormAngle(v70 + 900);
      }
      v54 = *((unsigned int *)a2 + 4);
      if ( (_DWORD)v54 )
      {
        v55 = lNormAngle(v54);
        v56 = 900 * (v55 / 900);
        *((_DWORD *)a2 + 4) = v56;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x40) != 0 && v55 != v56 )
          *((_DWORD *)a2 + 4) = lNormAngle((unsigned int)(v56 + 900));
      }
    }
    else
    {
      *((_DWORD *)a2 + 5) = 0;
      *((_DWORD *)a2 + 4) = 0;
    }
  }
  v76 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v76);
  if ( v73 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v73);
}
