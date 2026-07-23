/*
 * XREFs of PopTraceSystemIdleS0LowPowerDozeTimerArmed @ 0x1407D90B4
 * Callers:
 *     PopIdleArmAoAcDozeS4Timer @ 0x1405086E0 (PopIdleArmAoAcDozeS4Timer.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopDiagInterruptTimeToSystemTime @ 0x140C12634 (PopDiagInterruptTimeToSystemTime.c)
 */

void __fastcall PopTraceSystemIdleS0LowPowerDozeTimerArmed(int a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v5; // [rsp+48h] [rbp-18h]
  __int64 v6; // [rsp+50h] [rbp-10h]
  int v7; // [rsp+70h] [rbp+10h] BYREF

  v7 = a1;
  v3 = 0LL;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_S0_LOW_POWER_DOZE_TIMER_ARMED) )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v7;
      PopDiagInterruptTimeToSystemTime(a2, &v3);
      v6 = 8LL;
      v5 = &v3;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_S0_LOW_POWER_DOZE_TIMER_ARMED, 0LL, 2u, &UserData);
    }
  }
}
