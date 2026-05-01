/*
 * XREFs of ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180172954
 * Callers:
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1800C31B0 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18017290C (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1802489C0 (-OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@S.c)
 *     ?ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@@@Z @ 0x180249378 (-ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@.c)
 *     ??$MakeAndInitialize@VCJumpViewExperienceEventArgs@@UIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAUIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@@Z @ 0x1802B02A8 (--$MakeAndInitialize@VCJumpViewExperienceEventArgs@@UIJumpViewExperienceEventArgs@E_ea_1802B02A8.c)
 *     ?_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@PEAPEAU2@@Z @ 0x180377654 (-_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellEx.c)
 *     ?Show@CPeopleBarJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x1803844F0 (-Show@CPeopleBarJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z @ 0x180385F90 (-ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z.c)
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18038E1A0 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?_NormalizeAndAddPositionerArgs@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1803A48A8 (-_NormalizeAndAddPositionerArgs@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     Microsoft::WRL::Details::MakeAndInitialize__TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg_Windows::Internal::Shell::Experience::IShellExperienceViewEventArg_HSTRING_____&_Windows::Foundation::Collections::IPropertySet___&_ @ 0x1803BEEF4 (Microsoft--WRL--Details--MakeAndInitialize__TwinUI--Cortana--ShellExperienceView--_FireViewEvent.c)
 *     ?IsShowForTransitions@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEA_N@Z @ 0x1803C9C34 (-IsShowForTransitions@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEA_N@Z.c)
 *     ?IsShowForTransitions@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEA_N@Z @ 0x1803D3A08 (-IsShowForTransitions@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEA_N@Z.c)
 *     ?Wrap@?$RefCountWrapper@PEAUHSTRING__@@X@@SAJPEAUHSTRING__@@PEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18054D248 (-Wrap@-$RefCountWrapper@PEAUHSTRING__@@X@@SAJPEAUHSTRING__@@PEAVHString@Wrappers@WRL@Microsoft@@.c)
 *     ?put_Name@?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAUHSTRING__@@@Z @ 0x180563CB0 (-put_Name@-$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@.c)
 *     ?SetNameInternal@CVirtualDesktop@@UEAAJPEAUHSTRING__@@@Z @ 0x180569560 (-SetNameInternal@CVirtualDesktop@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?SetWallpaperInternal@CVirtualDesktop@@UEAAJPEAUHSTRING__@@@Z @ 0x1805695B0 (-SetWallpaperInternal@CVirtualDesktop@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?SwapAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1806831C0 (-SwapAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Wrappers::HString::Set(HSTRING *newString, HSTRING *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !*a2 || *a2 != *newString )
  {
    WindowsDeleteString(*newString);
    *newString = 0LL;
    return (unsigned int)WindowsDuplicateString(*a2, newString);
  }
  return v2;
}
