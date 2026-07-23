/*
 * XREFs of PpmEventTraceLPIState @ 0x1404F5448
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void PpmEventTraceLPIState()
{
  int v0; // [rsp+40h] [rbp-38h] BYREF
  int v1; // [rsp+44h] [rbp-34h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  __int64 v4; // [rsp+60h] [rbp-18h]

  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_LPI_RUNDOWN) )
    {
      v0 = PpmParkLpiCap;
      v1 = PpmParkLpiEngaged;
      UserData.Ptr = (ULONGLONG)&v0;
      v3 = &v1;
      *(_QWORD *)&UserData.Size = 4LL;
      v4 = 4LL;
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_LPI_RUNDOWN, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
}
