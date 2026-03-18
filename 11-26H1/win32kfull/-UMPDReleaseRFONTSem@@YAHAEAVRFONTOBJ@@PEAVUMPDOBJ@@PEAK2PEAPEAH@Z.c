/*
 * XREFs of ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400D52F0
 * Callers:
 *     ?bProxyDrvTextOut@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAUHDEV__@@K4@Z @ 0x1400D4898 (-bProxyDrvTextOut@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOB.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1400D55E8 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1400D5BD0 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1400D6720 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     ?GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z @ 0x1400D9100 (-GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z.c)
 *     NtGdiFONTOBJ_pifi @ 0x1400D9200 (NtGdiFONTOBJ_pifi.c)
 *     EngTextOut @ 0x1400DA230 (EngTextOut.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@@Z @ 0x1400DBDFC (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@@Z.c)
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
 *     ??$GrepIsLockOwnedExclusiveByCurrentThread@$04PEAVRFONT@@@@YA_NAEBQEAVRFONT@@@Z @ 0x1400D5774 (--$GrepIsLockOwnedExclusiveByCurrentThread@$04PEAVRFONT@@@@YA_NAEBQEAVRFONT@@@Z.c)
 *     ?GrepIsLockOwnedExclusiveByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z @ 0x1400D5794 (-GrepIsLockOwnedExclusiveByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400D57B8 (--$GreReleaseSemaphoreExclusive@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$0P@PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400D5B14 (--$GreReleaseSemaphoreExclusive@$0P@PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??$GreAcquireSemaphore@$0P@PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400D5B7C (--$GreAcquireSemaphore@$0P@PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     ?bAllocFontLinks@UMPDOBJ@@QEAAHI@Z @ 0x14021B7BC (-bAllocFontLinks@UMPDOBJ@@QEAAHI@Z.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall UMPDReleaseRFONTSem(
        struct RFONTOBJ *a1,
        struct UMPDOBJ *a2,
        unsigned int *a3,
        unsigned int *a4,
        void **a5)
{
  unsigned int *v6; // rbx
  void **v9; // r15
  int v10; // r14d
  __int64 v11; // rbp
  __int64 v12; // rbp
  __int64 v13; // rbp
  __int64 v14; // rbp
  char *v16; // r12
  unsigned int v17; // r15d
  __int64 v18; // r13
  __int64 v19; // rbx
  __int64 v20; // rax
  HSEMAPHORE v21; // rcx
  __int64 v22; // rax
  __int64 v23; // [rsp+60h] [rbp+8h] BYREF
  unsigned int *v24; // [rsp+70h] [rbp+18h]

  v24 = a3;
  v6 = a3;
  if ( !*(_QWORD *)a1 )
    return 0LL;
  if ( a2 )
  {
    if ( !a3 && !a4 )
    {
      v9 = a5;
      if ( !a5 )
      {
        v10 = 1;
        goto LABEL_7;
      }
    }
    return 0LL;
  }
  if ( !a3 )
    return 0LL;
  if ( !a4 )
    return 0LL;
  v9 = a5;
  if ( !a5 )
    return 0LL;
  v10 = 0;
  *a3 = 0;
  *a4 = 0;
LABEL_7:
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 856LL) )
    goto LABEL_15;
  GreAcquireSemaphore<15,RFONT *>();
  v11 = *(_QWORD *)(*(_QWORD *)a1 + 728LL);
  v23 = v11;
  if ( v11 && (unsigned __int8)GrepIsLockOwnedExclusiveByCurrentThread<5,RFONT *>(&v23) )
  {
    GreReleaseSemaphoreExclusive<5,RFONT *>(v11);
    if ( v10 )
      *((_DWORD *)a2 + 107) |= 0x20u;
    else
      *v6 |= 0x20u;
  }
  v12 = *(_QWORD *)(*(_QWORD *)a1 + 736LL);
  v23 = v12;
  if ( v12 && (unsigned __int8)GrepIsLockOwnedExclusiveByCurrentThread<5,RFONT *>(&v23) )
  {
    GreReleaseSemaphoreExclusive<5,RFONT *>(v12);
    if ( v10 )
      *((_DWORD *)a2 + 107) |= 0x40u;
    else
      *v6 |= 0x40u;
  }
  v13 = *(_QWORD *)(*(_QWORD *)a1 + 744LL);
  v23 = v13;
  if ( v13 && (unsigned __int8)GrepIsLockOwnedExclusiveByCurrentThread<5,RFONT *>(&v23) )
  {
    GreReleaseSemaphoreExclusive<5,RFONT *>(v13);
    if ( v10 )
      *((_DWORD *)a2 + 107) |= 0x80u;
    else
      *v6 |= 0x80u;
  }
  v14 = *(unsigned int *)(*(_QWORD *)a1 + 848LL);
  if ( (_DWORD)v14 )
  {
    if ( v10 )
    {
      v16 = 0LL;
      if ( !(unsigned int)UMPDOBJ::bAllocFontLinks(a2, v14) )
        goto LABEL_14;
    }
    else
    {
      if ( (unsigned int)v14 <= 0xA )
        v16 = (char *)*v9;
      else
        v16 = (char *)PALLOCNOZ((unsigned int)(4 * v14), 1886221639LL);
      *v9 = v16;
      if ( !v16 )
        goto LABEL_13;
      *a4 = v14;
      memset_0(v16, 0, 4 * v14);
    }
    v17 = 0;
    v18 = 0LL;
    v19 = 0LL;
    do
    {
      v20 = *(_QWORD *)(v19 + *(_QWORD *)(*(_QWORD *)a1 + 752LL));
      if ( v20 )
      {
        v21 = *(HSEMAPHORE *)(v20 + 504);
        if ( v21 )
        {
          if ( GrepIsLockOwnedExclusiveByCurrentThread(v21) )
          {
            GreReleaseSemaphoreExclusive<5,RFONT *>(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 752LL) + v19));
            if ( v10 )
            {
              if ( v17 < *((_DWORD *)a2 + 108) )
              {
                v22 = *((_QWORD *)a2 + 50);
                if ( v22 )
                  *(_DWORD *)(v22 + v18) = 1;
              }
            }
            else
            {
              *(_DWORD *)&v16[v18] = 1;
            }
          }
        }
      }
      ++v17;
      v19 += 8LL;
      v18 += 4LL;
    }
    while ( v17 < (unsigned int)v14 );
    v6 = v24;
  }
  if ( !v10 )
  {
LABEL_13:
    *v6 |= *(_DWORD *)(*(_QWORD *)a1 + 720LL) << 16;
    *(_DWORD *)(*(_QWORD *)a1 + 720LL) |= 0x200u;
  }
LABEL_14:
  GreReleaseSemaphoreExclusive<15,RFONT *>(*(_QWORD *)a1);
LABEL_15:
  if ( *(_QWORD *)(*(_QWORD *)a1 + 504LL) && (unsigned __int8)GrepIsLockOwnedExclusiveByCurrentThread<5,RFONT *>(a1) )
  {
    GreReleaseSemaphoreExclusive<5,RFONT *>(*(_QWORD *)a1);
    if ( v10 )
      *((_DWORD *)a2 + 107) |= 0x10u;
    else
      *v6 |= 0x10u;
  }
  return 1LL;
}
