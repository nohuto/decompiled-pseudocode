/*
 * XREFs of ?GrepGetTextExtentW@@YAHAEAVUDCOBJ@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x1400BF184
 * Callers:
 *     GreGetTextExtentW @ 0x1400C0134 (GreGetTextExtentW.c)
 *     NtGdiGetTextExtent @ 0x140203B20 (NtGdiGetTextExtent.c)
 *     ?GrepGetCharacterPlacementW@@YAKAEAVUDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x14031172C (-GrepGetCharacterPlacementW@@YAKAEAVUDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x140017F90 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z @ 0x1400A419C (-bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1400A6340 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?vInit@ESTROBJ@@QEAAXPEBGJAEAVUDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1400AB7C0 (-vInit@ESTROBJ@@QEAAXPEBGJAEAVUDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1400BF550 (-bTextExtent@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ?vInit@EXFORMOBJ@@QEAAXPEAUMATRIX@@K@Z @ 0x140176E00 (-vInit@EXFORMOBJ@@QEAAXPEAUMATRIX@@K@Z.c)
 *     ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x140176E3C (-bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x14017EF58 (--1ESTROBJ@@QEAA@XZ.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1401C8BB4 (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepGetTextExtentW(
        struct UDCOBJ *a1,
        __m128i *a2,
        unsigned int a3,
        struct tagSIZE *a4,
        unsigned int a5,
        int a6)
{
  __int64 v6; // r13
  unsigned int v10; // ebx
  _DWORD *v11; // rax
  __int64 v12; // r9
  __m128i *v13; // r8
  __int64 v14; // rcx
  __int16 v15; // r9
  __m128i *v16; // rdx
  __int64 v17; // rcx
  bool v18; // di
  int v19; // r15d
  __int64 v21; // rdx
  float cy; // xmm1_4
  __m128i v23; // xmm0
  __int64 v24; // [rsp+98h] [rbp-80h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-78h] BYREF
  float cx; // [rsp+A8h] [rbp-70h] BYREF
  float v27; // [rsp+ACh] [rbp-6Ch] BYREF
  int v28; // [rsp+B0h] [rbp-68h] BYREF
  __int128 v29; // [rsp+B4h] [rbp-64h] BYREF
  __int128 v30; // [rsp+C4h] [rbp-54h]
  _BYTE v31[320]; // [rsp+D8h] [rbp-40h] BYREF

  v6 = a3;
  v10 = 0;
  if ( a3 )
  {
    LODWORD(v24) = a6;
    HIDWORD(v24) = *(unsigned __int16 *)(*(_QWORD *)a1 + 12LL);
    v25 = 0LL;
    RFONTOBJ::vInit((RFONTOBJ *)&v25, a1, 0, (a5 & 2) != 0 ? 4 : 2, (const struct RFONTOBJ::Tag *)&v24);
    v11 = (_DWORD *)v25;
    if ( v25 )
    {
      if ( (*(_DWORD *)(v25 + 84) & 4) != 0 )
      {
        v12 = *(_QWORD *)(v25 + 120);
        v13 = a2;
        if ( (*(_DWORD *)(*(_QWORD *)(v12 + 16) + 4LL) & 2) != 0 )
        {
          v14 = *(_QWORD *)(v12 + 32);
          v15 = *(unsigned __int8 *)(v14 + 108);
          if ( *(_BYTE *)(v14 + 108) )
          {
            v16 = (__m128i *)((char *)a2 + 2 * v6);
            if ( a2 < v16 )
            {
              do
              {
                v13->m128i_i16[0] -= v15;
                v13 = (__m128i *)((char *)v13 + 2);
              }
              while ( v13 < v16 );
            }
          }
        }
      }
      v17 = *(_QWORD *)a1;
      v18 = 1;
      v19 = *(_DWORD *)(*(_QWORD *)a1 + 1756LL);
      if ( v19 == v11[97] || v11[52] == 1 && (v11[181] & 4) == 0 )
      {
        v10 = RFONTOBJ::bTextExtent(
                (RFONTOBJ *)&v25,
                a1,
                (unsigned __int16 *)a2,
                v6,
                v19,
                *(_DWORD *)(*(_QWORD *)(v17 + 976) + 280LL),
                *(_DWORD *)(*(_QWORD *)(v17 + 976) + 284LL),
                *(_DWORD *)(*(_QWORD *)(v17 + 976) + 288LL),
                a5,
                a4);
        if ( v10
          && v19
          && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 208LL) == 1
          && (EFLOAT::bIsZero((EFLOAT *)(*(_QWORD *)a1 + 452LL)) || EFLOAT::bIsZero((EFLOAT *)(v21 + 456)))
          && (*(_DWORD *)(v25 + 724) & 4) != 0 )
        {
          cy = (float)a4->cy;
          cx = (float)a4->cx;
          v23 = (__m128i)COERCE_UNSIGNED_INT((float)v19);
          v27 = cy;
          *(float *)v23.m128i_i32 = *(float *)v23.m128i_i32 / 10.0;
          v30 = 0LL;
          v29 = 0LL;
          v28 = efCos((unsigned int)_mm_cvtsi128_si32(v23));
          EFLOAT::vAbs((EFLOAT *)&v28);
          DWORD2(v29) = v28;
          LODWORD(v29) = efSin((unsigned int)_mm_cvtsi128_si32(v23));
          EFLOAT::vAbs((EFLOAT *)&v29);
          HIDWORD(v29) = 0;
          LODWORD(v30) = 0;
          v24 = 0LL;
          DWORD1(v29) = v29;
          EXFORMOBJ::vInit((EXFORMOBJ *)&v24, (struct MATRIX *)&v28, 0x21u);
          if ( (*(_DWORD *)(v24 + 32) & 2) == 0 )
            v18 = EXFORMOBJ::bXform((EXFORMOBJ *)&v24, (const struct VECTORFL *)&cx, (struct VECTORFL *)&cx, 1uLL);
          v10 = v18;
          if ( v18 )
          {
            EFLOAT::vAbs((EFLOAT *)&cx);
            EFLOAT::vAbs((EFLOAT *)&v27);
            v10 = EPOINTFL::bToPOINTL((EPOINTFL *)&cx, (struct _POINTL *)a4);
          }
        }
      }
      else
      {
        DC::QuickInitXform(v17, &v24, 516LL);
        ESTROBJ::vInit(
          (ESTROBJ *)v31,
          a2,
          v6,
          a1,
          (struct RFONTOBJ *)&v25,
          (struct EXFORMOBJ *)&v24,
          0LL,
          0,
          v19,
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 280LL),
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 284LL),
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 288LL),
          0,
          0,
          0,
          0LL,
          0LL,
          0);
        if ( (v31[232] & 4) != 0 )
          v10 = ESTROBJ::bTextExtent((ESTROBJ *)v31, (struct RFONTOBJ *)&v25, v19, a4);
        ESTROBJ::~ESTROBJ((ESTROBJ *)v31);
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v25);
  }
  else
  {
    *a4 = 0LL;
    return 1;
  }
  return v10;
}
