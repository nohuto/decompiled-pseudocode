/*
 * XREFs of PopMonitorInvocation @ 0x14077EBD0
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14052F77C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140534EB0 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     PopTraceMonitorOnRequestUserInput @ 0x1407D8DFC (PopTraceMonitorOnRequestUserInput.c)
 *     PopProcessSessionDisplayStateChange @ 0x1409FA84C (PopProcessSessionDisplayStateChange.c)
 *     PopIsInputSuppressionEngaged @ 0x140ADB528 (PopIsInputSuppressionEngaged.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopMonitorInvocation(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  __int64 v4; // rcx
  unsigned __int8 v6; // [rsp+30h] [rbp+8h]

  v2 = *(_DWORD *)(a1 + 4);
  v3 = 0;
  if ( *(_BYTE *)a1 )
  {
    PopAcquirePolicyLock(a1, a2);
    if ( (unsigned __int8)PopIsInputSuppressionEngaged(v2) )
    {
      if ( (Feature_AggressiveInputSuppression__private_featureState & 0x10) == 0 )
      {
        v6 = Feature_AggressiveInputSuppression__private_featureState | 1;
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_AggressiveInputSuppression__private_descriptor,
          Feature_AggressiveInputSuppression__private_featureState | 1,
          3);
        wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
          v6,
          3,
          (__int64)&Feature_AggressiveInputSuppression__private_descriptor);
      }
      PopTraceMonitorOnRequestUserInput(v2);
    }
    LOBYTE(v4) = 1;
    v3 = PopProcessSessionDisplayStateChange(v4, v2);
    PopReleasePolicyLock();
  }
  return v3;
}
