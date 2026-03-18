/*
 * XREFs of PopDiagTraceTripPointExceeded @ 0x140B44BB8
 * Callers:
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x1407D56AC (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x1407D57A0 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopThermalProcessUsermodeEvent @ 0x140B44A20 (PopThermalProcessUsermodeEvent.c)
 *     PopDiagTraceUsermodeTripPointExceeded @ 0x140B44B40 (PopDiagTraceUsermodeTripPointExceeded.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceTripPointExceeded(unsigned __int16 a1, __int64 a2, int a3, const EVENT_DESCRIPTOR *a4)
{
  __int64 v6; // [rsp+30h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  __int64 v8; // [rsp+50h] [rbp+7h]
  int v9; // [rsp+58h] [rbp+Fh]
  int v10; // [rsp+5Ch] [rbp+13h]
  __int64 *v11; // [rsp+60h] [rbp+17h]
  __int64 v12; // [rsp+68h] [rbp+1Fh]
  int *v13; // [rsp+70h] [rbp+27h]
  __int64 v14; // [rsp+78h] [rbp+2Fh]
  unsigned __int16 v15; // [rsp+B0h] [rbp+67h] BYREF
  int v16; // [rsp+C0h] [rbp+77h] BYREF

  v16 = a3;
  v15 = a1;
  if ( byte_140E67628 )
  {
    if ( EtwEventEnabled(*(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16], a4) )
    {
      *(_QWORD *)&UserData.Size = 2LL;
      UserData.Ptr = (ULONGLONG)&v15;
      v8 = a2;
      v9 = 2 * v15;
      v10 = 0;
      v6 = MEMORY[0xFFFFF78000000014];
      v11 = &v6;
      v13 = &v16;
      v12 = 8LL;
      v14 = 4LL;
      EtwWrite(*(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16], a4, 0LL, 4u, &UserData);
    }
  }
}
