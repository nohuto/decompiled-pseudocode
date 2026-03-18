/*
 * XREFs of ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1400D58A0
 * Callers:
 *     ?bProxyDrvTextOut@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAUHDEV__@@K4@Z @ 0x1400D4898 (-bProxyDrvTextOut@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOB.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1400D55E8 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1400D5BD0 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1400D6720 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     ?GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z @ 0x1400D9100 (-GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z.c)
 *     NtGdiFONTOBJ_pifi @ 0x1400D9200 (NtGdiFONTOBJ_pifi.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1400DBE60 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     ?EPATHOBJ_bTextOutSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ@@PEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x140265F74 (-EPATHOBJ_bTextOutSimpleFill@@YA-AV-$ReturnValueTracer@H@@PEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x140283980 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?EPATHOBJ_bTextOutSimpleStroke1@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ@@PEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x140318DAC (-EPATHOBJ_bTextOutSimpleStroke1@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ@@PEAUHDEV__@@PEAVSURF.c)
 *     NtGdiEngTextOut @ 0x14032EF00 (NtGdiEngTextOut.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x14032F550 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x14032F6B0 (NtGdiFONTOBJ_pfdg.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x14034B250 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x14034C290 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@PEAUHDEV__@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x14034D380 (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@PEAUHDEV__@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400C5C18 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$0P@PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400D5B14 (--$GreReleaseSemaphoreExclusive@$0P@PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??$GreAcquireSemaphore@$0P@PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400D5B7C (--$GreAcquireSemaphore@$0P@PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 */

void __fastcall UMPDAcquireRFONTSem(
        struct RFONTOBJ *a1,
        struct UMPDOBJ *a2,
        unsigned int a3,
        unsigned int a4,
        const int *a5)
{
  int v6; // edi
  __int64 v7; // rcx
  int v11; // r15d
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rbp
  unsigned int v17; // r14d
  __int64 v18; // rdi
  __int64 v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v23; // rdi
  __int64 v24; // rcx

  v6 = 0;
  v7 = *(_QWORD *)a1;
  if ( v7 )
  {
    if ( a2 )
    {
      v6 = 1;
      a3 = *((_DWORD *)a2 + 107);
      if ( *((_QWORD *)a2 + 50) )
        a4 = *((_DWORD *)a2 + 108);
      else
        a4 = 0;
    }
    if ( (a3 & 0x10) != 0 )
    {
      if ( *(_QWORD *)(v7 + 504) )
      {
        GreAcquireSemaphore<5,RFONT *>(v7);
        if ( v6 )
          *((_DWORD *)a2 + 107) &= ~0x10u;
      }
    }
    if ( *(_QWORD *)(*(_QWORD *)a1 + 856LL) )
    {
      GreAcquireSemaphore<15,RFONT *>();
      v11 = 0;
      if ( !v6 )
      {
        v12 = *(_DWORD *)(*(_QWORD *)a1 + 720LL);
        if ( (v12 & 0x200) != 0 )
        {
          v11 = 1;
          *(_DWORD *)(*(_QWORD *)a1 + 720LL) = v12 & 0xFFFFFDFF;
          *(_DWORD *)(*(_QWORD *)a1 + 720LL) = HIWORD(a3);
        }
      }
      if ( (a3 & 0x20) != 0 )
      {
        v13 = *(_QWORD *)(*(_QWORD *)a1 + 728LL);
        if ( v13 )
        {
          GreAcquireSemaphore<5,RFONT *>(v13);
          if ( v6 )
            *((_DWORD *)a2 + 107) &= ~0x20u;
        }
      }
      if ( (a3 & 0x40) != 0 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)a1 + 736LL);
        if ( v14 )
        {
          if ( v6 )
          {
            GreAcquireSemaphore<5,RFONT *>(v14);
            *((_DWORD *)a2 + 107) &= ~0x40u;
          }
          else if ( v11 )
          {
            GreAcquireSemaphore<5,RFONT *>(v14);
          }
        }
      }
      if ( (a3 & 0x80u) != 0 )
      {
        v15 = *(_QWORD *)(*(_QWORD *)a1 + 744LL);
        if ( v15 )
        {
          if ( v6 )
          {
            GreAcquireSemaphore<5,RFONT *>(v15);
            *((_DWORD *)a2 + 107) &= ~0x80u;
          }
          else if ( v11 )
          {
            GreAcquireSemaphore<5,RFONT *>(v15);
          }
        }
      }
      if ( a4 )
      {
        v16 = *(unsigned int *)(*(_QWORD *)a1 + 848LL);
        if ( a4 <= (unsigned int)v16 )
          v16 = a4;
        v17 = 0;
        if ( (_DWORD)v16 )
        {
          if ( v6 )
          {
            v18 = 0LL;
            v19 = 0LL;
            do
            {
              v20 = *(_QWORD *)(v19 + *(_QWORD *)(*(_QWORD *)a1 + 752LL));
              if ( v20 )
              {
                if ( v17 < *((_DWORD *)a2 + 108) )
                {
                  if ( *(_DWORD *)(v18 + *((_QWORD *)a2 + 50)) )
                  {
                    GreAcquireSemaphore<5,RFONT *>(v20);
                    if ( v17 < *((_DWORD *)a2 + 108) )
                    {
                      v21 = *((_QWORD *)a2 + 50);
                      if ( v21 )
                        *(_DWORD *)(v18 + v21) = 0;
                    }
                  }
                }
              }
              ++v17;
              v19 += 8LL;
              v18 += 4LL;
            }
            while ( v17 < (unsigned int)v16 );
          }
          else
          {
            v23 = 0LL;
            do
            {
              v24 = *(_QWORD *)(v23 + *(_QWORD *)(*(_QWORD *)a1 + 752LL));
              if ( v24 && *a5 && v11 )
                GreAcquireSemaphore<5,RFONT *>(v24);
              v23 += 8LL;
              ++a5;
              --v16;
            }
            while ( v16 );
          }
        }
      }
      GreReleaseSemaphoreExclusive<15,RFONT *>(*(_QWORD *)a1);
    }
  }
}
