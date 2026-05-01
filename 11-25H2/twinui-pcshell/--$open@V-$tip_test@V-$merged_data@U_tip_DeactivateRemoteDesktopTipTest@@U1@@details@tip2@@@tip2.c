/*
 * XREFs of ??$open@V?$tip_test@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@0@XZ @ 0x1806468C0
 * Callers:
 *     ?Execute@SwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180647E80 (-Execute@SwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18028D664 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??0?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z @ 0x180622C38 (--0-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180623CF4 (--1-$com_ptr_t@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@Uerr_retur.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1806247F4 (--4-$com_ptr_t@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@Uerr_retur.c)
 */

void **__fastcall tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>>(
        void **a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = CoTaskMemAlloc(0x158uLL);
  if ( !v2 )
    wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
  v5 = tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>(
         (__int64)v2,
         0LL);
  wil::com_ptr_t<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>,wil::err_returncode_policy>::operator=(
    a1,
    (void **)&v5);
  wil::com_ptr_t<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>,wil::err_returncode_policy>((void **)&v5);
  return a1;
}
