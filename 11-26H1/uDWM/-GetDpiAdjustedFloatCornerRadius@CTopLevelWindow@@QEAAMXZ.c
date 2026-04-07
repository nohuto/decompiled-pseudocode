/*
 * XREFs of ?GetDpiAdjustedFloatCornerRadius@CTopLevelWindow@@QEAAMXZ @ 0x18006FE00
 * Callers:
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180045488 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 * Callees:
 *     ?GetRadiusFromCornerStyle@CTopLevelWindow@@AEAAMXZ @ 0x180020FE0 (-GetRadiusFromCornerStyle@CTopLevelWindow@@AEAAMXZ.c)
 */

float __fastcall CTopLevelWindow::GetDpiAdjustedFloatCornerRadius(CTopLevelWindow *this)
{
  float v1; // xmm6_4

  v1 = (float)*(int *)(*((_QWORD *)this + 87) + 348LL);
  return (float)(CTopLevelWindow::GetRadiusFromCornerStyle(this) * v1) / 96.0;
}
