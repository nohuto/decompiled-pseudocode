/*
 * XREFs of ?SetEndAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180044FD0
 * Callers:
 *     ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180042DD0 (-_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x180043518 (-_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_WindowEnumCallback@CWindowClose@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180044EB0 (-_WindowEnumCallback@CWindowClose@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CB5C0 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     <none>
 */

void __fastcall CAnimatedTransitionVisual::SetEndAlpha(CAnimatedTransitionVisual *this, float a2)
{
  *((float *)this + 221) = a2;
  CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 4096);
}
