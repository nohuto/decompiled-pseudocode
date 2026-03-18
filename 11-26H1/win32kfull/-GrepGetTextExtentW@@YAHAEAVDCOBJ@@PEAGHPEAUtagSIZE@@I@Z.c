/*
 * XREFs of ?GrepGetTextExtentW@@YAHAEAVDCOBJ@@PEAGHPEAUtagSIZE@@I@Z @ 0x1401C4B10
 * Callers:
 *     GreGetTextExtentW @ 0x1401FB67C (GreGetTextExtentW.c)
 *     NtGdiGetTextExtent @ 0x140280C10 (NtGdiGetTextExtent.c)
 *     ?GrepGetCharacterPlacementW@@YAKAEAVDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@K@Z @ 0x1403339C4 (-GrepGetCharacterPlacementW@@YAKAEAVDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@K@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInit@ESTROBJ@@QEAAXPEBGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1400BE594 (-vInit@ESTROBJ@@QEAAXPEBGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400C5C18 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ?bUseMetaPtoD@DC@@QEBAHXZ @ 0x1401086F4 (-bUseMetaPtoD@DC@@QEBAHXZ.c)
 *     ?bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z @ 0x140111928 (-bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1401A6358 (--1ESTROBJ@@QEAA@XZ.c)
 *     ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1401A63B0 (-bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z.c)
 *     ?vInit@EXFORMOBJ@@QEAAXPEAUMATRIX@@K@Z @ 0x1401AB8EC (-vInit@EXFORMOBJ@@QEAAXPEAUMATRIX@@K@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1401C06D0 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1401C4E90 (-bTextExtent@RFONTOBJ@@QEAAHAEAVDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1401F48EC (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepGetTextExtentW(
        struct DCOBJ *a1,
        unsigned __int16 *a2,
        unsigned int a3,
        struct tagSIZE *a4,
        unsigned int a5)
{
  unsigned int v9; // ebx
  _DWORD *v10; // r10
  __int64 v11; // rcx
  bool v12; // di
  int v13; // r14d
  float cy; // xmm1_4
  __m128i v16; // xmm0
  _DWORD *v17; // [rsp+98h] [rbp-80h] BYREF
  float cx; // [rsp+A0h] [rbp-78h] BYREF
  float v19; // [rsp+A4h] [rbp-74h] BYREF
  float *v20; // [rsp+A8h] [rbp-70h] BYREF
  int v21; // [rsp+B0h] [rbp-68h] BYREF
  _OWORD v22[2]; // [rsp+B4h] [rbp-64h] BYREF
  _BYTE v23[320]; // [rsp+D8h] [rbp-40h] BYREF

  v9 = 0;
  if ( a3 )
  {
    v17 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v17, a1, 0, (a5 & 2) != 0 ? 4 : 2) )
      GreAcquireSemaphore<5,RFONT *>((__int64)v17);
    v10 = v17;
    if ( v17 )
    {
      if ( (v17[21] & 4) != 0 )
        RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v17, a2, a3);
      v11 = *(_QWORD *)a1;
      v12 = 1;
      v13 = *(_DWORD *)(*(_QWORD *)a1 + 1756LL);
      if ( v13 == v10[97] || v10[52] == 1 && (v10[181] & 4) == 0 )
      {
        v9 = RFONTOBJ::bTextExtent(
               (RFONTOBJ *)&v17,
               a1,
               a2,
               a3,
               v13,
               *(_DWORD *)(*(_QWORD *)(v11 + 976) + 280LL),
               *(_DWORD *)(*(_QWORD *)(v11 + 976) + 284LL),
               *(_DWORD *)(*(_QWORD *)(v11 + 976) + 288LL),
               a5,
               a4);
        if ( v9
          && v13
          && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 208LL) == 1
          && !(unsigned int)DC::bUseMetaPtoD(*(DC **)a1)
          && (v17[181] & 4) != 0 )
        {
          cy = (float)a4->cy;
          cx = (float)a4->cx;
          v16 = (__m128i)COERCE_UNSIGNED_INT((float)v13);
          v19 = cy;
          *(float *)v16.m128i_i32 = *(float *)v16.m128i_i32 / 10.0;
          memset(v22, 0, sizeof(v22));
          v21 = efCos((unsigned int)_mm_cvtsi128_si32(v16));
          EFLOAT::vAbs((EFLOAT *)&v21);
          DWORD2(v22[0]) = v21;
          LODWORD(v22[0]) = efSin((unsigned int)_mm_cvtsi128_si32(v16));
          EFLOAT::vAbs((EFLOAT *)v22);
          DWORD1(v22[0]) = v22[0];
          *(_QWORD *)((char *)v22 + 12) = 0LL;
          v20 = 0LL;
          EXFORMOBJ::vInit((EXFORMOBJ *)&v20, (struct MATRIX *)&v21, 33);
          if ( ((_DWORD)v20[8] & 2) == 0 )
            v12 = EXFORMOBJ::bXform((EXFORMOBJ *)&v20, (const struct VECTORFL *)&cx, (struct VECTORFL *)&cx, 1uLL);
          v9 = v12;
          if ( v12 )
          {
            EFLOAT::vAbs((EFLOAT *)&cx);
            EFLOAT::vAbs((EFLOAT *)&v19);
            v9 = EPOINTFL::bToPOINTL((EPOINTFL *)&cx, (struct _POINTL *)a4);
          }
        }
      }
      else
      {
        DC::QuickInitXform(v11, &v20, 516LL);
        ESTROBJ::vInit(
          (ESTROBJ *)v23,
          a2,
          a3,
          a1,
          (struct RFONTOBJ *)&v17,
          &v20,
          0LL,
          0,
          v13,
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 280LL),
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 284LL),
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 288LL),
          0,
          0,
          0,
          0LL,
          0LL,
          0);
        if ( (v23[232] & 4) != 0 )
          v9 = ESTROBJ::bTextExtent((ESTROBJ *)v23, (struct RFONTOBJ *)&v17, v13, a4);
        ESTROBJ::~ESTROBJ((ESTROBJ *)v23);
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
  }
  else
  {
    *a4 = 0LL;
    return 1;
  }
  return v9;
}
