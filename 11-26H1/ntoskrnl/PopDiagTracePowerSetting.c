/*
 * XREFs of PopDiagTracePowerSetting @ 0x140AC10A0
 * Callers:
 *     PopTracePowerSettingChange @ 0x140AC1000 (PopTracePowerSettingChange.c)
 *     PopRundownPowerSettings @ 0x140AC1020 (PopRundownPowerSettings.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char __fastcall PopDiagTracePowerSetting(char a1, ULONGLONG a2, int a3, __int64 a4)
{
  const EVENT_DESCRIPTOR *v4; // rax
  const EVENT_DESCRIPTOR *v5; // rbx
  int v9; // [rsp+38h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  int *v11; // [rsp+58h] [rbp+17h]
  __int64 v12; // [rsp+60h] [rbp+1Fh]
  __int64 v13; // [rsp+68h] [rbp+27h]
  int v14; // [rsp+70h] [rbp+2Fh]
  int v15; // [rsp+74h] [rbp+33h]
  int *v16; // [rsp+78h] [rbp+37h]
  __int64 v17; // [rsp+80h] [rbp+3Fh]
  int v18; // [rsp+B8h] [rbp+77h] BYREF

  v18 = a3;
  v4 = &POP_ETW_EVENT_POWER_SETTING_CHANGE;
  v5 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_POWER_SETTING_RUNDOWN;
  if ( !a1 )
    v5 = &POP_ETW_EVENT_POWER_SETTING_CHANGE;
  if ( byte_140E67628 )
  {
    LOBYTE(v4) = EtwEventEnabled(*(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16], v5);
    if ( (_BYTE)v4 )
    {
      v11 = &v18;
      v14 = v18;
      v9 = 0;
      v16 = &v9;
      UserData.Ptr = a2;
      *(_QWORD *)&UserData.Size = 16LL;
      v12 = 4LL;
      v13 = a4;
      v15 = 0;
      v17 = 4LL;
      LOBYTE(v4) = EtwWrite(*(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16], v5, 0LL, 4u, &UserData);
    }
  }
  return (char)v4;
}
