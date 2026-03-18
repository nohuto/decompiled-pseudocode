/*
 * XREFs of PopDiagTracePowerSettingStart @ 0x140A4051C
 * Callers:
 *     PopCallPowerSettingCallback @ 0x140A4031C (PopCallPowerSettingCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char __fastcall PopDiagTracePowerSettingStart(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _UNKNOWN **v4; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  __int64 v9; // [rsp+40h] [rbp-40h]
  __int64 v10; // [rsp+48h] [rbp-38h]
  int *v11; // [rsp+50h] [rbp-30h]
  __int64 v12; // [rsp+58h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+6Ch] [rbp-14h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+8h] BYREF
  __int64 v17; // [rsp+90h] [rbp+10h] BYREF
  int v18; // [rsp+A0h] [rbp+20h] BYREF

  v4 = &retaddr;
  v18 = a3;
  v17 = a1;
  if ( byte_140E67628 )
  {
    LOBYTE(v4) = EtwEventEnabled(
                   *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
                   &POP_ETW_EVENT_POWER_SETTING_CALLBACK_START);
    if ( (_BYTE)v4 )
    {
      UserData.Ptr = (ULONGLONG)&v17;
      *(_QWORD *)&UserData.Size = 8LL;
      v11 = &v18;
      v14 = v18;
      v9 = a2;
      v10 = 16LL;
      v12 = 4LL;
      v13 = a4;
      v15 = 0;
      LOBYTE(v4) = EtwWrite(
                     *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
                     &POP_ETW_EVENT_POWER_SETTING_CALLBACK_START,
                     0LL,
                     4u,
                     &UserData);
    }
  }
  return (char)v4;
}
