/*
 * XREFs of PopTraceSystemIdleS0LowPowerDoze @ 0x1407D5E74
 * Callers:
 *     PopIdleAoAcDozeToS4 @ 0x1407DA0B0 (PopIdleAoAcDozeToS4.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void PopTraceSystemIdleS0LowPowerDoze()
{
  int v0; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  if ( byte_140E67628 )
  {
    if ( EtwEventEnabled(
           *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
           &POP_ETW_EVENT_SYSTEM_IDLE_S0_LOW_POWER_DOZE) )
    {
      UserData.Ptr = (ULONGLONG)&v0;
      v0 = 0;
      *(_QWORD *)&UserData.Size = 4LL;
      EtwWrite(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_EVENT_SYSTEM_IDLE_S0_LOW_POWER_DOZE,
        0LL,
        1u,
        &UserData);
    }
  }
}
