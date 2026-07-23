/*
 * XREFs of PpmEventTraceCoreParkingSelection @ 0x140418C30
 * Callers:
 *     PpmParkComputeUnparkMask @ 0x14025E0F0 (PpmParkComputeUnparkMask.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x1404185F0 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PpmEventTraceCoreParkingSelection(
        _WORD *a1,
        int a2,
        int a3,
        int a4,
        char a5,
        char a6,
        _WORD *a7,
        _WORD *a8,
        _WORD *a9,
        _WORD *a10,
        _WORD *a11,
        _WORD *a12,
        _WORD *a13,
        _WORD *a14,
        _WORD *a15,
        char a16,
        char a17,
        _WORD *a18,
        _WORD *a19,
        _WORD *a20,
        char a21,
        char a22)
{
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  _WORD *v24; // rsi
  _WORD *v25; // r14
  _WORD *v26; // r15
  _WORD *v27; // r12
  _WORD *v28; // r13
  BOOLEAN result; // al
  unsigned int v30; // r8d
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned int v36; // r8d
  __int64 v37; // rax
  __int64 v38; // rcx
  unsigned int v39; // r8d
  __int64 v40; // rax
  __int64 v41; // rcx
  unsigned int v42; // [rsp+48h] [rbp-C0h] BYREF
  int v43; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v44; // [rsp+50h] [rbp-B8h] BYREF
  _WORD *v45; // [rsp+58h] [rbp-B0h]
  _WORD *v46; // [rsp+60h] [rbp-A8h]
  _WORD *v47; // [rsp+68h] [rbp-A0h]
  _WORD *v48; // [rsp+70h] [rbp-98h]
  _WORD *v49; // [rsp+78h] [rbp-90h]
  _WORD *v50; // [rsp+80h] [rbp-88h]
  _WORD *v51; // [rsp+88h] [rbp-80h]
  _BYTE v52[40]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v53[832]; // [rsp+B8h] [rbp-50h] BYREF
  int v54; // [rsp+460h] [rbp+358h] BYREF
  int v55; // [rsp+468h] [rbp+360h] BYREF
  int v56; // [rsp+470h] [rbp+368h] BYREF

  v56 = a4;
  v55 = a3;
  v54 = a2;
  UserData = PpmEventPerfCheckData;
  v24 = a7;
  v25 = a8;
  v26 = a9;
  v27 = a10;
  v28 = a11;
  v45 = a12;
  v46 = a13;
  v47 = a14;
  v48 = a15;
  v49 = a18;
  v50 = a19;
  v51 = a20;
  result = 0;
  LODWORD(v44) = 0;
  v43 = 0;
  v42 = 0;
  if ( PpmEventPerfCheckData && PpmEtwRegistered )
  {
    result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_COREPARKING_SELECTION);
    if ( result )
    {
      PpmEventAddAffinityMaskAsSubset(0LL, a1, (__int64)v52, (__int64)v53, (__int64)UserData, &v44, &v43, &v42);
      v30 = v42;
      v31 = v42;
      UserData[v31].Ptr = (ULONGLONG)&v54;
      *(_QWORD *)&UserData[v31].Size = 4LL;
      v32 = v30 + 1;
      UserData[v32].Ptr = (ULONGLONG)&v55;
      *(_QWORD *)&UserData[v32].Size = 4LL;
      v33 = v30 + 2;
      UserData[v33].Ptr = (ULONGLONG)&v56;
      *(_QWORD *)&UserData[v33].Size = 4LL;
      v34 = v30 + 3;
      UserData[v34].Ptr = (ULONGLONG)&a5;
      *(_QWORD *)&UserData[v34].Size = 4LL;
      v35 = v30 + 4;
      v42 = v30 + 5;
      UserData[v35].Ptr = (ULONGLONG)&a6;
      *(_QWORD *)&UserData[v35].Size = 4LL;
      PpmEventAddAffinityMaskAsSubset(a1, v24, (__int64)v52, (__int64)v53, (__int64)UserData, &v44, &v43, &v42);
      PpmEventAddAffinityMaskAsSubset(a1, v25, (__int64)v52, (__int64)v53, (__int64)UserData, &v44, &v43, &v42);
      PpmEventAddAffinityMaskAsSubset(a1, v26, (__int64)v52, (__int64)v53, (__int64)UserData, &v44, &v43, &v42);
      PpmEventAddAffinityMaskAsSubset(a1, v27, (__int64)v52, (__int64)v53, (__int64)UserData, &v44, &v43, &v42);
      PpmEventAddAffinityMaskAsSubset(a1, v28, (__int64)v52, (__int64)v53, (__int64)UserData, &v44, &v43, &v42);
      PpmEventAddAffinityMaskAsSubset(a1, v45, (__int64)v52, (__int64)v53, (__int64)UserData, &v44, &v43, &v42);
      PpmEventAddAffinityMaskAsSubset(a1, v46, (__int64)v52, (__int64)v53, (__int64)UserData, &v44, &v43, &v42);
      PpmEventAddAffinityMaskAsSubset(a1, v47, (__int64)v52, (__int64)v53, (__int64)UserData, &v44, &v43, &v42);
      PpmEventAddAffinityMaskAsSubset(a1, v48, (__int64)v52, (__int64)v53, (__int64)UserData, &v44, &v43, &v42);
      v36 = v42;
      v37 = v42;
      UserData[v37].Ptr = (ULONGLONG)&a16;
      v38 = v36 + 1;
      *(_QWORD *)&UserData[v37].Size = 1LL;
      v42 = v36 + 2;
      UserData[v38].Ptr = (ULONGLONG)&a17;
      *(_QWORD *)&UserData[v38].Size = 4LL;
      PpmEventAddAffinityMaskAsSubset(a1, v49, (__int64)v52, (__int64)v53, (__int64)UserData, &v44, &v43, &v42);
      PpmEventAddAffinityMaskAsSubset(a1, v50, (__int64)v52, (__int64)v53, (__int64)UserData, &v44, &v43, &v42);
      PpmEventAddAffinityMaskAsSubset(a1, v51, (__int64)v52, (__int64)v53, (__int64)UserData, &v44, &v43, &v42);
      v39 = v42;
      v40 = v42;
      UserData[v40].Ptr = (ULONGLONG)&a21;
      *(_QWORD *)&UserData[v40].Size = 1LL;
      v41 = v39 + 1;
      UserData[v41].Ptr = (ULONGLONG)&a22;
      *(_QWORD *)&UserData[v41].Size = 1LL;
      return EtwWriteEx(PpmEtwHandle, &PPM_ETW_COREPARKING_SELECTION, 0LL, 0, 0LL, 0LL, v39 + 2, UserData);
    }
  }
  return result;
}
