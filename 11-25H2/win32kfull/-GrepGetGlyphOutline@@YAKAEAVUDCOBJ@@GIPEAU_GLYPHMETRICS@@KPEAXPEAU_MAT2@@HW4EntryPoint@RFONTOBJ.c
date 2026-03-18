/*
 * XREFs of ?GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1400AEFB4
 * Callers:
 *     NtGdiGetGlyphOutline @ 0x1400AED00 (NtGdiGetGlyphOutline.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x140016F64 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x140017398 (-dtorHelper@RFONTOBJ@@QEAAXXZ.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1400174EC (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x1400180D0 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140082830 (--$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140082918 (--$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1400A8E44 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1400AE594 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1400AF7EC (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ??0RESETFCOBJ@@QEAA@AEAVUDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1400AF918 (--0RESETFCOBJ@@QEAA@AEAVUDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1400AFFB0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1400B0A5C (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     EngUnmapFontFileFD @ 0x1400B2490 (EngUnmapFontFileFD.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x140121430 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x140180754 (-vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z.c)
 *     ??0?$SEMOBJ@$0P@@@QEAA@PEAVRFONT@@@Z @ 0x140189A08 (--0-$SEMOBJ@$0P@@@QEAA@PEAVRFONT@@@Z.c)
 *     ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z @ 0x14018A2E4 (-bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0P@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14019E650 (--$GreReleaseSemaphoreCommon@$0P@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?IsPerFontEUDC@RFONTOBJ@@QEAA_NXZ @ 0x1401AD1EC (-IsPerFontEUDC@RFONTOBJ@@QEAA_NXZ.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x140262338 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall GrepGetGlyphOutline(
        struct UDCOBJ *a1,
        unsigned __int16 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        void *a6,
        struct _MAT2 *a7,
        int a8)
{
  __int64 v9; // rsi
  unsigned int v10; // r15d
  unsigned int v11; // r14d
  unsigned int v12; // r13d
  int v13; // ebx
  unsigned int v14; // edi
  unsigned int v15; // r12d
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rbx
  SIZE sizLogResPpi; // rax
  unsigned int v21; // eax
  LONG top; // ecx
  int v23; // eax
  int v24; // eax
  bool v26; // zf
  struct _FONTOBJ *v27; // rdi
  unsigned int v28; // r15d
  __int64 (__fastcall *v29)(_QWORD, struct _FONTOBJ *, _QWORD, __int64, struct _GLYPHDATA *, unsigned int, void *); // rbx
  __int64 v30; // r9
  ULONG_PTR *p_fract; // rbx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rbx
  __int64 v38; // rdx
  unsigned int v39; // r13d
  __int64 v40; // r13
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rbx
  unsigned int i; // r13d
  __int64 v45; // rax
  __int64 v46; // rbx
  RFONTOBJ *v47; // rcx
  __int64 v48; // r9
  struct RFONTOBJ *v49; // r8
  struct _GLYPHDATA *v50; // rax
  unsigned int v51; // edi
  unsigned int v52; // edi
  unsigned int v53; // edi
  __int64 v54; // rbx
  struct RFONTOBJ *v55; // r8
  unsigned int v56; // r13d
  struct _GLYPHDATA *v57; // rax
  struct RFONTOBJ *v58; // r8
  struct _GLYPHDATA *EudcMetrics; // rax
  unsigned __int16 v60; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v61; // [rsp+48h] [rbp-B8h] BYREF
  struct _FONTOBJ *v62; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v63; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v64; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v65; // [rsp+68h] [rbp-98h] BYREF
  __int64 v66; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v67; // [rsp+78h] [rbp-88h]
  int v68; // [rsp+7Ch] [rbp-84h]
  __int64 *v69; // [rsp+80h] [rbp-80h]
  __int64 v70; // [rsp+88h] [rbp-78h] BYREF
  __int64 v71; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v72; // [rsp+98h] [rbp-68h]
  int v73; // [rsp+9Ch] [rbp-64h]
  _QWORD v74[2]; // [rsp+A0h] [rbp-60h] BYREF
  struct UDCOBJ *v75; // [rsp+B0h] [rbp-50h]
  _DWORD v76[2]; // [rsp+B8h] [rbp-48h] BYREF
  RFONTOBJ *v77; // [rsp+C0h] [rbp-40h]
  struct _MAT2 *v78; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v79; // [rsp+D0h] [rbp-30h]
  void *v80; // [rsp+D8h] [rbp-28h]
  struct _GLYPHDATA v81; // [rsp+E0h] [rbp-20h] BYREF

  v80 = a6;
  v9 = a4;
  v78 = a7;
  v10 = a2;
  v11 = 0;
  v75 = a1;
  v74[0] = a4;
  memset_0(&v81, 0, sizeof(v81));
  v12 = -1;
  v68 = -1;
  v73 = a3 & 0x100;
  v13 = a3 & 0x80;
  v14 = a3 & 0xFFFFFE7F;
  v15 = 0;
  v72 = v13 != 0 ? 4 : 2;
  if ( !v9 || !v78 )
  {
    EngSetLastError(0x57u);
    return v12;
  }
  LODWORD(v63) = 6;
  v16 = *(unsigned __int16 *)(*(_QWORD *)v75 + 12LL);
  v64 = 0LL;
  HIDWORD(v63) = v16;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v64, v75, 0, 2u, (const struct RFONTOBJ::Tag *)&v63) )
    GreAcquireSemaphore<5,RFONT *>(v64);
  v71 = 0LL;
  v69 = &v64;
  v17 = v64;
  v70 = 0LL;
  v66 = 0LL;
  if ( v64 )
  {
    if ( v13 )
    {
      v11 = v10;
      v67 = v10;
    }
    else
    {
      v61 = 0;
      v60 = v10;
      RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v64, &v60, 1u, &v61, 0, 0);
      v11 = v61;
      v17 = v64;
      v67 = v61;
    }
    if ( v11 == *(_DWORD *)(v17 + 456) && !v13 && (unsigned int)RFONTOBJ::bIsLinkedGlyph((RFONTOBJ *)&v64, v10) )
    {
      v33 = v64;
      if ( *(_QWORD *)(v64 + 856) )
      {
        v11 = -1;
        SEMOBJ<15>::SEMOBJ<15>(&v63, v64);
        v37 = *(_QWORD *)(W32GetSessionState(v35, v34, v36) + 96);
        GreAcquirePushLockShared2<16,0>(v37 + 4872);
        _InterlockedIncrement((volatile signed __int32 *)(v37 + 13508));
        GreReleasePushLockShared2<16,0>(v37 + 4872);
        RFONTOBJ::vInitEUDC((RFONTOBJ *)&v64, v75);
        RFONTOBJ::vLockEUDCFontsGlyphCache((RFONTOBJ *)&v64, 0);
        v38 = v63;
        *(_DWORD *)(v33 + 720) |= 1u;
        if ( v38 )
          GreReleaseSemaphoreCommon<15,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal);
        v39 = *(_DWORD *)(v33 + 848);
        v65 = v39;
        if ( !v39 )
          goto LABEL_91;
        v40 = v39 - 1;
        LODWORD(v62) = v40;
        v41 = *(_QWORD *)(v33 + 752);
        v61 = 0;
        v60 = v10;
        v66 = *(_QWORD *)(v41 + 8 * v40);
        v42 = v66;
        RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v66, &v60, 1u, &v61, 0, 0);
        if ( v61 == *(_DWORD *)(v42 + 456) )
          goto LABEL_91;
        v63 = *(_QWORD *)(*(_QWORD *)(v33 + 752) + 8 * v40);
        if ( v63 )
        {
          if ( RFONTOBJ::IsPerFontEUDC((RFONTOBJ *)&v63) )
          {
            v65 = (unsigned int)v62;
            EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v63, (struct RFONTOBJ *)(unsigned __int16)v10, v58);
            if ( EudcMetrics )
            {
              if ( EudcMetrics->fxD )
              {
                v11 = v61;
                v69 = &v66;
              }
            }
          }
        }
        v63 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v63);
        if ( v11 == -1 )
        {
LABEL_91:
          v43 = *(_QWORD *)(v33 + 736);
          if ( !v43
            || (v61 = 0,
                v71 = v43,
                v60 = v10,
                RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v71, &v60, 1u, &v61, 0, 0),
                v61 == *(_DWORD *)(v43 + 456))
            || (v11 = v61, v69 = &v71, v61 == -1) )
          {
            for ( i = 0; i < v65; ++i )
            {
              v45 = *(_QWORD *)(v33 + 752);
              v61 = 0;
              v60 = v10;
              v66 = *(_QWORD *)(v45 + 8LL * i);
              v46 = v66;
              RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v66, &v60, 1u, &v61, 0, 0);
              if ( v61 != *(_DWORD *)(v46 + 456) )
              {
                v48 = *(_QWORD *)(*(_QWORD *)(v33 + 752) + 8LL * i);
                v62 = (struct _FONTOBJ *)v48;
                if ( v48 )
                {
                  if ( !(unsigned int)RFONTOBJ::bSkipCHSFontSegUISymFallback(
                                        v47,
                                        v10,
                                        *(struct PFF **)(v33 + 128),
                                        *(struct PFF **)(v48 + 128)) )
                  {
                    v50 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v62, (struct RFONTOBJ *)(unsigned __int16)v10, v49);
                    if ( v50 )
                    {
                      if ( v50->fxD )
                      {
                        v11 = v61;
                        v69 = &v66;
                        v62 = 0LL;
                        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v62);
                        if ( v11 != -1 )
                          goto LABEL_69;
                        break;
                      }
                    }
                  }
                }
                v62 = 0LL;
                RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v62);
              }
            }
            v54 = *(_QWORD *)(v33 + 744);
            if ( !v54 )
              goto LABEL_79;
            v65 = 0;
            v70 = v54;
            v60 = v10;
            RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v70, &v60, 1u, &v65, 0, 0);
            v56 = v65;
            if ( v65 == *(_DWORD *)(v54 + 456) )
              goto LABEL_79;
            v63 = *(_QWORD *)(v33 + 744);
            if ( v63 )
            {
              v57 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v63, (struct RFONTOBJ *)(unsigned __int16)v10, v55);
              if ( v57 )
              {
                if ( v57->fxD )
                {
                  v11 = v56;
                  v69 = &v70;
                }
              }
            }
            v63 = 0LL;
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v63);
            if ( v11 == -1 )
            {
LABEL_79:
              RFONTOBJ::dtorHelper((RFONTOBJ *)&v64);
              v11 = v67;
              *(_DWORD *)(v33 + 720) = 0;
            }
          }
        }
LABEL_69:
        v12 = v68;
      }
      v9 = v74[0];
    }
  }
  if ( *v69 )
  {
    v18 = *v69;
  }
  else
  {
    EngSetLastError(0x3EBu);
    v18 = 0LL;
  }
  v66 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v66);
  v70 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v70);
  v71 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v71);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v64);
  if ( v18 )
  {
    v62 = (struct _FONTOBJ *)v18;
    GreAcquireSemaphore<5,RFONT *>(v18);
    v19 = *(_QWORD *)(v18 + 128);
    v74[0] = v19;
    sizLogResPpi = v62[1].sizLogResPpi;
    if ( !*(_QWORD *)&sizLogResPpi
      || !*(_QWORD *)(*(_QWORD *)&sizLogResPpi + 3072LL)
      || (RESETFCOBJ::RESETFCOBJ((RESETFCOBJ *)v76, v75, (struct RFONTOBJ *)&v62, v78, a8, v72), !v76[0]) )
    {
      EngSetLastError(0x3EBu);
LABEL_22:
      if ( v62 )
        RFONTOBJ::vReleaseCache((RFONTOBJ *)&v62);
      v62 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v62);
      return v12;
    }
    if ( v14 )
    {
      if ( v14 != 1 )
      {
        if ( v14 == 2 || v14 == 3 )
        {
          v26 = v14 == 3;
          v27 = v62;
          v28 = 2;
          v29 = *(__int64 (__fastcall **)(_QWORD, struct _FONTOBJ *, _QWORD, __int64, struct _GLYPHDATA *, unsigned int, void *))(*(_QWORD *)(v19 + 96) + 3072LL);
          if ( !v26 )
            v28 = 0;
          ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)&v78, (struct PFFOBJ *)v74);
          v30 = v28 | 4;
          if ( !v73 )
            v30 = v28;
          v12 = v29(0LL, v27, v11, v30, &v81, a5, v80);
          if ( v79 )
          {
            p_fract = (ULONG_PTR *)&v78->eM11.fract;
            v32 = v79;
            do
            {
              EngUnmapFontFileFD(*p_fract++);
              --v32;
            }
            while ( v32 );
          }
          goto LABEL_18;
        }
        if ( v14 != 4 && v14 - 5 > 1 )
        {
LABEL_20:
          if ( !v76[1] )
          {
            RFONTOBJ::vReleaseCache(v77);
            RFONTOBJ::vMakeInactive(v77);
          }
          goto LABEL_22;
        }
      }
      v51 = v14 - 1;
      if ( v51 )
      {
        v52 = v51 - 3;
        if ( v52 )
        {
          v53 = v52 - 1;
          if ( v53 )
          {
            if ( v53 == 1 )
              v15 = 9;
          }
          else
          {
            v15 = 8;
          }
        }
        else
        {
          v15 = 6;
        }
      }
      else
      {
        v15 = 5;
      }
      v21 = PFFOBJ::QueryFontData((PFFOBJ *)v74, 0LL, v62, v15, v11, &v81, v80, a5);
    }
    else
    {
      v21 = PFFOBJ::QueryFontData((PFFOBJ *)v74, 0LL, v62, 4u, v11, &v81, 0LL, 0);
    }
    v12 = v21;
LABEL_18:
    if ( v12 != -1 )
    {
      top = v81.rclInk.top;
      v23 = v81.rclInk.right - v81.rclInk.left;
      *(_DWORD *)(v9 + 8) = v81.rclInk.left;
      *(_DWORD *)v9 = v23;
      *(_DWORD *)(v9 + 4) = v81.rclInk.bottom - top;
      v24 = (v81.ptqD.x.HighPart >> 3) + 1;
      *(_DWORD *)(v9 + 12) = -top;
      *(_WORD *)(v9 + 16) = v24 >> 1;
      *(_WORD *)(v9 + 18) = ((v81.ptqD.y.HighPart >> 3) + 1) >> 1;
    }
    goto LABEL_20;
  }
  return v12;
}
