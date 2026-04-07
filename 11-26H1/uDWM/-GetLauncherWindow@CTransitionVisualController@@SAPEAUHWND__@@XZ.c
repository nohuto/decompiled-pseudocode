/*
 * XREFs of ?GetLauncherWindow@CTransitionVisualController@@SAPEAUHWND__@@XZ @ 0x18008DEA4
 * Callers:
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x180075FFC (-IsRTL@CStoryboard@@SA_NXZ.c)
 * Callees:
 *     <none>
 */

HWND CTransitionVisualController::GetLauncherWindow(void)
{
  return FindWindowW(L"ImmersiveLauncher", 0LL);
}
