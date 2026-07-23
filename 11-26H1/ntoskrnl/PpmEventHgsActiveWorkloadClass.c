/*
 * XREFs of PpmEventHgsActiveWorkloadClass @ 0x14041708C
 * Callers:
 *     PpmPerfRecordMostActiveWorkloadClass @ 0x140416B34 (PpmPerfRecordMostActiveWorkloadClass.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x1404185F0 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PpmEventHgsActiveWorkloadClass(__int64 a1, ULONGLONG a2, ULONGLONG a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  unsigned int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v18; // [rsp+44h] [rbp-35h] BYREF
  char v19; // [rsp+48h] [rbp-31h] BYREF
  int v20; // [rsp+4Ch] [rbp-2Dh] BYREF
  _DWORD v21[4]; // [rsp+50h] [rbp-29h] BYREF
  char v22; // [rsp+60h] [rbp-19h] BYREF
  int v23; // [rsp+F8h] [rbp+7Fh] BYREF

  v23 = a4;
  UserData = PpmEventPerfCheckData;
  v21[0] = 0;
  v20 = 0;
  v18 = 0;
  if ( PpmEventPerfCheckData )
  {
    v17 = PpmHeteroWorkloadClasses;
    if ( PpmEtwRegistered )
    {
      if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_WPS_HETERO_ACTIVE_WORKLOAD_CLASS) )
      {
        PpmEventAddAffinityMaskAsSubset(
          0,
          a1 + 16,
          (unsigned int)&v19,
          (unsigned int)&v22,
          (__int64)UserData,
          (__int64)v21,
          (__int64)&v20,
          (__int64)&v18);
        v8 = v18;
        v9 = v18;
        UserData[v9].Ptr = a1 + 1230;
        *(_QWORD *)&UserData[v9].Size = 1LL;
        v10 = v8 + 1;
        UserData[v10].Ptr = a1 + 1231;
        *(_QWORD *)&UserData[v10].Size = 1LL;
        v11 = v8 + 2;
        UserData[v11].Ptr = (ULONGLONG)&v17;
        *(_QWORD *)&UserData[v11].Size = 4LL;
        v12 = v17;
        v13 = v8 + 3;
        UserData[v13].Ptr = a2;
        UserData[v13].Size = 8 * v12;
        UserData[v13].Reserved = 0;
        v14 = v17;
        v15 = v8 + 4;
        UserData[v15].Ptr = a3;
        UserData[v15].Size = 8 * v14;
        UserData[v15].Reserved = 0;
        v16 = v8 + 5;
        UserData[v16].Ptr = (ULONGLONG)&v23;
        *(_QWORD *)&UserData[v16].Size = 4LL;
        EtwWriteEx(PpmEtwHandle, &PPM_ETW_WPS_HETERO_ACTIVE_WORKLOAD_CLASS, 0LL, 0, 0LL, 0LL, v8 + 6, UserData);
      }
    }
  }
}
