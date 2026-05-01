/*
 * XREFs of ??0?$test_watcher@V?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@@tip2@@QEAA@$$T@Z @ 0x1803ADB54
 * Callers:
 *     ?OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18023D23C (-OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shel.c)
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18023D3F0 (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x18023DC7C (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18023F0A0 (-Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 *     ?Uncloak@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x18023FC70 (-Uncloak@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     _lambda_e7077867749c18ac48aae4f1857ffe65_::operator() @ 0x1803AF7FC (_lambda_e7077867749c18ac48aae4f1857ffe65_--operator().c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800B3F5C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@$$V@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1803ACFF4 (--$tip_make_shared_nothrow@V-$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dyn.c)
 */

struct wil::details::IFailureCallback *__fastcall tip2::test_watcher<tip2::details::merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>>::test_watcher<tip2::details::merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>>(
        struct wil::details::IFailureCallback *a1)
{
  *(_QWORD *)a1 = &tip2::test_watcher<tip2::details::merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    0LL,
    0);
  tip2::details::tip_make_shared_nothrow<tip2::details::merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>,>((_QWORD *)a1 + 6);
  return a1;
}
