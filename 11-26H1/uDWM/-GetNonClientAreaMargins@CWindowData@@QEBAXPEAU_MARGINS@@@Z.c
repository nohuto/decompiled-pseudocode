/*
 * XREFs of ?GetNonClientAreaMargins@CWindowData@@QEBAXPEAU_MARGINS@@@Z @ 0x1800210AC
 * Callers:
 *     ?CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z @ 0x18001F0C0 (-CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z.c)
 * Callees:
 *     ?GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z @ 0x180020790 (-GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z.c)
 *     _o_ceil_0 @ 0x18008EEA0 (_o_ceil_0.c)
 *     floor @ 0x18008EEC4 (floor.c)
 */

void __fastcall CWindowData::GetNonClientAreaMargins(CWindowData *this, struct _MARGINS *a2)
{
  int MetricsForCaptionBar; // edi
  double v4; // xmm6_8
  double v5; // xmm7_8
  double v6; // xmm0_8
  double v7; // xmm10_8
  double v8; // xmm0_8

  if ( (*((_BYTE *)this + 118) & 0xC0) == 0xC0 )
    MetricsForCaptionBar = CWindowData::GetMetricsForCaptionBar(this, (*((_DWORD *)this + 30) & 0x80u) != 0 ? 51 : 4);
  else
    MetricsForCaptionBar = a2->cyTopHeight;
  v4 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 52);
  if ( v4 < 0.0 )
  {
    v6 = v4 - 0.5;
    o_ceil_0();
    v5 = v4 + 0.5;
  }
  else
  {
    v5 = v4 + 0.5;
    v6 = floor(v4 + 0.5);
  }
  v7 = v6;
  if ( v4 < 0.0 )
  {
    v8 = v4 - 0.5;
    o_ceil_0();
  }
  else
  {
    v8 = floor(v5);
  }
  a2->cyBottomHeight = (int)v7;
  a2->cyTopHeight = (int)v7 + MetricsForCaptionBar;
  a2->cxLeftWidth = (int)v8;
  a2->cxRightWidth = (int)v8;
}
