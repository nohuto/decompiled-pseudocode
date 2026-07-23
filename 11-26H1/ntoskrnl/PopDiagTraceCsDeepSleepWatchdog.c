/*
 * XREFs of PopDiagTraceCsDeepSleepWatchdog @ 0x14060AD28
 * Callers:
 *     PopDeepSleepWatchdogTakeAction @ 0x1407E8D4C (PopDeepSleepWatchdogTakeAction.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceCsDeepSleepWatchdog(
        int a1,
        int a2,
        int a3,
        unsigned __int8 a4,
        char a5,
        unsigned __int8 a6)
{
  _UNKNOWN **v6; // rax
  int v7; // ebx
  int v9; // [rsp+48h] [rbp-39h] BYREF
  int v10; // [rsp+4Ch] [rbp-35h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-29h] BYREF
  int *v12; // [rsp+68h] [rbp-19h]
  __int64 v13; // [rsp+70h] [rbp-11h]
  int *v14; // [rsp+78h] [rbp-9h]
  __int64 v15; // [rsp+80h] [rbp-1h]
  int *v16; // [rsp+88h] [rbp+7h]
  __int64 v17; // [rsp+90h] [rbp+Fh]
  char *v18; // [rsp+98h] [rbp+17h]
  __int64 v19; // [rsp+A0h] [rbp+1Fh]
  int *v20; // [rsp+A8h] [rbp+27h]
  __int64 v21; // [rsp+B0h] [rbp+2Fh]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+4Fh] BYREF
  int v23; // [rsp+D8h] [rbp+57h] BYREF
  int v24; // [rsp+E0h] [rbp+5Fh] BYREF
  int v25; // [rsp+E8h] [rbp+67h] BYREF

  v6 = &retaddr;
  v25 = a3;
  v24 = a2;
  v23 = a1;
  v7 = a4;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v6) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_DEEP_SLEEP_WATCHDOG);
    if ( (_BYTE)v6 )
    {
      UserData.Ptr = (ULONGLONG)&v23;
      v9 = v7;
      v12 = &v24;
      *(_QWORD *)&UserData.Size = 4LL;
      v14 = &v25;
      v13 = 4LL;
      v16 = &v9;
      v18 = &a5;
      v10 = a6;
      v20 = &v10;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 4LL;
      LOBYTE(v6) = EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_CS_DEEP_SLEEP_WATCHDOG, 0LL, 0, 0LL, 0LL, 6u, &UserData);
    }
  }
  return (char)v6;
}
