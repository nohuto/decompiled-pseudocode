/*
 * XREFs of ?GrepGetCharWidthW@@YAHAEAVUDCOBJ@@IIPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1400BDFAC
 * Callers:
 *     NtGdiGetCharWidthW @ 0x1401AF3A0 (NtGdiGetCharWidthW.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x140017F90 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVUDCOBJ@@_NPEAVESTROBJ@@@Z @ 0x1400AD5FC (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVUDCOBJ@@_NPEAVESTROBJ@@@Z.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1400BEFAC (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepGetCharWidthW(
        struct UDCOBJ *a1,
        unsigned int a2,
        unsigned int a3,
        _WORD *a4,
        char a5,
        float *a6)
{
  float *v6; // r12
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rax
  int v14; // r15d
  float v15; // xmm6_4
  unsigned int v16; // edx
  unsigned int v17; // esi
  __int64 v18; // r14
  unsigned int v19; // eax
  int v20; // ecx
  unsigned int v21; // ebx
  unsigned int v22; // ecx
  unsigned __int16 *v23; // rcx
  unsigned __int16 *v24; // r9
  GLYPHDEF **p_pgdf; // r9
  __int64 v26; // r11
  __int64 v27; // rdx
  __m128i v28; // xmm0
  int v29; // r10d
  unsigned int v30; // r8d
  __int64 v31; // rax
  __int64 v32; // rax
  GLYPHDEF **v34; // rcx
  __int64 v35; // rdx
  GLYPHDEF *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  unsigned int v40; // eax
  __int16 v41; // r9
  _WORD *v42; // r8
  unsigned __int64 v43; // rdx
  unsigned int v44; // [rsp+48h] [rbp-C0h]
  unsigned int v45; // [rsp+48h] [rbp-C0h]
  __int64 v46; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v47; // [rsp+58h] [rbp-B0h]
  _DWORD v48[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct UDCOBJ *v49; // [rsp+68h] [rbp-A0h]
  _WORD *v50; // [rsp+70h] [rbp-98h]
  struct _GLYPHPOS v51; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int16 v52[32]; // [rsp+378h] [rbp+270h] BYREF

  v6 = a6;
  v8 = a3;
  v9 = (unsigned __int64)a4;
  v50 = a4;
  v47 = a3;
  v49 = a1;
  HIWORD(v44) = HIWORD(a2);
  if ( !a6 )
    return 0LL;
  v11 = *(_QWORD *)a1;
  v48[0] = 19;
  v12 = *(unsigned __int16 *)(v11 + 12);
  v46 = 0LL;
  v48[1] = v12;
  RFONTOBJ::vInit((RFONTOBJ *)&v46, a1, 0, (a5 & 8) != 0 ? 4 : 2, (const struct RFONTOBJ::Tag *)v48);
  v13 = v46;
  if ( !v46 )
  {
    EngSetLastError(6u);
LABEL_31:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v46);
    return 0LL;
  }
  if ( (*(_DWORD *)(v46 + 84) & 4) != 0 )
  {
    v37 = *(_QWORD *)(v46 + 120);
    v38 = *(_QWORD *)(v37 + 32);
    if ( v9 )
    {
      v41 = *(unsigned __int8 *)(v38 + 108);
      v42 = (_WORD *)v9;
      if ( (*(_DWORD *)(*(_QWORD *)(v37 + 16) + 4LL) & 2) != 0 )
      {
        if ( *(_BYTE *)(v38 + 108) )
        {
          v43 = v9 + 2 * v8;
          if ( v9 < v43 )
          {
            do
              *v42++ -= v41;
            while ( (unsigned __int64)v42 < v43 );
          }
        }
      }
    }
    else if ( (*(_DWORD *)(*(_QWORD *)(v37 + 16) + 4LL) & 2) != 0 && *(_BYTE *)(v38 + 108) )
    {
      LOWORD(v44) = a2 - *(unsigned __int8 *)(v38 + 108);
      a2 = v44;
    }
  }
  v14 = 0;
  v15 = *(float *)(v13 + 688);
  if ( (a5 & 1) != 0 )
    v14 = 16 * RFONTOBJ::lOverhang((RFONTOBJ *)&v46);
  v16 = v8 - 1;
  v17 = 0;
  v45 = v8 - 1;
  if ( !v9 )
    v17 = a2;
  v18 = v9 & -(__int64)(v9 != 0);
  while ( !v9 )
  {
    if ( v17 - a2 > v16 )
      goto LABEL_33;
    v19 = v17;
    v20 = v8 - v17;
    v21 = 32;
    v22 = a2 + v20;
    if ( v22 < 0x20 )
      v21 = v22;
    v23 = v52;
    if ( v17 < v21 + v17 )
    {
      do
        *v23++ = v19++;
      while ( v19 < v21 + v17 );
    }
    v24 = v52;
LABEL_16:
    if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(
                          (RFONTOBJ *)&v46,
                          (struct RFONTOBJ *)v21,
                          &v51,
                          (char *)v24,
                          v49,
                          0,
                          0LL) )
      goto LABEL_31;
    if ( (int)v21 > 0 )
    {
      if ( (a5 & 2) != 0 )
      {
        p_pgdf = &v51.pgdf;
        v26 = v21;
        do
        {
          LODWORD(v27) = 0;
          v28 = (__m128i)COERCE_UNSIGNED_INT((float)(v14 + HIDWORD((*p_pgdf)[1].ppo)));
          *(float *)v28.m128i_i32 = *(float *)v28.m128i_i32 * v15;
          v29 = _mm_cvtsi128_si32(v28);
          v30 = (unsigned __int8)(v29 >> 23);
          if ( v30 <= 0x9E )
          {
            v31 = v29 & 0x7FFFFF | 0x800000LL;
            v32 = v30 < 0x76 ? v31 >> (118 - (unsigned __int8)v30) : v31 << ((unsigned __int8)v30 - 118);
            v27 = (v32 + 0x80000000LL) >> 32;
            if ( v29 < 0 )
              LODWORD(v27) = -(int)v27;
          }
          *(_DWORD *)v6 = v27;
          p_pgdf += 3;
          ++v6;
          --v26;
        }
        while ( v26 );
        v9 = (unsigned __int64)v50;
      }
      else
      {
        v34 = &v51.pgdf;
        v35 = v21;
        do
        {
          v36 = *v34;
          v34 += 3;
          *v6++ = (float)((float)SHIDWORD(v36[1].ppo) * 0.0625) * v15;
          --v35;
        }
        while ( v35 );
      }
    }
    if ( v9 )
      v18 += 2LL * (unsigned __int16)v21;
    else
      v17 += v21;
    v16 = v45;
    LODWORD(v8) = v47;
  }
  v39 = (__int64)(v18 - v9) >> 1;
  if ( (unsigned int)v39 <= v16 )
  {
    v24 = (unsigned __int16 *)v18;
    v40 = v8 - v39;
    v21 = 32;
    if ( v40 < 0x20 )
      v21 = v40;
    goto LABEL_16;
  }
LABEL_33:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v46);
  return 1LL;
}
