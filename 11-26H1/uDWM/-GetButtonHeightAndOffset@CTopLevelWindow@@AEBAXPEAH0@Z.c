/*
 * XREFs of ?GetButtonHeightAndOffset@CTopLevelWindow@@AEBAXPEAH0@Z @ 0x1800205F8
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180011D38 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetTitlebarHeight@CTopLevelWindow@@AEBAHXZ @ 0x18004BE8C (-GetTitlebarHeight@CTopLevelWindow@@AEBAHXZ.c)
 * Callees:
 *     ?HasThinRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x1800202C0 (-HasThinRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?_GetMarginsVisibleOutside@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z @ 0x1800206DC (-_GetMarginsVisibleOutside@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z.c)
 *     ?GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z @ 0x180020790 (-GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z.c)
 */

void __fastcall CTopLevelWindow::GetButtonHeightAndOffset(CTopLevelWindow *this, int *a2, int *a3)
{
  int MetricsForCaptionBar; // ebx
  __int64 v7; // rcx
  CWindowData *v8; // rbp
  int v9; // eax
  int cyTopHeight; // ecx
  int v11; // edx
  struct _MARGINS v12; // [rsp+20h] [rbp-18h] BYREF

  MetricsForCaptionBar = 0;
  *a2 = 0;
  *a3 = 0;
  v12 = 0LL;
  CTopLevelWindow::_GetMarginsVisibleOutside(this, &v12);
  v8 = *(CWindowData **)(v7 + 696);
  if ( CTopLevelWindow::HasThinRenderedBorder(*(_DWORD *)(v7 + 568)) )
  {
    MetricsForCaptionBar = CWindowData::GetMetricsForCaptionBar(v8, 53);
    cyTopHeight = *((_DWORD *)this + 145) - MetricsForCaptionBar - 2;
    if ( cyTopHeight <= v12.cyTopHeight )
      cyTopHeight = v12.cyTopHeight;
  }
  else
  {
    v9 = CWindowData::GetMetricsForCaptionBar(v8, 31);
    cyTopHeight = v12.cyTopHeight;
    v11 = v9 + *((_DWORD *)v8 + 28);
    if ( v11 >= *((_DWORD *)this + 149) - v12.cyTopHeight )
      v11 = *((_DWORD *)this + 149) - v12.cyTopHeight;
    if ( v11 < 0 )
      v11 = 0;
    if ( (*((_BYTE *)this + 184) & 4) != 0 && *((_DWORD *)this + 157) > *((_DWORD *)this + 153) )
    {
      if ( v11 - 1 >= 0 )
        MetricsForCaptionBar = v11 - 1;
    }
    else
    {
      cyTopHeight = v12.cyTopHeight + 1;
      MetricsForCaptionBar = v11;
    }
  }
  *a2 = MetricsForCaptionBar;
  *a3 = cyTopHeight;
}
