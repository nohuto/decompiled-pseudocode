/*
 * XREFs of PopDiagTraceEsState @ 0x14051C100
 * Callers:
 *     PopEsUpdateState @ 0x14051C1C0 (PopEsUpdateState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceEsState(__int64 a1)
{
  BOOLEAN result; // al
  int v3; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  __int64 v6; // [rsp+60h] [rbp-18h]

  result = PopEsReason;
  v3 = PopEsReason;
  if ( byte_140E67628 )
  {
    result = EtwEventEnabled(
               *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
               &POP_ETW_EVENT_ENERGY_SAVER_STATE_V2);
    if ( result )
    {
      UserData.Ptr = a1 + 4;
      *(_QWORD *)&UserData.Size = 4LL;
      v5 = &v3;
      v6 = 4LL;
      return EtwWriteEx(
               *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
               &POP_ETW_EVENT_ENERGY_SAVER_STATE_V2,
               0LL,
               0,
               0LL,
               0LL,
               2u,
               &UserData);
    }
  }
  return result;
}
