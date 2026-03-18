/*
 * XREFs of PoTraceForceIdleStateChange @ 0x1404C5454
 * Callers:
 *     KiSetForceIdleState @ 0x1404C5428 (KiSetForceIdleState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PoTraceForceIdleStateChange(int a1, int a2)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  int *v3; // [rsp+50h] [rbp-28h]
  __int64 v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+80h] [rbp+8h] BYREF
  int v6; // [rsp+88h] [rbp+10h] BYREF

  v6 = a2;
  v5 = a1;
  if ( byte_140E67628 )
  {
    if ( EtwEventEnabled(
           *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
           &POP_ETW_FORCEIDLE_STATE_CHANGE) )
    {
      UserData.Ptr = (ULONGLONG)&v5;
      *(_QWORD *)&UserData.Size = 4LL;
      v3 = &v6;
      v4 = 4LL;
      EtwWriteEx(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_FORCEIDLE_STATE_CHANGE,
        0LL,
        0,
        0LL,
        0LL,
        2u,
        &UserData);
    }
  }
}
