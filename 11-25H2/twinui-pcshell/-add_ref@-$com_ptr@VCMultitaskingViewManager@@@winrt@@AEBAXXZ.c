/*
 * XREFs of ?add_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEBAXXZ @ 0x180084AB8
 * Callers:
 *     ??$MakeAndInitialize@VJointDivider@@V1@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VJointDivider@@@WRL@Microsoft@@@012@AEAPEAUHWND__@@@Z @ 0x180081DB8 (--$MakeAndInitialize@VJointDivider@@V1@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-.c)
 *     ??$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter@@@Z @ 0x180084720 (--$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter.c)
 *     ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180084870 (-_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIntern.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x1801AA3A8 (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 *     ?WaitForPendingOperations@CFrameApplicationPresentation@@UEAAJXZ @ 0x1801B9450 (-WaitForPendingOperations@CFrameApplicationPresentation@@UEAAJXZ.c)
 *     CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x18025AA30 (CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const_&_ @ 0x1802C8538 (CIAMGlobals--QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const_-_.c)
 *     CMultitaskingViewManager::DismissRequested$_ResumeCoro$1 @ 0x18048F740 (CMultitaskingViewManager--DismissRequested$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x18048FA40 (CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::ShowRequested$_ResumeCoro$1 @ 0x180490660 (CMultitaskingViewManager--ShowRequested$_ResumeCoro$1.c)
 *     std::_Func_impl_no_alloc__lambda_65531314798acc7a8393a9f386776a3e__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Copy @ 0x180490DB0 (std--_Func_impl_no_alloc__lambda_65531314798acc7a8393a9f386776a3e__void_enum_winrt--WindowsUdk--.c)
 *     std::_Func_impl_no_alloc__lambda_dc2607754e001e0dc3a004d65aa5a9ed__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Copy @ 0x180490DF0 (std--_Func_impl_no_alloc__lambda_dc2607754e001e0dc3a004d65aa5a9ed__void_enum_winrt-_ea_180490DF0.c)
 *     ?s_WndProcBase@?$CWRLImpWndProc@VJointDivider@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x18050ED90 (-s_WndProcBase@-$CWRLImpWndProc@VJointDivider@@@@KA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall winrt::com_ptr<CMultitaskingViewManager>::add_ref(__int64 *a1, volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v2 + 36), a2);
  return result;
}
