/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@@tip2@@QEAA@XZ @ 0x1803AE3CC
 * Callers:
 *     ?OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18023D23C (-OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shel.c)
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18023D3F0 (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x18023DC7C (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18023F0A0 (-Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 *     ?Uncloak@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x18023FC70 (-Uncloak@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     _lambda_e7077867749c18ac48aae4f1857ffe65_::operator() @ 0x1803AF7FC (_lambda_e7077867749c18ac48aae4f1857ffe65_--operator().c)
 *     _UndockedSearchAppExperienceManager::OnViewCreated_::_1_::dtor$1 @ 0x1806E8242 (_UndockedSearchAppExperienceManager--OnViewCreated_--_1_--dtor$1.c)
 *     _UndockedSearchAppExperienceManager::PositionSearchAppWindow_::_1_::dtor$1 @ 0x1806E82A8 (_UndockedSearchAppExperienceManager--PositionSearchAppWindow_--_1_--dtor$1.c)
 *     _UndockedSearchAppExperienceManager::Show_::_1_::dtor$11 @ 0x1806E8467 (_UndockedSearchAppExperienceManager--Show_--_1_--dtor$11.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1803AE0E0 (--1-$com_ptr_t@V-$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@deta.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>>::~test_watcher<tip2::details::merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>,wil::err_returncode_policy>((void **)(a1 + 48));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
