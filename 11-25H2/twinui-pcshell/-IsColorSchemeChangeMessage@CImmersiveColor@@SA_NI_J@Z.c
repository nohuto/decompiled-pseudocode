/*
 * XREFs of ?IsColorSchemeChangeMessage@CImmersiveColor@@SA_NI_J@Z @ 0x1803C0A78
 * Callers:
 *     ?OnMessage@SearchAppDesktopExperienceView@@EEAAJI_K_J@Z @ 0x1803C1470 (-OnMessage@SearchAppDesktopExperienceView@@EEAAJI_K_J@Z.c)
 *     ?OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z @ 0x1803CA9F0 (-OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z.c)
 *     ?v_WndProc@JointDivider@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x18050EEC0 (-v_WndProc@JointDivider@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CImmersiveColor::IsColorSchemeChangeMessage(int a1, const WCHAR *a2)
{
  char v2; // bl

  v2 = 0;
  if ( a1 == 26 && a2 && CompareStringOrdinal(a2, -1, L"ImmersiveColorSet", -1, 1) == 2 )
  {
    RefreshImmersiveColorPolicyState();
    v2 = 1;
  }
  GetIsImmersiveColorUsingHighContrast(1LL);
  return v2;
}
