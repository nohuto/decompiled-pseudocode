/*
 * XREFs of PopDiagTracePowerSettingStop @ 0x1409FBE9C
 * Callers:
 *     PopCallPowerSettingCallback @ 0x1409FBD3C (PopCallPowerSettingCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTracePowerSettingStop(__int64 a1, __int64 a2)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-28h]
  __int64 v5; // [rsp+48h] [rbp-20h]
  __int64 v6; // [rsp+70h] [rbp+8h] BYREF

  v6 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_SETTING_CALLBACK_STOP) )
    {
      UserData.Ptr = (ULONGLONG)&v6;
      *(_QWORD *)&UserData.Size = 8LL;
      v4 = a2;
      v5 = 16LL;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POWER_SETTING_CALLBACK_STOP, 0LL, 2u, &UserData);
    }
  }
}
