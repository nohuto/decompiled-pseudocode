/*
 * XREFs of PopDiagTracePowerSettingStop @ 0x140A4047C
 * Callers:
 *     PopCallPowerSettingCallback @ 0x140A4031C (PopCallPowerSettingCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PopDiagTracePowerSettingStop(__int64 a1, __int64 a2)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-28h]
  __int64 v5; // [rsp+48h] [rbp-20h]
  __int64 v6; // [rsp+70h] [rbp+8h] BYREF

  v6 = a1;
  if ( byte_140E67628 )
  {
    if ( EtwEventEnabled(
           *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
           &POP_ETW_EVENT_POWER_SETTING_CALLBACK_STOP) )
    {
      UserData.Ptr = (ULONGLONG)&v6;
      *(_QWORD *)&UserData.Size = 8LL;
      v4 = a2;
      v5 = 16LL;
      EtwWrite(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_EVENT_POWER_SETTING_CALLBACK_STOP,
        0LL,
        2u,
        &UserData);
    }
  }
}
