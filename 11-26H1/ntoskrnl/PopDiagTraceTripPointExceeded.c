/*
 * XREFs of PopDiagTraceTripPointExceeded @ 0x140B46BF4
 * Callers:
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x1407D8864 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x1407D8958 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopThermalProcessUsermodeEvent @ 0x140B46A5C (PopThermalProcessUsermodeEvent.c)
 *     PopDiagTraceUsermodeTripPointExceeded @ 0x140B46B7C (PopDiagTraceUsermodeTripPointExceeded.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
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
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, a4) )
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
      EtwWrite(PopDiagHandle, a4, 0LL, 4u, &UserData);
    }
  }
}
