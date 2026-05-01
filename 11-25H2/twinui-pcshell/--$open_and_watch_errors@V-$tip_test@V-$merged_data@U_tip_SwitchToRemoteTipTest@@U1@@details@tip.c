/*
 * XREFs of ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180621A40
 * Callers:
 *     ?SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x18062B6F4 (-SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18028D664 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??0?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z @ 0x180622FFC (--0-$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z.c)
 *     ??0?$test_watcher@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@@tip2@@IEAA@AEAV?$com_ptr_t@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180623938 (--0-$test_watcher@V-$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@@tip2@@IEAA@AEAV.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180623D54 (--1-$com_ptr_t@V-$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@Uerr_returncode_pol.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180624824 (--4-$com_ptr_t@V-$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@Uerr_returncode_pol.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18062DE18 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@@tip2@@AEB.c)
 */

struct wil::details::IFailureCallback *__fastcall tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>>>(
        struct wil::details::IFailureCallback *a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  v2 = CoTaskMemAlloc(0x188uLL);
  if ( !v2 )
    wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
  v6 = tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>(
         v2,
         0LL);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>,wil::err_returncode_policy>::operator=(
    &v5,
    &v6);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>,wil::err_returncode_policy>(&v6);
  tip2::tip_test<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>>::ensure_data(&v5);
  tip2::test_watcher<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>>::test_watcher<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>>(a1);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>,wil::err_returncode_policy>(&v5);
  return a1;
}
