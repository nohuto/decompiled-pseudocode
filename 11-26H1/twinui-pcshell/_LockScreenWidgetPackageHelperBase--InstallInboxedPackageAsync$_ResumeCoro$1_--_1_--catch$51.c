/*
 * XREFs of _LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1_::_1_::catch$51 @ 0x1806FBADB
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802D7AF0 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CC1F0 (--1-$test_data_control@V-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@QE.c)
 *     ?data@?$tip_test@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@2@XZ @ 0x1805CC648 (-data@-$tip_test@V-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA-AV-.c)
 *     ?close@?$test_data_control@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1805DB020 (-close@-$test_data_control@V-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2.c)
 */

__int64 __fastcall LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync__ResumeCoro_1_::_1_::catch_51(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  _DWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax

  v3 = *(_QWORD *)(a2 + 368);
  tip2::tip_test<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::data(
    v3 + 16,
    (__int64 *)(v3 + 336));
  v4 = winrt::to_hresult((_DWORD *)(v3 + 344));
  v5 = *(_QWORD *)(v3 + 336);
  *(_QWORD *)(a2 + 376) = v5;
  *(_DWORD *)(v5 + 280) = *v4;
  v6 = *(_QWORD *)(v3 + 336);
  *(_QWORD *)(a2 + 376) = v6;
  *(_DWORD *)(v6 + 284) = 9;
  tip2::test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::close((__int64 *)(v3 + 336));
  tip2::test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>((void **)(v3 + 336));
  return 0LL;
}
