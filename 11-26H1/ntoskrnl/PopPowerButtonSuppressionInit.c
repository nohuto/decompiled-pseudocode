/*
 * XREFs of PopPowerButtonSuppressionInit @ 0x140CD931C
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14052F77C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140534EB0 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     PopBSDiagSetTriageData @ 0x1407E0B90 (PopBSDiagSetTriageData.c)
 *     ExSubscribeWnfStateChange @ 0x1409C4400 (ExSubscribeWnfStateChange.c)
 *     PopEvaluatePowerButtonSuppressionState @ 0x140B34328 (PopEvaluatePowerButtonSuppressionState.c)
 *     PopTracePowerButtonSuppressionOptedIn @ 0x140CD8BF4 (PopTracePowerButtonSuppressionOptedIn.c)
 */

__int64 __fastcall PopPowerButtonSuppressionInit(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // di
  int v9; // ebx
  unsigned __int32 v10; // eax
  unsigned __int32 v11; // ett
  struct _KLOCK_ENTRIES *v12; // r9
  unsigned __int8 v14; // [rsp+40h] [rbp+8h]

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerButtonSuppressionLock, a2, a3, a4);
  v8 = 0;
  v9 = 0;
  if ( *(_DWORD *)&stru_140E67200.WaitBlockFill11[88] && stru_140E67200.WaitBlockFill6[80] )
  {
    if ( (Feature_PowerButtonSuppression__private_featureState & 0x10) == 0 )
    {
      v14 = Feature_PowerButtonSuppression__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_PowerButtonSuppression__private_descriptor,
        Feature_PowerButtonSuppression__private_featureState | 1,
        3);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v14,
        3,
        (__int64)&Feature_PowerButtonSuppression__private_descriptor);
    }
    v8 = 1;
    if ( PopEnablePowerButtonSuppressionOverride )
    {
      PopPowerButtonSuppression = 1;
    }
    else
    {
      PopPowerButtonSuppression = 0;
      v9 = 4;
    }
    if ( (int)ExSubscribeWnfStateChange((__int64)&qword_140F0D3B0, (__int64)&WNF_PO_INPUT_SUPPRESS_NOTIFICATION_EX) < 0 )
    {
      qword_140F0D3B0 = 0LL;
      v9 |= 0x10u;
      PopPowerButtonSuppression = 0;
    }
    byte_140F0D3A1 = PopPowerButtonSuppression;
    _m_prefetchw(&PopLidStateIsReliable);
    v10 = PopLidStateIsReliable;
    do
    {
      v5 = v10;
      v11 = v10;
      v10 = _InterlockedCompareExchange(&PopLidStateIsReliable, v10, v10);
    }
    while ( v11 != v10 );
    if ( !v10 )
    {
      byte_140F0D3A1 = 0;
      v9 |= 0x20u;
    }
  }
  else
  {
    v9 = 1;
  }
  LOBYTE(v7) = byte_140F0D3A1;
  LOBYTE(v6) = v8;
  LOBYTE(v5) = PopPowerButtonSuppression;
  dword_140F0D3A4 = v9;
  PopTracePowerButtonSuppressionOptedIn(v5, v4, v6, v7, v9);
  PopEvaluatePowerButtonSuppressionState();
  return PopBSDiagSetTriageData(5, (__int64)&PopPowerButtonSuppression, 32LL, v12);
}
