/*
 * XREFs of ??$MakeAndInitializeOrThrow@VTaskViewFrame@@AEAW4ALL_UP_VIEW_FLAGS@@AEAPEAUIImmersiveMonitor@@AEAPEAU3@AEBUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@AEBUSwitchItemDataView@6ComposableShell@89winrt@@AEBUIVirtualDesktopDataSource@6ComposableShell@89winrt@@AEBUIVirtualDesktopController@6ComposableShell@89winrt@@AEAPE$AAUIXamlMultitaskingViewController@@AEAPE$AAUIXamlSwitcherWindowInteractionEvents@@AEAPEAUIApplicationViewCollection@@AEBUTaskGroupDataSourceAdapter@TaskGroups@789winrt@@AEAPEAUIRemoteSessionWindowManager@789ABI@@@wil@@YA?AV?$ComPtr@VTaskViewFrame@@@WRL@Microsoft@@AEAW4ALL_UP_VIEW_FLAGS@@AEAPEAUIImmersiveMonitor@@1AEBUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@AEBUSwitchItemDataView@8ComposableShell@Internal@Windows@winrt@@AEBUIVirtualDesktopDataSource@8ComposableShell@Internal@Windows@winrt@@AEBUIVirtualDesktopController@8ComposableShell@Internal@Windows@winrt@@AEAPE$AAUIXamlMultitaskingViewController@@AEAPE$AAUIXamlSwitcherWindowInteractionEvents@@AEAPEAUIApplicationViewCollection@@AEBUTaskGroupDataSourceAdapter@TaskGroups@9Internal@Windows@winrt@@AEAPEAUIRemoteSessionWindowManager@9Internal@Windows@ABI@@@Z @ 0x18029F9D4
 * Callers:
 *     ?MakeTaskViewFrame@@YA?AV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@W4ALL_UP_VIEW_FLAGS@@PEAUIImmersiveMonitor@@1AEBUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@AEBUSwitchItemDataView@7ComposableShell@9Windows@winrt@@AEBUIVirtualDesktopDataSource@7ComposableShell@9Windows@winrt@@AEBUIVirtualDesktopController@7ComposableShell@9Windows@winrt@@PE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@PEAUIApplicationViewCollection@@AEBUTaskGroupDataSourceAdapter@TaskGroups@89Windows@winrt@@PEAUIRemoteSessionWindowManager@89Windows@ABI@@@Z @ 0x1801E21A0 (-MakeTaskViewFrame@@YA-AV-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@W4ALL_UP_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VTaskViewFrame@@V1@AEAW4ALL_UP_VIEW_FLAGS@@AEAPEAUIImmersiveMonitor@@AEAPEAU3@AEBUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@AEBUSwitchItemDataView@6ComposableShell@89winrt@@AEBUIVirtualDesktopDataSource@6ComposableShell@89winrt@@AEBUIVirtualDesktopController@6ComposableShell@89winrt@@AEAPE$AAUIXamlMultitaskingViewController@@AEAPE$AAUIXamlSwitcherWindowInteractionEvents@@AEAPEAUIApplicationViewCollection@@AEBUTaskGroupDataSourceAdapter@TaskGroups@789winrt@@AEAPEAUIRemoteSessionWindowManager@789ABI@@@Details@WRL@Microsoft@@YAJPEAPEAVTaskViewFrame@@AEAW4ALL_UP_VIEW_FLAGS@@AEAPEAUIImmersiveMonitor@@2AEBUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@AEBUSwitchItemDataView@8ComposableShell@Internal@Windows@winrt@@AEBUIVirtualDesktopDataSource@8ComposableShell@Internal@Windows@winrt@@AEBUIVirtualDesktopController@8ComposableShell@Internal@Windows@winrt@@AEAPE$AAUIXamlMultitaskingViewController@@AEAPE$AAUIXamlSwitcherWindowInteractionEvents@@AEAPEAUIApplicationViewCollection@@AEBUTaskGroupDataSourceAdapter@TaskGroups@9Internal@Windows@winrt@@AEAPEAUIRemoteSessionWindowManager@9Internal@Windows@ABI@@@Z @ 0x18029FADC (--$MakeAndInitialize@VTaskViewFrame@@V1@AEAW4ALL_UP_VIEW_FLAGS@@AEAPEAUIImmersiveMonitor@@AEAPEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAndInitializeOrThrow<TaskViewFrame,enum ALL_UP_VIEW_FLAGS &,IImmersiveMonitor * &,IImmersiveMonitor * &,winrt::Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice const &,winrt::Windows::Internal::ComposableShell::Multitasking::SwitchItemDataView const &,winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource const &,winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController const &,IXamlMultitaskingViewController __gc * &,IXamlSwitcherWindowInteractionEvents __gc * &,IApplicationViewCollection * &,winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter const &,ABI::Windows::Internal::Shell::IRemoteSessionWindowManager * &>(
        __int64 *a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        struct winrt::Windows::Internal::ComposableShell::Multitasking::SwitchItemDataView *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  int v17; // eax
  int v19; // [rsp+20h] [rbp-68h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
  v17 = Microsoft::WRL::Details::MakeAndInitialize<TaskViewFrame,TaskViewFrame,enum ALL_UP_VIEW_FLAGS &,IImmersiveMonitor * &,IImmersiveMonitor * &,winrt::Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice const &,winrt::Windows::Internal::ComposableShell::Multitasking::SwitchItemDataView const &,winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource const &,winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController const &,IXamlMultitaskingViewController __gc * &,IXamlSwitcherWindowInteractionEvents __gc * &,IApplicationViewCollection * &,winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter const &,ABI::Windows::Internal::Shell::IRemoteSessionWindowManager * &>(
          (_DWORD)a1,
          a2,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          a11,
          a12,
          a13);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2B,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      (const char *)(unsigned int)v17,
      v19);
  return a1;
}
