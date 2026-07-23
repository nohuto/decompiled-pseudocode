/*
 * XREFs of PopDiagTracePowerStateEvent @ 0x1409FAA84
 * Callers:
 *     PopTriggerMonitorPowerEvent @ 0x1409FA938 (PopTriggerMonitorPowerEvent.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTracePowerStateEvent(int a1, int a2)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  int *v3; // [rsp+40h] [rbp-28h]
  __int64 v4; // [rsp+48h] [rbp-20h]
  int v5; // [rsp+70h] [rbp+8h] BYREF
  int v6; // [rsp+78h] [rbp+10h] BYREF

  v6 = a2;
  v5 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_STATE) )
    {
      UserData.Ptr = (ULONGLONG)&v5;
      *(_QWORD *)&UserData.Size = 4LL;
      v3 = &v6;
      v4 = 4LL;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POWER_STATE, 0LL, 2u, &UserData);
    }
  }
}
