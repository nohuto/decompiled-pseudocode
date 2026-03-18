/*
 * XREFs of tracePointerFlags @ 0x140076E34
 * Callers:
 *     tracePointerInfo @ 0x140076368 (tracePointerInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1400777D0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 */

void __fastcall tracePointerFlags(int a1, int a2, int a3)
{
  bool v4; // di
  bool v5; // si
  __int64 v6; // rax
  int v7; // r8d
  int v8; // edx
  bool v9; // di
  bool v10; // si
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  bool v14; // di
  bool v15; // si
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  bool v19; // di
  bool v20; // si
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  bool v24; // di
  bool v25; // si
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  bool v29; // di
  bool v30; // si
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  bool v34; // di
  bool v35; // si
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  bool v39; // di
  bool v40; // si
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  bool v44; // di
  bool v45; // si
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  bool v49; // di
  bool v50; // si
  __int64 v51; // rax
  int v52; // r8d
  int v53; // edx
  bool v54; // di
  bool v55; // si
  __int64 v56; // rax
  int v57; // r8d
  int v58; // edx
  bool v59; // di
  bool v60; // si
  __int64 UserSessionState; // rax
  int v62; // r8d
  int v63; // edx
  bool v64; // di
  bool v65; // si
  __int64 v66; // rax
  int v67; // r8d
  int v68; // edx
  bool v69; // di
  bool v70; // si
  __int64 v71; // rax
  int v72; // r8d
  int v73; // edx
  bool v74; // bl
  bool v75; // di
  __int64 v76; // rax
  int v77; // r8d
  int v78; // edx

  if ( (a1 & 1) != 0 )
  {
    v59 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v60 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v59 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
      LOBYTE(v62) = v60;
      LOBYTE(v63) = v59;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v63,
        v62,
        *(_QWORD *)(UserSessionState + 19368),
        4,
        1,
        28,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"NEW");
    }
  }
  if ( (a1 & 2) != 0 )
  {
    v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
      LOBYTE(v7) = v5;
      LOBYTE(v8) = v4;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v8,
        v7,
        *(_QWORD *)(v6 + 19368),
        4,
        1,
        29,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"INRANGE");
    }
  }
  if ( (a1 & 4) != 0 )
  {
    v9 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(v11 + 19368),
        4,
        1,
        30,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"INCONTACT");
    }
  }
  if ( (a1 & 0x10) != 0 )
  {
    v29 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
      LOBYTE(v32) = v30;
      LOBYTE(v33) = v29;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v33,
        v32,
        *(_QWORD *)(v31 + 19368),
        4,
        1,
        31,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"FIRSTBUTTON");
    }
  }
  if ( (a1 & 0x20) != 0 )
  {
    v44 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v45 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v44 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v46 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
      LOBYTE(v47) = v45;
      LOBYTE(v48) = v44;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v48,
        v47,
        *(_QWORD *)(v46 + 19368),
        4,
        1,
        32,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"SECONDBUTTON");
    }
  }
  if ( (a1 & 0x40) != 0 )
  {
    v49 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v50 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v49 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v51 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
      LOBYTE(v52) = v50;
      LOBYTE(v53) = v49;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v53,
        v52,
        *(_QWORD *)(v51 + 19368),
        4,
        1,
        33,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"THIRDBUTTON");
    }
  }
  if ( (a1 & 0x2000) != 0 )
  {
    v14 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
      LOBYTE(v17) = v15;
      LOBYTE(v18) = v14;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v17,
        *(_QWORD *)(v16 + 19368),
        4,
        1,
        34,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"PRIMARY");
    }
  }
  if ( (a1 & 0x4000) != 0 )
  {
    v19 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
      LOBYTE(v22) = v20;
      LOBYTE(v23) = v19;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v23,
        v22,
        *(_QWORD *)(v21 + 19368),
        4,
        1,
        35,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"CONFIDENCE");
    }
  }
  if ( (a1 & 0x8000) != 0 )
  {
    v54 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v55 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v54 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v56 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
      LOBYTE(v57) = v55;
      LOBYTE(v58) = v54;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v58,
        v57,
        *(_QWORD *)(v56 + 19368),
        4,
        1,
        36,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"CANCELED");
    }
  }
  if ( (a1 & 0x10000) != 0 )
  {
    v39 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v41 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
      LOBYTE(v42) = v40;
      LOBYTE(v43) = v39;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v43,
        v42,
        *(_QWORD *)(v41 + 19368),
        4,
        1,
        37,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"DOWN");
    }
  }
  if ( (a1 & 0x20000) != 0 )
  {
    v24 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
      LOBYTE(v27) = v25;
      LOBYTE(v28) = v24;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v28,
        v27,
        *(_QWORD *)(v26 + 19368),
        4,
        1,
        38,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"UPDATE");
    }
  }
  if ( (a1 & 0x40000) != 0 )
  {
    v34 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v36 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
      LOBYTE(v37) = v35;
      LOBYTE(v38) = v34;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v38,
        v37,
        *(_QWORD *)(v36 + 19368),
        4,
        1,
        39,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"UP");
    }
  }
  if ( (a1 & 0x80000) != 0 )
  {
    v64 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v65 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v64 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v66 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
      LOBYTE(v67) = v65;
      LOBYTE(v68) = v64;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v68,
        v67,
        *(_QWORD *)(v66 + 19368),
        4,
        1,
        40,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"WHEEL");
    }
  }
  if ( (a1 & 0x100000) != 0 )
  {
    v69 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v70 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v69 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v71 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
      LOBYTE(v72) = v70;
      LOBYTE(v73) = v69;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v73,
        v72,
        *(_QWORD *)(v71 + 19368),
        4,
        1,
        41,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"HWHEEL");
    }
  }
  if ( (a1 & 0x200000) != 0 )
  {
    v74 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v75 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v74 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v76 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
      LOBYTE(v77) = v75;
      LOBYTE(v78) = v74;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v78,
        v77,
        *(_QWORD *)(v76 + 19368),
        4,
        1,
        42,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"CAPTURECHANGED");
    }
  }
}
