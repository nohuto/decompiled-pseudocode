/*
 * XREFs of ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180109460
 * Callers:
 *     ?InterceptGamepadInput@GamepadInterceptionHelper@@QEAAXG_N@Z @ 0x180109D98 (-InterceptGamepadInput@GamepadInterceptionHelper@@QEAAXG_N@Z.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800D45A0 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_HapticPenAttachedTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180109854 (--1-$com_ptr_t@V-$merged_data@U_tip_HapticPenAttachedTipTest_attributes@@Vtest_data_basic@tip2@@.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18010B2A4 (-start@-$tip_test@V-$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_ba.c)
 */

struct wil::details::IFailureCallback *__fastcall tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_GamepadInterceptionUsageTipTest_attributes,tip2::test_data_basic>>>(
        struct wil::details::IFailureCallback *a1)
{
  __int64 v2; // rax
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  tip2::tip_test<tip2::details::merged_data<_tip_GamepadInterceptionUsageTipTest_attributes,tip2::test_data_basic>>::start(
    &v5,
    v4);
  *(_QWORD *)a1 = &tip2::test_watcher<tip2::details::merged_data<_tip_GamepadInterceptionUsageTipTest_attributes,tip2::test_data_basic>>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    0LL,
    1);
  v2 = v5;
  *((_QWORD *)a1 + 7) = v5;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 336));
  wil::com_ptr_t<tip2::details::merged_data<_tip_HapticPenAttachedTipTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_HapticPenAttachedTipTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>(&v5);
  return a1;
}
