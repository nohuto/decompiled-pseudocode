/*
 * XREFs of PpmEventParkTopologyDetected @ 0x140611AF0
 * Callers:
 *     PpmParkDetectComplexAndModulePresence @ 0x140612628 (PpmParkDetectComplexAndModulePresence.c)
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x1404185F0 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PpmEventParkTopologyDetected(
        int a1,
        int a2,
        int a3,
        int a4,
        char a5,
        _WORD *a6,
        _WORD *a7,
        _WORD *a8,
        char a9)
{
  const EVENT_DESCRIPTOR *v9; // rax
  PEVENT_DATA_DESCRIPTOR UserData; // rdi
  _WORD *v11; // rsi
  _WORD *v12; // r14
  _WORD *v13; // r15
  const EVENT_DESCRIPTOR *v14; // rbx
  ULONG UserDataCount; // [rsp+48h] [rbp-C0h] BYREF
  int v17; // [rsp+4Ch] [rbp-BCh] BYREF
  int v18; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v19[12]; // [rsp+54h] [rbp-B4h] BYREF
  _BYTE v20[192]; // [rsp+68h] [rbp-A0h] BYREF
  _UNKNOWN *retaddr; // [rsp+170h] [rbp+68h] BYREF
  int v22; // [rsp+178h] [rbp+70h] BYREF
  int v23; // [rsp+180h] [rbp+78h] BYREF
  int v24; // [rsp+188h] [rbp+80h] BYREF
  int v25; // [rsp+190h] [rbp+88h] BYREF

  v9 = (const EVENT_DESCRIPTOR *)&retaddr;
  v25 = a4;
  v24 = a3;
  v23 = a2;
  v22 = a1;
  UserData = PpmEventPerfCheckData;
  v11 = a6;
  v12 = a7;
  v13 = a8;
  v18 = 0;
  v17 = 0;
  if ( PpmEventPerfCheckData )
  {
    v9 = &PPM_ETW_PROCESSOR_PARK_MODULE_COMPLEX_TOPOLOGY;
    v14 = (const EVENT_DESCRIPTOR *)PPM_ETW_PROCESSOR_PARK_MODULE_COMPLEX_TOPOLOGY_RUNDOWN;
    if ( !a9 )
      v14 = &PPM_ETW_PROCESSOR_PARK_MODULE_COMPLEX_TOPOLOGY;
    if ( PpmEtwRegistered )
    {
      LOBYTE(v9) = EtwEventEnabled(PpmEtwHandle, v14);
      if ( (_BYTE)v9 )
      {
        *(_QWORD *)&UserData->Size = 4LL;
        UserData->Ptr = (ULONGLONG)&v22;
        *(_QWORD *)&UserData[1].Size = 4LL;
        UserData[1].Ptr = (ULONGLONG)&v23;
        *(_QWORD *)&UserData[2].Size = 4LL;
        UserData[2].Ptr = (ULONGLONG)&v24;
        *(_QWORD *)&UserData[3].Size = 4LL;
        UserData[3].Ptr = (ULONGLONG)&v25;
        *(_QWORD *)&UserData[4].Size = 4LL;
        UserData[4].Ptr = (ULONGLONG)&a5;
        UserDataCount = 5;
        PpmEventAddAffinityMaskAsSubset(
          0LL,
          v11,
          (__int64)v19,
          (__int64)v20,
          (__int64)UserData,
          &v18,
          &v17,
          &UserDataCount);
        PpmEventAddAffinityMaskAsSubset(
          0LL,
          v12,
          (__int64)v19,
          (__int64)v20,
          (__int64)UserData,
          &v18,
          &v17,
          &UserDataCount);
        PpmEventAddAffinityMaskAsSubset(
          0LL,
          v13,
          (__int64)v19,
          (__int64)v20,
          (__int64)UserData,
          &v18,
          &v17,
          &UserDataCount);
        LOBYTE(v9) = EtwWriteEx(PpmEtwHandle, v14, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
      }
    }
  }
  return (char)v9;
}
