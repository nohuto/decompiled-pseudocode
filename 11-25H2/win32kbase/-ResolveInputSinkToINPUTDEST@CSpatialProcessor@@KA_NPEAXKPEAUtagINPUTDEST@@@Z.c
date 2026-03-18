/*
 * XREFs of ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14018E544
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x14018900C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x14018DE2C (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA-AVCInputDest@@AEBU_InputHitTestResul.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x1402215DC (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _HMPheFromObject @ 0x14003F320 (_HMPheFromObject.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006101C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x140064F20 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z.c)
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x140065D0C (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x140068B20 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?GetFromPointerType@@YA?AW4CompositionInputType@@K@Z @ 0x1400A004C (-GetFromPointerType@@YA-AW4CompositionInputType@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1400ED4D4 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_dq @ 0x14021DB3C (WPP_RECORDER_AND_TRACE_SF_dq.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

bool __fastcall CSpatialProcessor::ResolveInputSinkToINPUTDEST(void *a1, int a2, struct tagINPUTDEST *a3)
{
  struct tagINPUTDEST *v4; // r13
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 v12; // rdx
  int v13; // eax
  char v14; // si
  char v15; // bl
  bool v16; // r14
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  bool v20; // bl
  __int64 v21; // rdx
  bool v22; // r14
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  int v26; // r14d
  int *v27; // rax
  int *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rdx
  bool v31; // r13
  bool v32; // r14
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  bool v36; // r14
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  char v40; // bl
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  int v44; // edx
  int v45; // r8d
  int *v46; // r13
  void *v47; // rcx
  bool v48; // al
  int v49; // edx
  int v50; // r8d
  __int64 v51; // r9
  void *v52; // rcx
  bool v53; // al
  char v54; // bl
  bool v55; // r13
  __int64 v56; // rax
  int v57; // r8d
  int v58; // edx
  _DWORD *v59; // rdx
  __int64 v60; // rbx
  void *v61; // rcx
  char v62; // al
  __int64 v63; // rax
  int v64; // r8d
  int v65; // edx
  unsigned int v66; // ebx
  bool v67; // r14
  __int64 v68; // rax
  int v69; // r8d
  int v70; // edx
  __int128 v71; // xmm1
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  __int128 v76; // xmm0
  bool v77; // bl
  __int64 v78; // rax
  int v79; // r8d
  int v80; // edx
  bool v81; // bl
  __int64 UserSessionState; // rax
  int v83; // r8d
  int v84; // edx
  int v86; // [rsp+20h] [rbp-E0h]
  int v87; // [rsp+28h] [rbp-D8h]
  int v88; // [rsp+30h] [rbp-D0h]
  __int16 v89; // [rsp+30h] [rbp-D0h]
  int v90; // [rsp+38h] [rbp-C8h]
  char v91; // [rsp+40h] [rbp-C0h]
  bool v92; // [rsp+60h] [rbp-A0h]
  bool v93; // [rsp+60h] [rbp-A0h]
  char v94; // [rsp+60h] [rbp-A0h]
  bool v95; // [rsp+61h] [rbp-9Fh]
  bool v96; // [rsp+61h] [rbp-9Fh]
  int v97; // [rsp+64h] [rbp-9Ch]
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  __int64 v99; // [rsp+70h] [rbp-90h] BYREF
  struct tagINPUTDEST *v100; // [rsp+78h] [rbp-88h]
  _OWORD v101[7]; // [rsp+80h] [rbp-80h] BYREF
  void *v102; // [rsp+F0h] [rbp-10h]
  __int128 v103; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v104; // [rsp+108h] [rbp+8h]
  __int128 v105; // [rsp+118h] [rbp+18h]
  __int64 v106; // [rsp+128h] [rbp+28h]

  v100 = a3;
  v102 = a1;
  v4 = a3;
  memset(v101, 0, sizeof(v101));
  v6 = v101[1];
  *(_OWORD *)v4 = v101[0];
  v7 = v101[2];
  *((_OWORD *)v4 + 1) = v6;
  v8 = v101[3];
  *((_OWORD *)v4 + 2) = v7;
  v9 = v101[4];
  *((_OWORD *)v4 + 3) = v8;
  v10 = v101[5];
  *((_OWORD *)v4 + 4) = v9;
  v11 = v101[6];
  *((_OWORD *)v4 + 5) = v10;
  *((_OWORD *)v4 + 6) = v11;
  v13 = GetFromPointerType(a2, v12);
  v97 = v13;
  if ( v13 )
  {
    v14 = 1;
    Object = 0LL;
    if ( (int)CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object) < 0 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v14 = 0;
      }
      v81 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        LOBYTE(v83) = v81;
        LOBYTE(v84) = v14;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v84,
          v83,
          *(_QWORD *)(UserSessionState + 69144),
          2,
          2,
          36,
          (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
          (char)a1);
      }
      goto LABEL_112;
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v15 = 0;
    }
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
      LOBYTE(v18) = v16;
      LOBYTE(v19) = v15;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        *(_QWORD *)(v17 + 69144),
        4,
        2,
        25,
        (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
        (char)Object);
    }
    memset(v101, 0, sizeof(v101));
    v20 = 0;
    v103 = 0LL;
    v106 = 0LL;
    v104 = 0LL;
    v99 = 0LL;
    v105 = 0LL;
    CompositionInputObject::QueryInputQueueForInputType(Object, v97, (__int64)&v103);
    if ( (_DWORD)v103 == 2 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0 )
        v20 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v37 = W32GetUserSessionState(WPP_GLOBAL_Control, v21);
        LOBYTE(v38) = v36;
        LOBYTE(v39) = v20;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v39,
          v38,
          *(_QWORD *)(v37 + 69144),
          4,
          2,
          27,
          (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids);
      }
      if ( (int)CompositionInputObject::GetWindowForInputType(Object, v97, &v99) < 0 )
        goto LABEL_18;
      v26 = LODWORD(v101[0]) | 4;
    }
    else
    {
      if ( (_DWORD)v103 != 3 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0 )
          v20 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v23 = W32GetUserSessionState(WPP_GLOBAL_Control, v21);
          LOBYTE(v24) = v22;
          LOBYTE(v25) = v20;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v25,
            v24,
            *(_QWORD *)(v23 + 69144),
            4,
            2,
            28,
            (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
            v103);
        }
LABEL_18:
        v26 = v101[0];
        goto LABEL_19;
      }
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0 )
        v20 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v33 = W32GetUserSessionState(WPP_GLOBAL_Control, v21);
        LOBYTE(v34) = v32;
        LOBYTE(v35) = v20;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v35,
          v34,
          *(_QWORD *)(v33 + 69144),
          4,
          2,
          26,
          (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids);
      }
      if ( (int)CompositionInputObject::GetWindowForInputType(Object, v97, &v99) < 0 )
        goto LABEL_18;
      *(_OWORD *)((char *)&v101[2] + 8) = v104;
      v26 = LODWORD(v101[0]) | 6;
      *((_QWORD *)&v101[1] + 1) = *((_QWORD *)&v103 + 1);
      *((_QWORD *)&v101[4] + 1) = v106;
      *(_OWORD *)((char *)&v101[3] + 8) = v105;
    }
    LODWORD(v101[0]) = v26;
LABEL_19:
    if ( !v26 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v14 = 0;
      }
      v77 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v78 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        LOBYTE(v79) = v77;
        LOBYTE(v80) = v14;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v80,
          v79,
          *(_QWORD *)(v78 + 69144),
          4,
          2,
          35,
          (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids);
      }
      if ( *(_DWORD *)v4 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 511LL);
      goto LABEL_104;
    }
    v27 = (int *)HMValidateHandleNoSecure(v99, 255);
    v28 = v27;
    if ( !v27 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v54 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v54 = 0;
      }
      v55 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v54 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v56 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        LOBYTE(v57) = v55;
        LOBYTE(v58) = v54;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v58,
          v57,
          *(_QWORD *)(v56 + 69144),
          2,
          2,
          32,
          (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
          (char)Object);
      }
      goto LABEL_72;
    }
    v29 = HMPheFromObject(v27, 0LL);
    v30 = (unsigned int)*(unsigned __int8 *)(v29 + 24) - 1;
    if ( *(_BYTE *)(v29 + 24) == 1 )
    {
      HIDWORD(v101[5]) = 2;
      v46 = v28;
      *(_QWORD *)&v101[5] = v28;
      v52 = WPP_GLOBAL_Control;
      v53 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v93 = v53;
      v95 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v53 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v91 = (char)v28;
        LOBYTE(v52) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        v51 = *(_QWORD *)(W32GetUserSessionState(v52, v30) + 69144);
        v89 = 29;
        goto LABEL_64;
      }
    }
    else
    {
      if ( *(_BYTE *)(v29 + 24) != 23 )
      {
        v31 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
        v92 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v40 = *(_BYTE *)(HMPheFromObject(v28, v30) + 24);
          v43 = W32GetUserSessionState(v42, v41);
          LOBYTE(v44) = v31;
          LOBYTE(v45) = v92;
          WPP_RECORDER_AND_TRACE_SF_dq(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v44,
            v45,
            *(_QWORD *)(v43 + 69144),
            v86,
            v87,
            v88,
            v90,
            v40,
            (char)Object);
        }
LABEL_72:
        v46 = *(int **)&v101[5];
        goto LABEL_73;
      }
      HIDWORD(v101[5]) = 1;
      v46 = v28;
      *(_QWORD *)&v101[5] = v28;
      v47 = WPP_GLOBAL_Control;
      v48 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v93 = v48;
      v95 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v48 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v91 = (char)v28;
        LOBYTE(v47) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        v51 = *(_QWORD *)(W32GetUserSessionState(v47, v30) + 69144);
        v89 = 30;
LABEL_64:
        LOBYTE(v50) = v95;
        LOBYTE(v49) = v93;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v49,
          v50,
          v51,
          4,
          2,
          v89,
          (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
          v91);
      }
    }
LABEL_73:
    if ( v46 )
    {
      v59 = Object;
      v60 = *((_QWORD *)Object + 2);
      if ( v60 )
      {
        v61 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || (v62 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v62 = 0;
        }
        v94 = v62;
        v96 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v62 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v61) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          v63 = W32GetUserSessionState(v61, Object);
          LOBYTE(v64) = v96;
          LOBYTE(v65) = v94;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v65,
            v64,
            *(_QWORD *)(v63 + 69144),
            4,
            2,
            33,
            (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids);
          v59 = Object;
        }
        *((_QWORD *)&v101[0] + 1) = v60;
        LODWORD(v101[0]) = v26 | 1;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v46 + 2) + 464LL) + 808LL) & 0x800000) != 0 )
        v66 = v101[1] & 0xFFFFFFFE;
      else
        v66 = v101[1] & 0xFFFFFFFE | v59[46] & 1;
      *(_QWORD *)&v101[6] = (unsigned int)v59[44];
      LODWORD(v101[1]) = v66;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v14 = 0;
      }
      v67 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v68 = W32GetUserSessionState(WPP_GLOBAL_Control, v59);
        LOBYTE(v69) = v67;
        LOBYTE(v70) = v14;
        WPP_RECORDER_AND_TRACE_SF_qqd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v70,
          v69,
          *(_QWORD *)(v68 + 69144),
          4,
          2,
          34,
          (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
          (char)v46,
          v101[6],
          -(v66 & 1));
      }
      v4 = v100;
      v71 = v101[1];
      *(_OWORD *)v100 = v101[0];
      v72 = v101[2];
      *((_OWORD *)v4 + 1) = v71;
      v73 = v101[3];
      *((_OWORD *)v4 + 2) = v72;
      v74 = v101[4];
      *((_OWORD *)v4 + 3) = v73;
      v75 = v101[5];
      *((_OWORD *)v4 + 4) = v74;
      v76 = v101[6];
      *((_OWORD *)v4 + 5) = v75;
      *((_OWORD *)v4 + 6) = v76;
    }
    else
    {
      v4 = v100;
    }
LABEL_104:
    ObfDereferenceObject(Object);
LABEL_112:
    LOBYTE(v13) = *(_DWORD *)v4 != 0;
  }
  return v13;
}
