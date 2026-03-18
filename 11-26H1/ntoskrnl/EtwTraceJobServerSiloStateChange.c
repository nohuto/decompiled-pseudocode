/*
 * XREFs of EtwTraceJobServerSiloStateChange @ 0x1408277F8
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x1407EEA70 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspConvertSiloToServerSilo @ 0x1407EEB8C (PspConvertSiloToServerSilo.c)
 *     PspNotifyServerSiloCreation @ 0x1407FC0DC (PspNotifyServerSiloCreation.c)
 *     PspBeginServerSiloShutdown @ 0x140B51B14 (PspBeginServerSiloShutdown.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTraceJobServerSiloStateChange(__int64 a1, int a2)
{
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  __int64 v5; // [rsp+40h] [rbp-30h]
  __int64 v6; // [rsp+48h] [rbp-28h]
  int *v7; // [rsp+50h] [rbp-20h]
  __int64 v8; // [rsp+58h] [rbp-18h]
  int v9; // [rsp+88h] [rbp+18h] BYREF

  v9 = a2;
  result = EtwEventEnabled(EtwpPsProvRegHandle, &JobServerSiloStateChange);
  if ( result )
  {
    UserData.Ptr = a1 + 1472;
    *(_QWORD *)&UserData.Size = 16LL;
    v5 = a1 + 1468;
    v6 = 4LL;
    v7 = &v9;
    v8 = 4LL;
    return EtwWrite(EtwpPsProvRegHandle, &JobServerSiloStateChange, 0LL, 3u, &UserData);
  }
  return result;
}
