/*
 * XREFs of ?GetFloatCornerRadiusForCurrentStyle@CTopLevelWindow@@AEAAMXZ @ 0x18000F534
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18000D460 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?GetRadiusFromCornerStyle@CTopLevelWindow@@AEAAMXZ @ 0x18000F9FC (-GetRadiusFromCornerStyle@CTopLevelWindow@@AEAAMXZ.c)
 */

float __fastcall CTopLevelWindow::GetFloatCornerRadiusForCurrentStyle(CTopLevelWindow *this)
{
  float result; // xmm0_4

  result = 0.0;
  if ( (*((_BYTE *)this + 584) & 0x20) == 0 && (*(_DWORD *)(*((_QWORD *)this + 89) + 124LL) & 0x1000) == 0 )
    return CTopLevelWindow::GetRadiusFromCornerStyle(this);
  return result;
}
