/*
 * XREFs of PopEvaluateInputSuppressionAction @ 0x140B71BB0
 * Callers:
 *     PopExternalMonitorUpdatedWorker @ 0x140B3ED80 (PopExternalMonitorUpdatedWorker.c)
 *     PopBroadcastInputSuppressionCallback @ 0x140B71AF0 (PopBroadcastInputSuppressionCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline @ 0x14060BD08 (Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     PopTraceInputSuppressionActionUpdateV1 @ 0x1407D5ABC (PopTraceInputSuppressionActionUpdateV1.c)
 *     PopBroadcastSessionInfo @ 0x140ABC7F4 (PopBroadcastSessionInfo.c)
 *     PopTraceInputSuppressionActionUpdate @ 0x140B51B90 (PopTraceInputSuppressionActionUpdate.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopEvaluateInputSuppressionAction(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v4; // di
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // bp
  bool v8; // r15
  bool v9; // si
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
  __int64 v24; // [rsp+20h] [rbp-68h]
  int v25; // [rsp+28h] [rbp-60h]
  BOOL v26; // [rsp+40h] [rbp-48h] BYREF
  GUID v27; // [rsp+48h] [rbp-40h] BYREF
  BOOL v28; // [rsp+58h] [rbp-30h]

  v26 = 0;
  v4 = 1;
  v27 = 0LL;
  v28 = 0;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopWeakChargerLock.UserAffinityPrimaryGroup, a2, a3, a4);
  PopAcquirePolicyLock(v6, v5);
  v7 = PopConsoleExternalDisplayConnected;
  v8 = PopLidOpened == 0;
  v9 = dword_140F106CC == 1;
  v10 = PopConsoleDisplayState == 0;
  if ( (unsigned int)Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v9 && qword_140F105C0 )
    {
      LOBYTE(v12) = -(*((_DWORD *)qword_140F105C0 + 7) != 0);
      v4 = v12 & 1;
    }
    if ( byte_140E67630 )
    {
      v15 = v4;
    }
    else if ( v9 || (v15 = 0, v4) )
    {
      v15 = 1;
    }
    if ( PopErrataReportingIncorrectLidState || !PopIgnoreLidStateForInputSuppression && !v8 )
      goto LABEL_22;
    v16 = v15 == 0;
  }
  else
  {
    if ( PopErrataReportingIncorrectLidState || !PopIgnoreLidStateForInputSuppression && !v8 )
      goto LABEL_22;
    if ( byte_140E67630 )
      goto LABEL_20;
    v16 = !v9;
  }
  if ( v16 )
  {
LABEL_22:
    v17 = 0;
    goto LABEL_23;
  }
LABEL_20:
  if ( v7 )
    goto LABEL_22;
  v17 = 1;
  if ( !v10 )
    goto LABEL_22;
LABEL_23:
  if ( !PopEnableInputSuppression && v17 == 1 )
    v17 = 2;
  PopReleasePolicyLock(v12, v11, v13, v14, v24);
  if ( PopInputSuppressionRequired != v17 )
  {
    PopInputSuppressionRequired = v17;
    IsEnabledDeviceUsageNoInline = Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline();
    LOBYTE(v20) = v7;
    LOBYTE(v21) = v9;
    LOBYTE(v22) = v8;
    if ( IsEnabledDeviceUsageNoInline )
      PopTraceInputSuppressionActionUpdateV1(v19, v22, v21, v20, v10, v25, v17, v4);
    else
      PopTraceInputSuppressionActionUpdate(v19, v22, v21, v20, v10, v25, v17);
    ZwUpdateWnfStateData((__int64)&WNF_PO_INPUT_SUPPRESS_NOTIFICATION_EX, (__int64)&PopInputSuppressionRequired);
    if ( PopEnableInputSuppression )
    {
      if ( (unsigned int)PopInputSuppressionRequired <= 1 )
        _InterlockedIncrement(&dword_140E67634);
      v26 = PopInputSuppressionRequired == 1;
      ZwUpdateWnfStateData((__int64)&WNF_PO_INPUT_SUPPRESS_NOTIFICATION, (__int64)&v26);
      v28 = v26;
      v27 = GUID_INPUT_SUPPRESS_REQUESTED;
      PopBroadcastSessionInfo(0, 20, (__int64)&v27);
    }
  }
  return PopReleaseRwLock((struct _KTHREAD *)&PopWeakChargerLock.UserAffinityPrimaryGroup);
}
