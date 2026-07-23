/*
 * XREFs of PpmEventTraceHeteroResponse @ 0x140416490
 * Callers:
 *     PpmCheckComputeMultiClassHeteroResponse @ 0x14041574C (PpmCheckComputeMultiClassHeteroResponse.c)
 *     PpmCheckComputeHeteroResponse @ 0x140415EE0 (PpmCheckComputeHeteroResponse.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x1404185F0 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void PpmEventTraceHeteroResponse(__int64 a1, ULONGLONG a2, _QWORD *a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rdi
  __int64 v7; // rdx
  char v8; // al
  unsigned int v9; // eax
  unsigned int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r8
  _WORD *v23; // rdx
  __int16 v24; // cx
  char v25; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int16 v26; // [rsp+44h] [rbp-45h] BYREF
  __int16 v27; // [rsp+48h] [rbp-41h] BYREF
  unsigned int v28; // [rsp+4Ch] [rbp-3Dh] BYREF
  char v29; // [rsp+50h] [rbp-39h] BYREF
  int v30; // [rsp+54h] [rbp-35h] BYREF
  int v31; // [rsp+58h] [rbp-31h] BYREF
  char v32; // [rsp+60h] [rbp-29h] BYREF
  unsigned __int64 v33; // [rsp+F8h] [rbp+6Fh] BYREF
  va_list va; // [rsp+F8h] [rbp+6Fh]
  __int64 v35; // [rsp+100h] [rbp+77h] BYREF
  va_list va1; // [rsp+100h] [rbp+77h]
  va_list va2; // [rsp+108h] [rbp+7Fh] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v33 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v35 = va_arg(va2, _QWORD);
  UserData = PpmEventPerfCheckData;
  v31 = 0;
  v30 = 0;
  v28 = 0;
  if ( PpmEventPerfCheckData && PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_HETERO_RESPONSE) )
  {
    v7 = *(unsigned __int16 *)(a1 + 8);
    v8 = *(_BYTE *)(a1 + 1156);
    v26 = *(_WORD *)(a1 + 8);
    v25 = v8;
    if ( v33 > 1 && (_WORD)v7 )
    {
      v20 = a3;
      v21 = v7;
      do
      {
        *v20++ /= v33;
        --v21;
      }
      while ( v21 );
    }
    v9 = *(unsigned __int8 *)(a1 + 10);
    v27 = 0;
    if ( v9 > 1 )
    {
      v22 = v9 - 1;
      v23 = (_WORD *)(*(_QWORD *)(a1 + 1256) + 630LL);
      v24 = 0;
      do
      {
        v24 += *v23;
        v23 += 312;
        v27 = v24;
        --v22;
      }
      while ( v22 );
    }
    if ( PpmHeteroHgsParkingEnabled )
      v27 = *(_WORD *)(*(_QWORD *)(a1 + 1256) + 630LL);
    PpmEventAddAffinityMaskAsSubset(
      0,
      a1 + 16,
      (unsigned int)&v29,
      (unsigned int)&v32,
      (__int64)UserData,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v28);
    v10 = v28;
    v11 = v28;
    UserData[v11].Ptr = (ULONGLONG)&v26;
    *(_QWORD *)&UserData[v11].Size = 2LL;
    v12 = v10 + 1;
    UserData[v12].Size = 4 * v26;
    UserData[v12].Ptr = a2;
    UserData[v12].Reserved = 0;
    v13 = v10 + 2;
    UserData[v13].Size = 8 * v26;
    UserData[v13].Ptr = (ULONGLONG)a3;
    UserData[v13].Reserved = 0;
    v14 = v10 + 3;
    UserData[v14].Ptr = (ULONGLONG)va;
    *(_QWORD *)&UserData[v14].Size = 8LL;
    v15 = v10 + 4;
    UserData[v15].Ptr = a1 + 1154;
    *(_QWORD *)&UserData[v15].Size = 1LL;
    v16 = v10 + 5;
    UserData[v16].Ptr = (ULONGLONG)&v25;
    *(_QWORD *)&UserData[v16].Size = 1LL;
    v17 = v10 + 6;
    UserData[v17].Ptr = (ULONGLONG)va1;
    *(_QWORD *)&UserData[v17].Size = 2LL;
    v18 = v10 + 7;
    UserData[v18].Ptr = (ULONGLONG)&v27;
    *(_QWORD *)&UserData[v18].Size = 2LL;
    v19 = v10 + 8;
    UserData[v19].Ptr = (ULONGLONG)va2;
    *(_QWORD *)&UserData[v19].Size = 4LL;
    EtwWriteEx(PpmEtwHandle, &PPM_ETW_HETERO_RESPONSE, 0LL, 0, 0LL, 0LL, v10 + 9, UserData);
  }
}
