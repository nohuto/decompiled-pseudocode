/*
 * XREFs of ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x180032130
 * Callers:
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180030520 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 * Callees:
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180007D54 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CTouchVisual@@MEAAJXZ @ 0x180032300 (-Initialize@CTouchVisual@@MEAAJXZ.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180033198 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18004B474 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x180054CA8 (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z @ 0x180094340 (-SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z.c)
 */

__int64 __fastcall CDirectTouchVisual::Initialize(struct tagSIZE *this)
{
  int v2; // eax
  __int64 v3; // rdx
  unsigned int v4; // ebx
  void *Theme; // rax
  struct CBitmapSource **v6; // r9
  int v7; // eax
  int BitmapFromAtlas; // eax
  struct CVisual **v10; // rsi
  int v11; // eax
  int v12; // eax

  v2 = CTouchVisual::Initialize((CTouchVisual *)this);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x25u, 0LL);
    return v4;
  }
  Theme = (void *)CDesktopManager::GetTheme(1LL, v3);
  v6 = (struct CBitmapSource **)&this[47];
  if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20) + 324LL) )
  {
    BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 7, 0LL, v6);
    v4 = BitmapFromAtlas;
    if ( BitmapFromAtlas < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapFromAtlas, 0x2Bu, 0LL);
      return v4;
    }
  }
  else
  {
    v7 = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 2, 0LL, v6);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x2Fu, 0LL);
      return v4;
    }
  }
  v10 = (struct CVisual **)&this[46];
  this[35] = *(struct tagSIZE *)(*(_QWORD *)&this[47] + 24LL);
  LOBYTE(this[45].cx) = 0;
  this[38].cx = 0;
  this[38].cy = 1065353216;
  this[39].cx = 1065353216;
  this[39].cy = 1068708659;
  this[40].cx = 1067030938;
  this[37].cy = 1033476506;
  this[40].cy = 1028443341;
  this[36].cx = 1040522936;
  this[36].cy = 1061481551;
  this[37].cx = 1047285445;
  v11 = CImage::Create((struct CImage **)&this[46]);
  v4 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x43u, 0LL);
  }
  else
  {
    v12 = CContainerVisual::AddChild((CContainerVisual *)this, *v10);
    v4 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x44u, 0LL);
    }
    else
    {
      CVisual::SetSize(*v10, this + 35);
      this[42] = 0LL;
      this[43] = 0LL;
      this[44] = 0LL;
      LOBYTE(this[30].cx) = 0;
    }
  }
  return v4;
}
