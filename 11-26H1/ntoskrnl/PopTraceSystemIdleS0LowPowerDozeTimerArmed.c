/*
 * XREFs of PopTraceSystemIdleS0LowPowerDozeTimerArmed @ 0x1407D5F04
 * Callers:
 *     PopIdleArmAoAcDozeS4Timer @ 0x14050EC70 (PopIdleArmAoAcDozeS4Timer.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopDiagInterruptTimeToSystemTime @ 0x140C0C424 (PopDiagInterruptTimeToSystemTime.c)
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
  if ( byte_140E67628 )
  {
    if ( EtwEventEnabled(
           *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
           &POP_ETW_EVENT_SYSTEM_IDLE_S0_LOW_POWER_DOZE_TIMER_ARMED) )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v7;
      PopDiagInterruptTimeToSystemTime(a2, &v3);
      v6 = 8LL;
      v5 = &v3;
      EtwWrite(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_EVENT_SYSTEM_IDLE_S0_LOW_POWER_DOZE_TIMER_ARMED,
        0LL,
        2u,
        &UserData);
    }
  }
}
