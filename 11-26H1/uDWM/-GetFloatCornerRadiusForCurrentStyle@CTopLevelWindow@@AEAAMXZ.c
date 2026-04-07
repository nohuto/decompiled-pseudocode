/*
 * XREFs of ?GetFloatCornerRadiusForCurrentStyle@CTopLevelWindow@@AEAAMXZ @ 0x180021028
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18007DF14 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?GetRadiusFromCornerStyle@CTopLevelWindow@@AEAAMXZ @ 0x180020FE0 (-GetRadiusFromCornerStyle@CTopLevelWindow@@AEAAMXZ.c)
 */

float __fastcall CTopLevelWindow::GetFloatCornerRadiusForCurrentStyle(CTopLevelWindow *this)
{
  float result; // xmm0_4

  result = 0.0;
  if ( (*((_BYTE *)this + 568) & 0x20) == 0 && (*(_DWORD *)(*((_QWORD *)this + 87) + 124LL) & 0x1000) == 0 )
    return CTopLevelWindow::GetRadiusFromCornerStyle(this);
  return result;
}
