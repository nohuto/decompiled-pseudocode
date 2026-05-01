/*
 * XREFs of ??1?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802D1A34
 * Callers:
 *     _UndockedSearchAppExperienceManager::StartFullActivationTest_::_1_::dtor$1 @ 0x1806AA2D4 (_UndockedSearchAppExperienceManager--StartFullActivationTest_--_1_--dtor$1.c)
 *     _UndockedSearchAppExperienceManager::ActivationDeferralComplete_::_1_::dtor$1 @ 0x1806BFF57 (_UndockedSearchAppExperienceManager--ActivationDeferralComplete_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall tip2::tip_test<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::~tip_test<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>(
        void **a1)
{
  return wil::com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>(a1);
}
