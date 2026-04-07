/*
 * XREFs of ?GetDpiAdjustedFloatCornerRadius@CTopLevelWindow@@QEAAMXZ @ 0x18007DC28
 * Callers:
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180018D00 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 * Callees:
 *     ?GetRadiusFromCornerStyle@CTopLevelWindow@@AEAAMXZ @ 0x18000F9FC (-GetRadiusFromCornerStyle@CTopLevelWindow@@AEAAMXZ.c)
 */

float __fastcall CTopLevelWindow::GetDpiAdjustedFloatCornerRadius(CTopLevelWindow *this, __int64 a2)
{
  return (float)(CTopLevelWindow::GetRadiusFromCornerStyle(this, a2) * (float)*(int *)(*((_QWORD *)this + 89) + 348LL))
       / 96.0;
}
