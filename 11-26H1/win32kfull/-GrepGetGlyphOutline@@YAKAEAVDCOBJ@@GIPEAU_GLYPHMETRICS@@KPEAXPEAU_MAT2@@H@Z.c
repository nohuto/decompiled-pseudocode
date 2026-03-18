/*
 * XREFs of ?GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z @ 0x14010CB48
 * Callers:
 *     NtGdiGetGlyphOutline @ 0x140280390 (NtGdiGetGlyphOutline.c)
 * Callees:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x14006E3E4 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x14007009C (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140071640 (--$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400717B0 (--$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     EngUnmapFontFileFD @ 0x1400C2BE0 (EngUnmapFontFileFD.c)
 *     ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x1400C3EF0 (-vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400C5C18 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1400FAC2C (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1400FBC50 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1400FC304 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1400FC44C (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x14010DA74 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x140174084 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1401BB14C (-dtorHelper@RFONTOBJ@@QEAAXXZ.c)
 *     ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z @ 0x1401C2530 (-bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1401C5990 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ??0?$SEMOBJ@$0P@@@QEAA@PEAVRFONT@@@Z @ 0x1401D8A0C (--0-$SEMOBJ@$0P@@@QEAA@PEAVRFONT@@@Z.c)
 *     ?IsPerFontEUDC@RFONTOBJ@@QEAA_NXZ @ 0x1401DEC20 (-IsPerFontEUDC@RFONTOBJ@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall GrepGetGlyphOutline(
        struct DCOBJ *a1,
        unsigned __int16 a2,
        int a3,
        struct _GLYPHMETRICS *a4,
        unsigned int a5,
        _DWORD *a6,
        struct _MAT2 *a7,
        int a8)
{
  unsigned int v9; // r15d
  struct _GLYPHMETRICS *v10; // r12
  unsigned int v11; // r14d
  int v12; // ebx
  unsigned int v13; // edi
  unsigned int v14; // r13d
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rsi
  SIZE sizLogResPpi; // rax
  unsigned int v21; // eax
  unsigned int v22; // esi
  LONG top; // ecx
  int v24; // eax
  int v25; // eax
  unsigned int v26; // r15d
  struct _FONTOBJ *v27; // rbx
  __int64 (__fastcall *v28)(_QWORD, struct _FONTOBJ *, _QWORD, __int64, struct _GLYPHDATA *, unsigned int, _DWORD *); // rdi
  __int64 v29; // r9
  ULONG_PTR *v30; // rbx
  __int64 v31; // rdi
  unsigned int v32; // edi
  unsigned int v33; // edi
  unsigned int v34; // edi
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rbx
  HSEMAPHORE v40; // rbx
  struct _GRETHREAD *v41; // rax
  unsigned int v43; // r12d
  __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // rbx
  struct RFONTOBJ *v47; // r8
  struct _GLYPHDATA *EudcMetrics; // rax
  __int64 v49; // rbx
  unsigned int i; // r12d
  __int64 v51; // rax
  __int64 v52; // rbx
  RFONTOBJ *v53; // rcx
  __int64 v54; // r9
  struct RFONTOBJ *v55; // r8
  struct _GLYPHDATA *v56; // rax
  __int64 v57; // rbx
  struct RFONTOBJ *v58; // r8
  unsigned int v59; // r12d
  struct _GLYPHDATA *v60; // rax
  unsigned __int16 v61; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v62; // [rsp+48h] [rbp-B8h] BYREF
  struct _FONTOBJ *v63; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v64; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v65; // [rsp+60h] [rbp-A0h] BYREF
  HSEMAPHORE v66; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v67; // [rsp+70h] [rbp-90h]
  __int64 v68; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v69; // [rsp+80h] [rbp-80h]
  __int64 *v70; // [rsp+88h] [rbp-78h]
  __int64 v71; // [rsp+90h] [rbp-70h] BYREF
  __int64 v72; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v73; // [rsp+A0h] [rbp-60h]
  int v74; // [rsp+A4h] [rbp-5Ch]
  struct _MAT2 *v75; // [rsp+B0h] [rbp-50h] BYREF
  RFONTOBJ *v76; // [rsp+B8h] [rbp-48h]
  struct XDCOBJ *v77; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v78; // [rsp+C8h] [rbp-38h]
  _QWORD v79[2]; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD *v80; // [rsp+E0h] [rbp-20h]
  struct _GLYPHDATA v81; // [rsp+F0h] [rbp-10h] BYREF

  v9 = a2;
  v10 = a4;
  v80 = a6;
  v11 = 0;
  v77 = a1;
  v79[0] = a4;
  v75 = a7;
  memset_0(&v81, 0, sizeof(v81));
  v67 = -1;
  v12 = a3 & 0x80;
  v74 = a3 & 0x100;
  v13 = a3 & 0xFFFFFE7F;
  v14 = 0;
  v15 = 0LL;
  v73 = v12 != 0 ? 4 : 2;
  if ( !v10 || !v75 )
  {
    EngSetLastError(0x57u);
    return v67;
  }
  v64 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v64, v77, 0, 2u) )
    GreAcquireSemaphore<5,RFONT *>(v64);
  v72 = 0LL;
  v70 = &v64;
  v17 = v64;
  v71 = 0LL;
  v68 = 0LL;
  if ( v64 )
  {
    if ( v12 )
    {
      v11 = v9;
      v69 = v9;
    }
    else
    {
      v62 = 0;
      v61 = v9;
      RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v64, &v61, 1, &v62, 0, 0);
      v11 = v62;
      v17 = v64;
      v69 = v62;
    }
    if ( v11 == *(_DWORD *)(v17 + 456)
      && !v12
      && (unsigned int)RFONTOBJ::bIsLinkedGlyph((RFONTOBJ *)&v64, (unsigned __int16)v9, v16) )
    {
      v35 = v64;
      if ( *(_QWORD *)(v64 + 856) )
      {
        v11 = -1;
        SEMOBJ<15>::SEMOBJ<15>(&v66, v64);
        v39 = *(_QWORD *)(W32GetSessionState(v37, v36, v38) + 96);
        GreAcquirePushLockShared2<16,0>(v39 + 4864);
        _InterlockedIncrement((volatile signed __int32 *)(v39 + 13500));
        GreReleasePushLockShared2<16,0>(v39 + 4864);
        RFONTOBJ::vInitEUDC((RFONTOBJ *)&v64, v77);
        RFONTOBJ::vLockEUDCFontsGlyphCache((RFONTOBJ *)&v64, 0);
        *(_DWORD *)(v35 + 720) |= 1u;
        v40 = v66;
        if ( v66 )
        {
          EtwTraceGreLockReleaseSemaphore(L"RFONT_EUDC", v66);
          v41 = GreGetCurrentThreadCrossSessionCheck();
          if ( v41 )
          {
            if ( (*((_BYTE *)v41 + 23))-- == 1 )
              *(_QWORD *)v41 &= ~0x8000uLL;
            if ( !*(_QWORD *)v41 )
              GrepOnAllLocksReleased();
          }
          GreReleaseSemaphoreExclusiveInternal(v40);
        }
        v43 = *(_DWORD *)(v35 + 848);
        v65 = v43;
        if ( !v43 )
          goto LABEL_96;
        v44 = v43 - 1;
        LODWORD(v63) = v44;
        v45 = *(_QWORD *)(v35 + 752);
        v62 = 0;
        v61 = v9;
        v68 = *(_QWORD *)(v45 + 8 * v44);
        v46 = v68;
        RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v68, &v61, 1, &v62, 0, 0);
        if ( v62 == *(_DWORD *)(v46 + 456) )
          goto LABEL_96;
        v66 = *(HSEMAPHORE *)(*(_QWORD *)(v35 + 752) + 8 * v44);
        if ( v66 )
        {
          if ( RFONTOBJ::IsPerFontEUDC((RFONTOBJ *)&v66) )
          {
            v65 = (unsigned int)v63;
            EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v66, v9, v47);
            if ( EudcMetrics )
            {
              if ( EudcMetrics->fxD )
              {
                v11 = v62;
                v70 = &v68;
              }
            }
          }
        }
        v66 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v66);
        if ( v11 == -1 )
        {
LABEL_96:
          v49 = *(_QWORD *)(v35 + 736);
          if ( !v49
            || (v62 = 0,
                v72 = v49,
                v61 = v9,
                RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v72, &v61, 1, &v62, 0, 0),
                v62 == *(_DWORD *)(v49 + 456))
            || (v11 = v62, v70 = &v72, v62 == -1) )
          {
            for ( i = 0; i < v65; ++i )
            {
              v51 = *(_QWORD *)(v35 + 752);
              v62 = 0;
              v61 = v9;
              v68 = *(_QWORD *)(v51 + 8LL * i);
              v52 = v68;
              RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v68, &v61, 1, &v62, 0, 0);
              if ( v62 != *(_DWORD *)(v52 + 456) )
              {
                v54 = *(_QWORD *)(*(_QWORD *)(v35 + 752) + 8LL * i);
                v63 = (struct _FONTOBJ *)v54;
                if ( v54 )
                {
                  if ( !(unsigned int)RFONTOBJ::bSkipCHSFontSegUISymFallback(
                                        v53,
                                        v9,
                                        *(struct PFF **)(v35 + 128),
                                        *(struct PFF **)(v54 + 128)) )
                  {
                    v56 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v63, v9, v55);
                    if ( v56 )
                    {
                      if ( v56->fxD )
                      {
                        v11 = v62;
                        v70 = &v68;
                        v63 = 0LL;
                        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v63);
                        if ( v11 != -1 )
                          goto LABEL_90;
                        break;
                      }
                    }
                  }
                }
                v63 = 0LL;
                RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v63);
              }
            }
            v57 = *(_QWORD *)(v35 + 744);
            if ( !v57 )
              goto LABEL_89;
            v65 = 0;
            v71 = v57;
            v61 = v9;
            RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v71, &v61, 1, &v65, 0, 0);
            v59 = v65;
            if ( v65 == *(_DWORD *)(v57 + 456) )
              goto LABEL_89;
            v66 = *(HSEMAPHORE *)(v35 + 744);
            if ( v66 )
            {
              v60 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v66, v9, v58);
              if ( v60 )
              {
                if ( v60->fxD )
                {
                  v11 = v59;
                  v70 = &v71;
                }
              }
            }
            v66 = 0LL;
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v66);
            if ( v11 == -1 )
            {
LABEL_89:
              RFONTOBJ::dtorHelper((RFONTOBJ *)&v64);
              v11 = v69;
              *(_DWORD *)(v35 + 720) = 0;
            }
          }
        }
LABEL_90:
        v10 = (struct _GLYPHMETRICS *)v79[0];
        v15 = 0LL;
      }
      else
      {
        v15 = 0LL;
      }
    }
  }
  if ( *v70 )
    v15 = *v70;
  else
    EngSetLastError(0x3EBu);
  v68 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v68);
  v71 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v71);
  v72 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v72);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v64);
  if ( v15 )
  {
    v63 = (struct _FONTOBJ *)v15;
    GreAcquireSemaphore<5,RFONT *>(v15);
    v18 = *(_QWORD *)(v15 + 128);
    v79[0] = v18;
    sizLogResPpi = v63[1].sizLogResPpi;
    if ( !*(_QWORD *)&sizLogResPpi
      || !*(_QWORD *)(*(_QWORD *)&sizLogResPpi + 3072LL)
      || (RESETFCOBJ::RESETFCOBJ((RESETFCOBJ *)&v75, v77, (struct RFONTOBJ *)&v63, v75, a8, v73), !(_DWORD)v75) )
    {
      EngSetLastError(0x3EBu);
LABEL_14:
      if ( v63 )
        RFONTOBJ::vReleaseCache((RFONTOBJ *)&v63);
      v63 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v63);
      return v67;
    }
    if ( v13 )
    {
      if ( v13 != 1 )
      {
        if ( v13 == 2 || v13 == 3 )
        {
          v26 = 2;
          if ( v13 != 3 )
            v26 = 0;
          v27 = v63;
          v28 = *(__int64 (__fastcall **)(_QWORD, struct _FONTOBJ *, _QWORD, __int64, struct _GLYPHDATA *, unsigned int, _DWORD *))(*(_QWORD *)(v18 + 96) + 3072LL);
          ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)&v77, (struct PFFOBJ *)v79);
          v29 = v26 | 4;
          if ( !v74 )
            v29 = v26;
          v22 = v28(0LL, v27, v11, v29, &v81, a5, v80);
          v67 = v22;
          if ( v78 )
          {
            v30 = (ULONG_PTR *)v77;
            v31 = v78;
            do
            {
              EngUnmapFontFileFD(*v30++);
              --v31;
            }
            while ( v31 );
          }
          goto LABEL_23;
        }
        if ( v13 != 4 && v13 - 5 > 1 )
        {
LABEL_25:
          if ( !HIDWORD(v75) )
          {
            RFONTOBJ::vReleaseCache(v76);
            RFONTOBJ::vMakeInactive(v76);
          }
          goto LABEL_14;
        }
      }
      v32 = v13 - 1;
      if ( v32 )
      {
        v33 = v32 - 3;
        if ( v33 )
        {
          v34 = v33 - 1;
          if ( v34 )
          {
            if ( v34 == 1 )
              v14 = 9;
          }
          else
          {
            v14 = 8;
          }
        }
        else
        {
          v14 = 6;
        }
      }
      else
      {
        v14 = 5;
      }
      v21 = PFFOBJ::QueryFontData((PFFOBJ *)v79, 0LL, v63, v14, v11, &v81, v80, a5);
    }
    else
    {
      v21 = PFFOBJ::QueryFontData((PFFOBJ *)v79, 0LL, v63, 4u, v11, &v81, 0LL, 0);
    }
    v67 = v21;
    v22 = v21;
LABEL_23:
    if ( v22 != -1 )
    {
      top = v81.rclInk.top;
      v24 = v81.rclInk.right - v81.rclInk.left;
      v10->gmptGlyphOrigin.x = v81.rclInk.left;
      v10->gmBlackBoxX = v24;
      v10->gmBlackBoxY = v81.rclInk.bottom - top;
      v25 = (v81.ptqD.x.HighPart >> 3) + 1;
      v10->gmptGlyphOrigin.y = -top;
      v10->gmCellIncX = v25 >> 1;
      v10->gmCellIncY = ((v81.ptqD.y.HighPart >> 3) + 1) >> 1;
    }
    goto LABEL_25;
  }
  return v67;
}
