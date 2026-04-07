/*
 * XREFs of ?GetNonClientAreaMargins@CWindowData@@QEBAXPEAU_MARGINS@@@Z @ 0x18000FA44
 * Callers:
 *     ?CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z @ 0x18000DF90 (-CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z.c)
 * Callees:
 *     ?GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z @ 0x18000CC08 (-GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z.c)
 *     _o_ceil_0 @ 0x18009B694 (_o_ceil_0.c)
 *     floor @ 0x18009B6B8 (floor.c)
 */

void __fastcall CWindowData::GetNonClientAreaMargins(CWindowData *this, struct _MARGINS *a2)
{
  int MetricsForCaptionBar; // edi
  double v4; // xmm6_8
  double v5; // xmm0_8
  int v6; // esi
  double v7; // xmm0_8

  if ( (*((_BYTE *)this + 118) & 0xC0) == 0xC0 )
    MetricsForCaptionBar = CWindowData::GetMetricsForCaptionBar(this, (*((_DWORD *)this + 30) & 0x80u) != 0 ? 51 : 4);
  else
    MetricsForCaptionBar = a2->cyTopHeight;
  v4 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 52);
  if ( v4 < 0.0 )
  {
    v5 = v4 - 0.5;
    o_ceil_0();
  }
  else
  {
    v5 = floor(v4 + 0.5);
  }
  v6 = (int)v5;
  if ( v4 < 0.0 )
  {
    v7 = v4 - 0.5;
    o_ceil_0();
  }
  else
  {
    v7 = floor(v4 + 0.5);
  }
  a2->cyBottomHeight = v6;
  a2->cyTopHeight = MetricsForCaptionBar + v6;
  a2->cxLeftWidth = (int)v7;
  a2->cxRightWidth = (int)v7;
}
