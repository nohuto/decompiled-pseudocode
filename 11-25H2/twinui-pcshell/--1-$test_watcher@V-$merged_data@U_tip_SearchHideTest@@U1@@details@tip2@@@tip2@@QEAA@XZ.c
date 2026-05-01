/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028A790
 * Callers:
 *     ?RequestSearchAppToHideInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180196A94 (-RequestSearchAppToHideInternal@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180239D80 (-HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x1802493D0 (-Hide@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?OnLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803ADDC4 (-OnLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?OnSearchAppHideRequestedTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803ADEC4 (-OnSearchAppHideRequestedTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     _UndockedSearchAppExperienceManager::RequestSearchAppToHideInternal_::_1_::dtor$0 @ 0x1806B10BB (_UndockedSearchAppExperienceManager--RequestSearchAppToHideInternal_--_1_--dtor$0.c)
 *     _UndockedSearchAppExperienceManager::HideWithArgs_::_1_::dtor$3 @ 0x1806B8010 (_UndockedSearchAppExperienceManager--HideWithArgs_--_1_--dtor$3.c)
 *     _UndockedSearchAppExperienceManager::Hide_::_1_::dtor$3 @ 0x1806C00F9 (_UndockedSearchAppExperienceManager--Hide_--_1_--dtor$3.c)
 *     _UndockedSearchAppExperienceManager::OnLastResortSuspensionTimer_::_1_::dtor$0 @ 0x1806C02CE (_UndockedSearchAppExperienceManager--OnLastResortSuspensionTimer_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028A7B8 (--1-$com_ptr_t@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::~test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>,wil::err_returncode_policy>(a1 + 48);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
