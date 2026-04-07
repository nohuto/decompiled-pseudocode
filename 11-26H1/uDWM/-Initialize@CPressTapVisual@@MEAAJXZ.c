/*
 * XREFs of ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x1800BC110
 * Callers:
 *     ??$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z @ 0x1800A8274 (--$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z.c)
 * Callees:
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18000504C (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180005198 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?GetMinimumContactWidth@CContactManager@@SAHUtagPOINT@@@Z @ 0x18001345C (-GetMinimumContactWidth@CContactManager@@SAHUtagPOINT@@@Z.c)
 *     ?SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z @ 0x180014250 (-SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18002748C (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?Initialize@CTouchVisual@@MEAAJXZ @ 0x180083310 (-Initialize@CTouchVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CPressTapVisual::Initialize(struct tagSIZE *this)
{
  int v2; // eax
  unsigned int v3; // edi
  void *Theme; // rax
  struct CBitmapSource **v5; // r9
  int BitmapFromAtlas; // eax
  int MinimumContactWidth; // eax
  struct CVisual **v8; // r15
  int v9; // eax
  struct CVisual **v10; // r14
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9

  v2 = CTouchVisual::Initialize((CTouchVisual *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x22u, 0LL);
  }
  else
  {
    Theme = (void *)CDesktopManager::GetTheme(1);
    BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 2, 0LL, v5);
    v3 = BitmapFromAtlas;
    if ( BitmapFromAtlas < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapFromAtlas, 0x25u, 0LL);
    }
    else
    {
      this[37].cy = 1067030938;
      this[38].cx = 1072064102;
      this[38].cy = 1065353216;
      this[39] = (struct tagSIZE)1067869798LL;
      this[40].cx = 0;
      this[40].cy = 150;
      this[36].cx = 1050253722;
      this[36].cy = 1059760811;
      this[37].cx = 1051372203;
      this[41] = 0LL;
      LOBYTE(this[26].cx) = 0;
      MinimumContactWidth = CContactManager::GetMinimumContactWidth(0LL);
      v8 = (struct CVisual **)&this[34];
      this[33].cy = MinimumContactWidth;
      this[32].cy = MinimumContactWidth;
      this[33].cx = MinimumContactWidth;
      this[32].cx = MinimumContactWidth;
      v9 = CImage::Create((struct CImage **)&this[34]);
      v3 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x43u, 0LL);
      }
      else
      {
        v10 = (struct CVisual **)&this[35];
        v11 = CImage::Create((struct CImage **)&this[35]);
        v3 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x44u, 0LL);
        }
        else
        {
          CContainerVisual::AddChild((CContainerVisual *)this, *v8);
          CContainerVisual::AddChild((CContainerVisual *)this, *v10);
          CVisual::SetSize(*v8, this + 32, v12, v13);
          CVisual::SetSize(*v10, this + 33, v14, v15);
        }
      }
    }
  }
  return v3;
}
