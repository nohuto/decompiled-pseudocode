/*
 * XREFs of ?GrepGetFontUnicodeRanges@@YAKAEAVDCOBJ@@PEAUtagGLYPHSET@@@Z @ 0x140206DE8
 * Callers:
 *     NtGdiGetFontUnicodeRanges @ 0x140280260 (NtGdiGetFontUnicodeRanges.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400C5C18 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x140101C04 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x140101DB4 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 */

__int64 __fastcall GrepGetFontUnicodeRanges(struct DCOBJ *a1, struct tagGLYPHSET *a2)
{
  DWORD v2; // ebx
  DWORD v4; // esi
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _FD_GLYPHSET *v7; // rax
  __int64 v8; // rdx
  __int64 v10; // rcx
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF
  __int64 *v12; // [rsp+48h] [rbp+20h] BYREF

  v2 = 0;
  v11 = 0LL;
  v4 = 0;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v11, a1, 0, 2u) )
    GreAcquireSemaphore<5,RFONT *>(v11);
  if ( !v11 )
    goto LABEL_7;
  v12 = *(__int64 **)(v11 + 120);
  v7 = PFEOBJ::pfdg(&v12, v5, v6);
  if ( v7 )
  {
    v4 = 4 * v7->cRuns + 16;
    if ( a2 )
    {
      if ( a2->cbThis == v4 )
      {
        a2->cbThis = v4;
        a2->cGlyphsSupported = v7->cGlyphsSupported;
        a2->cRanges = v7->cRuns;
        a2->flAccel = 0;
        if ( (v7->flAccel & 2) != 0 )
          a2->flAccel = 1;
        if ( v7->cRuns )
        {
          do
          {
            v8 = v2;
            v10 = v2++;
            v10 *= 2LL;
            a2->ranges[v8].wcLow = *(&v7->awcrun[0].wcLow + 4 * v10);
            a2->ranges[v8].cGlyphs = *(&v7->awcrun[0].cGlyphs + 4 * v10);
          }
          while ( v2 < v7->cRuns );
        }
      }
      else
      {
        v4 = 0;
      }
    }
    PFEOBJ::vFreepfdg((__int64 ***)&v12, v8, (__int64)v7);
LABEL_7:
    v2 = v4;
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
  return v2;
}
