/*
 * XREFs of PoTraceDynamicTickDisabled @ 0x140607F90
 * Callers:
 *     KeInitializeClock @ 0x140D0B7A4 (KeInitializeClock.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

BOOLEAN PoTraceDynamicTickDisabled()
{
  BOOLEAN result; // al
  char v1; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  result = KiDynamicTickDisableReason;
  v1 = KiDynamicTickDisableReason;
  if ( byte_140E67628 )
  {
    result = EtwEventEnabled(
               *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
               &POP_ETW_EVENT_DYNAMIC_TICK_DISABLED);
    if ( result )
    {
      UserData.Ptr = (ULONGLONG)&v1;
      *(_QWORD *)&UserData.Size = 1LL;
      return EtwWriteEx(
               *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
               &POP_ETW_EVENT_DYNAMIC_TICK_DISABLED,
               0LL,
               1u,
               0LL,
               0LL,
               1u,
               &UserData);
    }
  }
  return result;
}
