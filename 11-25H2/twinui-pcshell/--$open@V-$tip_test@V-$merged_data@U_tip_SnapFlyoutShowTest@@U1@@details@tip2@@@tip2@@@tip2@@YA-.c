/*
 * XREFs of ??$open@V?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@0@XZ @ 0x18059CCD8
 * Callers:
 *     ?TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUSnapLayoutPickerExtension@4UI@WindowsUdk@7@IPEAUHWND__@@PEAUHMONITOR__@@AEBURect@Foundation@67@W4SnapControlType@34567@W4InputDeviceKind@49WindowsUdk@7@@Z @ 0x180103FB0 (-TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028C690 (--1-$com_ptr_t@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18028CA7C (--4-$com_ptr_t@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy.c)
 *     ??0?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z @ 0x18028CAAC (--0-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18028D664 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

volatile signed __int32 **__fastcall tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>>(
        volatile signed __int32 **a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = CoTaskMemAlloc(0x120uLL);
  if ( !v2 )
    wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
  v5 = tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>(
         (__int64)v2,
         0LL);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>::operator=(
    a1,
    (volatile signed __int32 **)&v5);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>((void **)&v5);
  return a1;
}
