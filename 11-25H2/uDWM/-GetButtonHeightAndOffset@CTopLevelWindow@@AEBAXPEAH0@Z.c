/*
 * XREFs of ?GetButtonHeightAndOffset@CTopLevelWindow@@AEBAXPEAH0@Z @ 0x18000CC24
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18000C8B0 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetTitlebarHeight@CTopLevelWindow@@AEBAHXZ @ 0x180078F4C (-GetTitlebarHeight@CTopLevelWindow@@AEBAHXZ.c)
 * Callees:
 *     ?GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z @ 0x18000CC08 (-GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z.c)
 *     ?_GetMarginsVisibleOutside@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z @ 0x18000CD08 (-_GetMarginsVisibleOutside@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z.c)
 *     ?HasThinRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x18000E1B8 (-HasThinRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 */

void __fastcall CTopLevelWindow::GetButtonHeightAndOffset(CTopLevelWindow *this, int *a2, int *a3)
{
  unsigned int v4; // ecx
  CWindowData *v7; // rcx
  char v8; // r9
  int v9; // eax
  int cyTopHeight; // ecx
  int MetricsForCaptionBar; // edx
  int v12; // eax
  struct _MARGINS v13; // [rsp+20h] [rbp-18h] BYREF

  *a2 = 0;
  v4 = *((_DWORD *)this + 146);
  *a3 = 0;
  CTopLevelWindow::HasThinRenderedBorder(v4);
  v13 = 0LL;
  CTopLevelWindow::_GetMarginsVisibleOutside(this, &v13);
  v7 = (CWindowData *)*((_QWORD *)this + 89);
  if ( v8 )
  {
    MetricsForCaptionBar = CWindowData::GetMetricsForCaptionBar(v7, 0x35u);
    cyTopHeight = *((_DWORD *)this + 149) - MetricsForCaptionBar - 2;
    if ( cyTopHeight <= v13.cyTopHeight )
      cyTopHeight = v13.cyTopHeight;
  }
  else
  {
    v9 = CWindowData::GetMetricsForCaptionBar(v7, 0x1Fu);
    cyTopHeight = v13.cyTopHeight;
    MetricsForCaptionBar = v9 + *(_DWORD *)(*((_QWORD *)this + 89) + 112LL);
    if ( MetricsForCaptionBar >= *((_DWORD *)this + 153) - v13.cyTopHeight )
      MetricsForCaptionBar = *((_DWORD *)this + 153) - v13.cyTopHeight;
    if ( MetricsForCaptionBar < 0 )
      MetricsForCaptionBar = 0;
    if ( (*((_BYTE *)this + 200) & 4) != 0 && *((_DWORD *)this + 161) > *((_DWORD *)this + 157) )
    {
      v12 = MetricsForCaptionBar - 1;
      MetricsForCaptionBar = 0;
      if ( v12 >= 0 )
        MetricsForCaptionBar = v12;
    }
    else
    {
      cyTopHeight = v13.cyTopHeight + 1;
    }
  }
  *a2 = MetricsForCaptionBar;
  *a3 = cyTopHeight;
}
