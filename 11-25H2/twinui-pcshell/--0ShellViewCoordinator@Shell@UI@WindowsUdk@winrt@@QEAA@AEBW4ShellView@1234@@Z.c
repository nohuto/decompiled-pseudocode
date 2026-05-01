/*
 * XREFs of ??0ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAA@AEBW4ShellView@1234@@Z @ 0x1800A6600
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x1801AA3A8 (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 *     ??0InputAppViewCoodinatorHandler@@QEAA@W4ShellView@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1801CAF90 (--0InputAppViewCoodinatorHandler@@QEAA@W4ShellView@Shell@UI@WindowsUdk@winrt@@@Z.c)
 *     ?RuntimeClassInitialize@GamingOverlayExperienceManager@@QEAAJXZ @ 0x180245368 (-RuntimeClassInitialize@GamingOverlayExperienceManager@@QEAAJXZ.c)
 *     ?PublishServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180250530 (-PublishServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     ?Initialize@TouchGestureProcessor@@QEAAXXZ @ 0x18026FD5C (-Initialize@TouchGestureProcessor@@QEAAXXZ.c)
 *     ?Create@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@SA?AU134567@AEBUShellAnimationCoordinator@34567@@Z @ 0x180285274 (-Create@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@.c)
 *     ?CreateWithShellViewCoordinatorMap@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@CA?AU134567@AEBUShellAnimationCoordinator@34567@AEBV?$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@8@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@@std@@@Z @ 0x18028560C (-CreateWithShellViewCoordinatorMap@EdgeAnimationRelationshipManager@implementation@Animations@Sh.c)
 *     ?LowLevelMouseHookProc@CJumpViewExperienceManager@@CA_JH_K_J@Z @ 0x180386380 (-LowLevelMouseHookProc@CJumpViewExperienceManager@@CA_JH_K_J@Z.c)
 *     ?InvokeSearch@CopilotHotkeyManager@@QEAAXXZ @ 0x180601894 (-InvokeSearch@CopilotHotkeyManager@@QEAAXXZ.c)
 * Callees:
 *     ?CreateInstance@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinatorFactory@UIShellViewCoordinatorFactory@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ShellView@Shell@UI@WindowsUdk@3@@Z @ 0x1800A6674 (-CreateInstance@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinatorFactory@UIShellViewCoordinato.c)
 *     ??$call@AEAV_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@?$factory_cache_entry@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIShellViewCoordinatorFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@Z @ 0x180211108 (--$call@AEAV_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@-$factory_cache_entry@UShellViewCoordina.c)
 */

// Hidden C++ exception states: #wind=1
winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *__fastcall winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::ShellViewCoordinator(
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *this,
        const enum winrt::WindowsUdk::UI::Shell::ShellView *a2)
{
  const enum winrt::WindowsUdk::UI::Shell::ShellView *v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+38h] [rbp+10h]

  v4 = a2;
  v5 = &qword_18089B038;
  _InterlockedIncrement64(&qword_18089B038);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory> )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinatorFactory<winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>::CreateInstance(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>,
      this,
      a2);
    _InterlockedDecrement64(&qword_18089B038);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089B038);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>::call<_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_ &>(
      this,
      this,
      &v4);
  }
  return this;
}
