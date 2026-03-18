/*
 * XREFs of cjCopyFontDataW @ 0x140102FD8
 * Callers:
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x140102DBC (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 * Callees:
 *     ?lfOrientation@IFIOBJ@@QEAAJXZ @ 0x1401038CC (-lfOrientation@IFIOBJ@@QEAAJXZ.c)
 *     ?bIFIMetricsToTextMetricW2@@YAHAEAUPARAMETERS@EFSTATE@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x140103988 (-bIFIMetricsToTextMetricW2@@YAHAEAUPARAMETERS@EFSTATE@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOAT.c)
 *     ?dpNtmi@PFEOBJ@@QEAAKXZ @ 0x1401041C8 (-dpNtmi@PFEOBJ@@QEAAKXZ.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     InitializeScripts @ 0x1403ECA34 (InitializeScripts.c)
 */

__int64 __fastcall cjCopyFontDataW(__int64 a1, __int64 a2, PFEOBJ *a3, int a4, wchar_t *Src, int a6, int a7, float a8)
{
  __int64 v11; // rdi
  int v12; // r9d
  unsigned int v13; // edx
  unsigned int v14; // r8d
  bool v15; // zf
  int v16; // eax
  int v17; // esi
  int v18; // r13d
  float v19; // xmm6_4
  char v20; // al
  int v21; // eax
  char v22; // cl
  __int64 v23; // rcx
  __m128i v24; // xmm0
  int v25; // r8d
  unsigned int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __m128i v30; // xmm0
  int v31; // r9d
  unsigned int v32; // r8d
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int v36; // eax
  __int64 v37; // r12
  __int64 v38; // r14
  int v39; // eax
  __int64 v40; // rax
  int v41; // eax
  _DWORD *v42; // rcx
  unsigned int v43; // r12d
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  _WORD *v47; // r14
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rcx
  __int64 v52; // rax
  _DWORD *v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int16 v57; // ax
  _WORD *v58; // rax
  const wchar_t *v59; // r8
  int v60; // eax
  int v61; // ecx
  unsigned int *v62; // rdx
  __m128i v63; // xmm0
  float v64; // xmm1_4
  __int64 v65; // rcx
  __m128i v66; // xmm0
  int v67; // r8d
  unsigned int v68; // edx
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdx
  int v72; // ecx
  __int64 v73; // rcx
  __m128i v74; // xmm0
  int v75; // r8d
  unsigned int v76; // edx
  __int64 v77; // rax
  __int64 v78; // rax
  int v79; // eax
  int v80; // r13d
  float v81; // [rsp+48h] [rbp-69h] BYREF
  int v82; // [rsp+4Ch] [rbp-65h]
  int v83; // [rsp+50h] [rbp-61h]
  __int64 v84; // [rsp+58h] [rbp-59h] BYREF
  __int64 v85; // [rsp+60h] [rbp-51h]
  float v86; // [rsp+68h] [rbp-49h] BYREF
  float v87; // [rsp+6Ch] [rbp-45h]
  float v88[2]; // [rsp+70h] [rbp-41h] BYREF
  float v89; // [rsp+78h] [rbp-39h] BYREF
  float v90; // [rsp+7Ch] [rbp-35h]
  __int64 v91; // [rsp+80h] [rbp-31h] BYREF
  unsigned int v92; // [rsp+88h] [rbp-29h]
  char v93[4]; // [rsp+8Ch] [rbp-25h] BYREF
  char v94[4]; // [rsp+90h] [rbp-21h] BYREF
  char v95[4]; // [rsp+94h] [rbp-1Dh] BYREF
  char v96[32]; // [rsp+98h] [rbp-19h] BYREF

  v11 = *(_QWORD *)(*(_QWORD *)a3 + 32LL);
  v12 = *(_DWORD *)(*(_QWORD *)a3 + 12LL) & 1;
  v92 = v12;
  v13 = *(__int16 *)(v11 + 56);
  v14 = *(__int16 *)(v11 + 60) + *(__int16 *)(v11 + 62);
  v15 = *(_WORD *)(v11 + 56) == 0;
  v83 = *(_DWORD *)(v11 + 132);
  v82 = *(_DWORD *)(v11 + 128);
  if ( v14 == 0 || v15 )
    return 0LL;
  if ( v12 && (*(_DWORD *)(v11 + 48) & 0x3000010) == 0 )
  {
    v83 = *(_DWORD *)(a1 + 36);
    v82 = *(_DWORD *)(a1 + 40);
  }
  v16 = *(_DWORD *)(v11 + 48);
  v17 = 2;
  v18 = 4;
  if ( (v16 & 0x3000010) != 0 )
  {
    if ( (v16 & 1) != 0 || (v16 & 2) == 0 && (v16 & 4) == 0 && (v16 & 8) != 0 )
    {
      v83 = *(_DWORD *)(a1 + 40);
      v82 = *(_DWORD *)(a1 + 36);
    }
    if ( v12 )
    {
      v79 = *(_DWORD *)(a1 + 44);
      if ( v79 >= 0 )
      {
        v63 = _mm_cvtsi32_si128(v14);
      }
      else
      {
        v79 = -v79;
        v63 = _mm_cvtsi32_si128(v13);
      }
      v64 = (float)v79;
    }
    else
    {
      v63 = _mm_cvtsi32_si128(v13);
      v64 = (float)*(int *)(a1 + 40) * 0.33333334;
    }
    v19 = v64 / _mm_cvtepi32_ps(v63).m128_f32[0];
  }
  else
  {
    v19 = a8;
  }
  *(_DWORD *)(a2 + 12) = v14;
  *(_DWORD *)(a2 + 16) = *(__int16 *)(v11 + 76);
  *(_DWORD *)(a2 + 28) = *(unsigned __int16 *)(v11 + 46);
  v20 = *(_BYTE *)(v11 + 52) & 1;
  v84 = v11;
  *(_BYTE *)(a2 + 32) = -(v20 != 0);
  *(_BYTE *)(a2 + 33) = *(_BYTE *)(v11 + 52) & 2;
  *(_BYTE *)(a2 + 34) = *(_BYTE *)(v11 + 52) & 0x10;
  *(_BYTE *)(a2 + 35) = *(_BYTE *)(v11 + 44);
  *(_DWORD *)(a2 + 20) = IFIOBJ::lfOrientation((IFIOBJ *)&v84);
  *(_DWORD *)(a2 + 24) = IFIOBJ::lfOrientation((IFIOBJ *)&v84);
  *(_BYTE *)(a2 + 39) = *(_BYTE *)(v11 + 45);
  v21 = *(_DWORD *)(v11 + 48);
  if ( (v21 & 1) != 0 )
  {
    v22 = 3;
  }
  else if ( (v21 & 2) != 0 )
  {
    v22 = 1;
  }
  else
  {
    v22 = 3;
    if ( (v21 & 4) == 0 )
      v22 = (v21 & 8) != 0 ? 3 : 0;
  }
  *(_BYTE *)(a2 + 36) = v22;
  *(_WORD *)(a2 + 37) = 258;
  wcsncpy_s((wchar_t *)(a2 + 40), 0x20uLL, (const wchar_t *)(v11 + *(int *)(v11 + 8)), 0x1FuLL);
  *(_WORD *)(a2 + 102) = 0;
  wcsncpy_s((wchar_t *)(a2 + 104), 0x40uLL, (const wchar_t *)(v11 + *(int *)(v11 + 16)), 0x3FuLL);
  *(_WORD *)(a2 + 230) = 0;
  wcsncpy_s((wchar_t *)(a2 + 232), 0x20uLL, (const wchar_t *)(v11 + *(int *)(v11 + 12)), 0x1FuLL);
  *(_WORD *)(a2 + 294) = 0;
  if ( (*(_DWORD *)(v11 + 48) & 0x3000010) != 0 )
  {
    LODWORD(v23) = 0;
    v24 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 76));
    *(float *)v24.m128i_i32 = *(float *)v24.m128i_i32 * v19;
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
    *(_DWORD *)(a2 + 16) = v23;
    LODWORD(v29) = 0;
    v30 = (__m128i)COERCE_UNSIGNED_INT((float)(*(__int16 *)(v11 + 60) + *(__int16 *)(v11 + 62)));
    *(float *)v30.m128i_i32 = *(float *)v30.m128i_i32 * v19;
    v31 = _mm_cvtsi128_si32(v30);
    v32 = (unsigned __int8)(v31 >> 23);
    if ( v32 <= 0x9E )
    {
      v33 = v31 & 0x7FFFFFLL | 0x800000;
      v34 = v32 < 0x76 ? v33 >> (118 - (unsigned __int8)v32) : v33 << ((unsigned __int8)v32 - 118);
      v29 = (v34 + 0x80000000LL) >> 32;
      if ( v31 < 0 )
        LODWORD(v29) = -(int)v29;
    }
    *(_DWORD *)(a2 + 12) = v29;
  }
  v91 = a1;
  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
  {
    v85 = *(_QWORD *)(v11 + 120);
    v86 = (float)(v85 == 0);
    v87 = (float)SHIDWORD(v85);
    EFLOAT::eqLength(&a8, v93, &v86);
    v88[0] = v86 / a8;
    v88[1] = v87 / a8;
    if ( (*(_DWORD *)(v91 + 32) & 2) == 0
      && !EXFORMOBJ::bXform((EXFORMOBJ *)&v91, (const struct VECTORFL *)v88, (struct VECTORFL *)v88, 1uLL) )
    {
      return 0LL;
    }
    EFLOAT::eqLength(&a8, v94, v88);
    LODWORD(v65) = 0;
    v66 = (__m128i)COERCE_UNSIGNED_INT((float)*(int *)(a2 + 16));
    *(float *)v66.m128i_i32 = *(float *)v66.m128i_i32 * a8;
    v67 = _mm_cvtsi128_si32(v66);
    v68 = (unsigned __int8)(v67 >> 23);
    if ( v68 <= 0x9E )
    {
      v69 = v67 & 0x7FFFFF | 0x800000LL;
      v70 = v68 < 0x76 ? v69 >> (118 - (unsigned __int8)v68) : v69 << ((unsigned __int8)v68 - 118);
      v65 = (v70 + 0x80000000LL) >> 32;
      if ( v67 < 0 )
        LODWORD(v65) = -(int)v65;
    }
    *(_DWORD *)(a2 + 16) = v65;
    v71 = *(_QWORD *)(v11 + 120);
    v85 = v71;
    v72 = v71;
    if ( !v71 )
      v72 = 1;
    v90 = (float)v72;
    v89 = (float)-HIDWORD(v71);
    EFLOAT::eqLength(&v81, v95, &v89);
    *(float *)&v84 = v89 / v81;
    *((float *)&v84 + 1) = v90 / v81;
    if ( (*(_DWORD *)(v91 + 32) & 2) == 0
      && !EXFORMOBJ::bXform((EXFORMOBJ *)&v91, (const struct VECTORFL *)&v84, (struct VECTORFL *)&v84, 1uLL) )
    {
      return 0LL;
    }
    EFLOAT::eqLength(&v81, v96, &v84);
    LODWORD(v73) = 0;
    v74 = (__m128i)COERCE_UNSIGNED_INT((float)*(int *)(a2 + 12));
    *(float *)v74.m128i_i32 = *(float *)v74.m128i_i32 * v81;
    v75 = _mm_cvtsi128_si32(v74);
    v76 = (unsigned __int8)(v75 >> 23);
    if ( v76 <= 0x9E )
    {
      v77 = v75 & 0x7FFFFF | 0x800000LL;
      v78 = v76 < 0x76 ? v77 >> (118 - (unsigned __int8)v76) : v77 << ((unsigned __int8)v76 - 118);
      v73 = (v78 + 0x80000000LL) >> 32;
      if ( v75 < 0 )
        LODWORD(v73) = -(int)v73;
    }
    *(_DWORD *)(a2 + 12) = v73;
  }
  a8 = *(float *)(*(_QWORD *)a3 + 128LL);
  *(float *)a2 = a8;
  v36 = PFEOBJ::dpNtmi(a3);
  v37 = 0LL;
  v38 = a2 + v36;
  *(_DWORD *)(a2 + 4) = v36;
  v39 = *(_DWORD *)(v11 + 48);
  if ( (v39 & 0x4000) == 0 )
  {
    if ( (v39 & 0x4000001) == 0 )
      goto LABEL_29;
    if ( *(_DWORD *)(v11 + 4) <= 0xCu )
      goto LABEL_29;
    v40 = *(unsigned int *)(v11 + 204);
    if ( !(_DWORD)v40 )
      goto LABEL_29;
    if ( !*(_DWORD *)(v40 + v11 + 4) )
      goto LABEL_29;
    v61 = *(_DWORD *)(v40 + v11);
    if ( v61 != 134248052 && v61 != 134248035 )
      goto LABEL_29;
  }
  if ( *(_DWORD *)(v11 + 4) > 0xCu )
  {
    v62 = (unsigned int *)(v11 + *(int *)(v11 + 204));
    v37 = v62[1];
    if ( (unsigned int)v37 > 0x10 )
      v37 = 16LL;
    memmove((void *)(a2 + 360), v62, 4 * v37 + 8);
    v41 = v37;
  }
  else
  {
LABEL_29:
    v41 = 0;
    *(_DWORD *)(a2 + 360) = 134248036;
  }
  *(_DWORD *)(a2 + 364) = v41;
  v42 = (_DWORD *)(v38 + 108);
  if ( (*(_DWORD *)(v11 + 48) & 0x4000) != 0 && *(_DWORD *)(v11 + 4) > 0x10u )
  {
    memmove(v42, (const void *)(v11 + *(int *)(v11 + 208)), 40 * v37 + 8);
  }
  else
  {
    *(_DWORD *)(v38 + 112) = 0;
    *v42 = 134245473;
  }
  v43 = v92;
  if ( !(unsigned int)bIFIMetricsToTextMetricW2(a1, v38, a3, v92) )
    return 0LL;
  if ( a7 )
  {
    *(_BYTE *)(a2 + 35) = a6;
    *(_BYTE *)(v38 + 64) = a6;
    v47 = (_WORD *)(a2 + 296);
    if ( (unsigned int)InitializeScripts(v45, v44, v46, 0LL) )
    {
      v51 = *(_QWORD *)(W32GetSessionState(v49, v48, v50) + 96);
      v52 = 0LL;
      v53 = (_DWORD *)(v51 + 19800);
      while ( *v53 != a6 + 1000 )
      {
        v52 = (unsigned int)(v52 + 1);
        v53 += 4;
        if ( (unsigned int)v52 >= 0x13 )
        {
          v54 = *(_QWORD *)(v51 + 20096);
          goto LABEL_39;
        }
      }
      _mm_lfence();
      v54 = *(_QWORD *)(v51 + 16 * v52 + 19808);
LABEL_39:
      v55 = 32LL;
      v56 = v54 - (_QWORD)v47;
      do
      {
        if ( v55 == -2147483614 )
          break;
        v57 = *(_WORD *)((char *)v47 + v56);
        if ( !v57 )
          break;
        *v47++ = v57;
        --v55;
      }
      while ( v55 );
      v58 = v47 - 1;
      if ( v55 )
        v58 = v47;
      *v58 = 0;
    }
    v18 = 4;
  }
  else
  {
    *(_WORD *)(a2 + 296) = 0;
  }
  v59 = Src;
  if ( !Src )
  {
    if ( a4 != 5 )
      goto LABEL_49;
    v59 = (const wchar_t *)(a2 + 104);
  }
  wcsncpy_s((wchar_t *)(a2 + 40), 0x20uLL, v59, 0x1FuLL);
  *(_WORD *)(a2 + 102) = 0;
LABEL_49:
  *(_DWORD *)(a2 + 8) = 0;
  v60 = *(_DWORD *)(v11 + 48);
  if ( (v60 & 1) != 0 )
  {
    if ( !*(_BYTE *)(a1 + 50) && !*(_BYTE *)(a1 + 51) && *(_BYTE *)(a1 + 52) )
      v18 = 6;
    *(_DWORD *)(a2 + 8) = v18;
  }
  else if ( (v60 & 2) != 0 )
  {
    *(_DWORD *)(a2 + 8) = 1;
    v18 = 1;
  }
  else
  {
    v18 = 0;
    if ( v60 < 0 )
    {
      *(_DWORD *)(a2 + 8) = 2;
      v18 = 2;
    }
  }
  if ( v43 )
  {
    v80 = v18 | 2;
    if ( (*(_DWORD *)(v11 + 48) & 0x3000010) == 0 )
      v17 = v80;
    *(_DWORD *)(a2 + 8) = v17;
    if ( *(_BYTE *)(a1 + 48) && !*(_BYTE *)(a1 + 49) && (*(_DWORD *)(v11 + 48) & 0x3000010) != 0 )
      *(_DWORD *)(a2 + 8) = v17 | 0x80000000;
  }
  return LODWORD(a8);
}
