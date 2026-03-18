/*
 * XREFs of ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1400D2000
 * Callers:
 *     ?GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z @ 0x1400D1570 (-GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z.c)
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1400D16D0 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1400D1DA0 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pifi @ 0x1400D4710 (NtGdiFONTOBJ_pifi.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1400D9BD0 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ?bProxyDrvTextOut@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAUHDEV__@@K4@Z @ 0x1400D9D50 (-bProxyDrvTextOut@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOB.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1400F9BF8 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x14021C590 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     NtGdiEngTextOut @ 0x140264F30 (NtGdiEngTextOut.c)
 *     ?EPATHOBJ_bTextOutSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ@@PEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x140301534 (-EPATHOBJ_bTextOutSimpleFill@@YA-AV-$ReturnValueTracer@H@@PEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ.c)
 *     ?EPATHOBJ_bTextOutSimpleStroke1@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ@@PEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1403016B8 (-EPATHOBJ_bTextOutSimpleStroke1@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ@@PEAUHDEV__@@PEAVSURF.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1403352A0 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x140336580 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@PEAUHDEV__@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x140337F58 (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@PEAUHDEV__@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x14033CB00 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x14033CC60 (NtGdiFONTOBJ_pfdg.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x140016F64 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$0P@PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400D2290 (--$GreReleaseSemaphoreExclusive@$0P@PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??$GreAcquireSemaphore@$0P@PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400D22F8 (--$GreAcquireSemaphore@$0P@PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 */

void __fastcall UMPDAcquireRFONTSem(
        struct RFONTOBJ *a1,
        struct UMPDOBJ *a2,
        unsigned int a3,
        unsigned int a4,
        const int *a5)
{
  int v6; // esi
  __int64 v7; // rcx
  int v11; // r15d
  __int64 v12; // r12
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // ebp
  __int64 v18; // r15
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // esi
  __int64 v23; // rbx
  __int64 v24; // r15
  __int64 v25; // rcx

  v6 = 0;
  v7 = *(_QWORD *)a1;
  if ( v7 )
  {
    if ( a2 )
    {
      v6 = 1;
      a3 = *((_DWORD *)a2 + 111);
      if ( *((_QWORD *)a2 + 52) )
        a4 = *((_DWORD *)a2 + 112);
      else
        a4 = 0;
    }
    if ( (a3 & 0x10) != 0 )
    {
      if ( *(_QWORD *)(v7 + 504) )
      {
        GreAcquireSemaphore<5,RFONT *>(v7);
        if ( v6 )
          *((_DWORD *)a2 + 111) &= ~0x10u;
      }
    }
    if ( *(_QWORD *)(*(_QWORD *)a1 + 856LL) )
    {
      GreAcquireSemaphore<15,RFONT *>();
      v11 = 0;
      v12 = 0LL;
      if ( !v6 )
      {
        v13 = *(_DWORD *)(*(_QWORD *)a1 + 720LL);
        if ( (v13 & 0x200) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)a1 + 720LL) = v13 & 0xFFFFFDFF;
          v11 = 1;
          v12 = 1LL;
          *(_DWORD *)(*(_QWORD *)a1 + 720LL) = HIWORD(a3);
        }
      }
      if ( (a3 & 0x20) != 0 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)a1 + 728LL);
        if ( v14 )
        {
          GreAcquireSemaphore<5,RFONT *>(v14);
          if ( v6 )
            *((_DWORD *)a2 + 111) &= ~0x20u;
        }
      }
      if ( (a3 & 0x40) != 0 )
      {
        v15 = *(_QWORD *)(*(_QWORD *)a1 + 736LL);
        if ( v15 )
        {
          if ( v6 )
          {
            GreAcquireSemaphore<5,RFONT *>(v15);
            *((_DWORD *)a2 + 111) &= ~0x40u;
          }
          else if ( v11 )
          {
            GreAcquireSemaphore<5,RFONT *>(v15);
          }
        }
      }
      if ( (a3 & 0x80u) != 0 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)a1 + 744LL);
        if ( v16 )
        {
          if ( v6 )
          {
            GreAcquireSemaphore<5,RFONT *>(v16);
            *((_DWORD *)a2 + 111) &= ~0x80u;
          }
          else if ( v11 )
          {
            GreAcquireSemaphore<5,RFONT *>(v16);
          }
        }
      }
      if ( a4 )
      {
        if ( a4 > *(_DWORD *)(*(_QWORD *)a1 + 848LL) )
          a4 = *(_DWORD *)(*(_QWORD *)a1 + 848LL);
        v17 = 0;
        if ( a4 )
        {
          if ( v6 )
          {
            v18 = 0LL;
            v19 = 0LL;
            do
            {
              v20 = *(_QWORD *)(v18 + *(_QWORD *)(*(_QWORD *)a1 + 752LL));
              if ( v20 )
              {
                if ( v17 < *((_DWORD *)a2 + 112) )
                {
                  if ( *(_DWORD *)(v19 + *((_QWORD *)a2 + 52)) )
                  {
                    GreAcquireSemaphore<5,RFONT *>(v20);
                    if ( v17 < *((_DWORD *)a2 + 112) )
                    {
                      v21 = *((_QWORD *)a2 + 52);
                      if ( v21 )
                        *(_DWORD *)(v19 + v21) = 0;
                    }
                  }
                }
              }
              ++v17;
              v19 += 4LL;
              v18 += 8LL;
            }
            while ( v17 < a4 );
          }
          else
          {
            v22 = 0;
            v23 = 0LL;
            v24 = 0LL;
            do
            {
              v25 = *(_QWORD *)(v24 + *(_QWORD *)(*(_QWORD *)a1 + 752LL));
              if ( v25 && a5[v23] && v12 )
                GreAcquireSemaphore<5,RFONT *>(v25);
              ++v22;
              v24 += 8LL;
              ++v23;
            }
            while ( v22 < a4 );
          }
        }
      }
      GreReleaseSemaphoreExclusive<15,RFONT *>(*(_QWORD *)a1);
    }
  }
}
