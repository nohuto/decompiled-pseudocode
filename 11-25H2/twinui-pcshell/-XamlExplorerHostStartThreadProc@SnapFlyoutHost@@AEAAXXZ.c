/*
 * XREFs of ?XamlExplorerHostStartThreadProc@SnapFlyoutHost@@AEAAXXZ @ 0x18059139C
 * Callers:
 *     _lambda_0c8890f986995415a854c044c041a5fc_::_lambda_invoker_cdecl_ @ 0x18058D4C0 (_lambda_0c8890f986995415a854c044c041a5fc_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1802C0B94 (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandl_ea_1802C0B94.c)
 *     ??$check_bool@H@winrt@@YAHHAEBUslim_source_location@impl@0@@Z @ 0x1803C5AB8 (--$check_bool@H@winrt@@YAHHAEBUslim_source_location@impl@0@@Z.c)
 */

void __fastcall SnapFlyoutHost::XamlExplorerHostStartThreadProc(SnapFlyoutHost *this)
{
  unsigned int v2; // eax
  int v3; // [rsp+30h] [rbp-28h] BYREF
  __int128 v4; // [rsp+38h] [rbp-20h]

  v3 = 0;
  v4 = 0LL;
  v2 = EnableMouseInPointerForThread();
  winrt::check_bool<int>(v2, (winrt *)&v3);
  *((_DWORD *)this + 42) = 2;
  _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil__QEAAXW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
    (wil::details **)this + 9,
    1,
    0LL);
}
