/*
 * XREFs of ?IsClassicApplication@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4ZBID@@@Z @ 0x180094778
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800437F8 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     RecoverWindowsProc @ 0x180094660 (RecoverWindowsProc.c)
 * Callees:
 *     ?ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z @ 0x1801D995C (-ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SWT_3@@@details@wil@@QEAA_NXZ @ 0x1802E91E0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SWT_3@@@details@wil@@QEAA_NXZ.c)
 */

bool __fastcall CApplicationManagerUtility::IsClassicApplication(ShellManagedWindowHelper *a1, int a2)
{
  char v4; // bl
  HWND v6; // rdx

  v4 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SWT_3>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SWT_3>::GetImpl'::`2'::impl) )
  {
    if ( (unsigned int)(a2 - 1) > 1 && a2 != 16 )
      return GetPropW((HWND)a1, L"Microsoft.Windows.ImmersiveZBIDWindowAsClassic") != 0;
  }
  else if ( (unsigned int)(a2 - 1) > 1 && a2 != 16 && !GetPropW((HWND)a1, (LPCWSTR)0xA920) )
  {
    return 0;
  }
  if ( !(unsigned int)IsShellManagedWindow(a1)
    || ShellManagedWindowHelper::ShouldTreatShellManagedWindowAsNotShellManaged(a1, v6) )
  {
    return 1;
  }
  return v4;
}
