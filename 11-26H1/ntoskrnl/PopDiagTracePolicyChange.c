/*
 * XREFs of PopDiagTracePolicyChange @ 0x14077C59C
 * Callers:
 *     PopAdaptivePowerSettingCallback @ 0x140ABC470 (PopAdaptivePowerSettingCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

BOOLEAN PopDiagTracePolicyChange()
{
  BOOLEAN result; // al
  int v1; // [rsp+30h] [rbp-59h] BYREF
  int KernelWaitTime_high; // [rsp+38h] [rbp-51h] BYREF
  int v3; // [rsp+40h] [rbp-49h] BYREF
  int UserWaitTime; // [rsp+48h] [rbp-41h] BYREF
  unsigned int ReservedPreviousReadyTimeValue; // [rsp+50h] [rbp-39h] BYREF
  int v6; // [rsp+58h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  int *p_KernelWaitTime_high; // [rsp+70h] [rbp-19h]
  __int64 v9; // [rsp+78h] [rbp-11h]
  int *v10; // [rsp+80h] [rbp-9h]
  __int64 v11; // [rsp+88h] [rbp-1h]
  int *p_UserWaitTime; // [rsp+90h] [rbp+7h]
  __int64 v13; // [rsp+98h] [rbp+Fh]
  unsigned int *p_ReservedPreviousReadyTimeValue; // [rsp+A0h] [rbp+17h]
  __int64 v15; // [rsp+A8h] [rbp+1Fh]
  int *v16; // [rsp+B0h] [rbp+27h]
  __int64 v17; // [rsp+B8h] [rbp+2Fh]

  ReservedPreviousReadyTimeValue = PopAdaptiveStandbyLock.ReservedPreviousReadyTimeValue;
  UserWaitTime = PopAdaptiveStandbyLock.UserWaitTime;
  v3 = PopAdaptiveStandbyLock.UserWaitTime;
  result = BYTE4(PopAdaptiveStandbyLock.KernelWaitTime);
  KernelWaitTime_high = HIDWORD(PopAdaptiveStandbyLock.KernelWaitTime);
  v1 = HIDWORD(PopAdaptiveStandbyLock.KernelWaitTime);
  v6 = 0;
  if ( byte_140E67628 )
  {
    result = EtwEventEnabled(
               *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
               &POP_ETW_ADPM_POLICY_CHANGE);
    if ( result )
    {
      UserData.Ptr = (ULONGLONG)&v1;
      *(_QWORD *)&UserData.Size = 4LL;
      p_KernelWaitTime_high = &KernelWaitTime_high;
      v9 = 4LL;
      v10 = &v3;
      v11 = 4LL;
      p_UserWaitTime = &UserWaitTime;
      p_ReservedPreviousReadyTimeValue = &ReservedPreviousReadyTimeValue;
      v16 = &v6;
      v13 = 4LL;
      v15 = 4LL;
      v17 = 4LL;
      return EtwWrite(
               *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
               &POP_ETW_ADPM_POLICY_CHANGE,
               0LL,
               6u,
               &UserData);
    }
  }
  return result;
}
