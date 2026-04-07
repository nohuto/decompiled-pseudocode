/*
 * XREFs of ?GetLauncherWindow@CTransitionVisualController@@SAPEAUHWND__@@XZ @ 0x18009A46C
 * Callers:
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x1800877B8 (-IsRTL@CStoryboard@@SA_NXZ.c)
 * Callees:
 *     <none>
 */

HWND CTransitionVisualController::GetLauncherWindow(void)
{
  return FindWindowW(L"ImmersiveLauncher", 0LL);
}
