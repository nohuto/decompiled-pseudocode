/*
 * XREFs of PpmEventParkNodeRecordedStats @ 0x140416D6C
 * Callers:
 *     PpmParkRecordNodeStatistics @ 0x140416820 (PpmParkRecordNodeStatistics.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x1404185F0 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PpmEventParkNodeRecordedStats(__int16 a1, unsigned __int16 *a2, __int16 a3, __int64 a4, char a5)
{
  PEVENT_DATA_DESCRIPTOR v5; // rsi
  unsigned __int16 v8; // r8
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // dx
  __int64 v11; // rax
  int v12; // ecx
  unsigned int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rcx
  unsigned int v19; // r8d
  __int64 v20; // rcx
  char v21; // [rsp+40h] [rbp-C0h] BYREF
  char v22; // [rsp+41h] [rbp-BFh] BYREF
  __int16 v23; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v24; // [rsp+48h] [rbp-B8h] BYREF
  char v25; // [rsp+4Ch] [rbp-B4h] BYREF
  int v26; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v27[3]; // [rsp+54h] [rbp-ACh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 *v29; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h]
  char *v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  __int64 v33; // [rsp+90h] [rbp-70h]
  __int64 v34; // [rsp+98h] [rbp-68h]
  __int64 v35; // [rsp+A0h] [rbp-60h]
  int v36; // [rsp+A8h] [rbp-58h]
  int v37; // [rsp+ACh] [rbp-54h]
  char *v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  __int64 v40; // [rsp+C0h] [rbp-40h]
  int v41; // [rsp+C8h] [rbp-38h]
  int v42; // [rsp+CCh] [rbp-34h]
  char v43; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v44; // [rsp+160h] [rbp+60h] BYREF
  __int16 v45; // [rsp+170h] [rbp+70h] BYREF

  v45 = a3;
  v44 = a1;
  v5 = PpmEventPerfCheckData;
  v21 = 0;
  v22 = 0;
  v27[0] = 0;
  v26 = 0;
  if ( PpmEventPerfCheckData && PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PARK_NODE_STATS) )
  {
    v8 = *a2;
    v9 = 32;
    v10 = 0;
    v23 = 32;
    while ( v10 < v8 )
    {
      if ( *(_QWORD *)&a2[4 * v10 + 4] )
      {
        if ( v9 != 32 )
          goto LABEL_14;
        v9 = v10;
        v23 = v10;
      }
      ++v10;
    }
    if ( v9 != 32 )
    {
      UserData.Ptr = (ULONGLONG)&v23;
      v21 = v45;
      v31 = &v21;
      v35 = *(_QWORD *)(a4 + 8);
      v22 = a5;
      v38 = &v22;
      v11 = *(_QWORD *)(a4 + 16);
      v29 = &a2[4 * v9 + 4];
      v12 = 8 * *(_DWORD *)(a4 + 48);
      v40 = v11;
      v33 = a4 + 48;
      *(_QWORD *)&UserData.Size = 2LL;
      v30 = 8LL;
      v32 = 1LL;
      v34 = 4LL;
      v36 = v12;
      v37 = 0;
      v39 = 1LL;
      v41 = v12;
      v42 = 0;
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_PARK_NODE_STATS_V2, 0LL, 0, 0LL, 0LL, 7u, &UserData);
      return;
    }
LABEL_14:
    *(_QWORD *)&v5->Size = 2LL;
    v5->Ptr = (ULONGLONG)&v44;
    v24 = 1;
    PpmEventAddAffinityMaskAsSubset(
      0,
      (_DWORD)a2,
      (unsigned int)&v25,
      (unsigned int)&v43,
      (__int64)v5,
      (__int64)v27,
      (__int64)&v26,
      (__int64)&v24);
    v13 = v24;
    v14 = v24;
    v5[v14].Ptr = (ULONGLONG)&v45;
    *(_QWORD *)&v5[v14].Size = 2LL;
    v15 = v13 + 1;
    v5[v15].Ptr = a4 + 48;
    *(_QWORD *)&v5[v15].Size = 4LL;
    v16 = v13 + 2;
    v17 = 8 * *(_DWORD *)(a4 + 48);
    v5[v16].Ptr = *(_QWORD *)(a4 + 8);
    v5[v16].Size = v17;
    v5[v16].Reserved = 0;
    v18 = v13 + 3;
    v5[v18].Ptr = (ULONGLONG)&a5;
    *(_QWORD *)&v5[v18].Size = 2LL;
    v19 = 8 * *(_DWORD *)(a4 + 48);
    v20 = v13 + 4;
    v5[v20].Ptr = *(_QWORD *)(a4 + 16);
    *(_QWORD *)&v5[v20].Size = v19;
    EtwWriteEx(PpmEtwHandle, &PPM_ETW_PARK_NODE_STATS, 0LL, 0, 0LL, 0LL, v13 + 5, v5);
  }
}
