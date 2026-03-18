/*
 * XREFs of PopDiagTracePowerRequestClose @ 0x140AD62C8
 * Callers:
 *     PopPowerRequestDelete @ 0x140AD6100 (PopPowerRequestDelete.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PopDiagTracePowerRequestClose(__int64 a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  __int64 v2; // [rsp+60h] [rbp+8h] BYREF

  v2 = a1;
  if ( byte_140E67628 )
  {
    if ( EtwEventEnabled(
           *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
           &POP_ETW_EVENT_CLOSE_POWER_REQUEST) )
    {
      UserData.Ptr = (ULONGLONG)&v2;
      *(_QWORD *)&UserData.Size = 8LL;
      EtwWrite(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_EVENT_CLOSE_POWER_REQUEST,
        0LL,
        1u,
        &UserData);
    }
  }
}
