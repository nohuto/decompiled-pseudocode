/*
 * XREFs of PopDiagTracePolicyChange @ 0x14077F090
 * Callers:
 *     PopAdaptivePowerSettingCallback @ 0x140ABE290 (PopAdaptivePowerSettingCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN PopDiagTracePolicyChange()
{
  BOOLEAN result; // al
  int v1; // [rsp+30h] [rbp-59h] BYREF
  int v2; // [rsp+38h] [rbp-51h] BYREF
  int v3; // [rsp+40h] [rbp-49h] BYREF
  int v4; // [rsp+48h] [rbp-41h] BYREF
  int v5; // [rsp+50h] [rbp-39h] BYREF
  int v6; // [rsp+58h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  int *v8; // [rsp+70h] [rbp-19h]
  __int64 v9; // [rsp+78h] [rbp-11h]
  int *v10; // [rsp+80h] [rbp-9h]
  __int64 v11; // [rsp+88h] [rbp-1h]
  int *v12; // [rsp+90h] [rbp+7h]
  __int64 v13; // [rsp+98h] [rbp+Fh]
  int *v14; // [rsp+A0h] [rbp+17h]
  __int64 v15; // [rsp+A8h] [rbp+1Fh]
  int *v16; // [rsp+B0h] [rbp+27h]
  __int64 v17; // [rsp+B8h] [rbp+2Fh]

  v5 = PopAdaptiveLockConsoleTimeout;
  v4 = PopInputTimeout;
  v3 = PopInputTimeout;
  result = PopDisplayTimeout;
  v2 = PopDisplayTimeout;
  v1 = PopDisplayTimeout;
  v6 = 0;
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_ADPM_POLICY_CHANGE);
    if ( result )
    {
      UserData.Ptr = (ULONGLONG)&v1;
      *(_QWORD *)&UserData.Size = 4LL;
      v8 = &v2;
      v9 = 4LL;
      v10 = &v3;
      v11 = 4LL;
      v12 = &v4;
      v14 = &v5;
      v16 = &v6;
      v13 = 4LL;
      v15 = 4LL;
      v17 = 4LL;
      return EtwWrite(PopDiagHandle, &POP_ETW_ADPM_POLICY_CHANGE, 0LL, 6u, &UserData);
    }
  }
  return result;
}
