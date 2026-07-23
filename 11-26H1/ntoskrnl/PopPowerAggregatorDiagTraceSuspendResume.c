/*
 * XREFs of PopPowerAggregatorDiagTraceSuspendResume @ 0x140B48C08
 * Callers:
 *     PopPowerAggregatorNotifySuspendResume @ 0x140B48B5C (PopPowerAggregatorNotifySuspendResume.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
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
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v2) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_AGGREGATOR_SUSPEND_RESUME);
    if ( (_BYTE)v2 )
      LOBYTE(v2) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POWER_AGGREGATOR_SUSPEND_RESUME, 0LL, 2u, &UserData);
  }
  return (char)v2;
}
