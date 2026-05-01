/*
 * XREFs of _LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1_::_1_::catch$51 @ 0x1806D3B45
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DEE08 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805A8058 (--1-$test_data_control@V-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@QE.c)
 *     ?data@?$tip_test@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@2@XZ @ 0x1805A84CC (-data@-$tip_test@V-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA-AV-.c)
 *     ?close@?$test_data_control@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1805B76C8 (-close@-$test_data_control@V-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2.c)
 */

__int64 __fastcall LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync__ResumeCoro_1_::_1_::catch_51(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rax

  v3 = *(_QWORD *)(a2 + 384);
  tip2::tip_test<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::data(
    v3 + 16,
    (__int64 *)(v3 + 328));
  v4 = *winrt::to_hresult((_DWORD *)(v3 + 336));
  v5 = *(_QWORD *)(v3 + 328);
  *(_QWORD *)(a2 + 392) = v5;
  *(_DWORD *)(v5 + 272) = v4;
  v6 = *(_QWORD *)(v3 + 328);
  *(_QWORD *)(a2 + 392) = v6;
  *(_DWORD *)(v6 + 276) = 9;
  tip2::test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::close((__int64 *)(v3 + 328));
  tip2::test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>((void **)(v3 + 328));
  return 0LL;
}
