/*
 * XREFs of PopPowerAggregatorDiagTraceSuspendResume @ 0x140B46BD8
 * Callers:
 *     PopPowerAggregatorNotifySuspendResume @ 0x140B46B2C (PopPowerAggregatorNotifySuspendResume.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char __fastcall PopPowerAggregatorDiagTraceSuspendResume(unsigned __int8 a1, int a2)
{
  int *v2; // rax
  int v4; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  int *v6; // [rsp+48h] [rbp-20h]
  __int64 v7; // [rsp+50h] [rbp-18h]
  int v8; // [rsp+78h] [rbp+10h] BYREF

  v8 = a2;
  v4 = a1;
  UserData.Ptr = (ULONGLONG)&v4;
  v2 = &v8;
  v6 = &v8;
  *(_QWORD *)&UserData.Size = 4LL;
  v7 = 4LL;
  if ( byte_140E67628 )
  {
    LOBYTE(v2) = EtwEventEnabled(
                   *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
                   &POP_ETW_EVENT_POWER_AGGREGATOR_SUSPEND_RESUME);
    if ( (_BYTE)v2 )
      LOBYTE(v2) = EtwWrite(
                     *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
                     &POP_ETW_EVENT_POWER_AGGREGATOR_SUSPEND_RESUME,
                     0LL,
                     2u,
                     &UserData);
  }
  return (char)v2;
}
