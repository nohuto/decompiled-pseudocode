/*
 * XREFs of ??1?$vector@UIAsyncAction@Foundation@Windows@winrt@@V?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x180100EE8
 * Callers:
 *     ??1SnapAssistState@@QEAA@XZ @ 0x18010A954 (--1SnapAssistState@@QEAA@XZ.c)
 *     ??1?$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x1802D196C (--1-$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V-$allocator@UISwi.c)
 *     ??1?$_Tidy_guard@V?$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@@std@@QEAA@XZ @ 0x1806985C8 (--1-$_Tidy_guard@V-$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V-$.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_4bd855e1dd94d2f8892f0782f15ffa49___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_4bd855e1dd94d2f8892f0782f15ffa49___ @ 0x180698608 (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winr_ea_180698608.c)
 *     ?MakeFilteredDataSource@SnapAssistState@@AEAA?AUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBU234567@@Z @ 0x180698A4C (-MakeFilteredDataSource@SnapAssistState@@AEAA-AUISwitchItemDataSource@Multitasking@ComposableShe.c)
 *     _winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::SetupTaskbarOffsetTrigger_::_1_::dtor$4 @ 0x1806B25E5 (_winrt--Windows--Internal--Shell--Animations--implementation--EdgeAnimationRelation_ea_1806B25E5.c)
 *     _CAppThumbnailWindow::SetupFlickScaleFactorAnimations_::_1_::dtor$4 @ 0x1806C8D07 (_CAppThumbnailWindow--SetupFlickScaleFactorAnimations_--_1_--dtor$4.c)
 *     _CAppThumbnailWindow::StartMinimizeGestureOperation_::_1_::dtor$19 @ 0x1806C8DA9 (_CAppThumbnailWindow--StartMinimizeGestureOperation_--_1_--dtor$19.c)
 *     _CShellSnapComponent::OnWindowArrangementEvent_::_1_::dtor$5 @ 0x1806CFE9A (_CShellSnapComponent--OnWindowArrangementEvent_--_1_--dtor$5.c)
 *     _SnapFlyoutHost::GetSuggestedWindowPositions_::_1_::dtor$0 @ 0x1806D12DF (_SnapFlyoutHost--GetSuggestedWindowPositions_--_1_--dtor$0.c)
 *     _LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1_::_1_::dtor$8 @ 0x1806D38FE (_LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1_--_1_--dtor$8.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806D797C (_winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--GetFallbackContentAsync$_Resu.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_ResumeCoro$1_::_1_::dtor$2 @ 0x1806D79E0 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--GetFallbackConte_ea_1806D79E0.c)
 *     _CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1_::_1_::dtor$3 @ 0x1806D7E5D (_CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1_--_1_--dtor$3.c)
 *     _CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1_::_1_::dtor$13 @ 0x1806D7FD0 (_CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1_--_1_--dtor$13.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1800FF1A0 (--$_Destroy_range@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@Win.c)
 */

void __fastcall std::vector<winrt::Windows::Foundation::IAsyncAction>::~vector<winrt::Windows::Foundation::IAsyncAction>(
        __int64 a1)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v2; // rcx

  v2 = *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
      v2,
      *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a1 + 8));
    std::_Deallocate<16,0>(
      *(void **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
