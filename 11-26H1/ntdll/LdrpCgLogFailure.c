/*
 * XREFs of LdrpCgLogFailure @ 0x18015CD50
 * Callers:
 *     <none>
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x18005BB90 (RtlCaptureStackBackTrace.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008AD00 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgCreate1Sz_char @ 0x18008EDEC (_tlgCreate1Sz_char.c)
 *     RtlRunOnceExecuteOnce @ 0x18008F320 (RtlRunOnceExecuteOnce.c)
 *     LdrpFindLoadedDllByAddress @ 0x1800C3930 (LdrpFindLoadedDllByAddress.c)
 *     _tlgKeywordOn @ 0x1800EAAF8 (_tlgKeywordOn.c)
 *     LdrpGetPdbSignature @ 0x18015D2A0 (LdrpGetPdbSignature.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

char __fastcall LdrpCgLogFailure(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // rdi
  const ULONG *v4; // r14
  const ULONG *v5; // r13
  int LoadedDllByAddress; // eax
  char *v7; // r9
  unsigned __int64 v8; // r15
  _BYTE *v9; // rdi
  unsigned __int64 *v10; // rsi
  unsigned __int64 v11; // rcx
  int v12; // r10d
  unsigned __int16 *v13; // rax
  int v14; // ecx
  unsigned __int16 *v15; // rax
  int v16; // ecx
  unsigned __int16 *v17; // rax
  int v18; // ecx
  unsigned __int16 *v19; // rax
  int v20; // ecx
  int v21; // r10d
  __int64 v22; // r9
  __int64 v23; // r8
  ULONG BackTraceHash; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v26; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v27; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v28; // [rsp+44h] [rbp-C4h] BYREF
  __int16 v29; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v30; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v31; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v32[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+70h] [rbp-98h] BYREF
  __int64 v34; // [rsp+78h] [rbp-90h] BYREF
  const char *v35; // [rsp+80h] [rbp-88h] BYREF
  const char *v36; // [rsp+88h] [rbp-80h]
  const ULONG *v37; // [rsp+90h] [rbp-78h]
  const ULONG *v38; // [rsp+98h] [rbp-70h]
  __int64 v39; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v40; // [rsp+A8h] [rbp-60h]
  __int64 v41; // [rsp+B8h] [rbp-50h]
  __int128 v42; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v43; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v44; // [rsp+E0h] [rbp-28h] BYREF
  PVOID BackTrace; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v46; // [rsp+F8h] [rbp-10h]
  __int64 v47; // [rsp+108h] [rbp+0h]
  _EVENT_DATA_DESCRIPTOR v48; // [rsp+118h] [rbp+10h] BYREF
  __int64 *v49; // [rsp+138h] [rbp+30h]
  __int64 v50; // [rsp+140h] [rbp+38h]
  __int16 *v51; // [rsp+148h] [rbp+40h]
  __int64 v52; // [rsp+150h] [rbp+48h]
  __int64 *v53; // [rsp+158h] [rbp+50h]
  int v54; // [rsp+160h] [rbp+58h]
  int v55; // [rsp+164h] [rbp+5Ch]
  _DWORD *v56; // [rsp+168h] [rbp+60h]
  __int64 v57; // [rsp+170h] [rbp+68h]
  __int64 v58; // [rsp+178h] [rbp+70h]
  _DWORD v59[2]; // [rsp+180h] [rbp+78h] BYREF
  _DWORD *v60; // [rsp+188h] [rbp+80h]
  __int64 v61; // [rsp+190h] [rbp+88h]
  __int64 v62; // [rsp+198h] [rbp+90h]
  _DWORD v63[2]; // [rsp+1A0h] [rbp+98h] BYREF
  _DWORD *v64; // [rsp+1A8h] [rbp+A0h]
  __int64 v65; // [rsp+1B0h] [rbp+A8h]
  __int64 v66; // [rsp+1B8h] [rbp+B0h]
  _DWORD v67[2]; // [rsp+1C0h] [rbp+B8h] BYREF
  _DWORD *v68; // [rsp+1C8h] [rbp+C0h]
  __int64 v69; // [rsp+1D0h] [rbp+C8h]
  __int64 v70; // [rsp+1D8h] [rbp+D0h]
  _DWORD v71[2]; // [rsp+1E0h] [rbp+D8h] BYREF
  __int64 *v72; // [rsp+1E8h] [rbp+E0h]
  __int64 v73; // [rsp+1F0h] [rbp+E8h]
  __int64 *v74; // [rsp+1F8h] [rbp+F0h]
  __int64 v75; // [rsp+200h] [rbp+F8h]
  _QWORD *v76; // [rsp+208h] [rbp+100h]
  __int64 v77; // [rsp+210h] [rbp+108h]
  _BYTE v78[16]; // [rsp+218h] [rbp+110h] BYREF
  _BYTE v79[16]; // [rsp+228h] [rbp+120h] BYREF
  _BYTE v80[16]; // [rsp+238h] [rbp+130h] BYREF
  _BYTE v81[16]; // [rsp+248h] [rbp+140h] BYREF
  __int16 *v82; // [rsp+258h] [rbp+150h]
  __int64 v83; // [rsp+260h] [rbp+158h]
  _BYTE *v84; // [rsp+268h] [rbp+160h]
  int v85; // [rsp+270h] [rbp+168h]
  int v86; // [rsp+274h] [rbp+16Ch]
  __int16 *v87; // [rsp+278h] [rbp+170h]
  __int64 v88; // [rsp+280h] [rbp+178h]
  __int128 *v89; // [rsp+288h] [rbp+180h]
  int v90; // [rsp+290h] [rbp+188h]
  int v91; // [rsp+294h] [rbp+18Ch]
  __int16 *v92; // [rsp+298h] [rbp+190h]
  __int64 v93; // [rsp+2A0h] [rbp+198h]
  __int128 *v94; // [rsp+2A8h] [rbp+1A0h]
  int v95; // [rsp+2B0h] [rbp+1A8h]
  int v96; // [rsp+2B4h] [rbp+1ACh]
  __int16 *v97; // [rsp+2B8h] [rbp+1B0h]
  __int64 v98; // [rsp+2C0h] [rbp+1B8h]
  __int128 *v99; // [rsp+2C8h] [rbp+1C0h]
  int v100; // [rsp+2D0h] [rbp+1C8h]
  int v101; // [rsp+2D4h] [rbp+1CCh]
  ULONG *p_BackTraceHash; // [rsp+2D8h] [rbp+1D0h]
  __int64 v103; // [rsp+2E0h] [rbp+1D8h]
  PVOID *p_BackTrace; // [rsp+2E8h] [rbp+1E0h]
  int v105; // [rsp+2F0h] [rbp+1E8h]
  int v106; // [rsp+2F4h] [rbp+1ECh]
  _QWORD *v107; // [rsp+2F8h] [rbp+1F0h]
  __int64 v108; // [rsp+300h] [rbp+1F8h]
  __int64 v109; // [rsp+308h] [rbp+200h] BYREF
  __int128 v110; // [rsp+310h] [rbp+208h]
  __int64 v111; // [rsp+320h] [rbp+218h]
  _BYTE v112[64]; // [rsp+328h] [rbp+220h] BYREF

  v1 = 0LL;
  v31 = a1;
  BackTraceHash = 0;
  BackTrace = 0LL;
  v39 = 0LL;
  v2 = 0LL;
  v47 = 0LL;
  v41 = 0LL;
  *(_OWORD *)&v32[1] = 0LL;
  v3 = 0LL;
  v46 = 0LL;
  v40 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  memset_thunk_772440563353939046(v112, 0, 0x40uLL);
  v4 = (const ULONG *)"unknown";
  v109 = 0LL;
  v35 = "unknown";
  v36 = "unknown";
  v111 = 0LL;
  v37 = (const ULONG *)"unknown";
  v38 = (const ULONG *)"unknown";
  v5 = (const ULONG *)"unknown";
  v110 = 0LL;
  RtlRunOnceExecuteOnce(&CastGuardTelemetryInitRunOnce, (PRTL_RUN_ONCE_INIT_FN)CastGuardTelemetryInitOnce, 0LL, 0LL);
  v32[0] = NtCurrentPeb()->ImageBaseAddress;
  LOWORD(LoadedDllByAddress) = RtlCaptureStackBackTrace(1u, 4u, &BackTrace, &BackTraceHash);
  v8 = (unsigned __int16)LoadedDllByAddress;
  if ( (_WORD)LoadedDllByAddress )
  {
    v9 = v112;
    do
    {
      if ( v1 >= 4 )
        break;
      v10 = (unsigned __int64 *)(&v39 + v1);
      LoadedDllByAddress = LdrpFindLoadedDllByAddress((unsigned __int64)*(&BackTrace + v1), v10, 0LL, v7);
      if ( LoadedDllByAddress >= 0 )
      {
        v11 = *v10;
        *((_DWORD *)&v43 + v1) = *(_DWORD *)(*v10 + 64);
        *((_DWORD *)&v44 + v1) = *(_DWORD *)(v11 + 128);
        *(&v109 + v1) = *(_QWORD *)(v11 + 48);
        LOBYTE(LoadedDllByAddress) = LdrpGetPdbSignature(
                                       *(_QWORD *)(v11 + 48),
                                       *(_DWORD *)(v11 + 64),
                                       (_DWORD)v9,
                                       (unsigned int)&v42 + 4 * v1,
                                       (__int64)&(&v35)[v1]);
      }
      ++v1;
      LODWORD(v9) = (_DWORD)v9 + 16;
    }
    while ( v1 < v8 );
    v2 = v41;
    v3 = v39;
    v5 = (const ULONG *)v36;
    v4 = (const ULONG *)v35;
  }
  if ( (unsigned int)dword_1801C4A38 > 5 )
  {
    LOBYTE(LoadedDllByAddress) = tlgKeywordOn((__int64)&dword_1801C4A38, 0x400000000000LL);
    if ( (_BYTE)LoadedDllByAddress )
    {
      v33 = v32[0];
      v49 = &v33;
      v51 = &v26;
      v53 = &v109;
      v13 = (unsigned __int16 *)(v3 + 88);
      v50 = 8LL;
      v26 = v8;
      v52 = 2LL;
      v54 = 8 * v8;
      v55 = v12;
      if ( !v3 )
        v13 = (unsigned __int16 *)&v32[1];
      v14 = *v13;
      v58 = *((_QWORD *)v13 + 1);
      v56 = v59;
      v57 = 2LL;
      v59[0] = v14;
      v59[1] = v12;
      if ( (_QWORD)v40 )
        v15 = (unsigned __int16 *)(v40 + 88);
      else
        v15 = (unsigned __int16 *)&v32[1];
      v16 = *v15;
      v62 = *((_QWORD *)v15 + 1);
      v60 = v63;
      v61 = 2LL;
      v63[0] = v16;
      v63[1] = v12;
      if ( *((_QWORD *)&v40 + 1) )
        v17 = (unsigned __int16 *)(*((_QWORD *)&v40 + 1) + 88LL);
      else
        v17 = (unsigned __int16 *)&v32[1];
      v18 = *v17;
      v66 = *((_QWORD *)v17 + 1);
      v19 = (unsigned __int16 *)(v2 + 88);
      v64 = v67;
      v65 = 2LL;
      v67[0] = v18;
      v67[1] = v12;
      if ( !v2 )
        v19 = (unsigned __int16 *)&v32[1];
      v20 = *v19;
      v70 = *((_QWORD *)v19 + 1);
      v34 = v31;
      v72 = &v34;
      LODWORD(v31) = BackTraceHash;
      v74 = &v31;
      v68 = v71;
      v71[0] = v20;
      v76 = v32;
      v69 = 2LL;
      v71[1] = v12;
      v73 = 8LL;
      v75 = 4LL;
      LODWORD(v32[0]) = v8;
      v77 = 4LL;
      tlgCreate1Sz_char((__int64)v78, v4);
      tlgCreate1Sz_char((__int64)v79, v5);
      tlgCreate1Sz_char((__int64)v80, v37);
      tlgCreate1Sz_char((__int64)v81, v38);
      v27 = v8;
      v82 = &v27;
      v92 = &v29;
      v84 = v112;
      v94 = &v43;
      v85 = 16 * v8;
      v87 = &v28;
      v89 = &v42;
      v90 = 4 * v8;
      v95 = 4 * v8;
      v100 = 4 * v8;
      p_BackTraceHash = &BackTraceHash;
      p_BackTrace = &BackTrace;
      v97 = &v30;
      v107 = &v32[1];
      v83 = 2LL;
      v86 = v21;
      v28 = v8;
      v88 = 2LL;
      v91 = v21;
      v29 = v8;
      v93 = 2LL;
      v96 = v21;
      v30 = v8;
      v98 = 2LL;
      v99 = &v44;
      v101 = v21;
      LOWORD(BackTraceHash) = v8;
      v103 = 2LL;
      v105 = v22;
      v106 = v21;
      v32[1] = 0x1000000LL;
      v108 = 8LL;
      LOBYTE(LoadedDllByAddress) = tlgWriteTransfer_EtwEventWriteTransfer(
                                     (__int64)&dword_1801C4A38,
                                     (unsigned __int8 *)dword_18019B6B6,
                                     v23,
                                     v22,
                                     0x1Fu,
                                     &v48);
    }
  }
  return LoadedDllByAddress;
}
