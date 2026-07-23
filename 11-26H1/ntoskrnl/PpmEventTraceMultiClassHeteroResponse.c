/*
 * XREFs of PpmEventTraceMultiClassHeteroResponse @ 0x140415324
 * Callers:
 *     PpmCheckComputeMultiClassHeteroResponse @ 0x14041574C (PpmCheckComputeMultiClassHeteroResponse.c)
 *     PpmHeteroComputeMultiClassUnparkCount @ 0x14060F474 (PpmHeteroComputeMultiClassUnparkCount.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     RtlCountSetBitsAffinityEx @ 0x140253280 (RtlCountSetBitsAffinityEx.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x1404185F0 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PpmEventTraceMultiClassHeteroResponse(
        char a1,
        unsigned __int16 *a2,
        ULONGLONG a3,
        ULONGLONG a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10)
{
  PEVENT_DATA_DESCRIPTOR UserData; // rbx
  unsigned int v14; // r8d
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v25; // [rsp+44h] [rbp-65h] BYREF
  char v26; // [rsp+48h] [rbp-61h] BYREF
  int v27; // [rsp+4Ch] [rbp-5Dh] BYREF
  _DWORD v28[4]; // [rsp+50h] [rbp-59h] BYREF
  char v29; // [rsp+60h] [rbp-49h] BYREF
  char v30; // [rsp+E0h] [rbp+37h] BYREF

  v30 = a1;
  UserData = PpmEventPerfCheckData;
  v28[0] = 0;
  v27 = 0;
  if ( PpmEventPerfCheckData && PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_MULTI_CLASS_HETERO_RESPONSE) )
    {
      v24 = RtlCountSetBitsAffinityEx(a2);
      UserData->Ptr = (ULONGLONG)&v30;
      *(_QWORD *)&UserData->Size = 1LL;
      v25 = 1;
      PpmEventAddAffinityMaskAsSubset(
        0,
        (_DWORD)a2,
        (unsigned int)&v26,
        (unsigned int)&v29,
        (__int64)UserData,
        (__int64)v28,
        (__int64)&v27,
        (__int64)&v25);
      v14 = v25;
      v15 = 2LL * v25;
      *(&UserData->Ptr + v15) = (ULONGLONG)&v24;
      *((_QWORD *)&UserData->Size + v15) = 4LL;
      v16 = v14 + 1;
      LODWORD(v15) = v24;
      UserData[v16].Ptr = a3;
      UserData[v16].Reserved = 0;
      UserData[v16].Size = 4 * v15;
      LODWORD(v15) = v24;
      v17 = v14 + 2;
      UserData[v17].Ptr = a4;
      UserData[v17].Size = 4 * v15;
      UserData[v17].Reserved = 0;
      v18 = v14 + 3;
      UserData[v18].Ptr = (ULONGLONG)&a5;
      *(_QWORD *)&UserData[v18].Size = 8LL;
      v19 = v14 + 4;
      UserData[v19].Ptr = (ULONGLONG)&a6;
      *(_QWORD *)&UserData[v19].Size = 4LL;
      v20 = v14 + 5;
      UserData[v20].Ptr = (ULONGLONG)&a7;
      *(_QWORD *)&UserData[v20].Size = 2LL;
      v21 = v14 + 6;
      UserData[v21].Ptr = (ULONGLONG)&a8;
      *(_QWORD *)&UserData[v21].Size = 2LL;
      v22 = v14 + 7;
      UserData[v22].Ptr = (ULONGLONG)&a9;
      *(_QWORD *)&UserData[v22].Size = 2LL;
      v23 = v14 + 8;
      UserData[v23].Ptr = (ULONGLONG)&a10;
      *(_QWORD *)&UserData[v23].Size = 8LL;
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_MULTI_CLASS_HETERO_RESPONSE, 0LL, 0, 0LL, 0LL, v14 + 9, UserData);
    }
  }
}
