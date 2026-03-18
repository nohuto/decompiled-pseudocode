/*
 * XREFs of PopPowerButtonSuppressionInit @ 0x140CD317C
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14052D25C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140532A10 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     PopBSDiagSetTriageData @ 0x1407DC970 (PopBSDiagSetTriageData.c)
 *     ExSubscribeWnfStateChange @ 0x140948A90 (ExSubscribeWnfStateChange.c)
 *     PopEvaluatePowerButtonSuppressionState @ 0x140B31ED4 (PopEvaluatePowerButtonSuppressionState.c)
 *     PopTracePowerButtonSuppressionOptedIn @ 0x140CD2A4C (PopTracePowerButtonSuppressionOptedIn.c)
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

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopWeakChargerLock.Process, a2, a3, a4);
  v8 = 0;
  v9 = 0;
  if ( *(_DWORD *)&stru_140E66FF0.WaitBlockFill11[80] && stru_140E66FF0.WaitBlockFill6[84] )
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
      LOBYTE(PopWeakChargerLock.Spare18) = 1;
    }
    else
    {
      LOBYTE(PopWeakChargerLock.Spare18) = 0;
      v9 = 4;
    }
    if ( (int)ExSubscribeWnfStateChange(
                (__int64)&PopWeakChargerLock.512,
                (__int64)&WNF_PO_INPUT_SUPPRESS_NOTIFICATION_EX) < 0 )
    {
      *(_QWORD *)&PopWeakChargerLock.ThreadFlags2 = 0LL;
      v9 |= 0x10u;
      LOBYTE(PopWeakChargerLock.Spare18) = 0;
    }
    BYTE1(PopWeakChargerLock.Spare18) = PopWeakChargerLock.Spare18;
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
      BYTE1(PopWeakChargerLock.Spare18) = 0;
      v9 |= 0x20u;
    }
  }
  else
  {
    v9 = 1;
  }
  LOBYTE(v7) = BYTE1(PopWeakChargerLock.Spare18);
  LOBYTE(v6) = v8;
  LOBYTE(v5) = PopWeakChargerLock.Spare18;
  HIDWORD(PopWeakChargerLock.Spare18) = v9;
  PopTracePowerButtonSuppressionOptedIn(v5, v4, v6, v7, v9);
  PopEvaluatePowerButtonSuppressionState();
  return PopBSDiagSetTriageData(5, (struct _LIST_ENTRY *)&PopWeakChargerLock.Spare18, 32LL, v12);
}
