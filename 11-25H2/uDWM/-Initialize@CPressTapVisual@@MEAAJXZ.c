/*
 * XREFs of ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x1800BC870
 * Callers:
 *     ??$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z @ 0x1800AA140 (--$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z.c)
 * Callees:
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180007D54 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMinimumContactWidth@CContactManager@@SAHUtagPOINT@@@Z @ 0x18002D548 (-GetMinimumContactWidth@CContactManager@@SAHUtagPOINT@@@Z.c)
 *     ?Initialize@CTouchVisual@@MEAAJXZ @ 0x180032300 (-Initialize@CTouchVisual@@MEAAJXZ.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180033198 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18004B474 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x180054CA8 (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z @ 0x180094340 (-SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z.c)
 */

__int64 __fastcall CPressTapVisual::Initialize(CPressTapVisual *this)
{
  int v2; // eax
  unsigned int v3; // esi
  void *Theme; // rax
  struct CBitmapSource **v5; // r9
  int BitmapFromAtlas; // eax
  int MinimumContactWidth; // eax
  struct CVisual **v8; // r15
  int v9; // eax
  struct CVisual **v10; // r14
  int v11; // eax

  v2 = CTouchVisual::Initialize((struct CContainerVisualProxy **)this);
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
      *((_DWORD *)this + 87) = 0;
      *((_DWORD *)this + 88) = 0;
      *((_QWORD *)this + 45) = 0LL;
      *((_DWORD *)this + 83) = 1067030938;
      *((_DWORD *)this + 84) = 1072064102;
      *((_DWORD *)this + 85) = 1065353216;
      *((_DWORD *)this + 86) = 1067869798;
      *((_DWORD *)this + 89) = 150;
      *((_DWORD *)this + 80) = 1050253722;
      *((_DWORD *)this + 81) = 1059760811;
      *((_DWORD *)this + 82) = 1051372203;
      *((_BYTE *)this + 240) = 0;
      MinimumContactWidth = CContactManager::GetMinimumContactWidth(0LL);
      v8 = (struct CVisual **)((char *)this + 304);
      *((_DWORD *)this + 75) = MinimumContactWidth;
      *((_DWORD *)this + 73) = MinimumContactWidth;
      *((_DWORD *)this + 74) = MinimumContactWidth;
      *((_DWORD *)this + 72) = MinimumContactWidth;
      v9 = CImage::Create((struct CImage **)this + 38);
      v3 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x43u, 0LL);
      }
      else
      {
        v10 = (struct CVisual **)((char *)this + 312);
        v11 = CImage::Create((struct CImage **)this + 39);
        v3 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x44u, 0LL);
        }
        else
        {
          CContainerVisual::AddChild(this, *v8);
          CContainerVisual::AddChild(this, *v10);
          CVisual::SetSize(*v8, (const struct tagSIZE *)this + 36);
          CVisual::SetSize(*v10, (const struct tagSIZE *)this + 37);
        }
      }
    }
  }
  return v3;
}
