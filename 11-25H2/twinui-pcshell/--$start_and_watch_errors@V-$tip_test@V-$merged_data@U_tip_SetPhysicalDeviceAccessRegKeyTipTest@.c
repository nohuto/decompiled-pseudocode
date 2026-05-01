/*
 * XREFs of ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18061846C
 * Callers:
 *     _lambda_7dcf87eb4336ac1cd65e4151029d03fa_$_ResumeCoro$1::operator() @ 0x180619440 (_lambda_7dcf87eb4336ac1cd65e4151029d03fa_$_ResumeCoro$1--operator().c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800D53EC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180618DC0 (--1-$com_ptr_t@V-$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@tip2@@Uerr.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18061DD10 (-start@-$tip_test@V-$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@tip2@@@.c)
 */

struct wil::details::IFailureCallback *__fastcall tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>>>(
        struct wil::details::IFailureCallback *a1)
{
  __int64 v2; // rax
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  tip2::tip_test<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>>::start(
    &v5,
    v4);
  *(_QWORD *)a1 = &tip2::test_watcher<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    0LL,
    1);
  v2 = v5;
  *((_QWORD *)a1 + 6) = v5;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 272));
  wil::com_ptr_t<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>,wil::err_returncode_policy>(&v5);
  return a1;
}
