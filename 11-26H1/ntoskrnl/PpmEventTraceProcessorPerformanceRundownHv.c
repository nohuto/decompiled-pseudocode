/*
 * XREFs of PpmEventTraceProcessorPerformanceRundownHv @ 0x1407E13F8
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PpmEventTraceProcessorPerformanceRundownHv(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  bool v4; // zf
  BOOL v5; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v6; // [rsp+34h] [rbp-CCh] BYREF
  int v7; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v9; // [rsp+50h] [rbp-B0h]
  __int64 v10; // [rsp+58h] [rbp-A8h]
  __int64 v11; // [rsp+60h] [rbp-A0h]
  __int64 v12; // [rsp+68h] [rbp-98h]
  __int64 v13; // [rsp+70h] [rbp-90h]
  __int64 v14; // [rsp+78h] [rbp-88h]
  __int64 v15; // [rsp+80h] [rbp-80h]
  __int64 v16; // [rsp+88h] [rbp-78h]
  __int64 v17; // [rsp+90h] [rbp-70h]
  __int64 v18; // [rsp+98h] [rbp-68h]
  __int64 v19; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+A8h] [rbp-58h]
  __int64 v21; // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+B8h] [rbp-48h]
  __int64 v23; // [rsp+C0h] [rbp-40h]
  __int64 v24; // [rsp+C8h] [rbp-38h]
  BOOL *v25; // [rsp+D0h] [rbp-30h]
  __int64 v26; // [rsp+D8h] [rbp-28h]
  __int64 v27; // [rsp+E0h] [rbp-20h]
  __int64 v28; // [rsp+E8h] [rbp-18h]
  __int64 v29; // [rsp+F0h] [rbp-10h]
  __int64 v30; // [rsp+F8h] [rbp-8h]
  __int64 v31; // [rsp+100h] [rbp+0h]
  __int64 v32; // [rsp+108h] [rbp+8h]
  __int64 v33; // [rsp+110h] [rbp+10h]
  __int64 v34; // [rsp+118h] [rbp+18h]
  unsigned int *v35; // [rsp+120h] [rbp+20h]
  __int64 v36; // [rsp+128h] [rbp+28h]
  int *v37; // [rsp+130h] [rbp+30h]
  __int64 v38; // [rsp+138h] [rbp+38h]

  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_CURRENT_PERF_RUNDOWN_HV) )
    {
      v2 = a1[1];
      v3 = *a1;
      *(_QWORD *)&UserData.Size = 4LL;
      v10 = 4LL;
      v12 = 4LL;
      UserData.Ptr = v2 + 20;
      v15 = v3 + 456;
      v9 = v2 + 24;
      v11 = v2 + 28;
      v13 = v2 + 80;
      v17 = v2 + 88;
      v19 = v2 + 92;
      v21 = v2 + 96;
      v23 = v2 + 164;
      v14 = 4LL;
      v16 = 4LL;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 4LL;
      v24 = 4LL;
      v4 = *(_BYTE *)(v3 + 528) == 0;
      v26 = 4LL;
      v28 = 4LL;
      v5 = !v4;
      v25 = &v5;
      v27 = v2 + 100;
      v29 = v2 + 104;
      v31 = v3 + 496;
      v33 = v2 + 84;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      LODWORD(v2) = *(_DWORD *)(v3 + 456) * *(_DWORD *)(v2 + 160);
      v36 = 4LL;
      v35 = &v6;
      v6 = (unsigned int)v2 / 0x64;
      v7 = *(unsigned __int8 *)(v3 + 531);
      v37 = &v7;
      v38 = 4LL;
      EtwWrite(PpmEtwHandle, &PPM_ETW_CURRENT_PERF_RUNDOWN_HV, 0LL, 0x10u, &UserData);
    }
  }
}
