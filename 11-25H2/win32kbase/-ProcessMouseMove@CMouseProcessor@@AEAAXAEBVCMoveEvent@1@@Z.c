/*
 * XREFs of ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x140036A78
 * Callers:
 *     ?ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x140036980 (-ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ProcessMove@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@PEAUHWND__@@@Z @ 0x1400375C8 (-ProcessMove@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@PEAUHWND__@@@Z.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x140037658 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     HMAssignmentUnlock @ 0x1400379C0 (HMAssignmentUnlock.c)
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x140037B68 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1400380D4 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x14003864C (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x140038784 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x140041A20 (-LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA-AUtagPOINT@@K@Z.c)
 *     PhysicalToLogicalDPIPoint @ 0x140041FA0 (PhysicalToLogicalDPIPoint.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1EndStreamToken@CMouseProcessor@@QEAA@XZ @ 0x1400B9350 (--1EndStreamToken@CMouseProcessor@@QEAA@XZ.c)
 *     ApiSetEditionPostRawMouseInputMessage @ 0x1400B9818 (ApiSetEditionPostRawMouseInputMessage.c)
 *     ?SendInputStreamEndedMessage@CMouseProcessor@@AEBAXAEBVCMouseEvent@1@@Z @ 0x1400B9E3C (-SendInputStreamEndedMessage@CMouseProcessor@@AEBAXAEBVCMouseEvent@1@@Z.c)
 *     ?DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1400D76EC (-DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1400E67D0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1402225F8 (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall CMouseProcessor::ProcessMouseMove(CMouseProcessor *this, const struct CMouseProcessor::CMoveEvent *a2)
{
  char v4; // di
  char v5; // bl
  bool v6; // r15
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rbx
  bool v11; // r13
  __int64 v12; // rcx
  int v13; // eax
  int v14; // r15d
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  struct tagPOINT *v21; // rcx
  __int64 v22; // rdx
  int v23; // r12d
  HWND v24; // r8
  __int64 v25; // rdx
  int v26; // r15d
  struct tagPOINT v27; // rax
  LONG x; // r13d
  LONG y; // r12d
  __int64 v30; // rcx
  __int64 v31; // rcx
  bool v32; // zf
  char v33; // bl
  bool v34; // r15
  __int64 PtiFromInputDest; // rax
  __int64 v36; // rcx
  int v37; // ebx
  __int64 v38; // rax
  int v39; // ecx
  bool v40; // bl
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  __int64 v44; // rdx
  bool v45; // bl
  bool v46; // r15
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  __int64 v50; // rbx
  int v51; // ecx
  bool v52; // bl
  __int64 v53; // rax
  int v54; // r8d
  int v55; // edx
  char v56; // bl
  bool v57; // r15
  __int64 v58; // rax
  int v59; // r8d
  int v60; // edx
  __int64 v61; // rax
  int v62; // r8d
  int v63; // edx
  struct CMouseProcessor::CMouseEvent *v64; // rdx
  int v65; // eax
  __int64 v66; // rdx
  bool v67; // bl
  __int64 v68; // rax
  int v69; // edx
  int v70; // r8d
  __int64 v71; // rax
  __int64 v72; // xmm0_8
  __int64 v73; // rdx
  bool v74; // bl
  __int64 v75; // rax
  int v76; // r8d
  int v77; // edx
  __int16 v78; // [rsp+30h] [rbp-D0h]
  struct tagPOINT v79; // [rsp+40h] [rbp-C0h] BYREF
  int v80; // [rsp+48h] [rbp-B8h]
  CMouseProcessor *v81; // [rsp+50h] [rbp-B0h] BYREF
  struct CMouseProcessor::CMouseEvent *v82; // [rsp+58h] [rbp-A8h]
  char v83; // [rsp+60h] [rbp-A0h]
  int v84; // [rsp+64h] [rbp-9Ch]
  __int64 v85; // [rsp+68h] [rbp-98h] BYREF
  __int64 v86; // [rsp+70h] [rbp-90h] BYREF
  struct tagPOINT v87; // [rsp+78h] [rbp-88h] BYREF
  LONG v88; // [rsp+80h] [rbp-80h]
  LONG v89; // [rsp+84h] [rbp-7Ch]
  int v90; // [rsp+88h] [rbp-78h]
  int v91; // [rsp+8Ch] [rbp-74h]
  __int64 v92; // [rsp+90h] [rbp-70h] BYREF
  __int64 v93; // [rsp+A0h] [rbp-60h] BYREF
  int v94; // [rsp+A8h] [rbp-58h]
  __int64 v95; // [rsp+B0h] [rbp-50h] BYREF
  int v96; // [rsp+B8h] [rbp-48h]
  _QWORD v97[16]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
    || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v5 = 0;
  }
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      6,
      49,
      (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
  }
  v10 = *((_QWORD *)a2 + 1);
  v11 = 0;
  v81 = this;
  v12 = 2LL;
  v82 = a2;
  v83 = 0;
  v13 = *(_DWORD *)(v10 + 120);
  v84 = 0;
  if ( (v13 & 0x800) != 0 )
  {
LABEL_46:
    *((_QWORD *)this + 460) = 0LL;
    goto LABEL_22;
  }
  if ( (v13 & 0x1000) != 0 )
  {
    v14 = 2;
LABEL_14:
    v15 = *(_QWORD *)(v10 + 52);
    v16 = *(_QWORD *)(W32GetUserSessionState(v12, a2) + 19872);
    *(_QWORD *)(v16 + 4960) = v15;
    v17 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 60LL);
    *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v16, v18) + 19872) + 4952LL) = v17;
    goto LABEL_15;
  }
  v14 = 0;
  if ( *((_DWORD *)this + 916) == *(_DWORD *)(v10 + 52) && *((_DWORD *)this + 917) == *(_DWORD *)(v10 + 56) )
  {
    if ( *((_DWORD *)this + 918) != *(_DWORD *)(v10 + 60) || *((_DWORD *)this + 919) != *(_DWORD *)(v10 + 64) )
      v14 = 1;
  }
  else
  {
    v14 = 2;
  }
  v12 = (unsigned int)(v14 - 1);
  if ( v14 == 1 )
  {
    v50 = *(_QWORD *)(v10 + 60);
    *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v12, a2) + 19872) + 4952LL) = v50;
    v11 = (*(_BYTE *)(*((_QWORD *)a2 + 1) + 122LL) & 1) == 0;
    goto LABEL_15;
  }
  if ( v14 == 2 )
    goto LABEL_14;
LABEL_15:
  if ( !*((_BYTE *)this + 3757) && !*((_BYTE *)this + 3756) )
    *((_BYTE *)this + 3756) = (unsigned int)ApiSetEditionPostRawMouseInputMessage(
                                              0,
                                              *((_QWORD *)this + 465),
                                              *((_DWORD *)this + 928),
                                              (int)this + 3728,
                                              (__int64)this + 3688) != 0;
  v19 = *((_QWORD *)a2 + 1);
  if ( (*(_DWORD *)(v19 + 120) & 0x4000) != 0 )
    CMouseProcessor::InformUMObservers(
      this,
      a2,
      (const struct tagPOINT *)(v19 + 52),
      (const struct tagPOINT *)(v19 + 68));
  v20 = *((_QWORD *)a2 + 1);
  if ( !v14 )
  {
    v51 = *(_DWORD *)(v20 + 120);
    if ( (v51 & 0x10000) == 0 )
    {
      if ( (v51 & 0x2000) == 0 )
        InputTraceLogging::Mouse::DropMove(*(_QWORD *)(v20 + 96), 11LL);
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v4 = 0;
      }
      v52 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v53 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
        LOBYTE(v54) = v52;
        LOBYTE(v55) = v4;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v55,
          v54,
          *(_QWORD *)(v53 + 69144),
          4,
          6,
          51,
          (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
      }
      goto LABEL_84;
    }
    v12 = (__int64)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v33 = 0;
    }
    v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v61 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v62) = v34;
      LOBYTE(v63) = v33;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v63,
        v62,
        *(_QWORD *)(v61 + 69144),
        4,
        6,
        50,
        (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
    }
    goto LABEL_46;
  }
  *((_QWORD *)this + 460) = *(unsigned int *)(v20 + 40);
  v12 = *((_QWORD *)a2 + 1);
  *((_QWORD *)this + 458) = *(_QWORD *)(v12 + 52);
  *((_QWORD *)this + 459) = *(_QWORD *)(v12 + 60);
LABEL_22:
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 1) + 120LL) & 0x800) == 0
    && (unsigned __int8)anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 1LL) )
  {
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(0LL, 1LL);
    if ( PtiFromInputDest )
    {
      v37 = *(_DWORD *)(PtiFromInputDest + 400);
      v85 = 0LL;
      if ( v37 < 0 )
        v37 = *(_DWORD *)(*(_QWORD *)(PtiFromInputDest + 464) + 268LL);
      v38 = W32GetUserSessionState(v36, a2);
      PhysicalToLogicalDPIPoint(&v85, *(_QWORD *)(v38 + 19872) + 4960LL, (unsigned int)v37, 0LL);
      v39 = HIDWORD(v85);
      *((_DWORD *)this + 11) = v85;
      *((_DWORD *)this + 12) = v39;
      *((_DWORD *)this + 13) = v37;
    }
    if ( (*(_DWORD *)(*((_QWORD *)a2 + 1) + 120LL) & 0x10000) == 0 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v4 = 0;
      }
      v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v41 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
        LOBYTE(v42) = v40;
        LOBYTE(v43) = v4;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v43,
          v42,
          *(_QWORD *)(v41 + 69144),
          3,
          6,
          53,
          (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
      }
      InputTraceLogging::Mouse::DropMove(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), 12LL);
LABEL_84:
      CMouseProcessor::EndStreamToken::~EndStreamToken((CMouseProcessor::EndStreamToken *)&v81);
      return;
    }
    v12 = (__int64)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || (v56 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v56 = 0;
    }
    v57 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v56 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v58 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v59) = v57;
      LOBYTE(v60) = v56;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v60,
        v59,
        *(_QWORD *)(v58 + 69144),
        4,
        6,
        52,
        (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
    }
  }
  v21 = *(struct tagPOINT **)(W32GetUserSessionState(v12, a2) + 19872);
  v79 = v21[620];
  v92 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v21, v22) + 19872) + 4952LL);
  CMouseProcessor::MouseHitTest(
    this,
    v97,
    &v79,
    &v92,
    a2,
    _InterlockedCompareExchange((volatile signed __int32 *)this + 974, 1, 1) != 0,
    0LL);
  v23 = HIDWORD(v97[0]);
  v24 = 0LL;
  v83 = 1;
  v80 = HIDWORD(v97[0]);
  v84 = HIDWORD(v97[0]);
  if ( (v97[0] & 4) != 0 )
  {
    if ( HIDWORD(v97[11]) == 1 || HIDWORD(v97[11]) == 2 )
    {
      v24 = (HWND)v97[10];
      if ( v97[10] )
        v24 = *(HWND *)v97[10];
    }
  }
  else if ( (v97[0] & 2) != 0 )
  {
    v24 = (HWND)v97[3];
  }
  InputTraceLogging::Mouse::ProcessMove(
    *(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL),
    (const struct tagPOINT *)(*((_QWORD *)a2 + 1) + 52LL),
    v24);
  if ( !LODWORD(v97[0]) )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v4 = 0;
    }
    v74 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v75 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
      LOBYTE(v76) = v74;
      LOBYTE(v77) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v77,
        v76,
        *(_QWORD *)(v75 + 69144),
        4,
        6,
        54,
        (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
    }
    InputTraceLogging::Mouse::DropMove(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), 13LL);
    CInputDest::~CInputDest((CInputDest *)v97);
    goto LABEL_84;
  }
  v26 = 18;
  if ( !v11 )
  {
    v27 = v79;
    goto LABEL_29;
  }
  CMouseProcessor::LogicalCursorPosFromDpiAwarenessContext(this, (unsigned int)&v86);
  v27 = v79;
  if ( v86 != v79 )
  {
LABEL_29:
    x = v27.x;
    y = v79.y;
    if ( HIDWORD(v97[11]) == 2 )
      v26 = *(_DWORD *)(*(_QWORD *)(v97[10] + 40LL) + 288LL);
    *((_DWORD *)this + 11) = v27.x;
    *((_DWORD *)this + 12) = y;
    *((_DWORD *)this + 13) = v26;
    if ( *((_QWORD *)a2 + 1) != -112LL && ((*(_DWORD *)(*((_QWORD *)a2 + 1) + 112LL) - 4) & 0xFFFFFFFB) == 0 )
    {
      v71 = *((_QWORD *)PtiCurrent() + 58);
      v72 = *(_QWORD *)(v71 + 864);
      LODWORD(v71) = *(_DWORD *)(v71 + 872);
      v93 = v72;
      v94 = v71;
      if ( !(unsigned __int8)anonymous_namespace_::ValidateUIPI((UIPrivilegeIsolation *)&v93) )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v4 = 0;
        }
        v67 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_125;
        v68 = W32GetUserSessionState(WPP_GLOBAL_Control, v73);
        v78 = 56;
        goto LABEL_124;
      }
      v27 = v79;
    }
    v30 = *((_QWORD *)a2 + 1);
    if ( *(_DWORD *)(v30 + 156) || !*(_BYTE *)(v30 + 160) )
      goto LABEL_35;
    v65 = *(_DWORD *)(v30 + 152);
    v95 = *(_QWORD *)(v30 + 144);
    v96 = v65;
    if ( (unsigned __int8)anonymous_namespace_::ValidateUIPI((UIPrivilegeIsolation *)&v95) )
    {
      v27 = v79;
LABEL_35:
      v91 = 0;
      v87 = v27;
      v88 = x;
      v89 = y;
      v90 = v26;
      if ( (unsigned int)CMouseProcessor::ForwardInputToISM(this, v97, a2, &v87, &v79, 0, 512, 0LL) == 1 )
        CMouseProcessor::DeliverMouseMoveToInputDest(this, a2, (const struct CInputDest *)v97, &v87, 0LL);
      if ( HIDWORD(v97[11]) )
      {
        v31 = v97[10];
        v97[10] = 0LL;
        if ( v31 )
          HMUnlockObject();
      }
      memset(v97, 0, 0x78uLL);
      v32 = (v80 & 0xFFFFFFFB) == 0;
      goto LABEL_41;
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v4 = 0;
    }
    v67 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_125:
      InputTraceLogging::Mouse::DropMove(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), 10LL);
      if ( HIDWORD(v97[11]) )
        HMAssignmentUnlock(&v97[10]);
      memset(v97, 0, 0x78uLL);
      goto LABEL_84;
    }
    v68 = W32GetUserSessionState(WPP_GLOBAL_Control, v66);
    v78 = 57;
LABEL_124:
    LOBYTE(v70) = v67;
    LOBYTE(v69) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v69,
      v70,
      *(_QWORD *)(v68 + 69144),
      3,
      6,
      v78,
      (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
    goto LABEL_125;
  }
  v45 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v45 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v47 = W32GetUserSessionState(WPP_GLOBAL_Control, v44);
    LOBYTE(v48) = v46;
    LOBYTE(v49) = v45;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v49,
      v48,
      *(_QWORD *)(v47 + 69144),
      4,
      6,
      55,
      (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
  }
  InputTraceLogging::Mouse::DropMove(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), 11LL);
  if ( HIDWORD(v97[11]) )
    HMAssignmentUnlock(&v97[10]);
  memset(v97, 0, 0x78uLL);
  v32 = (v23 & 0xFFFFFFFB) == 0;
LABEL_41:
  if ( v32 )
    return;
  v64 = v82;
  if ( *((_DWORD *)v82 + 4) == 3 )
  {
LABEL_107:
    CMouseProcessor::SendInputStreamEndedMessage(v81, v64);
    return;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 974, 1, 1) )
  {
    v64 = v82;
    goto LABEL_107;
  }
}
