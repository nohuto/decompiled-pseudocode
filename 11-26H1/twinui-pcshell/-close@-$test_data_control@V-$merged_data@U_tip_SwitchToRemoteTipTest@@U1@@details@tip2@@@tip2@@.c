/*
 * XREFs of ?close@?$test_data_control@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x18065349C
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180649FD0 (--1-$test_data_control@V-$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ?SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x180651114 (-SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt.c)
 *     ?SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUguid@6@W4SwitchSource@3456@@Z @ 0x18066F2D0 (-SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 * Callees:
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180281974 (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180654AD8 (-reset@-$com_ptr_t@V-$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@Uerr_returncode.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>>::close(
        __int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    tip2::details::shared_data<1,0,0>::end_update(v2 + 8);
    return wil::com_ptr_t<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>,wil::err_returncode_policy>::reset(a1);
  }
  return result;
}
