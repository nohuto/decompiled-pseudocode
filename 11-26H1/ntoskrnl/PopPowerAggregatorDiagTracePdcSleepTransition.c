/*
 * XREFs of PopPowerAggregatorDiagTracePdcSleepTransition @ 0x140B43C14
 * Callers:
 *     PopPowerAggregatorNotifyPdcSleepTransition @ 0x140B43B48 (PopPowerAggregatorNotifyPdcSleepTransition.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopPowerAggregatorDiagTracePdcSleepTransition(
        unsigned __int8 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  char *v5; // rax
  int v7; // [rsp+30h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-11h] BYREF
  int *v9; // [rsp+50h] [rbp-1h]
  __int64 v10; // [rsp+58h] [rbp+7h]
  __int64 v11; // [rsp+60h] [rbp+Fh]
  __int64 v12; // [rsp+68h] [rbp+17h]
  __int64 v13; // [rsp+70h] [rbp+1Fh]
  __int64 v14; // [rsp+78h] [rbp+27h]
  char *v15; // [rsp+80h] [rbp+2Fh]
  __int64 v16; // [rsp+88h] [rbp+37h]
  int v17; // [rsp+B8h] [rbp+67h] BYREF

  v17 = a2;
  v7 = a1;
  UserData.Ptr = (ULONGLONG)&v7;
  v9 = &v17;
  v5 = &a5;
  v15 = &a5;
  *(_QWORD *)&UserData.Size = 4LL;
  v10 = 4LL;
  v11 = a3;
  v12 = 4LL;
  v13 = a4;
  v14 = 4LL;
  v16 = 4LL;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_AGGREGATOR_PDC_SLEEP_TRANSITION);
    if ( (_BYTE)v5 )
      LOBYTE(v5) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POWER_AGGREGATOR_PDC_SLEEP_TRANSITION, 0LL, 5u, &UserData);
  }
  return (char)v5;
}
