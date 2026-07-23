/*
 * XREFs of PpmEventTraceParkNodeRundown @ 0x140B4C568
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     RtlOrAffinityEx @ 0x14025C158 (RtlOrAffinityEx.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x1404185F0 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall PpmEventTraceParkNodeRundown(__int16 a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  PEVENT_DATA_DESCRIPTOR UserData; // rsi
  unsigned int i; // edi
  unsigned __int16 v6; // cx
  unsigned __int16 v7; // r8
  unsigned __int16 v8; // dx
  ULONG v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _WORD v13[2]; // [rsp+48h] [rbp-C0h] BYREF
  ULONG v14; // [rsp+4Ch] [rbp-BCh] BYREF
  int v15; // [rsp+50h] [rbp-B8h] BYREF
  int v16; // [rsp+54h] [rbp-B4h] BYREF
  _DWORD v17[4]; // [rsp+58h] [rbp-B0h] BYREF
  struct _KAFFINITY_EX v18; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+178h] [rbp+70h] BYREF
  __int64 v20; // [rsp+188h] [rbp+80h]
  __int64 v21; // [rsp+190h] [rbp+88h]
  __int64 v22; // [rsp+198h] [rbp+90h]
  __int64 v23; // [rsp+1A0h] [rbp+98h]
  _WORD *v24; // [rsp+1A8h] [rbp+A0h]
  __int64 v25; // [rsp+1B0h] [rbp+A8h]
  char *v26; // [rsp+1B8h] [rbp+B0h]
  __int64 v27; // [rsp+1C0h] [rbp+B8h]
  unsigned __int64 *v28; // [rsp+1C8h] [rbp+C0h]
  __int64 v29; // [rsp+1D0h] [rbp+C8h]
  __int64 v30; // [rsp+1D8h] [rbp+D0h]
  __int64 v31; // [rsp+1E0h] [rbp+D8h]
  _BYTE v32[16]; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE v33[256]; // [rsp+1F8h] [rbp+F0h] BYREF
  _UNKNOWN *retaddr; // [rsp+330h] [rbp+228h] BYREF
  __int16 v35; // [rsp+338h] [rbp+230h] BYREF

  v2 = &retaddr;
  v35 = a1;
  UserData = PpmEventPerfCheckData;
  v17[0] = 0;
  v16 = 0;
  if ( PpmEventPerfCheckData )
  {
    v13[0] = 0;
    LOBYTE(v2) = (unsigned __int8)memset_0(&v18.8, 0, sizeof(v18.8));
    if ( PpmEtwRegistered )
    {
      LOBYTE(v2) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PARK_NODE_RUNDOWN);
      if ( (_BYTE)v2 )
      {
        *(_QWORD *)&v18.Count = 2097153LL;
        memset_0(&v18.8, 0, sizeof(v18.8));
        for ( i = 0;
              i < *(unsigned __int8 *)(a2 + 10);
              RtlOrAffinityEx(
                &v18,
                (struct _KAFFINITY_EX *)(624LL * i++ + *(_QWORD *)(a2 + 1256) + 288LL),
                (__int64)&v18) )
        {
          ;
        }
        v6 = 32;
        v7 = *(_WORD *)(a2 + 16);
        v8 = 0;
        LOWORD(v15) = 32;
        while ( v8 < v7 )
        {
          if ( *(_QWORD *)(a2 + 16 + 8LL * v8 + 8) )
          {
            if ( v6 != 32 )
              goto LABEL_13;
            v6 = v8;
            LOWORD(v15) = v8;
          }
          ++v8;
        }
        if ( v6 == 32 )
        {
LABEL_13:
          v14 = 1;
          UserData->Ptr = (ULONGLONG)&v35;
          *(_QWORD *)&UserData->Size = 2LL;
          PpmEventAddAffinityMaskAsSubset(
            0LL,
            (_WORD *)(a2 + 16),
            (__int64)v32,
            (__int64)v33,
            (__int64)UserData,
            v17,
            &v16,
            &v14);
          PpmEventAddAffinityMaskAsSubset(
            (_WORD *)(a2 + 16),
            (_WORD *)(a2 + 280),
            (__int64)v32,
            (__int64)v33,
            (__int64)UserData,
            v17,
            &v16,
            &v14);
          v9 = v14;
          v10 = v14;
          UserData[v10].Ptr = a2 + 1136;
          *(_QWORD *)&UserData[v10].Size = 2LL;
          v11 = v9 + 1;
          v14 = v9 + 2;
          UserData[v11].Ptr = a2 + 1140;
          *(_QWORD *)&UserData[v11].Size = 2LL;
          PpmEventAddAffinityMaskAsSubset(
            (_WORD *)(a2 + 16),
            &v18,
            (__int64)v32,
            (__int64)v33,
            (__int64)UserData,
            v17,
            &v16,
            &v14);
          PpmEventAddAffinityMaskAsSubset(
            (_WORD *)(a2 + 16),
            (_WORD *)(a2 + 808),
            (__int64)v32,
            (__int64)v33,
            (__int64)UserData,
            v17,
            &v16,
            &v14);
          LOBYTE(v2) = EtwWrite(PpmEtwHandle, &PPM_ETW_PARK_NODE_RUNDOWN, 0LL, v14, UserData);
          return (char)v2;
        }
        v19.Ptr = (ULONGLONG)&v15;
        *(_QWORD *)&v19.Size = 2LL;
        v21 = 8LL;
        v23 = 8LL;
        v20 = a2 + 24 + 8LL * v6;
        v25 = 1LL;
        v22 = a2 + 288 + 8LL * v6;
        LOBYTE(v13[0]) = *(_BYTE *)(a2 + 1136);
        HIBYTE(v13[0]) = *(_BYTE *)(a2 + 1140);
        v24 = v13;
        v26 = (char *)v13 + 1;
        v27 = 1LL;
        v28 = &v18.Bitmap[v6];
        v29 = 8LL;
        v31 = 8LL;
        v30 = a2 + 8 * (v6 + 102LL);
        LOBYTE(v2) = EtwWrite(PpmEtwHandle, &PPM_ETW_PARK_NODE_RUNDOWN_V3, 0LL, 7u, &v19);
      }
    }
  }
  return (char)v2;
}
