/*
 * XREFs of ?StartXamlExplorerHostThread@SnapFlyoutHost@@AEAAXV?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805B5060
 * Callers:
 *     ?InternalShowFlyout@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801CCACC (-InternalShowFlyout@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV-$unique_any_t@V-$unique_.c)
 *     ?InternalShowBar@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@PEAUHMONITOR__@@@Z @ 0x180269D9C (-InternalShowBar@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@P.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18001A16C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1801C46F8 (--1-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@win.c)
 *     ?get_strong@?$implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA?AU?$com_ptr@VSnapFlyoutHost@@@2@XZ @ 0x1801CC944 (-get_strong@-$implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA-A.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028163C (--1-$test_data_control@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@1@XZ @ 0x180281674 (--C-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_da.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$SnapFlyout_StartXamlExplorerHostThread@AEAW4ThreadState@SnapFlyoutHost@@@SnapFlyoutTelemetry@@SAXAEAW4ThreadState@SnapFlyoutHost@@@Z @ 0x1802C38C8 (--$SnapFlyout_StartXamlExplorerHostThread@AEAW4ThreadState@SnapFlyoutHost@@@SnapFlyoutTelemetry@.c)
 *     ??$check_bool@H@winrt@@YAHHAEBUslim_source_location@impl@0@@Z @ 0x1803CECB0 (--$check_bool@H@winrt@@YAHHAEBUslim_source_location@impl@0@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SnapFlyoutHost::StartXamlExplorerHostThread(__int64 a1, __int64 *a2, void *a3)
{
  void **v3; // rbx
  _DWORD *v5; // rsi
  const char *v6; // r9
  BOOL v7; // eax
  const char *v8; // r9
  int v10; // [rsp+30h] [rbp-38h] BYREF
  __int128 v11; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v14; // [rsp+78h] [rbp+10h]
  void *pData; // [rsp+80h] [rbp+18h] BYREF
  HANDLE pHandle; // [rsp+88h] [rbp+20h] BYREF

  pData = a3;
  v14 = a2;
  v13 = a1;
  v3 = (void **)a2;
  v5 = (_DWORD *)(a1 + 168);
  SnapFlyoutTelemetry::SnapFlyout_StartXamlExplorerHostThread<enum SnapFlyoutHost::ThreadState &>((int *)(a1 + 168));
  if ( *v5 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x235,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
      v6);
  *v5 = 1;
  *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::operator->(
                          (__int64)v3,
                          (__int64)&pData)
           + 281LL) = 1;
  tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>((__int64 *)&pData);
  pHandle = 0LL;
  winrt::implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_strong(a1, (__int64 *)&pData);
  v10 = 0;
  v11 = 0LL;
  v7 = SHCreateThreadWithHandle(
         (LPTHREAD_START_ROUTINE)lambda_bfb9c683e4ebe68c910af62690c76974_::_lambda_invoker_cdecl_,
         pData,
         0xC000u,
         (LPTHREAD_START_ROUTINE)lambda_0c8890f986995415a854c044c041a5fc_::_lambda_invoker_cdecl_,
         &pHandle);
  try
  {
    winrt::check_bool<int>(v7, (winrt *)&v10);
    pData = 0LL;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)(a1 + 88),
      pHandle);
    winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>(&pData);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x253,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
      v8);
    *(_DWORD *)(v13 + 168) = 0;
    *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::operator->(
                            (__int64)v14,
                            (__int64)&v13)
             + 278LL) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(&v13);
    tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete(v14);
    v3 = (void **)v14;
  }
  return wil::com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>(v3);
}
