/*
 * XREFs of PopDiagTraceDirectedDripsInitialization @ 0x1407D3440
 * Callers:
 *     PopDirectedDripsInitializePhase3 @ 0x140CD0B50 (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceDirectedDripsInitialization(int a1)
{
  int v1; // r8d
  int v2; // [rsp+30h] [rbp-9h] BYREF
  int v3; // [rsp+34h] [rbp-5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-1h] BYREF
  int *v5; // [rsp+48h] [rbp+Fh]
  __int64 v6; // [rsp+50h] [rbp+17h]
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+58h] [rbp+1Fh] BYREF
  int *v8; // [rsp+78h] [rbp+3Fh]
  __int64 v9; // [rsp+80h] [rbp+47h]
  int v10; // [rsp+A0h] [rbp+67h] BYREF

  v10 = a1;
  if ( byte_140E67614 && (unsigned int)dword_140E07598 > 5 && tlgKeywordOn((__int64)&dword_140E07598, 0x400000000000LL) )
  {
    v2 = v1;
    v8 = &v2;
    v9 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07598, (unsigned __int8 *)&byte_14004A71F, 0LL, 0LL, 3u, &v7);
  }
  if ( byte_140E67628 )
  {
    if ( EtwEventEnabled(
           *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
           &POP_ETW_EVENT_DIRECTED_DRIPS_INITIALIZATION) )
    {
      UserData.Ptr = (ULONGLONG)&v3;
      v3 = 0;
      v5 = &v10;
      *(_QWORD *)&UserData.Size = 4LL;
      v6 = 4LL;
      EtwWrite(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_EVENT_DIRECTED_DRIPS_ENGAGED,
        0LL,
        2u,
        &UserData);
    }
  }
}
