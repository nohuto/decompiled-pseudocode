/*
 * XREFs of PopEvaluateInputSuppressionAction @ 0x140B763E0
 * Callers:
 *     PopUsb4DisplayPresenceUpdatedWorker @ 0x1407DA3D0 (PopUsb4DisplayPresenceUpdatedWorker.c)
 *     PopExternalMonitorUpdatedWorker @ 0x140B40DB0 (PopExternalMonitorUpdatedWorker.c)
 *     PopBroadcastInputSuppressionCallback @ 0x140B76320 (PopBroadcastInputSuppressionCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     Feature_NU4MP__private_IsEnabledDeviceUsageNoInline @ 0x140602F80 (Feature_NU4MP__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline @ 0x14060EE68 (Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     PopTraceInputSuppressionActionUpdateV1 @ 0x1407D8C6C (PopTraceInputSuppressionActionUpdateV1.c)
 *     PopBroadcastSessionInfo @ 0x140ABE614 (PopBroadcastSessionInfo.c)
 *     PopTraceInputSuppressionActionUpdate @ 0x140B54430 (PopTraceInputSuppressionActionUpdate.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopEvaluateInputSuppressionAction(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // di
  bool v8; // r15
  bool v9; // bp
  char v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // al
  bool v16; // zf
  int v17; // ebx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rdx
  void *ExplicitScope; // [rsp+20h] [rbp-68h]
  WNF_CHANGE_STAMP MatchingChangeStamp; // [rsp+28h] [rbp-60h]
  BOOL Buffer; // [rsp+40h] [rbp-48h] BYREF
  GUID v27; // [rsp+48h] [rbp-40h] BYREF
  BOOL v28; // [rsp+58h] [rbp-30h]

  Buffer = 0;
  v4 = 1;
  v27 = 0LL;
  v28 = 0;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopInputSuppressionLock, a2, a3, a4);
  PopAcquirePolicyLock(v6, v5);
  v7 = PopConsoleExternalDisplayConnected;
  v8 = PopLidOpened == 0;
  v9 = HIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) == 1;
  if ( (unsigned int)Feature_NU4MP__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v7 || (v7 = 0, PopUsb4DisplayPresent) )
      v7 = 1;
  }
  v10 = PopConsoleDisplayState == 0;
  if ( (unsigned int)Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v9 && PpmIdlePolicyLock.WriteOperationCount )
    {
      LOBYTE(v12) = -(*(_DWORD *)(PpmIdlePolicyLock.WriteOperationCount + 28) != 0);
      v4 = v12 & 1;
    }
    if ( PopInputSuppressionIgnorePowerSource )
    {
      v15 = v4;
    }
    else if ( v9 || (v15 = 0, v4) )
    {
      v15 = 1;
    }
    if ( PopErrataReportingIncorrectLidState || !PopIgnoreLidStateForInputSuppression && !v8 )
      goto LABEL_26;
    v16 = v15 == 0;
  }
  else
  {
    if ( PopErrataReportingIncorrectLidState || !PopIgnoreLidStateForInputSuppression && !v8 )
      goto LABEL_26;
    if ( PopInputSuppressionIgnorePowerSource )
      goto LABEL_24;
    v16 = !v9;
  }
  if ( v16 )
  {
LABEL_26:
    v17 = 0;
    goto LABEL_27;
  }
LABEL_24:
  if ( v7 )
    goto LABEL_26;
  v17 = 1;
  if ( !v10 )
    goto LABEL_26;
LABEL_27:
  if ( !PopEnableInputSuppression && v17 == 1 )
    v17 = 2;
  PopReleasePolicyLock(v12, v11, v13, v14, ExplicitScope);
  if ( PopInputSuppressionRequired != v17 )
  {
    PopInputSuppressionRequired = v17;
    IsEnabledDeviceUsageNoInline = Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline();
    LOBYTE(v20) = v7;
    LOBYTE(v21) = v9;
    LOBYTE(v22) = v8;
    if ( IsEnabledDeviceUsageNoInline )
      PopTraceInputSuppressionActionUpdateV1(v19, v22, v21, v20, v10, MatchingChangeStamp, v17, v4);
    else
      PopTraceInputSuppressionActionUpdate(v19, v22, v21, v20, v10, MatchingChangeStamp, v17);
    ZwUpdateWnfStateData(&WNF_PO_INPUT_SUPPRESS_NOTIFICATION_EX, &PopInputSuppressionRequired, 4u, 0LL, 0LL, 0, 0);
    if ( PopEnableInputSuppression )
    {
      if ( (unsigned int)PopInputSuppressionRequired <= 1 )
        _InterlockedIncrement(&PopInputSuppressionActionCount);
      Buffer = PopInputSuppressionRequired == 1;
      ZwUpdateWnfStateData(&WNF_PO_INPUT_SUPPRESS_NOTIFICATION, &Buffer, 4u, 0LL, 0LL, 0, 0);
      v28 = Buffer;
      v27 = GUID_INPUT_SUPPRESS_REQUESTED;
      PopBroadcastSessionInfo(0, 20, (__int64)&v27);
    }
  }
  return PopReleaseRwLock((struct _KTHREAD *)&PopInputSuppressionLock);
}
