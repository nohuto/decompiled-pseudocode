/*
 * XREFs of ?RuntimeClassInitialize@CLauncherTipContextMenu@@QEAAJXZ @ 0x180210B80
 * Callers:
 *     ??$MakeAndInitialize@VCLauncherTipContextMenu@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180210AD0 (--$MakeAndInitialize@VCLauncherTipContextMenu@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUI.c)
 * Callees:
 *     ?_RegisterWindowClass@CLauncherTipContextMenu@@AEAAXXZ @ 0x18021CE34 (-_RegisterWindowClass@CLauncherTipContextMenu@@AEAAXXZ.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1802C0B94 (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandl_ea_1802C0B94.c)
 */

__int64 __fastcall CLauncherTipContextMenu::RuntimeClassInitialize(CLauncherTipContextMenu *this)
{
  CLauncherTipContextMenu::_RegisterWindowClass(this);
  _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil__QEAAXW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
    (char *)this + 352,
    1LL);
  return CImmersiveShellComponent::RegisterServiceInformation(
           (CLauncherTipContextMenu *)((char *)this + 24),
           &IID_ILauncherTipContextMenu);
}
