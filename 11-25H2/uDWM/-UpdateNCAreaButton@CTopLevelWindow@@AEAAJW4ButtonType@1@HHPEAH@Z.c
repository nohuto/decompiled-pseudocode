/*
 * XREFs of ?UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z @ 0x18006AF70
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18000C8B0 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z @ 0x18000CC08 (-GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z.c)
 *     ?HasThinRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x18000E1B8 (-HasThinRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18002D51C (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentRight@CVisual@@QEAAXH@Z @ 0x18006B0E0 (-SetInsetFromParentRight@CVisual@@QEAAXH@Z.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180094954 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     floor @ 0x18009B6B8 (floor.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaButton(__int64 a1, int a2, int a3, int a4, int *a5)
{
  __int64 v9; // rbp
  bool HasThinRenderedBorder; // bl
  int MetricsForCaptionBar; // eax
  double v12; // xmm0_8
  float v13; // xmm1_4
  int v14; // esi

  v9 = a2;
  if ( *(_QWORD *)(a1 + 8LL * a2 + 488) )
  {
    HasThinRenderedBorder = CTopLevelWindow::HasThinRenderedBorder(*(_DWORD *)(a1 + 584));
    MetricsForCaptionBar = CWindowData::GetMetricsForCaptionBar(
                             *(CWindowData **)(a1 + 712),
                             HasThinRenderedBorder ? 53 : 31);
    v12 = floor((float)((float)MetricsForCaptionBar * 0.95454544) + 0.5);
    if ( HasThinRenderedBorder )
    {
      v14 = (int)v12;
      a3 = (int)v12;
      goto LABEL_8;
    }
    if ( a2 == 3 )
    {
      if ( (*(_DWORD *)(a1 + 584) & 0xB00) == 0 )
      {
        v13 = FLOAT_1_6363636;
        goto LABEL_7;
      }
    }
    else if ( (a2 != 1 || *(_QWORD *)(a1 + 488)) && a2 )
    {
      v13 = FLOAT_2_1818182;
      goto LABEL_7;
    }
    v13 = FLOAT_2_2272727;
LABEL_7:
    v14 = (int)floor((float)((float)(int)v12 * v13) + 0.5);
LABEL_8:
    CVisual::SetInsetFromParentTop(*(CVisual **)(a1 + 8 * v9 + 488), a4);
    CVisual::SetInsetFromParentRight(*(CVisual **)(a1 + 8 * v9 + 488), *a5);
    CVisual::SetSize(*(CVisual **)(a1 + 8 * v9 + 488), v14, a3);
    *a5 += *(_DWORD *)(*(_QWORD *)(a1 + 8 * v9 + 488) + 72LL);
  }
  return 0LL;
}
