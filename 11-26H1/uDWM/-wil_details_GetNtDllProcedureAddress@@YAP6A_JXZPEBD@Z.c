/*
 * XREFs of ?wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z @ 0x180087058
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x18005B12C (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x180067334 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     ?SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180074A20 (-SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANG.c)
 *     wil_details_NtUpdateWnfStateData @ 0x180086F50 (wil_details_NtUpdateWnfStateData.c)
 *     wil_details_NtQueryWnfStateData @ 0x180086FE0 (wil_details_NtQueryWnfStateData.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?UnregisterWilFeatureConfigurationChange@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18008D074 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-UnregisterWilFeatureConfigurationChange@.c)
 *     ?RtlDllShutdownInProgress@details@wil@@YAEXZ @ 0x1800926D0 (-RtlDllShutdownInProgress@details@wil@@YAEXZ.c)
 *     ?RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z @ 0x180092720 (-RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z.c)
 *     wil_RtlStagingConfig_RecordFeatureUsage @ 0x180093A04 (wil_RtlStagingConfig_RecordFeatureUsage.c)
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x18007CDD8 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 */

FARPROC __fastcall wil_details_GetNtDllProcedureAddress(const char *a1)
{
  HMODULE NtDllModuleHandle; // rax

  NtDllModuleHandle = wil_details_GetNtDllModuleHandle();
  return GetProcAddress(NtDllModuleHandle, a1);
}
