/*
 * XREFs of ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x1800034E0
 * Callers:
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x1800060D4 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 * Callees:
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18000504C (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z @ 0x180014250 (-SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18002748C (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?Initialize@CTouchVisual@@MEAAJXZ @ 0x180083310 (-Initialize@CTouchVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CDirectTouchVisual::Initialize(struct tagSIZE *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  struct CBitmapSource **v4; // r9
  void *v5; // rcx
  int v6; // eax
  int BitmapFromAtlas; // eax
  struct CVisual **v9; // rsi
  int v10; // eax
  bool v11; // r8
  int v12; // eax

  v2 = CTouchVisual::Initialize((CTouchVisual *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x25u, 0LL);
    return v3;
  }
  v4 = (struct CBitmapSource **)&this[43];
  v5 = (void *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 137);
  if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20) + 324LL) )
  {
    BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(v5, 7, 0LL, v4);
    v3 = BitmapFromAtlas;
    if ( BitmapFromAtlas < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BitmapFromAtlas, 0x2Bu, 0LL);
      return v3;
    }
  }
  else
  {
    v6 = CTopLevelWindow::CreateBitmapFromAtlas(v5, 2, 0LL, v4);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x2Fu, 0LL);
      return v3;
    }
  }
  v9 = (struct CVisual **)&this[42];
  this[31] = *(struct tagSIZE *)(*(_QWORD *)&this[43] + 128LL);
  LOBYTE(this[41].cx) = 0;
  this[34].cx = 0;
  this[34].cy = 1065353216;
  this[35].cx = 1065353216;
  this[35].cy = 1068708659;
  this[36].cx = 1067030938;
  this[33].cy = 1033476506;
  this[36].cy = 1028443341;
  this[32].cx = 1040522936;
  this[32].cy = 1061481551;
  this[33].cx = 1047285445;
  v10 = CImage::Create((struct CImage **)&this[42]);
  v3 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x43u, 0LL);
  }
  else
  {
    v12 = CContainerVisual::AddChild((CContainerVisual *)this, *v9, v11);
    v3 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x44u, 0LL);
    }
    else
    {
      CVisual::SetSize(*v9, this + 31);
      this[38] = 0LL;
      this[39] = 0LL;
      this[40] = 0LL;
      LOBYTE(this[26].cx) = 0;
    }
  }
  return v3;
}
