/*
 * XREFs of ?GrepGetTextExtentExW@@YAHAEAVDCOBJ@@PEAGKKPEAK2PEAUtagSIZE@@K@Z @ 0x1401A60AC
 * Callers:
 *     NtGdiGetTextExtentExW @ 0x140280E20 (NtGdiGetTextExtentExW.c)
 *     ?GrepGetCharacterPlacementW@@YAKAEAVDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@K@Z @ 0x1403339C4 (-GrepGetCharacterPlacementW@@YAKAEAVDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@K@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInit@ESTROBJ@@QEAAXPEBGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1400BE594 (-vInit@ESTROBJ@@QEAAXPEBGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400C5C18 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1401A6358 (--1ESTROBJ@@QEAA@XZ.c)
 *     ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1401A63B0 (-bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1401C06D0 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepGetTextExtentExW(
        struct DCOBJ *a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned int *a6,
        struct tagSIZE *a7,
        char a8)
{
  unsigned int v8; // r15d
  int *v9; // rbx
  int *v13; // r14
  unsigned int v14; // eax
  __int64 v16; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v17; // [rsp+98h] [rbp-78h]
  struct XDCOBJ *v18; // [rsp+A0h] [rbp-70h]
  float *v19[3]; // [rsp+A8h] [rbp-68h] BYREF
  _BYTE v20[320]; // [rsp+C0h] [rbp-50h] BYREF
  char v21; // [rsp+200h] [rbp+F0h] BYREF

  v8 = 0;
  v9 = (int *)a6;
  v17 = a4;
  v18 = a1;
  if ( (a2 || !a3) && a7 )
  {
    if ( a3 )
    {
      DC::QuickInitXform(*(_QWORD *)a1, v19, 516LL);
      v16 = 0LL;
      if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v16, a1, 0, 2 * (a8 & 1u) + 2) )
        GreAcquireSemaphore<5,RFONT *>(v16);
      if ( !v16 )
        goto LABEL_25;
      if ( (*(_DWORD *)(v16 + 84) & 4) != 0 )
        RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v16, a2, a3);
      v13 = 0LL;
      if ( !a6 && a5 )
      {
        if ( a3 <= 0x28 )
        {
          v9 = (int *)&v21;
          goto LABEL_13;
        }
        if ( 4 * a3 )
        {
          v9 = (int *)Win32AllocPoolZInit(4 * a3, 1954051143LL);
          v13 = v9;
          if ( v9 )
            goto LABEL_13;
        }
        else
        {
          v9 = 0LL;
        }
        EngSetLastError(8u);
      }
LABEL_13:
      ESTROBJ::vInit(
        (ESTROBJ *)v20,
        a2,
        a3,
        v18,
        (struct RFONTOBJ *)&v16,
        v19,
        0LL,
        0,
        *(_DWORD *)(*(_QWORD *)v18 + 1756LL),
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 976LL) + 280LL),
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 976LL) + 284LL),
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 976LL) + 288LL),
        0,
        0,
        0,
        v9,
        0LL,
        0);
      if ( (v20[232] & 4) != 0 && (unsigned int)ESTROBJ::bTextExtent((ESTROBJ *)v20, (struct RFONTOBJ *)&v16, 0, a7) )
      {
        if ( a5 && v9 )
        {
          v14 = 0;
          do
          {
            if ( *v9 > v17 )
              break;
            ++v14;
            ++v9;
          }
          while ( v14 < a3 );
          *a5 = v14;
        }
        v8 = 1;
      }
      if ( v13 )
        Win32FreePool(v13);
      ESTROBJ::~ESTROBJ((ESTROBJ *)v20);
LABEL_25:
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16);
      return v8;
    }
    if ( a5 )
      *a5 = 0;
    return 1LL;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
