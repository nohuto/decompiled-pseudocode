/*
 * XREFs of ??0?$test_data_control@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1805CB95C
 * Callers:
 *     ??C?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@1@XZ @ 0x1805CC6A0 (--C-$tip_test@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA-.c)
 *     ?SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x180651114 (-SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt.c)
 *     ?SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUguid@6@W4SwitchSource@3456@@Z @ 0x18066F2D0 (-SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 * Callees:
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802816D8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 */

__int64 *__fastcall tip2::test_data_control<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>>::test_data_control<tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax

  v2 = *a2;
  *a1 = *a2;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 392));
  tip2::details::shared_data<1,0,0>::begin_update(*a1 + 8);
  return a1;
}
