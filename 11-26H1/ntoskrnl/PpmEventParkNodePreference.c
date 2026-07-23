/*
 * XREFs of PpmEventParkNodePreference @ 0x1406118C0
 * Callers:
 *     PpmParkComputeUnparkMask @ 0x14025E0F0 (PpmParkComputeUnparkMask.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x1404185F0 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PpmEventParkNodePreference(_WORD *a1, __int16 a2, _WORD *a3, _WORD *a4, _WORD *a5, _WORD *a6)
{
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  _WORD *v8; // r15
  _WORD *v10; // r12
  __int64 v12; // rax
  ULONG UserDataCount; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+44h] [rbp-BCh] BYREF
  int v15; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v16[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v17[320]; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v18; // [rsp+1F8h] [rbp+F8h] BYREF

  v18 = a2;
  UserData = PpmEventPerfCheckData;
  v8 = a5;
  v10 = a6;
  v15 = 0;
  v14 = 0;
  UserDataCount = 0;
  if ( PpmEventPerfCheckData && PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PLATFORM_PARKING_PREFERENCE) )
    {
      PpmEventAddAffinityMaskAsSubset(
        0LL,
        a1,
        (__int64)v16,
        (__int64)v17,
        (__int64)UserData,
        &v15,
        &v14,
        &UserDataCount);
      v12 = UserDataCount++;
      UserData[v12].Ptr = (ULONGLONG)&v18;
      *(_QWORD *)&UserData[v12].Size = 2LL;
      PpmEventAddAffinityMaskAsSubset(a1, a3, (__int64)v16, (__int64)v17, (__int64)UserData, &v15, &v14, &UserDataCount);
      PpmEventAddAffinityMaskAsSubset(a1, a4, (__int64)v16, (__int64)v17, (__int64)UserData, &v15, &v14, &UserDataCount);
      PpmEventAddAffinityMaskAsSubset(a1, v8, (__int64)v16, (__int64)v17, (__int64)UserData, &v15, &v14, &UserDataCount);
      PpmEventAddAffinityMaskAsSubset(
        a1,
        v10,
        (__int64)v16,
        (__int64)v17,
        (__int64)UserData,
        &v15,
        &v14,
        &UserDataCount);
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_PLATFORM_PARKING_PREFERENCE, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
    }
  }
}
