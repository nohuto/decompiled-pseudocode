/*
 * XREFs of PpmEventTraceSoftCoreParkingSelection @ 0x140418130
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x14025D070 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     RtlAndAffinityEx @ 0x140253CF4 (RtlAndAffinityEx.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x1404185F0 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

BOOLEAN __fastcall PpmEventTraceSoftCoreParkingSelection(
        __int64 a1,
        unsigned int a2,
        __int16 a3,
        __int16 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        char a11)
{
  struct _EVENT_DATA_DESCRIPTOR *UserData; // r14
  int v13; // r13d
  BOOLEAN result; // al
  __int64 v15; // r12
  __int64 v16; // rdi
  unsigned int v17; // r8d
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned int v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+44h] [rbp-BCh] BYREF
  int v29; // [rsp+48h] [rbp-B8h] BYREF
  char v30; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B0h]
  __int64 v32; // [rsp+58h] [rbp-A8h]
  __int64 v33; // [rsp+60h] [rbp-A0h]
  __int64 v34; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v35[264]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v36; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v37[264]; // [rsp+188h] [rbp+88h] BYREF
  __int64 v38; // [rsp+290h] [rbp+190h] BYREF
  _BYTE v39[264]; // [rsp+298h] [rbp+198h] BYREF
  _BYTE v40[16]; // [rsp+3A0h] [rbp+2A0h] BYREF
  _BYTE v41[512]; // [rsp+3B0h] [rbp+2B0h] BYREF
  __int16 v42; // [rsp+620h] [rbp+520h] BYREF
  __int16 v43; // [rsp+628h] [rbp+528h] BYREF

  v43 = a4;
  v42 = a3;
  UserData = PpmEventPerfCheckData;
  v13 = a6;
  v31 = a7;
  v32 = a8;
  result = a9;
  v33 = a9;
  v15 = a2;
  v29 = 0;
  v28 = 0;
  v27 = 0;
  if ( PpmEventPerfCheckData )
  {
    memset_0(v37, 0, 0x100uLL);
    memset_0(v39, 0, 0x100uLL);
    result = (unsigned __int8)memset_0(v35, 0, 0x100uLL);
    if ( PpmEtwRegistered )
    {
      result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_SOFT_PARKING_SELECTION);
      if ( result )
      {
        v16 = *(_QWORD *)(a1 + 1256);
        v36 = 2097153LL;
        memset_0(v37, 0, 0x100uLL);
        v38 = 2097153LL;
        memset_0(v39, 0, 0x100uLL);
        v34 = 2097153LL;
        memset_0(v35, 0, 0x100uLL);
        RtlAndAffinityEx((unsigned __int16 *)(a1 + 544), (unsigned __int16 *)(624 * v15 + v16 + 24), (__int64)&v34);
        RtlAndAffinityEx((unsigned __int16 *)(a1 + 280), (unsigned __int16 *)(624 * v15 + v16 + 24), (__int64)&v36);
        RtlAndAffinityEx((unsigned __int16 *)(a1 + 808), (unsigned __int16 *)(624 * v15 + v16 + 24), (__int64)&v38);
        v30 = v15;
        PpmEventAddAffinityMaskAsSubset(
          0,
          624 * v15 + v16 + 24,
          (unsigned int)v40,
          (unsigned int)v41,
          (__int64)UserData,
          (__int64)&v29,
          (__int64)&v28,
          (__int64)&v27);
        PpmEventAddAffinityMaskAsSubset(
          624 * v15 + v16 + 24,
          (unsigned int)&v34,
          (unsigned int)v40,
          (unsigned int)v41,
          (__int64)UserData,
          (__int64)&v29,
          (__int64)&v28,
          (__int64)&v27);
        PpmEventAddAffinityMaskAsSubset(
          624 * v15 + v16 + 24,
          (unsigned int)&v36,
          (unsigned int)v40,
          (unsigned int)v41,
          (__int64)UserData,
          (__int64)&v29,
          (__int64)&v28,
          (__int64)&v27);
        PpmEventAddAffinityMaskAsSubset(
          624 * v15 + v16 + 24,
          (unsigned int)&v38,
          (unsigned int)v40,
          (unsigned int)v41,
          (__int64)UserData,
          (__int64)&v29,
          (__int64)&v28,
          (__int64)&v27);
        v17 = v27;
        v18 = v27;
        UserData[v18].Ptr = (ULONGLONG)&v43;
        *(_QWORD *)&UserData[v18].Size = 2LL;
        v19 = v17 + 1;
        v27 = v17 + 2;
        UserData[v19].Ptr = (ULONGLONG)&a5;
        *(_QWORD *)&UserData[v19].Size = 2LL;
        PpmEventAddAffinityMaskAsSubset(
          624 * v15 + v16 + 24,
          v13,
          (unsigned int)v40,
          (unsigned int)v41,
          (__int64)UserData,
          (__int64)&v29,
          (__int64)&v28,
          (__int64)&v27);
        PpmEventAddAffinityMaskAsSubset(
          624 * v15 + v16 + 24,
          v31,
          (unsigned int)v40,
          (unsigned int)v41,
          (__int64)UserData,
          (__int64)&v29,
          (__int64)&v28,
          (__int64)&v27);
        PpmEventAddAffinityMaskAsSubset(
          624 * v15 + v16 + 24,
          v32,
          (unsigned int)v40,
          (unsigned int)v41,
          (__int64)UserData,
          (__int64)&v29,
          (__int64)&v28,
          (__int64)&v27);
        PpmEventAddAffinityMaskAsSubset(
          624 * v15 + v16 + 24,
          v33,
          (unsigned int)v40,
          (unsigned int)v41,
          (__int64)UserData,
          (__int64)&v29,
          (__int64)&v28,
          (__int64)&v27);
        v20 = v27;
        v21 = v27;
        UserData[v21].Ptr = 624 * v15 + v16 + 8;
        *(_QWORD *)&UserData[v21].Size = 2LL;
        v22 = v20 + 1;
        UserData[v22].Ptr = (ULONGLONG)&v42;
        *(_QWORD *)&UserData[v22].Size = 2LL;
        v23 = v20 + 2;
        UserData[v23].Ptr = (ULONGLONG)&a10;
        *(_QWORD *)&UserData[v23].Size = 4LL;
        v24 = v20 + 3;
        *(_QWORD *)&UserData[v24].Size = 4LL;
        UserData[v24].Ptr = (ULONGLONG)&a11;
        v25 = v20 + 4;
        UserData[v25].Ptr = (ULONGLONG)&v30;
        *(_QWORD *)&UserData[v25].Size = 1LL;
        v26 = v20 + 5;
        UserData[v26].Ptr = 624 * v15 + v16 + 6;
        *(_QWORD *)&UserData[v26].Size = 2LL;
        return EtwWriteEx(PpmEtwHandle, &PPM_ETW_SOFT_PARKING_SELECTION, 0LL, 0, 0LL, 0LL, v20 + 6, UserData);
      }
    }
  }
  return result;
}
