/*
 * XREFs of NtGdiGetETM @ 0x140311420
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x140017F90 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70 (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x140082B04 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1400D1B54 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x14010F604 (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ??0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z @ 0x1401D3E88 (--0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z.c)
 *     ??1SURFFAKEOBJ@@QEAA@XZ @ 0x1401D3F50 (--1SURFFAKEOBJ@@QEAA@XZ.c)
 *     ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVUDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1403048D4 (-vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVUDCOBJ@@PEAU_IFIMETRICS@@@Z.c)
 *     ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x140320580 (-FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@PEAUHDEV__@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x140337F58 (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@PEAUHDEV__@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetETM(HDC a1, void *a2)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  int v5; // ecx
  __int64 SessionState; // rax
  int v7; // ecx
  struct _FONTOBJ *v8; // r9
  HDEV v9; // rbx
  struct _SURFOBJ *v10; // r8
  struct _SURFOBJ *v11; // rdx
  __int64 v12; // r9
  unsigned int v14; // [rsp+20h] [rbp-1F8h]
  unsigned int v15; // [rsp+28h] [rbp-1F0h]
  unsigned int v16; // [rsp+38h] [rbp-1E0h]
  void *v17; // [rsp+40h] [rbp-1D8h]
  struct _FONTOBJ *v18; // [rsp+50h] [rbp-1C8h] BYREF
  HDEV pvProducer; // [rsp+58h] [rbp-1C0h] BYREF
  _QWORD v20[2]; // [rsp+60h] [rbp-1B8h] BYREF
  _QWORD v21[10]; // [rsp+70h] [rbp-1A8h] BYREF
  _BYTE v22[48]; // [rsp+C0h] [rbp-158h] BYREF
  _BYTE v23[32]; // [rsp+F0h] [rbp-128h] BYREF
  __int64 v24; // [rsp+110h] [rbp-108h]
  _OWORD v25[3]; // [rsp+160h] [rbp-B8h] BYREF
  int v26; // [rsp+190h] [rbp-88h]
  _BYTE v27[96]; // [rsp+1A0h] [rbp-78h] BYREF

  memset(v25, 0, sizeof(v25));
  v26 = 0;
  v3 = 0;
  UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v21, a1);
  if ( a2 && v21[0] )
  {
    SessionState = W32GetSessionState(v5, v4);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v22,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
    v7 = *(unsigned __int16 *)(v21[0] + 12LL);
    LODWORD(pvProducer) = 1;
    HIDWORD(pvProducer) = v7;
    v18 = 0LL;
    RFONTOBJ::vInit((RFONTOBJ *)&v18, (struct UDCOBJ *)v21, 0, 2u, (const struct RFONTOBJ::Tag *)&pvProducer);
    if ( v18 )
    {
      PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&pvProducer, *(struct PFT **)&v18[1].sizLogResPpi);
      v9 = pvProducer;
      if ( *((_QWORD *)pvProducer + 382) )
      {
        LODWORD(pvProducer) = 256;
        v10 = 0LL;
        if ( ((_DWORD)v9[10] & 0x8000) != 0 )
          v10 = (struct _SURFOBJ *)*((_QWORD *)v9 + 223);
        if ( (unsigned int)GetETMFontManagement((struct RFONTOBJ *)&v18, v9, v10, v8, v14, v15, &pvProducer, v16, v17) )
        {
          v20[0] = *(_QWORD *)&v18[2].iUniq;
          v11 = (struct _SURFOBJ *)((*((_QWORD *)v9 + 318) + 24LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)v9 + 318) >> 64));
          if ( v11 )
          {
            v3 = PFFOBJ::FontManagement((PFFOBJ *)v20, v11, v18, 0x100u, 0, 0LL, 0x34u, v25);
          }
          else
          {
            ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v27);
            SURFFAKEOBJ::SURFFAKEOBJ(
              (SURFFAKEOBJ *)v23,
              *(HDEV *)&v18[1].ulStyleSize,
              (struct DHPDEV__ *)v18[1].pvConsumer);
            if ( v24 )
              v3 = PFFOBJ::FontManagement(
                     (PFFOBJ *)v20,
                     (struct _SURFOBJ *)((v24 + 24) & -(__int64)(v24 != 0)),
                     v18,
                     0x100u,
                     0,
                     0LL,
                     0x34u,
                     v25);
            SURFFAKEOBJ::~SURFFAKEOBJ((SURFFAKEOBJ *)v23);
            ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v27);
          }
        }
      }
      if ( !v3 )
      {
        pvProducer = (HDEV)v18[1].pvProducer;
        if ( pvProducer )
        {
          if ( (PFEOBJ::flFontType((PFEOBJ *)&pvProducer) & 4) != 0 )
          {
            vIFIMetricsToETM(
              (struct _EXTTEXTMETRIC *)v25,
              (struct RFONTOBJ *)&v18,
              (struct UDCOBJ *)v21,
              *(struct _IFIMETRICS **)(v12 + 32));
            v3 = 1;
          }
        }
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v18);
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v22);
  }
  if ( v3 )
    GreProbeAndWriteToUntrustedVa(a2, 0x34uLL, v25, 0x34uLL, 4uLL);
  UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v21);
  return v3;
}
