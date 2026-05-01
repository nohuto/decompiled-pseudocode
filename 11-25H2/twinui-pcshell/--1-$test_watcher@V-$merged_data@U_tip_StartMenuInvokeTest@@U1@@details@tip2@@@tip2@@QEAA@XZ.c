/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C748C
 * Callers:
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180180C10 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180254FE0 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1804554A0 (-OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience.c)
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x180455870 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x180456A84 (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 *     _XamlLauncherState::OnStartShown_::_1_::dtor$0 @ 0x1806B0A60 (_XamlLauncherState--OnStartShown_--_1_--dtor$0.c)
 *     _XamlLauncherState::OnCortanaFailedToGetForeground_::_1_::dtor$3 @ 0x1806C6822 (_XamlLauncherState--OnCortanaFailedToGetForeground_--_1_--dtor$3.c)
 *     _XamlLauncherState::ShowStartView_::_1_::dtor$12 @ 0x1806C695B (_XamlLauncherState--ShowStartView_--_1_--dtor$12.c)
 *     _XamlLauncherState::TryToCompleteStartShowWithoutCortana_::_1_::dtor$1 @ 0x1806C69B7 (_XamlLauncherState--TryToCompleteStartShowWithoutCortana_--_1_--dtor$1.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802C74B4 (--1-$com_ptr_t@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@Uerr_returncode_polic.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::~test_watcher<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>,wil::err_returncode_policy>(a1 + 48);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
