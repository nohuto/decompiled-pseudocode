/*
 * XREFs of ??4?$com_ptr_t@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802BF704
 * Callers:
 *     ?TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUSnapLayoutPickerExtension@4UI@WindowsUdk@7@IPEAUHWND__@@PEAUHMONITOR__@@AEBURect@Foundation@67@W4SnapControlType@34567@W4InputDeviceKind@49WindowsUdk@7@@Z @ 0x1800A1240 (-TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180281844 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@AEBAAE.c)
 *     ?open_helper@?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@AEAA_NPEAU_GUID@@@Z @ 0x1802818A4 (-open_helper@-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@AEAA_N.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@AEAAKXZ @ 0x180281AE4 (-Release@-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

volatile signed __int32 **__fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>::operator=(
        volatile signed __int32 **a1,
        volatile signed __int32 **a2)
{
  volatile signed __int32 *v2; // rax
  volatile signed __int32 *v4; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>::Release(v4);
  return a1;
}
