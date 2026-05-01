/*
 * XREFs of ?copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z @ 0x18002A230
 * Callers:
 *     ?OnViewWrapperViewEvent@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18023D960 (-OnViewWrapperViewEvent@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInt.c)
 *     ??R_lambda_403c633736a1bddadba4817f5f4a752e_@@QEBA@AEBUIApplicationFactory@Xaml@UI@Microsoft@winrt@@@Z @ 0x18027F510 (--R_lambda_403c633736a1bddadba4817f5f4a752e_@@QEBA@AEBUIApplicationFactory@Xaml@UI@Microsoft@win.c)
 *     ??B?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@QEBA?AUIInspectable@Foundation@Windows@1@XZ @ 0x18028FE64 (--B-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInte.c)
 *     ??B?$implements@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@UIRemoteSystemDataModelStatics@3456@Ustatic_lifetime@6@@winrt@@QEBA?AUIInspectable@Foundation@Windows@1@XZ @ 0x1802BF3A8 (--B-$implements@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIAc.c)
 *     ?EnsureGamingOverlayEMConnection@GamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@AEAAXXZ @ 0x1803383EC (-EnsureGamingOverlayEMConnection@GamingPostureSystemDialog@implementation@Posture@GamingExperien.c)
 *     ?LaunchForResultsAsync@GamingOverlayExperienceManager@@UEAAJPEAUHSTRING__@@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAVValueSet@Collections@Foundation@Windows@@@56@@Z @ 0x18034C310 (-LaunchForResultsAsync@GamingOverlayExperienceManager@@UEAAJPEAUHSTRING__@@PEAU-$IMap@PEAUHSTRIN.c)
 *     ?OnVisibilityRevokedChanged@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18034FE0C (-OnVisibilityRevokedChanged@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInt.c)
 *     ?ReportCompleted@GamingOverlayExperienceManager@@UEAAJIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180352290 (-ReportCompleted@GamingOverlayExperienceManager@@UEAAJIPEAUIPropertySet@Collections@Foundation@W.c)
 *     ??0GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@34@V?$com_ptr_t@UIApplicationFrameFactory@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18035AA58 (--0GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA@PEAUIViewW.c)
 *     ?SetDockedStartController@CStartExperienceManager@@UEAAJPEAUIInspectable@@@Z @ 0x18038AFF0 (-SetDockedStartController@CStartExperienceManager@@UEAAJPEAUIInspectable@@@Z.c)
 *     ?OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180461E10 (-OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience.c)
 *     ?MoveSwitchItemToDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktop@3456@@Z @ 0x180492890 (-MoveSwitchItemToDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableS.c)
 *     ??$invoke@U?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@winrt@@UWindowsTracker@implementation@Shell@Internal@34@UWindowId@UI@34@@impl@winrt@@YA_NAEBU?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@1@AEBUWindowsTracker@implementation@Shell@Internal@41@AEBUWindowId@UI@41@@Z @ 0x18065E3A0 (--$invoke@U-$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@winrt@@UWindowsTracker.c)
 *     ??$invoke@U?$EventHandler@I@Foundation@Windows@winrt@@UProcessTracker@implementation@Shell@Internal@34@I@impl@winrt@@YA_NAEBU?$EventHandler@I@Foundation@Windows@1@AEBUProcessTracker@implementation@Shell@Internal@41@AEBI@Z @ 0x18065FCA0 (--$invoke@U-$EventHandler@I@Foundation@Windows@winrt@@UProcessTracker@implementation@Shell@Inter.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::copy_from_abi(winrt *this, struct IUnknown *a2, void *a3)
{
  if ( *(_QWORD *)this )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)this);
  if ( a2 )
  {
    ((void (__fastcall *)(struct IUnknown *, struct IUnknown *, void *))a2->lpVtbl->AddRef)(a2, a2, a3);
    if ( *(_QWORD *)this )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)this);
    *(_QWORD *)this = a2;
  }
}
