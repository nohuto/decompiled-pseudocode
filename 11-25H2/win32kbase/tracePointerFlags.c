/*
 * XREFs of tracePointerFlags @ 0x1400B427C
 * Callers:
 *     tracePointerInfo @ 0x1400B4190 (tracePointerInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1400B4D10 (WPP_RECORDER_AND_TRACE_SF_s.c)
 */

void __fastcall tracePointerFlags(int a1, __int64 a2)
{
  bool v3; // di
  bool v4; // si
  __int64 v5; // rax
  int v6; // r8d
  int v7; // edx
  bool v8; // di
  bool v9; // si
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  bool v13; // di
  bool v14; // si
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  bool v18; // di
  bool v19; // si
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  bool v23; // di
  bool v24; // si
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  bool v28; // di
  bool v29; // si
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  bool v33; // di
  bool v34; // si
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  bool v38; // di
  bool v39; // si
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  bool v43; // di
  bool v44; // si
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  bool v48; // di
  bool v49; // si
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  bool v53; // di
  bool v54; // si
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  bool v58; // di
  bool v59; // si
  __int64 UserSessionState; // rax
  int v61; // r8d
  int v62; // edx
  bool v63; // di
  bool v64; // si
  __int64 v65; // rax
  int v66; // r8d
  int v67; // edx
  bool v68; // di
  bool v69; // si
  __int64 v70; // rax
  int v71; // r8d
  int v72; // edx
  bool v73; // bl
  bool v74; // di
  __int64 v75; // rax
  int v76; // r8d
  int v77; // edx

  if ( (a1 & 1) != 0 )
  {
    v58 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v59 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v58 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v61) = v59;
      LOBYTE(v62) = v58;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v62,
        v61,
        *(_QWORD *)(UserSessionState + 19336),
        4,
        1,
        28,
        (__int64)&WPP_f2670351d78231c653e591cd52a969fd_Traceguids,
        (__int64)"NEW");
    }
  }
  if ( (a1 & 2) != 0 )
  {
    v3 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v6) = v4;
      LOBYTE(v7) = v3;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v7,
        v6,
        *(_QWORD *)(v5 + 19336),
        4,
        1,
        29,
        (__int64)&WPP_f2670351d78231c653e591cd52a969fd_Traceguids,
        (__int64)"INRANGE");
    }
  }
  if ( (a1 & 4) != 0 )
  {
    v8 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(v10 + 19336),
        4,
        1,
        30,
        (__int64)&WPP_f2670351d78231c653e591cd52a969fd_Traceguids,
        (__int64)"INCONTACT");
    }
  }
  if ( (a1 & 0x10) != 0 )
  {
    v28 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v30 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v31) = v29;
      LOBYTE(v32) = v28;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v32,
        v31,
        *(_QWORD *)(v30 + 19336),
        4,
        1,
        31,
        (__int64)&WPP_f2670351d78231c653e591cd52a969fd_Traceguids,
        (__int64)"FIRSTBUTTON");
    }
  }
  if ( (a1 & 0x20) != 0 )
  {
    v43 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v44 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v43 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v45 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v46) = v44;
      LOBYTE(v47) = v43;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v47,
        v46,
        *(_QWORD *)(v45 + 19336),
        4,
        1,
        32,
        (__int64)&WPP_f2670351d78231c653e591cd52a969fd_Traceguids,
        (__int64)"SECONDBUTTON");
    }
  }
  if ( (a1 & 0x40) != 0 )
  {
    v48 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v49 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v48 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v50 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v51) = v49;
      LOBYTE(v52) = v48;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v52,
        v51,
        *(_QWORD *)(v50 + 19336),
        4,
        1,
        33,
        (__int64)&WPP_f2670351d78231c653e591cd52a969fd_Traceguids,
        (__int64)"THIRDBUTTON");
    }
  }
  if ( (a1 & 0x2000) != 0 )
  {
    v13 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(v15 + 19336),
        4,
        1,
        34,
        (__int64)&WPP_f2670351d78231c653e591cd52a969fd_Traceguids,
        (__int64)"PRIMARY");
    }
  }
  if ( (a1 & 0x4000) != 0 )
  {
    v18 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v21) = v19;
      LOBYTE(v22) = v18;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(v20 + 19336),
        4,
        1,
        35,
        (__int64)&WPP_f2670351d78231c653e591cd52a969fd_Traceguids,
        (__int64)"CONFIDENCE");
    }
  }
  if ( (a1 & 0x8000) != 0 )
  {
    v53 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v54 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v53 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v55 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v56) = v54;
      LOBYTE(v57) = v53;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v57,
        v56,
        *(_QWORD *)(v55 + 19336),
        4,
        1,
        36,
        (__int64)&WPP_f2670351d78231c653e591cd52a969fd_Traceguids,
        (__int64)"CANCELED");
    }
  }
  if ( (a1 & 0x10000) != 0 )
  {
    v38 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v39 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v40 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v41) = v39;
      LOBYTE(v42) = v38;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v42,
        v41,
        *(_QWORD *)(v40 + 19336),
        4,
        1,
        37,
        (__int64)&WPP_f2670351d78231c653e591cd52a969fd_Traceguids,
        (__int64)"DOWN");
    }
  }
  if ( (a1 & 0x20000) != 0 )
  {
    v23 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v26) = v24;
      LOBYTE(v27) = v23;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v27,
        v26,
        *(_QWORD *)(v25 + 19336),
        4,
        1,
        38,
        (__int64)&WPP_f2670351d78231c653e591cd52a969fd_Traceguids,
        (__int64)"UPDATE");
    }
  }
  if ( (a1 & 0x40000) != 0 )
  {
    v33 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v35 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v36) = v34;
      LOBYTE(v37) = v33;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v37,
        v36,
        *(_QWORD *)(v35 + 19336),
        4,
        1,
        39,
        (__int64)&WPP_f2670351d78231c653e591cd52a969fd_Traceguids,
        (__int64)"UP");
    }
  }
  if ( (a1 & 0x80000) != 0 )
  {
    v63 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v64 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v63 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v65 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v66) = v64;
      LOBYTE(v67) = v63;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v67,
        v66,
        *(_QWORD *)(v65 + 19336),
        4,
        1,
        40,
        (__int64)&WPP_f2670351d78231c653e591cd52a969fd_Traceguids,
        (__int64)"WHEEL");
    }
  }
  if ( (a1 & 0x100000) != 0 )
  {
    v68 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v69 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v68 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v70 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v71) = v69;
      LOBYTE(v72) = v68;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v72,
        v71,
        *(_QWORD *)(v70 + 19336),
        4,
        1,
        41,
        (__int64)&WPP_f2670351d78231c653e591cd52a969fd_Traceguids,
        (__int64)"HWHEEL");
    }
  }
  if ( (a1 & 0x200000) != 0 )
  {
    v73 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v74 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v73 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v75 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v76) = v74;
      LOBYTE(v77) = v73;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v77,
        v76,
        *(_QWORD *)(v75 + 19336),
        4,
        1,
        42,
        (__int64)&WPP_f2670351d78231c653e591cd52a969fd_Traceguids,
        (__int64)"CAPTURECHANGED");
    }
  }
}
