/*
 * XREFs of ?UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z @ 0x180012098
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180011D38 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetInsetFromParentRight@CVisual@@QEAAXH@Z @ 0x180011CFC (-SetInsetFromParentRight@CVisual@@QEAAXH@Z.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180012220 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180013488 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?HasThinRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x1800202C0 (-HasThinRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z @ 0x180020790 (-GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z.c)
 *     floorf @ 0x18008EED0 (floorf.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaButton(__int64 a1, int a2, int a3, int a4, _DWORD *a5)
{
  __int64 v5; // rsi
  bool HasThinRenderedBorder; // bl
  int MetricsForCaptionBar; // eax
  int v12; // r14d
  float v13; // xmm1_4
  __int64 v14; // r8

  v5 = a2;
  if ( *(_QWORD *)(a1 + 8LL * a2 + 472) )
  {
    HasThinRenderedBorder = CTopLevelWindow::HasThinRenderedBorder(*(_DWORD *)(a1 + 568));
    MetricsForCaptionBar = CWindowData::GetMetricsForCaptionBar(
                             *(CWindowData **)(a1 + 696),
                             HasThinRenderedBorder ? 53 : 31);
    v12 = (int)floorf((float)((float)MetricsForCaptionBar * 0.95454544) + 0.5);
    if ( HasThinRenderedBorder )
    {
      a3 = v12;
      goto LABEL_9;
    }
    if ( (_DWORD)v5 == 3 )
    {
      if ( (*(_DWORD *)(a1 + 568) & 0xB00) == 0 )
      {
        v13 = FLOAT_1_6363636;
        goto LABEL_8;
      }
    }
    else if ( ((_DWORD)v5 != 1 || *(_QWORD *)(a1 + 472)) && (_DWORD)v5 )
    {
      v13 = FLOAT_2_1818182;
LABEL_8:
      v12 = (int)floorf((float)((float)v12 * v13) + 0.5);
LABEL_9:
      CVisual::SetInsetFromParentTop(*(CVisual **)(a1 + 8 * v5 + 472), a4);
      CVisual::SetInsetFromParentRight(*(CVisual **)(a1 + 8 * v5 + 472), (unsigned int)*a5, v14);
      CVisual::SetSize(*(CVisual **)(a1 + 8 * v5 + 472), v12, a3);
      *a5 += *(_DWORD *)(*(_QWORD *)(a1 + 8 * v5 + 472) + 64LL);
      return 0LL;
    }
    v13 = FLOAT_2_2272727;
    goto LABEL_8;
  }
  return 0LL;
}
