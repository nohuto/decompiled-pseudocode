/*
 * XREFs of ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x14010D384
 * Callers:
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x14010C92C (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x140174084 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x14033A374 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x140108968 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x14010DE20 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z @ 0x14010EEB0 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z.c)
 *     bFToL @ 0x140111E60 (bFToL.c)
 */

void __fastcall RFONTOBJ::ComputeEUDCLogfont(RFONTOBJ *this, struct _EUDCLOGFONT *a2, struct XDCOBJ *a3)
{
  struct XDCOBJ *v4; // r15
  __int64 v6; // r8
  _DWORD *v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rcx
  int v10; // edi
  __int64 SessionState; // rax
  bool v12; // zf
  __int64 v13; // r13
  __int64 v14; // r8
  int v15; // r11d
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rcx
  __m128i v19; // xmm0
  int v20; // r15d
  unsigned int v21; // r11d
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r11
  int v25; // edx
  int v26; // eax
  int v27; // eax
  Gre::Base *v28; // rcx
  struct LFONT *v29; // rbx
  struct Gre::Base::SESSION_GLOBALS *v30; // rax
  __m128i v31; // xmm0
  int v32; // r15d
  unsigned int v33; // r11d
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rcx
  int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // r8d
  int v43; // r9d
  __int64 v44; // rcx
  __m128i v45; // xmm1
  int v46; // r15d
  unsigned int v47; // r8d
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __m128i v51; // xmm0
  __m128i v52; // xmm0
  int v53; // r11d
  unsigned int v54; // r8d
  __int64 v55; // rax
  __int64 v56; // rax
  __m128i v57; // xmm0
  int v58; // r15d
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  float v62; // xmm2_4
  float v63; // xmm1_4
  __int64 v64; // rdx
  unsigned int v65; // r8d
  unsigned int v66; // eax
  __int64 v67; // [rsp+20h] [rbp-60h]
  _DWORD *v68; // [rsp+28h] [rbp-58h]
  _DWORD *v69; // [rsp+30h] [rbp-50h] BYREF
  struct LFONT *v70; // [rsp+38h] [rbp-48h]
  __int64 v71[5]; // [rsp+40h] [rbp-40h] BYREF
  int v72; // [rsp+68h] [rbp-18h]
  __int64 v73; // [rsp+C0h] [rbp+40h] BYREF
  struct XDCOBJ *v74; // [rsp+D0h] [rbp+50h] BYREF
  float v75; // [rsp+D8h] [rbp+58h] BYREF

  v74 = a3;
  v4 = a3;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v69, *(struct HLFONT__ **)(*(_QWORD *)a3 + 1744LL), *(HDEV *)(*(_QWORD *)a3 + 48LL));
  v73 = *(_QWORD *)this;
  IFIOBJR::IFIOBJR(
    (IFIOBJR *)v71,
    *(const struct _IFIMETRICS **)(*(_QWORD *)(v73 + 120) + 32LL),
    (struct RFONTOBJ *)&v73,
    v4);
  v7 = v69;
  v68 = v69;
  if ( !v69 )
    goto LABEL_21;
  v8 = v71[0];
  v67 = v71[0];
  *(_DWORD *)a2 = *(unsigned __int16 *)(v71[0] + 52);
  v9 = *(unsigned int *)(*(_QWORD *)this + 12LL);
  *((_DWORD *)a2 + 1) = v9;
  *((_DWORD *)a2 + 3) = v7[63];
  *((_DWORD *)a2 + 2) = v7[64];
  *((_DWORD *)a2 + 4) = v7[65];
  *((_DWORD *)a2 + 5) = v7[66];
  *((_DWORD *)a2 + 7) = 1065353216;
  v10 = *(_DWORD *)(v8 + 48) & 0x401000;
  LODWORD(v73) = v10;
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
        LODWORD(v74) = 0;
        bFToL(2050LL, &v74, 0LL);
        *((_DWORD *)a2 + 2) = (_DWORD)v74;
      }
      v50 = *(_QWORD *)this;
      LODWORD(v39) = 0;
      if ( (*(_DWORD *)(v13 + 13508) & 0x4000) != 0 )
        v51 = _mm_cvtsi32_si128(*(_DWORD *)(v50 + 316));
      else
        v51 = _mm_cvtsi32_si128(*(_DWORD *)(v50 + 308));
      v52 = (__m128i)_mm_cvtepi32_ps(v51);
      *(float *)v52.m128i_i32 = *(float *)v52.m128i_i32 * *(float *)(v50 + 692);
      v53 = _mm_cvtsi128_si32(v52);
      v54 = (unsigned __int8)(v53 >> 23);
      if ( v54 <= 0x9E )
      {
        v55 = v53 & 0x7FFFFFLL | 0x800000;
        v56 = v54 < 0x76 ? v55 >> (118 - (unsigned __int8)v54) : v55 << ((unsigned __int8)v54 - 118);
        v39 = (v56 + 0x80000000LL) >> 32;
        if ( v53 < 0 )
          LODWORD(v39) = -(int)v39;
      }
      goto LABEL_39;
    }
    if ( v10 )
      *((_DWORD *)a2 + 2) = *(__int16 *)(v8 + 76);
    v36 = _wcsicmp((const wchar_t *)(v8 + *(int *)(v8 + 16)), L"Ms Sans Serif");
    v37 = *(_QWORD *)this;
    if ( v36 )
    {
      if ( (*(_DWORD *)(v13 + 13508) & 0x4000) != 0 )
      {
        v38 = *(_DWORD *)(v37 + 316);
LABEL_38:
        LODWORD(v39) = (v38 + 8) >> 4;
        goto LABEL_39;
      }
    }
    else if ( (unsigned int)(*(_DWORD *)(v37 + 316) - 193) <= 0x4E )
    {
      LODWORD(v39) = 12;
LABEL_39:
      *((_DWORD *)a2 + 3) = v39;
      if ( v10 )
        *((_DWORD *)a2 + 2) *= *(_DWORD *)(*(_QWORD *)this + 656LL);
      goto LABEL_20;
    }
    v38 = *(_DWORD *)(v37 + 308);
    goto LABEL_38;
  }
  v14 = *(_QWORD *)this;
  v15 = *(_DWORD *)(*(_QWORD *)this + 316LL);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x802) == 0x802 )
  {
    LODWORD(v16) = (v15 + 8) >> 4;
  }
  else
  {
    LODWORD(v16) = 0;
    v31 = (__m128i)COERCE_UNSIGNED_INT((float)v15);
    *(float *)v31.m128i_i32 = *(float *)v31.m128i_i32 * *(float *)(v14 + 692);
    v32 = _mm_cvtsi128_si32(v31);
    v33 = (unsigned __int8)(v32 >> 23);
    if ( v33 <= 0x9E )
    {
      v34 = v32 & 0x7FFFFFLL | 0x800000;
      v35 = v33 < 0x76 ? v34 >> (118 - (unsigned __int8)v33) : v34 << ((unsigned __int8)v33 - 118);
      v16 = (v35 + 0x80000000LL) >> 32;
      if ( v32 < 0 )
        LODWORD(v16) = -(int)v16;
    }
  }
  v17 = *(_DWORD *)(v14 + 376);
  if ( v17 == 0x80000000 )
  {
    LODWORD(v18) = 0;
    v75 = *(float *)(v14 + 216);
    v19 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v67 + 56));
    *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 * v75;
    v20 = _mm_cvtsi128_si32(v19);
    v21 = (unsigned __int8)(v20 >> 23);
    if ( v21 <= 0x9E )
    {
      v22 = v20 & 0x7FFFFFLL | 0x800000;
      v23 = v21 < 0x76 ? v22 >> (118 - (unsigned __int8)v21) : v22 << ((unsigned __int8)v21 - 118);
      v18 = (v23 + 0x80000000LL) >> 32;
      if ( v20 < 0 )
        LODWORD(v18) = -(int)v18;
    }
    LODWORD(v24) = v16 - v18;
    if ( (_DWORD)v73 && !*(_DWORD *)(v13 + 19600) )
    {
      LODWORD(v44) = 0;
      v45 = (__m128i)COERCE_UNSIGNED_INT((float)v72);
      v75 = *(float *)(v14 + 212);
      *(float *)v45.m128i_i32 = *(float *)v45.m128i_i32 * v75;
      v46 = _mm_cvtsi128_si32(v45);
      v47 = (unsigned __int8)(v46 >> 23);
      if ( v47 <= 0x9E )
      {
        v48 = v46 & 0x7FFFFFLL | 0x800000;
        v49 = v47 < 0x76 ? v48 >> (118 - (unsigned __int8)v47) : v48 << ((unsigned __int8)v47 - 118);
        v44 = (v49 + 0x80000000LL) >> 32;
        if ( v46 < 0 )
          LODWORD(v44) = -(int)v44;
      }
      *((_DWORD *)a2 + 2) = v44;
    }
  }
  else
  {
    LODWORD(v24) = 0;
    v57 = (__m128i)COERCE_UNSIGNED_INT((float)v17);
    *(float *)v57.m128i_i32 = *(float *)v57.m128i_i32 * *(float *)(v14 + 692);
    v58 = _mm_cvtsi128_si32(v57);
    v59 = (unsigned __int8)(v58 >> 23);
    if ( (unsigned int)v59 <= 0x9E )
    {
      v60 = v58 & 0x7FFFFFLL | 0x800000;
      if ( (unsigned int)v59 < 0x76 )
      {
        LOBYTE(v59) = 118 - v59;
        v61 = v60 >> v59;
      }
      else
      {
        v59 = (unsigned int)(v59 - 118);
        v61 = v60 << v59;
      }
      v24 = (v61 + 0x80000000LL) >> 32;
      if ( v58 < 0 )
        LODWORD(v24) = -(int)v24;
    }
    v25 = v73;
    if ( !(_DWORD)v73 || *(_DWORD *)(v13 + 19600) )
      goto LABEL_13;
    v75 = 0.0;
    bFToL(v59, &v75, 0LL);
    *((float *)a2 + 2) = v75;
  }
  v25 = v73;
LABEL_13:
  if ( (int)v24 < 0 )
    v26 = v16 + v24;
  else
    v26 = v16 - v24;
  *((_DWORD *)a2 + 3) = v26;
  if ( v26 <= 13 )
  {
    if ( v26 == 11 )
    {
      if ( (int)v16 >= 12 )
        *((_DWORD *)a2 + 3) = 12;
    }
    else if ( v26 == 13 && (int)v16 >= 15 )
    {
      *((_DWORD *)a2 + 3) = 15;
    }
  }
  if ( v68[64] && !v25 )
  {
    *((_DWORD *)a2 + 2) = 0;
    v62 = *(float *)(*(_QWORD *)this + 152LL);
    v63 = *(float *)(*(_QWORD *)this + 136LL);
    *(float *)&v73 = v62;
    if ( EFLOAT::bIsZero((EFLOAT *)&v73) )
    {
      v63 = *(float *)(v64 + 140);
      v62 = *(float *)(v64 + 156);
    }
    *((float *)a2 + 7) = v63 / v62;
  }
  v4 = v74;
LABEL_20:
  v27 = *(_DWORD *)(v67 + 48);
  if ( (v27 & 0x10) == 0 )
  {
    if ( (v27 & 0x200000) != 0 )
    {
      v40 = *((unsigned int *)a2 + 5);
      if ( (_DWORD)v40 )
      {
        v65 = lNormAngle(v40);
        v66 = 900 * (v65 / 0x384);
        *((_DWORD *)a2 + 5) = v66;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x40) != 0 && v65 != v66 )
          *((_DWORD *)a2 + 5) = lNormAngle(v66 + 900);
      }
      v41 = *((unsigned int *)a2 + 4);
      if ( (_DWORD)v41 )
      {
        v42 = lNormAngle(v41);
        v43 = 900 * (v42 / 900);
        *((_DWORD *)a2 + 4) = v43;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x40) != 0 && v42 != v43 )
          *((_DWORD *)a2 + 4) = lNormAngle((unsigned int)(v43 + 900));
      }
    }
    else
    {
      *((_QWORD *)a2 + 2) = 0LL;
    }
  }
LABEL_21:
  v73 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v73);
  v29 = v70;
  if ( v70 )
  {
    v30 = Gre::Base::Globals(v28);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v30, v29);
  }
}
