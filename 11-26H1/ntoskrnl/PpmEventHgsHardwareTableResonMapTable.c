/*
 * XREFs of PpmEventHgsHardwareTableResonMapTable @ 0x1404FD154
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void PpmEventHgsHardwareTableResonMapTable()
{
  _QWORD *v0; // r8
  unsigned int v1; // r9d
  ULONGLONG v2; // r10
  int v3; // r11d
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // [rsp+40h] [rbp-138h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[17]; // [rsp+50h] [rbp-128h] BYREF

  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_WPS_DYNAMIC_UPDATE_REASON_MAP_RUNDOWN) )
  {
    v7 = 8;
    UserData[0].Ptr = (ULONGLONG)&v7;
    v0 = &PpmHeteroHgsUpdateReasonMap;
    *(_QWORD *)&UserData[0].Size = 4LL;
    v1 = 0;
    do
    {
      v2 = v0[1];
      v3 = 2 * v1;
      v4 = 2 * v1 + 1;
      v5 = -1LL;
      UserData[v4].Ptr = (ULONGLONG)v0;
      *(_QWORD *)&UserData[v4].Size = 1LL;
      do
        ++v5;
      while ( *(_WORD *)(v2 + 2 * v5) );
      ++v1;
      v6 = (unsigned int)(v3 + 2);
      v0 += 2;
      UserData[v6].Ptr = v2;
      UserData[v6].Size = 2 * v5 + 2;
      *(&UserData[0].Reserved + 1 * v6) = 0;
    }
    while ( v1 < 8 );
    EtwWriteEx(PpmEtwHandle, &PPM_ETW_WPS_DYNAMIC_UPDATE_REASON_MAP_RUNDOWN, 0LL, 0, 0LL, 0LL, 0x11u, UserData);
  }
}
