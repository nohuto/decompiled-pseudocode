/*
 * XREFs of ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x18006E18C
 * Callers:
 *     ?Initialize@CGraphicsDeviceManager@@IEAAJXZ @ 0x18006E104 (-Initialize@CGraphicsDeviceManager@@IEAAJXZ.c)
 * Callees:
 *     ?try_create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAA_NW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x18006E1B4 (-try_create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180084218 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

__int64 _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z()
{
  char event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAA_NW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z; // al
  unsigned int v1; // ecx

  event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAA_NW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = _try_create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAA_NW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z();
  v1 = 0;
  if ( !event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAA_NW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z )
    return (unsigned int)wil::details::GetLastErrorFailHr(0LL);
  return v1;
}
