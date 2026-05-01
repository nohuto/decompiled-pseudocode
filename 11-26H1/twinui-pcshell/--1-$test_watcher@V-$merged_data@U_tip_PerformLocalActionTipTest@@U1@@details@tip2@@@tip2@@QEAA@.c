/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18064A07C
 * Callers:
 *     ?PerformLocalAction@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBW4RemoteDesktopLocalAction@3456@@Z @ 0x18064EE38 (-PerformLocalAction@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::PerformLocalAction_::_1_::dtor$0 @ 0x180703C6E (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--PerformLocalAct.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180649A10 (--1-$com_ptr_t@V-$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@Uerr_returncode.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_PerformLocalActionTipTest,_tip_PerformLocalActionTipTest>>::~test_watcher<tip2::details::merged_data<_tip_PerformLocalActionTipTest,_tip_PerformLocalActionTipTest>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_PerformLocalActionTipTest,_tip_PerformLocalActionTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_PerformLocalActionTipTest,_tip_PerformLocalActionTipTest>,wil::err_returncode_policy>((void **)(a1 + 48));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
