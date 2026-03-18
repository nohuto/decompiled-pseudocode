/*
 * XREFs of ?GrepGetCharWidthW@@YAHAEAVDCOBJ@@IIPEAGKPEAX@Z @ 0x1401C524C
 * Callers:
 *     NtGdiGetCharWidthW @ 0x14027FDD0 (NtGdiGetCharWidthW.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVXDCOBJ@@_NPEAVESTROBJ@@@Z @ 0x1400C015C (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVXDCOBJ@@_NPEAVESTROBJ@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400C5C18 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1401C57AC (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepGetCharWidthW(
        struct DCOBJ *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int16 *a4,
        char a5,
        float *a6)
{
  float *v6; // r12
  __int64 v7; // rbx
  unsigned __int16 *v8; // rdi
  unsigned int v9; // r13d
  __int64 v10; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
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
  GLYPHDEF **v33; // rcx
  __int64 v34; // rdx
  GLYPHDEF *v35; // rax
  __int64 v36; // rcx
  unsigned int v37; // eax
  __int64 v38; // r9
  unsigned __int16 *v39; // r8
  __int64 v40; // rcx
  __int16 v41; // r9
  unsigned __int16 *v42; // rdx
  unsigned int v43; // [rsp+48h] [rbp-C0h]
  unsigned int v44; // [rsp+48h] [rbp-C0h]
  __int64 v45; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+58h] [rbp-B0h]
  struct XDCOBJ *v47; // [rsp+60h] [rbp-A8h]
  unsigned __int16 *v48; // [rsp+68h] [rbp-A0h]
  struct _GLYPHPOS v49; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int16 v50[32]; // [rsp+378h] [rbp+270h] BYREF

  v6 = a6;
  v7 = a3;
  v8 = a4;
  v48 = a4;
  v9 = a2;
  LODWORD(v46) = a3;
  v47 = a1;
  v43 = a2;
  if ( !a6 )
    return 0LL;
  v45 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v45, a1, 0, (a5 & 8) != 0 ? 4 : 2) )
    GreAcquireSemaphore<5,RFONT *>(v45);
  v10 = v45;
  if ( !v45 )
  {
    EngSetLastError(6u);
LABEL_6:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
    return 0LL;
  }
  if ( (*(_DWORD *)(v45 + 84) & 4) != 0 )
  {
    if ( v8 )
    {
      v38 = *(_QWORD *)(v45 + 120);
      v39 = v8;
      if ( (*(_DWORD *)(*(_QWORD *)(v38 + 16) + 4LL) & 2) != 0 )
      {
        v40 = *(_QWORD *)(v38 + 32);
        v41 = *(unsigned __int8 *)(v40 + 108);
        if ( *(_BYTE *)(v40 + 108) )
        {
          v42 = &v8[v7];
          if ( v8 < v42 )
          {
            do
              *v39++ -= v41;
            while ( v39 < v42 );
          }
        }
      }
    }
    else
    {
      v12 = *(_QWORD *)(v45 + 120);
      if ( (*(_DWORD *)(*(_QWORD *)(v12 + 16) + 4LL) & 2) != 0 )
      {
        v13 = *(_QWORD *)(v12 + 32);
        if ( *(_BYTE *)(v13 + 108) )
        {
          LOWORD(v43) = v43 - *(unsigned __int8 *)(v13 + 108);
          v9 = v43;
        }
      }
    }
  }
  v14 = 0;
  v15 = *(float *)(v10 + 688);
  if ( (a5 & 1) != 0 )
    v14 = 16 * RFONTOBJ::lOverhang((RFONTOBJ *)&v45);
  v16 = v7 - 1;
  v17 = 0;
  v44 = v7 - 1;
  if ( !v8 )
    v17 = v9;
  v18 = (unsigned __int64)v8 & -(__int64)(v8 != 0LL);
  while ( !v8 )
  {
    if ( v17 - v9 > v16 )
      goto LABEL_8;
    v19 = v17;
    v20 = v7 - v17;
    v21 = 32;
    v22 = v9 + v20;
    if ( v22 < 0x20 )
      v21 = v22;
    v23 = v50;
    if ( v17 < v21 + v17 )
    {
      do
        *v23++ = v19++;
      while ( v19 < v21 + v17 );
    }
    v24 = v50;
LABEL_26:
    if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics((RFONTOBJ *)&v45, (struct RFONTOBJ *)v21, &v49, v24, v47, 0, 0LL) )
      goto LABEL_6;
    if ( (int)v21 > 0 )
    {
      if ( (a5 & 2) != 0 )
      {
        p_pgdf = &v49.pgdf;
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
        v8 = v48;
      }
      else
      {
        v33 = &v49.pgdf;
        v34 = v21;
        do
        {
          v35 = *v33;
          v33 += 3;
          *v6++ = (float)((float)SHIDWORD(v35[1].ppo) * 0.0625) * v15;
          --v34;
        }
        while ( v34 );
      }
    }
    if ( v8 )
      v18 += 2LL * (unsigned __int16)v21;
    else
      v17 += v21;
    v16 = v44;
    LODWORD(v7) = v46;
  }
  v36 = (v18 - (__int64)v8) >> 1;
  if ( (unsigned int)v36 <= v16 )
  {
    v24 = (unsigned __int16 *)v18;
    v37 = v7 - v36;
    v21 = 32;
    if ( v37 < 0x20 )
      v21 = v37;
    goto LABEL_26;
  }
LABEL_8:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
  return 1LL;
}
