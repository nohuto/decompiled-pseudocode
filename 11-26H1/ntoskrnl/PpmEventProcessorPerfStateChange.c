/*
 * XREFs of PpmEventProcessorPerfStateChange @ 0x1402575A0
 * Callers:
 *     PpmPerfApplyHiddenProcessorState @ 0x140608EC8 (PpmPerfApplyHiddenProcessorState.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402578F0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PpmEventProcessorPerfStateChange(__int64 a1, int a2, int a3)
{
  const GUID *ActivityId; // r11
  __int64 v4; // r9
  const EVENT_DESCRIPTOR *v5; // r10
  int *v6; // rax
  REGHANDLE v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 Keyword; // r8
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v13; // [rsp+48h] [rbp-C0h] BYREF
  int v14; // [rsp+4Ch] [rbp-BCh] BYREF
  int v15; // [rsp+50h] [rbp-B8h] BYREF
  int v16; // [rsp+54h] [rbp-B4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  int *v18; // [rsp+68h] [rbp-A0h]
  __int64 v19; // [rsp+70h] [rbp-98h]
  int *v20; // [rsp+78h] [rbp-90h]
  __int64 v21; // [rsp+80h] [rbp-88h]
  __int64 v22; // [rsp+88h] [rbp-80h]
  __int64 v23; // [rsp+90h] [rbp-78h]
  __int64 v24; // [rsp+98h] [rbp-70h]
  __int64 v25; // [rsp+A0h] [rbp-68h]
  __int64 v26; // [rsp+A8h] [rbp-60h]
  __int64 v27; // [rsp+B0h] [rbp-58h]
  __int64 v28; // [rsp+B8h] [rbp-50h]
  __int64 v29; // [rsp+C0h] [rbp-48h]
  __int64 v30; // [rsp+C8h] [rbp-40h]
  __int64 v31; // [rsp+D0h] [rbp-38h]
  __int64 v32; // [rsp+D8h] [rbp-30h]
  __int64 v33; // [rsp+E0h] [rbp-28h]
  int *v34; // [rsp+E8h] [rbp-20h]
  __int64 v35; // [rsp+F0h] [rbp-18h]
  int *v36; // [rsp+F8h] [rbp-10h]
  __int64 v37; // [rsp+100h] [rbp-8h]
  int *v38; // [rsp+108h] [rbp+0h]
  __int64 v39; // [rsp+110h] [rbp+8h]
  __int64 v40; // [rsp+118h] [rbp+10h]
  __int64 v41; // [rsp+120h] [rbp+18h]
  __int64 v42; // [rsp+128h] [rbp+20h]
  __int64 v43; // [rsp+130h] [rbp+28h]
  int v44; // [rsp+160h] [rbp+58h] BYREF
  int v45; // [rsp+168h] [rbp+60h] BYREF

  v45 = a3;
  v44 = a2;
  ActivityId = 0LL;
  v4 = a1;
  v13 = 0;
  if ( *(_BYTE *)(a1 + 68) )
  {
    v5 = &PPM_ETW_PROCESSOR_PERF_STATE_CHANGE;
    LOWORD(v13) = *(unsigned __int8 *)(a1 - 35056);
    BYTE2(v13) = *(_BYTE *)(a1 - 35055);
    v21 = 3LL;
  }
  else
  {
    v5 = (const EVENT_DESCRIPTOR *)&PPM_ETW_PROCESSOR_PERF_STATE_CHANGE_HV;
    v13 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL);
    v21 = 4LL;
  }
  v6 = &v13;
  v20 = &v13;
  if ( PpmEtwRegistered )
  {
    v7 = PpmEtwHandle;
    if ( PpmEtwHandle )
    {
      v8 = *(_QWORD *)(PpmEtwHandle + 32);
      Keyword = v5->Keyword;
      if ( *(_DWORD *)(v8 + 96) )
      {
        LOBYTE(v6) = *(_BYTE *)(v8 + 100);
        if ( v5->Level <= (unsigned __int8)v6 || !(_BYTE)v6 )
        {
          LODWORD(v6) = *(_DWORD *)(v8 + 104);
          if ( ((unsigned __int8)v6 & 0x40) != 0 && !Keyword )
            goto LABEL_15;
          if ( (Keyword & *(_QWORD *)(v8 + 112)) != 0 )
          {
            v10 = *(_QWORD *)(v8 + 120);
            LOBYTE(v6) = Keyword & v10;
            if ( (Keyword & v10) == v10 )
              goto LABEL_15;
          }
        }
      }
      if ( *(_WORD *)(PpmEtwHandle + 102) )
      {
        LOBYTE(v7) = v5->Level;
        LOBYTE(v6) = EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 40) + 96LL, v7, v5->Keyword, v4);
        if ( (_BYTE)v6 )
        {
LABEL_15:
          v11 = *(_QWORD *)(v4 + 8);
          v14 = *(_DWORD *)(v11 + 64);
          v15 = *(_DWORD *)(v11 + 84);
          UserData.Ptr = (ULONGLONG)&v14;
          v18 = &v15;
          v22 = v11 + 80;
          v24 = v11 + 96;
          v26 = v11 + 88;
          v28 = v11 + 92;
          v30 = v11 + 100;
          v32 = v11 + 104;
          *(_QWORD *)&UserData.Size = 4LL;
          v19 = 4LL;
          v23 = 4LL;
          v25 = 4LL;
          v27 = 4LL;
          v29 = 4LL;
          v31 = 4LL;
          v33 = 4LL;
          v16 = *(unsigned __int8 *)(v11 + 136);
          v34 = &v16;
          v36 = &v44;
          v38 = &v45;
          v40 = v11 + 72;
          v42 = v11 + 108;
          v35 = 4LL;
          v37 = 4LL;
          v39 = 4LL;
          v41 = 8LL;
          v43 = 4LL;
          LOBYTE(v6) = EtwWriteEx(PpmEtwHandle, v5, 0LL, 0, ActivityId, ActivityId, 0xEu, &UserData);
        }
      }
    }
  }
  return (char)v6;
}
