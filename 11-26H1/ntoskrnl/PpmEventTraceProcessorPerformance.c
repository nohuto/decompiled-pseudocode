/*
 * XREFs of PpmEventTraceProcessorPerformance @ 0x140B101E8
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PpmEventHiddenProcessorPerformance @ 0x1407E0D64 (PpmEventHiddenProcessorPerformance.c)
 */

void __fastcall PpmEventTraceProcessorPerformance(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rdi
  _DWORD *v4; // rcx
  int v5; // eax
  unsigned int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rax
  char v9; // [rsp+30h] [rbp-D0h] BYREF
  char v10; // [rsp+31h] [rbp-CFh] BYREF
  char v11; // [rsp+32h] [rbp-CEh] BYREF
  __int16 v12; // [rsp+34h] [rbp-CCh] BYREF
  int v13; // [rsp+38h] [rbp-C8h] BYREF
  int v14; // [rsp+3Ch] [rbp-C4h] BYREF
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v16; // [rsp+44h] [rbp-BCh] BYREF
  int v17; // [rsp+48h] [rbp-B8h] BYREF
  int v18; // [rsp+4Ch] [rbp-B4h] BYREF
  int v19; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+54h] [rbp-ACh] BYREF
  int v21; // [rsp+58h] [rbp-A8h] BYREF
  int v22; // [rsp+5Ch] [rbp-A4h] BYREF
  int v23; // [rsp+60h] [rbp-A0h] BYREF
  int v24; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v25; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v26; // [rsp+6Ch] [rbp-94h] BYREF
  int v27; // [rsp+70h] [rbp-90h] BYREF
  int v28; // [rsp+74h] [rbp-8Ch] BYREF
  int v29; // [rsp+78h] [rbp-88h] BYREF
  int v30; // [rsp+7Ch] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  __int64 v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  int *v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  int *v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  int *v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  int *v40; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  unsigned int *v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  int *v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  int *v46; // [rsp+100h] [rbp+0h]
  __int64 v47; // [rsp+108h] [rbp+8h]
  int *v48; // [rsp+110h] [rbp+10h]
  __int64 v49; // [rsp+118h] [rbp+18h]
  int *v50; // [rsp+120h] [rbp+20h]
  __int64 v51; // [rsp+128h] [rbp+28h]
  char *v52; // [rsp+130h] [rbp+30h]
  __int64 v53; // [rsp+138h] [rbp+38h]
  char *v54; // [rsp+140h] [rbp+40h]
  __int64 v55; // [rsp+148h] [rbp+48h]
  int *v56; // [rsp+150h] [rbp+50h]
  __int64 v57; // [rsp+158h] [rbp+58h]
  int *v58; // [rsp+160h] [rbp+60h]
  __int64 v59; // [rsp+168h] [rbp+68h]
  int *v60; // [rsp+170h] [rbp+70h]
  __int64 v61; // [rsp+178h] [rbp+78h]
  int *v62; // [rsp+180h] [rbp+80h]
  __int64 v63; // [rsp+188h] [rbp+88h]
  int *v64; // [rsp+190h] [rbp+90h]
  __int64 v65; // [rsp+198h] [rbp+98h]
  char *v66; // [rsp+1A0h] [rbp+A0h]
  __int64 v67; // [rsp+1A8h] [rbp+A8h]
  unsigned int *v68; // [rsp+1B0h] [rbp+B0h]
  __int64 v69; // [rsp+1B8h] [rbp+B8h]
  int *v70; // [rsp+1C0h] [rbp+C0h]
  __int64 v71; // [rsp+1C8h] [rbp+C8h]
  unsigned int *v72; // [rsp+1D0h] [rbp+D0h]
  __int64 v73; // [rsp+1D8h] [rbp+D8h]
  int *v74; // [rsp+1E0h] [rbp+E0h]
  __int64 v75; // [rsp+1E8h] [rbp+E8h]

  v1 = 0;
  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_CURRENT_PERF_RUNDOWN) )
  {
    v3 = *(_QWORD *)(a1 + 35264);
    v4 = *(_DWORD **)(a1 + 35272);
    v27 = *(unsigned __int8 *)(a1 + 35356);
    v28 = *(_DWORD *)(a1 + 35412);
    v5 = 0;
    if ( v3 )
    {
      v6 = *(_DWORD *)(v3 + 456);
      v16 = v6;
      LOBYTE(v5) = *(_BYTE *)(v3 + 528) != 0;
      v21 = v5;
      v24 = *(unsigned __int8 *)(v3 + 496);
      v5 = *(unsigned __int8 *)(v3 + 531);
    }
    else
    {
      v6 = *(_DWORD *)(a1 + 68);
      v16 = v6;
      v21 = 0;
      v24 = 100;
    }
    v30 = v5;
    if ( v4 )
    {
      v13 = v4[6];
      v14 = v4[7];
      v15 = v4[20];
      v17 = v4[22];
      v18 = v4[23];
      v19 = v4[24];
      v22 = v4[25];
      v23 = v4[26];
      v25 = v4[21];
      v20 = v4[41];
      v6 = v4[40] * v6 / 0x64;
    }
    else
    {
      v13 = 100;
      v14 = 100;
      v15 = 100;
      v17 = 100;
      v18 = 100;
      v19 = 100;
      v22 = 0;
      v23 = 0;
      v25 = v6;
      v20 = 100;
    }
    v12 = *(unsigned __int8 *)(a1 + 208);
    v9 = *(_BYTE *)(a1 + 35352);
    UserData.Ptr = (ULONGLONG)&v12;
    v32 = a1 + 209;
    v34 = &v27;
    v36 = &v13;
    v38 = &v14;
    v40 = &v15;
    v42 = &v16;
    v44 = &v17;
    v46 = &v18;
    v48 = &v19;
    v50 = &v20;
    v52 = &v9;
    v10 = *(_BYTE *)(a1 + 35353);
    v54 = &v10;
    v56 = &v21;
    v58 = &v22;
    v60 = &v23;
    v62 = &v28;
    v64 = &v24;
    v11 = *(_BYTE *)(a1 + 35354);
    v66 = &v11;
    v68 = &v25;
    v29 = *(unsigned __int8 *)(a1 + 35357);
    v70 = &v29;
    v72 = &v26;
    v74 = &v30;
    v26 = v6;
    *(_QWORD *)&UserData.Size = 2LL;
    v33 = 1LL;
    v35 = 4LL;
    v37 = 4LL;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 4LL;
    v45 = 4LL;
    v47 = 4LL;
    v49 = 4LL;
    v51 = 4LL;
    v53 = 1LL;
    v55 = 1LL;
    v57 = 4LL;
    v59 = 4LL;
    v61 = 4LL;
    v63 = 4LL;
    v65 = 4LL;
    v67 = 1LL;
    v69 = 4LL;
    v71 = 4LL;
    v73 = 4LL;
    v75 = 4LL;
    EtwWrite(PpmEtwHandle, &PPM_ETW_CURRENT_PERF_RUNDOWN, 0LL, 0x17u, &UserData);
    if ( v3 )
    {
      if ( *(_QWORD *)(v3 + 16) == a1 + 35264 && *(_DWORD *)(v3 + 296) )
      {
        do
        {
          v7 = 1224LL * v1;
          v8 = *(_QWORD *)(v3 + 312);
          if ( *(_DWORD *)(v7 + v8 + 16) == 2 )
            PpmEventHiddenProcessorPerformance(
              a1,
              *(_DWORD *)(v7 + v8 + 20),
              *(_DWORD *)(v7 + v8 + 24),
              *(_DWORD *)(v7 + v8 + 28));
          ++v1;
        }
        while ( v1 < *(_DWORD *)(v3 + 296) );
      }
    }
  }
}
