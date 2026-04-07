/*
 * XREFs of ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180004A98
 * Callers:
 *     ?EnsureThemeStatics@CWindowIconic@@SAJXZ @ 0x1800031E0 (-EnsureThemeStatics@CWindowIconic@@SAJXZ.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x1800036B0 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z @ 0x1800044A4 (-CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z.c)
 *     ?CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z @ 0x180004980 (-CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJXZ @ 0x1800B8250 (-Initialize@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800BBD38 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180004B90 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001C390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
        void *a1,
        int iPartId,
        unsigned int a3,
        struct _MARGINS *a4,
        __int64 a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  struct CBitmapSource **v11; // rax
  int BitmapsFromAtlasImageStrip; // eax

  v9 = DynArrayImpl<0>::Grow(a5, 8, a3, (_DWORD)a4, 0LL);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x11Au, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F4AA8, 1u, v10, 0x3A2u, 0LL);
  }
  else
  {
    v11 = *(struct CBitmapSource ***)a5;
    *(_DWORD *)(a5 + 24) += a3;
    BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(a1, iPartId, a3, a4, v11);
    v10 = BitmapsFromAtlasImageStrip;
    if ( BitmapsFromAtlasImageStrip < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F4AA8, 1u, BitmapsFromAtlasImageStrip, 0x3AAu, 0LL);
  }
  return v10;
}
