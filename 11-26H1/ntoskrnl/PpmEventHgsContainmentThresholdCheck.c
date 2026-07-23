/*
 * XREFs of PpmEventHgsContainmentThresholdCheck @ 0x140415DCC
 * Callers:
 *     PpmHeteroHgsContainmentCheckThresholds @ 0x140416704 (PpmHeteroHgsContainmentCheckThresholds.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PpmEventHgsContainmentThresholdCheck(__int64 a1, __int64 a2, int a3, int a4, char a5, char a6)
{
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-29h] BYREF
  __int64 *v8; // [rsp+58h] [rbp-19h]
  __int64 v9; // [rsp+60h] [rbp-11h]
  int *v10; // [rsp+68h] [rbp-9h]
  __int64 v11; // [rsp+70h] [rbp-1h]
  int *v12; // [rsp+78h] [rbp+7h]
  __int64 v13; // [rsp+80h] [rbp+Fh]
  char *v14; // [rsp+88h] [rbp+17h]
  __int64 v15; // [rsp+90h] [rbp+1Fh]
  char *v16; // [rsp+98h] [rbp+27h]
  __int64 v17; // [rsp+A0h] [rbp+2Fh]
  __int64 v18; // [rsp+C8h] [rbp+57h] BYREF
  __int64 v19; // [rsp+D0h] [rbp+5Fh] BYREF
  int v20; // [rsp+D8h] [rbp+67h] BYREF
  int v21; // [rsp+E0h] [rbp+6Fh] BYREF

  v21 = a4;
  v20 = a3;
  v19 = a2;
  v18 = a1;
  result = PpmHeteroHgsContainmentState;
  if ( (PpmHeteroHgsContainmentState & 4) != 0 && PpmEtwRegistered )
  {
    result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_WPS_CONTAINMENT_THRESHOLD_CHECK);
    if ( result )
    {
      UserData.Ptr = (ULONGLONG)&v18;
      *(_QWORD *)&UserData.Size = 8LL;
      v8 = &v19;
      v9 = 8LL;
      v10 = &v20;
      v11 = 4LL;
      v12 = &v21;
      v14 = &a5;
      v16 = &a6;
      v13 = 4LL;
      v15 = 4LL;
      v17 = 4LL;
      return EtwWriteEx(PpmEtwHandle, &PPM_ETW_WPS_CONTAINMENT_THRESHOLD_CHECK, 0LL, 0, 0LL, 0LL, 6u, &UserData);
    }
  }
  return result;
}
