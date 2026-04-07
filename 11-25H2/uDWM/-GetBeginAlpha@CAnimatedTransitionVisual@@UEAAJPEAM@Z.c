/*
 * XREFs of ?GetBeginAlpha@CAnimatedTransitionVisual@@UEAAJPEAM@Z @ 0x180086A60
 * Callers:
 *     ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CC220 (-_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimatedTransitionVisual::GetBeginAlpha(CAnimatedTransitionVisual *this, float *a2)
{
  *a2 = *((float *)this + 220);
  return 0LL;
}
