/*
 * XREFs of PpmEventHgsCoresUnparkedCount @ 0x140417FAC
 * Callers:
 *     PpmParkCalculateUnparkCount @ 0x140417970 (PpmParkCalculateUnparkCount.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x1404185F0 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PpmEventHgsCoresUnparkedCount(__int64 a1)
{
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  unsigned int v3; // r8d
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // [rsp+40h] [rbp-78h] BYREF
  char v9; // [rsp+44h] [rbp-74h] BYREF
  int v10; // [rsp+48h] [rbp-70h] BYREF
  int v11; // [rsp+4Ch] [rbp-6Ch] BYREF
  unsigned int v12; // [rsp+50h] [rbp-68h] BYREF
  char v13; // [rsp+60h] [rbp-58h] BYREF

  UserData = PpmEventPerfCheckData;
  v11 = 0;
  v10 = 0;
  v8 = 0;
  if ( PpmEventPerfCheckData && PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_HETERO_PARKING_SELECTION_COUNT) )
    {
      v12 = ((unsigned int)PpmHeteroHgsContainmentState >> 3) & 1;
      PpmEventAddAffinityMaskAsSubset(
        0,
        a1 + 16,
        (unsigned int)&v9,
        (unsigned int)&v13,
        (__int64)UserData,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v8);
      v3 = v8;
      v4 = v8;
      UserData[v4].Ptr = a1 + 1228;
      *(_QWORD *)&UserData[v4].Size = 2LL;
      v5 = v3 + 1;
      UserData[v5].Ptr = a1 + 1224;
      *(_QWORD *)&UserData[v5].Size = 2LL;
      v6 = v3 + 2;
      UserData[v6].Ptr = a1 + 1226;
      *(_QWORD *)&UserData[v6].Size = 2LL;
      v7 = v3 + 3;
      UserData[v7].Ptr = (ULONGLONG)&v12;
      *(_QWORD *)&UserData[v7].Size = 4LL;
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_HETERO_PARKING_SELECTION_COUNT, 0LL, 0, 0LL, 0LL, v3 + 4, UserData);
    }
  }
}
