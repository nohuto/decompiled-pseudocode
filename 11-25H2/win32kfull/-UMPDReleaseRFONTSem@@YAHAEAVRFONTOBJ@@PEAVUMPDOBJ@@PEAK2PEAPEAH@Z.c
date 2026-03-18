/*
 * XREFs of ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400DA83C
 * Callers:
 *     ?GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z @ 0x1400D1570 (-GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z.c)
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1400D16D0 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1400D1DA0 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pifi @ 0x1400D4710 (NtGdiFONTOBJ_pifi.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1400D9BD0 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ?bProxyDrvTextOut@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAUHDEV__@@K4@Z @ 0x1400D9D50 (-bProxyDrvTextOut@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOB.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1400F9B88 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x14021C590 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x14022EAF4 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 *     NtGdiEngTextOut @ 0x140264F30 (NtGdiEngTextOut.c)
 *     ?EPATHOBJ_bTextOutSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ@@PEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x140301534 (-EPATHOBJ_bTextOutSimpleFill@@YA-AV-$ReturnValueTracer@H@@PEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ.c)
 *     ?EPATHOBJ_bTextOutSimpleStroke1@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ@@PEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1403016B8 (-EPATHOBJ_bTextOutSimpleStroke1@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ@@PEAUHDEV__@@PEAVSURF.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1403352A0 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x140336580 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@PEAUHDEV__@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x140337F58 (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@PEAUHDEV__@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x14033CB00 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x14033CC60 (NtGdiFONTOBJ_pfdg.c)
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$0P@PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400D2290 (--$GreReleaseSemaphoreExclusive@$0P@PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??$GreAcquireSemaphore@$0P@PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400D22F8 (--$GreAcquireSemaphore@$0P@PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400DA758 (--$GreReleaseSemaphoreExclusive@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??$GrepIsLockOwnedExclusiveByCurrentThread@$04PEAVRFONT@@@@YA_NAEBQEAVRFONT@@@Z @ 0x1400DAB3C (--$GrepIsLockOwnedExclusiveByCurrentThread@$04PEAVRFONT@@@@YA_NAEBQEAVRFONT@@@Z.c)
 *     ?GrepIsLockOwnedExclusiveByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z @ 0x1400DAB5C (-GrepIsLockOwnedExclusiveByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z.c)
 *     PALLOCNOZ @ 0x1400FD16C (PALLOCNOZ.c)
 *     ?bAllocFontLinks@UMPDOBJ@@QEAAHI@Z @ 0x1401E6BBC (-bAllocFontLinks@UMPDOBJ@@QEAAHI@Z.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
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
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rbp
  __int64 v14; // rbp
  __int64 v15; // rbp
  char *v17; // r12
  unsigned int v18; // r15d
  __int64 v19; // r13
  __int64 v20; // rbx
  __int64 v21; // rax
  HSEMAPHORE v22; // rcx
  __int64 v23; // rax
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF
  unsigned int *v25; // [rsp+70h] [rbp+18h]

  v25 = a3;
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
  v11 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(v11 + 856) )
    goto LABEL_14;
  GreAcquireSemaphore<15,RFONT *>(v11);
  v12 = *(_QWORD *)(*(_QWORD *)a1 + 728LL);
  v24 = v12;
  if ( v12 && (unsigned __int8)GrepIsLockOwnedExclusiveByCurrentThread<5,RFONT *>(&v24) )
  {
    GreReleaseSemaphoreExclusive<5,RFONT *>(v12);
    if ( v10 )
      *((_DWORD *)a2 + 111) |= 0x20u;
    else
      *v6 |= 0x20u;
  }
  v13 = *(_QWORD *)(*(_QWORD *)a1 + 736LL);
  v24 = v13;
  if ( v13 && (unsigned __int8)GrepIsLockOwnedExclusiveByCurrentThread<5,RFONT *>(&v24) )
  {
    GreReleaseSemaphoreExclusive<5,RFONT *>(v13);
    if ( v10 )
      *((_DWORD *)a2 + 111) |= 0x40u;
    else
      *v6 |= 0x40u;
  }
  v14 = *(_QWORD *)(*(_QWORD *)a1 + 744LL);
  v24 = v14;
  if ( v14 && (unsigned __int8)GrepIsLockOwnedExclusiveByCurrentThread<5,RFONT *>(&v24) )
  {
    GreReleaseSemaphoreExclusive<5,RFONT *>(v14);
    if ( v10 )
      *((_DWORD *)a2 + 111) |= 0x80u;
    else
      *v6 |= 0x80u;
  }
  v15 = *(unsigned int *)(*(_QWORD *)a1 + 848LL);
  if ( (_DWORD)v15 )
  {
    if ( v10 )
    {
      v17 = 0LL;
      if ( !(unsigned int)UMPDOBJ::bAllocFontLinks(a2, v15) )
        goto LABEL_13;
    }
    else
    {
      if ( (unsigned int)v15 <= 0xA )
        v17 = (char *)*v9;
      else
        v17 = (char *)PALLOCNOZ((unsigned int)(4 * v15), 1886221639LL);
      *v9 = v17;
      if ( !v17 )
        goto LABEL_20;
      *a4 = v15;
      memset_0(v17, 0, 4 * v15);
    }
    v18 = 0;
    v19 = 0LL;
    v24 = 0LL;
    v20 = 0LL;
    do
    {
      v21 = *(_QWORD *)(v20 + *(_QWORD *)(*(_QWORD *)a1 + 752LL));
      if ( v21 )
      {
        v22 = *(HSEMAPHORE *)(v21 + 504);
        if ( v22 )
        {
          if ( GrepIsLockOwnedExclusiveByCurrentThread(v22) )
          {
            GreReleaseSemaphoreExclusive<5,RFONT *>(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 752LL) + v20));
            if ( v10 )
            {
              if ( v18 < *((_DWORD *)a2 + 112) )
              {
                v23 = *((_QWORD *)a2 + 52);
                if ( v23 )
                  *(_DWORD *)(v23 + v19) = 1;
              }
            }
            else
            {
              *(_DWORD *)&v17[v19] = 1;
            }
          }
        }
      }
      ++v18;
      v20 += 8LL;
      v19 += 4LL;
    }
    while ( v18 < (unsigned int)v15 );
    v6 = v25;
  }
  if ( !v10 )
  {
LABEL_20:
    *v6 |= *(_DWORD *)(*(_QWORD *)a1 + 720LL) << 16;
    *(_DWORD *)(*(_QWORD *)a1 + 720LL) |= 0x200u;
  }
LABEL_13:
  GreReleaseSemaphoreExclusive<15,RFONT *>(*(_QWORD *)a1);
LABEL_14:
  if ( *(_QWORD *)(*(_QWORD *)a1 + 504LL) && (unsigned __int8)GrepIsLockOwnedExclusiveByCurrentThread<5,RFONT *>(a1) )
  {
    GreReleaseSemaphoreExclusive<5,RFONT *>(*(_QWORD *)a1);
    if ( v10 )
      *((_DWORD *)a2 + 111) |= 0x10u;
    else
      *v6 |= 0x10u;
  }
  return 1LL;
}
