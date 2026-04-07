/*
 * XREFs of ?Initialize@CPenBarrelKeyVisual@@MEAAJXZ @ 0x1800332F0
 * Callers:
 *     ??$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJ_KPEAPEAVCPenBarrelKeyVisual@@@Z @ 0x180030988 (--$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJ_KPEAPEAVCPenBarrelKeyVisual@@@Z.c)
 * Callees:
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180007D54 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CTouchVisual@@MEAAJXZ @ 0x180032300 (-Initialize@CTouchVisual@@MEAAJXZ.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180033198 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18004B474 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x180054CA8 (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z @ 0x180094340 (-SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::Initialize(CPenBarrelKeyVisual *this)
{
  int v2; // eax
  __int64 v3; // rdx
  unsigned int v4; // ebx
  void *Theme; // rax
  int BitmapFromAtlas; // eax
  struct CVisual **v7; // rsi
  CDesktopManager *v8; // rax
  int v9; // eax
  int v10; // eax

  v2 = CTouchVisual::Initialize((struct CContainerVisualProxy **)this);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x30u, 0LL);
  }
  else
  {
    Theme = (void *)CDesktopManager::GetTheme(2LL, v3);
    BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 1, 0LL, (struct CBitmapSource **)this + 34);
    v4 = BitmapFromAtlas;
    if ( BitmapFromAtlas < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapFromAtlas, 0x33u, 0LL);
    }
    else
    {
      v7 = (struct CVisual **)((char *)this + 280);
      v8 = CDesktopManager::s_pDesktopManagerInstance;
      *((_QWORD *)this + 36) = *(_QWORD *)(*((_QWORD *)this + 34) + 24LL);
      *((_DWORD *)this + 74) = (int)(*((double *)v8 + 52) * 20.0);
      v9 = CImage::Create((struct CImage **)this + 35);
      v4 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x39u, 0LL);
      }
      else
      {
        v10 = CContainerVisual::AddChild(this, *v7);
        v4 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x3Au, 0LL);
        else
          CVisual::SetSize(*v7, (const struct tagSIZE *)this + 36);
      }
    }
  }
  return v4;
}
