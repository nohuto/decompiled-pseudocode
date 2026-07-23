/*
 * XREFs of PpmEventVetoReasonRundown @ 0x1404E4FA4
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void PpmEventVetoReasonRundown()
{
  unsigned __int64 v0; // rdx
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v3; // rax
  int v4; // ecx
  unsigned int v5; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  __int64 v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v5 = 0;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_VETO_NAME_RUNDOWN) )
    {
      v0 = stru_140E67200.Padding[4];
      if ( stru_140E67200.Padding[4] )
      {
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&v5;
        v1 = 0LL;
        if ( *(_DWORD *)(stru_140E67200.Padding[4] + 4) )
        {
          do
          {
            v2 = v1 + 1;
            v3 = 3 * v1;
            v5 = v2;
            v4 = *(unsigned __int16 *)(v0 + 8 * v3 + 18);
            v7 = *(_QWORD *)(v0 + 8 * v3 + 24);
            v8 = v4;
            v9 = 0;
            EtwWriteEx(PpmEtwHandle, &PPM_ETW_VETO_NAME_RUNDOWN, 0LL, 0, 0LL, 0LL, 2u, &UserData);
            v0 = stru_140E67200.Padding[4];
            v1 = v2;
          }
          while ( v2 < *(_DWORD *)(stru_140E67200.Padding[4] + 4) );
        }
      }
    }
  }
}
