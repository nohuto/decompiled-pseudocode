/*
 * XREFs of ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180033198
 * Callers:
 *     ?Initialize@CTouchDragVisual@@MEAAJXZ @ 0x180032090 (-Initialize@CTouchDragVisual@@MEAAJXZ.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x180032130 (-Initialize@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x18003230C (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJXZ @ 0x1800332F0 (-Initialize@CPenBarrelKeyVisual@@MEAAJXZ.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x180093928 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x1800BC870 (-Initialize@CPressTapVisual@@MEAAJXZ.c)
 *     ?Initialize@CTetherVisual@@MEAAJXZ @ 0x1800CE850 (-Initialize@CTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z @ 0x18000744C (-GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z.c)
 *     ?Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x180007C28 (-Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::CreateBitmapFromAtlas(
        void *const a1,
        int iPartId,
        struct _MARGINS *pMargins,
        struct CBitmapSource **a4)
{
  HRESULT ThemeRect; // eax
  unsigned int v9; // ebx
  const struct CBitmapSource *AtlasImageFromTheme; // rax
  int v11; // eax
  HRESULT ThemeMargins; // eax
  struct tagRECT rc; // [rsp+40h] [rbp-48h] BYREF

  if ( pMargins
    && (ThemeMargins = GetThemeMargins(a1, 0LL, iPartId, 0, 3601, 0LL, pMargins), v9 = ThemeMargins, ThemeMargins < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F97B4, 1LL, ThemeMargins, 0x255u, 0LL);
  }
  else
  {
    rc = 0LL;
    ThemeRect = GetThemeRect(a1, iPartId, 0, 8002, &rc);
    v9 = ThemeRect;
    if ( ThemeRect < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F97B4, 1LL, ThemeRect, 0x259u, 0LL);
    }
    else
    {
      InflateRect(&rc, -1, -1);
      AtlasImageFromTheme = CTopLevelWindow::GetAtlasImageFromTheme(a1);
      v11 = CBitmapSource::Create(AtlasImageFromTheme, &rc, pMargins, a4);
      v9 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F97B4, 1LL, v11, 0x261u, 0LL);
    }
  }
  return v9;
}
