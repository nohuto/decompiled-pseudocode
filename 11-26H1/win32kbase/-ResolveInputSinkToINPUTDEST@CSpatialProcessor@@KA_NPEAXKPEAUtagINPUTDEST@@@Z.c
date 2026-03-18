/*
 * XREFs of ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14006F90C
 * Callers:
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x14007122C (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA-AVCInputDest@@AEBU_InputHitTestResul.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x140108F24 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x140224010 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 * Callees:
 *     _HMPheFromObject @ 0x1400488F0 (_HMPheFromObject.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x14006E614 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x14006EC50 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z.c)
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x14006EFEC (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006F7DC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?GetFromPointerType@@YA?AW4CompositionInputType@@K@Z @ 0x140070368 (-GetFromPointerType@@YA-AW4CompositionInputType@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_dq @ 0x1402212B8 (WPP_RECORDER_AND_TRACE_SF_dq.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

bool __fastcall CSpatialProcessor::ResolveInputSinkToINPUTDEST(HANDLE Handle, unsigned int a2, struct tagINPUTDEST *a3)
{
  struct tagINPUTDEST *v4; // r12
  HANDLE v5; // rsi
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  char v12; // di
  _QWORD *v13; // r13
  NTSTATUS v14; // ebx
  int v15; // r8d
  _QWORD **v16; // rsi
  bool v17; // bl
  char v19; // bl
  bool v20; // si
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  int v24; // r8d
  __int64 v25; // rdx
  bool v26; // bl
  bool v27; // si
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  int v31; // esi
  _DWORD *v32; // rax
  int v33; // edx
  int v34; // r8d
  _DWORD *v35; // rbx
  int v36; // edx
  int v37; // r8d
  int v38; // r8d
  _DWORD *v39; // r13
  bool v40; // r12
  int v41; // edx
  int v42; // r8d
  __int64 v43; // r9
  _QWORD *v44; // rdx
  __int64 v45; // rbx
  bool v46; // r12
  __int64 v47; // rax
  int v48; // edx
  int v49; // r8d
  unsigned int v50; // ebx
  __int64 v51; // r12
  char v52; // si
  __int64 v53; // rax
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int64 UserSessionState; // rax
  int v61; // r8d
  int v62; // edx
  bool v63; // bl
  bool v64; // si
  __int64 v65; // rax
  int v66; // r8d
  int v67; // edx
  bool v68; // bl
  bool v69; // si
  __int64 v70; // rax
  int v71; // r8d
  int v72; // edx
  bool v73; // r12
  bool v74; // r13
  char v75; // bl
  int v76; // edx
  int v77; // ecx
  int v78; // r8d
  __int64 v79; // rax
  int v80; // r8d
  int v81; // edx
  bool v82; // bl
  bool v83; // r12
  __int64 v84; // rax
  int v85; // r8d
  int v86; // edx
  bool v87; // bl
  __int64 v88; // rax
  int v89; // r8d
  int v90; // edx
  int Object; // [rsp+20h] [rbp-E0h]
  int HandleInformation; // [rsp+28h] [rbp-D8h]
  int v93; // [rsp+30h] [rbp-D0h]
  __int16 v94; // [rsp+30h] [rbp-D0h]
  int v95; // [rsp+38h] [rbp-C8h]
  char v96; // [rsp+40h] [rbp-C0h]
  bool v97; // [rsp+60h] [rbp-A0h]
  bool v98; // [rsp+60h] [rbp-A0h]
  int v99; // [rsp+64h] [rbp-9Ch]
  _QWORD *v100; // [rsp+68h] [rbp-98h]
  __int64 v101; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v102; // [rsp+78h] [rbp-88h]
  PVOID v103; // [rsp+80h] [rbp-80h] BYREF
  struct tagINPUTDEST *v104; // [rsp+88h] [rbp-78h]
  _OWORD v105[7]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v106; // [rsp+100h] [rbp+0h] BYREF
  __int128 v107; // [rsp+110h] [rbp+10h]
  __int128 v108; // [rsp+120h] [rbp+20h]
  __int64 v109; // [rsp+130h] [rbp+30h]

  v104 = a3;
  v102 = Handle;
  v4 = a3;
  v5 = Handle;
  memset(v105, 0, sizeof(v105));
  v6 = v105[1];
  *(_OWORD *)v4 = v105[0];
  v7 = v105[2];
  *((_OWORD *)v4 + 1) = v6;
  v8 = v105[3];
  *((_OWORD *)v4 + 2) = v7;
  v9 = v105[4];
  *((_OWORD *)v4 + 3) = v8;
  v10 = v105[5];
  *((_OWORD *)v4 + 4) = v9;
  v11 = v105[6];
  *((_OWORD *)v4 + 5) = v10;
  *((_OWORD *)v4 + 6) = v11;
  v99 = GetFromPointerType(a2);
  if ( v99 )
  {
    v12 = 1;
    v103 = 0LL;
    v13 = 0LL;
    v14 = ObReferenceObjectByHandle(v5, 1u, ExCompositionObjectType, 1, &v103, 0LL);
    if ( v14 < 0 )
      goto LABEL_8;
    v16 = (_QWORD **)v103;
    if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))v103 + 1))(*((_QWORD *)v103 + 1)) )
    {
      v13 = v16;
      if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v16[1] + 16LL))(v16[1]) != 2 )
      {
        v14 = -1073741788;
        v13 = 0LL;
      }
      if ( v14 >= 0 )
        goto LABEL_7;
    }
    else
    {
      v14 = -1073741816;
    }
    ObfDereferenceObject(v16);
LABEL_7:
    LOBYTE(v5) = (_BYTE)v102;
LABEL_8:
    if ( v14 < 0 )
      v13 = 0LL;
    v100 = v13;
    if ( v14 < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v12 = 0;
      }
      v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 2, v15);
        LOBYTE(v61) = v17;
        LOBYTE(v62) = v12;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v62,
          v61,
          *(_QWORD *)(UserSessionState + 69136),
          2,
          2,
          36,
          (__int64)&WPP_03e5ed7ceaa633972c5818eb5aba76a5_Traceguids,
          (char)v5);
      }
      return *(_DWORD *)v4 != 0;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v19 = 0;
    }
    v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 2, v15);
      LOBYTE(v22) = v20;
      LOBYTE(v23) = v19;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v23,
        v22,
        *(_QWORD *)(v21 + 69136),
        4,
        2,
        25,
        (__int64)&WPP_03e5ed7ceaa633972c5818eb5aba76a5_Traceguids,
        (char)v13);
    }
    memset(v105, 0, sizeof(v105));
    v101 = 0LL;
    v106 = 0LL;
    v109 = 0LL;
    v107 = 0LL;
    v108 = 0LL;
    CompositionInputObject::QueryInputQueueForInputType(v13, v99, (__int64)&v106);
    v25 = 2LL;
    if ( (_DWORD)v106 == 2 )
    {
      v26 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v28 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 2, v24);
        LOBYTE(v29) = v27;
        LOBYTE(v30) = v26;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v30,
          v29,
          *(_QWORD *)(v28 + 69136),
          4,
          2,
          27,
          (__int64)&WPP_03e5ed7ceaa633972c5818eb5aba76a5_Traceguids);
      }
      if ( (int)CompositionInputObject::GetWindowForInputType(v13, v99, &v101) >= 0 )
      {
        v31 = LODWORD(v105[0]) | 4;
LABEL_31:
        LODWORD(v105[0]) = v31;
        goto LABEL_32;
      }
    }
    else if ( (_DWORD)v106 == 3 )
    {
      v68 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v69 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v68 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v70 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 2, v24);
        LOBYTE(v71) = v69;
        LOBYTE(v72) = v68;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v72,
          v71,
          *(_QWORD *)(v70 + 69136),
          4,
          2,
          26,
          (__int64)&WPP_03e5ed7ceaa633972c5818eb5aba76a5_Traceguids);
      }
      if ( (int)CompositionInputObject::GetWindowForInputType(v13, v99, &v101) >= 0 )
      {
        *(_OWORD *)((char *)&v105[2] + 8) = v107;
        v31 = LODWORD(v105[0]) | 6;
        *((_QWORD *)&v105[1] + 1) = *((_QWORD *)&v106 + 1);
        *((_QWORD *)&v105[4] + 1) = v109;
        *(_OWORD *)((char *)&v105[3] + 8) = v108;
        goto LABEL_31;
      }
    }
    else
    {
      v63 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v64 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v63 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v65 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 2, v24);
        LOBYTE(v66) = v64;
        LOBYTE(v67) = v63;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v67,
          v66,
          *(_QWORD *)(v65 + 69136),
          4,
          2,
          28,
          (__int64)&WPP_03e5ed7ceaa633972c5818eb5aba76a5_Traceguids,
          v106);
      }
    }
    v31 = v105[0];
LABEL_32:
    if ( !v31 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v12 = 0;
      }
      v87 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v88 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v25, v24);
        LOBYTE(v89) = v87;
        LOBYTE(v90) = v12;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v90,
          v89,
          *(_QWORD *)(v88 + 69136),
          4,
          2,
          35,
          (__int64)&WPP_03e5ed7ceaa633972c5818eb5aba76a5_Traceguids);
      }
      if ( *(_DWORD *)v4 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 511LL);
      goto LABEL_62;
    }
    LOBYTE(v25) = -1;
    v32 = (_DWORD *)HMValidateHandleNoSecure(v101, v25);
    v35 = v32;
    if ( v32 )
    {
      v36 = *(unsigned __int8 *)(HMPheFromObject(v32, v33, v34) + 24) - 1;
      if ( !v36 )
      {
        v38 = 2;
        *(_QWORD *)&v105[5] = v35;
        HIDWORD(v105[5]) = 2;
        v39 = v35;
        v40 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v97 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v40 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_43;
        v96 = (char)v35;
        v43 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, 2) + 69136);
        v94 = 29;
LABEL_41:
        LOBYTE(v41) = v40;
        LOBYTE(v42) = v97;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v41,
          v42,
          v43,
          4,
          2,
          v94,
          (__int64)&WPP_03e5ed7ceaa633972c5818eb5aba76a5_Traceguids,
          v96);
LABEL_42:
        v38 = 2;
LABEL_43:
        if ( v39 )
        {
          v44 = v100;
          v45 = v100[2];
          if ( v45 )
          {
            v46 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
            v98 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v46 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v47 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v100, 2);
              LOBYTE(v48) = v46;
              LOBYTE(v49) = v98;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v48,
                v49,
                *(_QWORD *)(v47 + 69136),
                4,
                2,
                33,
                (__int64)&WPP_03e5ed7ceaa633972c5818eb5aba76a5_Traceguids);
              v44 = v100;
            }
            *((_QWORD *)&v105[0] + 1) = v45;
            LODWORD(v105[0]) = v31 | 1;
          }
          if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v39 + 2) + 456LL) + 808LL) & 0x800000) != 0 )
            v50 = v105[1] & 0xFFFFFFFE;
          else
            v50 = v105[1] & 0xFFFFFFFE | v44[23] & 1;
          v51 = *((unsigned int *)v44 + 44);
          *(_QWORD *)&v105[6] = v51;
          LODWORD(v105[1]) = v50;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
          {
            v12 = 0;
          }
          v52 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v53 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v44, v38);
            WPP_RECORDER_AND_TRACE_SF_qqd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v12,
              v52,
              *(_QWORD *)(v53 + 69136),
              4u,
              2u,
              0x22u,
              (__int64)&WPP_03e5ed7ceaa633972c5818eb5aba76a5_Traceguids,
              v39,
              v51,
              -(v50 & 1));
          }
          v4 = v104;
          v54 = v105[1];
          *(_OWORD *)v104 = v105[0];
          v55 = v105[2];
          *((_OWORD *)v4 + 1) = v54;
          v56 = v105[3];
          *((_OWORD *)v4 + 2) = v55;
          v57 = v105[4];
          *((_OWORD *)v4 + 3) = v56;
          v58 = v105[5];
          *((_OWORD *)v4 + 4) = v57;
          v59 = v105[6];
          *((_OWORD *)v4 + 5) = v58;
          *((_OWORD *)v4 + 6) = v59;
        }
        else
        {
          v4 = v104;
        }
        v13 = v100;
LABEL_62:
        ObfDereferenceObject(v13);
        return *(_DWORD *)v4 != 0;
      }
      if ( v36 == 22 )
      {
        HIDWORD(v105[5]) = 1;
        v39 = v35;
        *(_QWORD *)&v105[5] = v35;
        v40 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v97 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v40 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_42;
        v96 = (char)v35;
        v43 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 22, v37) + 69136);
        v94 = 30;
        goto LABEL_41;
      }
      v73 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v74 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v73 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v75 = *(_BYTE *)(HMPheFromObject(v35, v36, v37) + 24);
        v79 = W32GetUserSessionState(v77, v76, v78);
        LOBYTE(v80) = v74;
        LOBYTE(v81) = v73;
        WPP_RECORDER_AND_TRACE_SF_dq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v81,
          v80,
          *(_QWORD *)(v79 + 69136),
          Object,
          HandleInformation,
          v93,
          v95,
          v75,
          (char)v100);
      }
    }
    else
    {
      v82 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v83 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v82 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v84 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v33, v34);
        LOBYTE(v85) = v83;
        LOBYTE(v86) = v82;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v86,
          v85,
          *(_QWORD *)(v84 + 69136),
          2,
          2,
          32,
          (__int64)&WPP_03e5ed7ceaa633972c5818eb5aba76a5_Traceguids,
          (char)v13);
      }
    }
    v39 = *(_DWORD **)&v105[5];
    goto LABEL_42;
  }
  return 0;
}
