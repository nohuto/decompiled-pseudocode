/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18064A054
 * Callers:
 *     ?GetDataFromFileMappings@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AURemoteSystem@RemoteSystemData@@AEBUWindowId@UI@56@@Z @ 0x18064C728 (-GetDataFromFileMappings@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@win.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetDataFromFileMappings_::_1_::dtor$2 @ 0x180703C26 (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--Ge_ea_180703C26.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1806499F0 (--1-$com_ptr_t@V-$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@Uerr_returncode_policy.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>>::~test_watcher<tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>,wil::err_returncode_policy>((void **)(a1 + 48));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
