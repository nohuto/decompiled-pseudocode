/*
 * XREFs of PopDiagTraceIrpPended @ 0x14050FAB0
 * Callers:
 *     PopFxNotifyPostSIrpCompletion @ 0x1406053A8 (PopFxNotifyPostSIrpCompletion.c)
 *     PopSystemIrpCompletion @ 0x140C0DBB0 (PopSystemIrpCompletion.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceIrpPended(__int64 a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  __int64 v2; // [rsp+70h] [rbp+8h] BYREF

  v2 = a1;
  if ( byte_140E67628 )
  {
    if ( EtwEventEnabled(*(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16], &POP_ETW_EVENT_IRPPENDED) )
    {
      UserData.Ptr = (ULONGLONG)&v2;
      *(_QWORD *)&UserData.Size = 8LL;
      EtwWriteEx(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_EVENT_IRPPENDED,
        0LL,
        0,
        0LL,
        0LL,
        1u,
        &UserData);
    }
  }
}
