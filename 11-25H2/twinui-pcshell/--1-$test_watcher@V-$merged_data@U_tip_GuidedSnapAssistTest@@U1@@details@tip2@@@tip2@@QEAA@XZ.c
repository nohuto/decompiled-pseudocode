/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180287BD0
 * Callers:
 *     ?ItemSnapped@SnapAssistState@@QEAA?AU?$pair@W4SnapAssistStateTransition@@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@PEAUHWND__@@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBURect@Foundation@9winrt@@@Z @ 0x18028D674 (-ItemSnapped@SnapAssistState@@QEAA-AU-$pair@W4SnapAssistStateTransition@@UISwitchItemDataSource@.c)
 *     ?InitializeViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAVSwitchItemListViewModelArgs@3456@@Z @ 0x180698808 (-InitializeViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@Compos.c)
 *     ?UpdateViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBUISwitchItemDataSource@Multitasking@5Internal@Windows@winrt@@@Z @ 0x180698D0C (-UpdateViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@Composable.c)
 *     _CSnapAssistControllerBase::AdvanceGuidedSnapAssist_::_1_::dtor$0 @ 0x1806AB210 (_CSnapAssistControllerBase--AdvanceGuidedSnapAssist_--_1_--dtor$0.c)
 *     _SnapAssistState::ItemSnapped_::_1_::dtor$0 @ 0x1806AEEA7 (_SnapAssistState--ItemSnapped_--_1_--dtor$0.c)
 *     __lambda_017e4516d3db66192a06ba57bc482270_::operator()_::_1_::dtor$0 @ 0x1806B727A (__lambda_017e4516d3db66192a06ba57bc482270_--operator()_--_1_--dtor$0.c)
 *     _SnapAssistState::InitializeViewModel_::_1_::dtor$0 @ 0x1806DF91B (_SnapAssistState--InitializeViewModel_--_1_--dtor$0.c)
 *     _SnapAssistState::UpdateViewModel_::_1_::dtor$0 @ 0x1806DF981 (_SnapAssistState--UpdateViewModel_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180287BF8 (--1-$com_ptr_t@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_poli.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_watcher<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>(a1 + 48);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
