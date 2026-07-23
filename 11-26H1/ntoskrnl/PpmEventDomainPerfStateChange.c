/*
 * XREFs of PpmEventDomainPerfStateChange @ 0x140462364
 * Callers:
 *     PpmPerfApplyDomainState @ 0x140483F90 (PpmPerfApplyDomainState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     KeAndGroupAffinityEx @ 0x140462640 (KeAndGroupAffinityEx.c)
 *     PpmFireWmiEvent @ 0x14060FA28 (PpmFireWmiEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PpmEventDomainPerfStateChange(__int64 a1)
{
  _UNKNOWN **v1; // rax
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // di
  _OWORD *v5; // rdx
  bool v6; // cf
  __int64 v7; // rcx
  bool v8; // zf
  unsigned int v9; // r8d
  _OWORD *v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  int v24; // [rsp+48h] [rbp-C0h] BYREF
  int v25; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v26; // [rsp+50h] [rbp-B8h] BYREF
  int v27; // [rsp+54h] [rbp-B4h] BYREF
  _DWORD v28[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A8h]
  __int64 v30; // [rsp+68h] [rbp-A0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  unsigned int *v32; // [rsp+88h] [rbp-80h]
  __int64 v33; // [rsp+90h] [rbp-78h]
  int *v34; // [rsp+98h] [rbp-70h]
  __int64 v35; // [rsp+A0h] [rbp-68h]
  _OWORD v36[32]; // [rsp+4F8h] [rbp+3F0h] BYREF
  _UNKNOWN *retaddr; // [rsp+720h] [rbp+618h] BYREF

  v1 = &retaddr;
  if ( !*(_DWORD *)(a1 + 304) )
  {
    v25 = *(_DWORD *)(a1 + 872);
    v26 = *(_DWORD *)(a1 + 892);
    LOBYTE(v1) = WmiPerfStateDomainEventEnabled;
    if ( WmiPerfStateDomainEventEnabled )
    {
      v28[0] = v25;
      v21 = *(_QWORD *)(a1 + 32);
      v22 = *(_QWORD *)(a1 + 16);
      v30 = v21;
      v29 = v26;
      v28[1] = 0;
      LOBYTE(v1) = PpmFireWmiEvent(v22 - 136, &PPM_PERFSTATE_DOMAIN_CHANGE_GUID, 24LL, v28);
    }
    if ( PpmEtwRegistered )
    {
      LOBYTE(v1) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_DOMAIN_PERF_STATE_CHANGE);
      if ( (_BYTE)v1 )
      {
        v3 = 0;
        v4 = 0;
        LOWORD(v24) = 0;
        do
        {
          v5 = &v36[v3];
          v6 = v4 < *(_WORD *)&stru_140FC11F0.WaitRegister.Flags;
          *v5 = 0LL;
          *((_WORD *)v5 + 4) = v4;
          if ( v6 )
            v7 = *(__int64 *)((char *)&stru_140FC11F0.116 + 8 * v4 + 4);
          else
            v7 = 0LL;
          *(_QWORD *)v5 = v7;
          v8 = (unsigned int)KeAndGroupAffinityEx(a1 + 24, v5, v5) == 0;
          v3 = v24;
          if ( !v8 )
          {
            v3 = v24 + 1;
            LOWORD(v24) = v24 + 1;
          }
          ++v4;
        }
        while ( v4 < 0x20u );
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&v25;
        v32 = &v26;
        v33 = 4LL;
        v34 = &v24;
        v35 = 2LL;
        v9 = 3;
        if ( v3 )
        {
          v10 = v36;
          v11 = v3;
          do
          {
            v12 = 2LL * v9;
            *(&UserData.Ptr + v12) = (ULONGLONG)v10 + 8;
            *((_QWORD *)&UserData.Size + v12) = 2LL;
            v13 = 2LL * (v9 + 1);
            v9 += 2;
            *(&UserData.Ptr + v13) = (ULONGLONG)v10++;
            *((_QWORD *)&UserData.Size + v13) = 8LL;
            --v11;
          }
          while ( v11 );
        }
        v14 = 2LL * v9;
        *(&UserData.Ptr + v14) = a1 + 888;
        *((_QWORD *)&UserData.Size + v14) = 4LL;
        v15 = v9 + 1;
        v16 = v9 + 2;
        v15 *= 2LL;
        *(&UserData.Ptr + v15) = a1 + 896;
        *((_QWORD *)&UserData.Size + v15) = 4LL;
        v17 = 2LL * v16;
        *(&UserData.Ptr + v17) = a1 + 900;
        *((_QWORD *)&UserData.Size + v17) = 4LL;
        v18 = v16 + 1;
        v16 += 2;
        v18 *= 2LL;
        *(&UserData.Ptr + v18) = a1 + 904;
        v19 = *(unsigned __int8 *)(a1 + 944);
        *((_QWORD *)&UserData.Size + v18) = 4LL;
        v20 = 2LL * v16;
        v27 = v19;
        *(&UserData.Ptr + v20) = (ULONGLONG)&v27;
        *((_QWORD *)&UserData.Size + v20) = 4LL;
        LOBYTE(v1) = EtwWriteEx(PpmEtwHandle, &PPM_ETW_DOMAIN_PERF_STATE_CHANGE, 0LL, 0, 0LL, 0LL, v16 + 1, &UserData);
      }
    }
  }
  return (char)v1;
}
