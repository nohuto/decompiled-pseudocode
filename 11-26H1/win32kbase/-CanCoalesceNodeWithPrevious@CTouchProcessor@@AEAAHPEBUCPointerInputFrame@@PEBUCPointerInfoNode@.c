/*
 * XREFs of ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1400CCC34
 * Callers:
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x14006BF24 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x14006DC54 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x14006C7BC (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14006D5C8 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     ApiSetEditionIsPointerQueuedMessageCoalescable @ 0x1400CBE38 (ApiSetEditionIsPointerQueuedMessageCoalescable.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1400CCB98 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1400CDED0 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1400CE8A8 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall CTouchProcessor::CanCoalesceNodeWithPrevious(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3,
        struct tagQMSG *a4,
        struct CPointerQFrame *a5,
        enum CPointerCoalesce *a6)
{
  const struct CPointerInfoNode *v6; // r15
  const struct CPointerInputFrame *v7; // r12
  char v9; // bl
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rcx
  int v13; // eax
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  struct CPointerInfoNode *v15; // rsi
  __int64 v16; // r14
  int v17; // eax
  char v18; // di
  bool v19; // si
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  CTouchProcessor *v23; // rcx
  char v25; // di
  bool v26; // si
  int v27; // eax
  CInputDest *Queue; // rax
  int v29; // edx
  int v30; // r8d
  char IsEqualByQ; // al
  char v32; // al
  int v33; // eax
  unsigned int v34; // r9d
  unsigned int v35; // r8d
  __int64 v36; // rax
  int v37; // edx
  int v38; // r8d
  char v39; // di
  bool v40; // si
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  bool v44; // di
  char v45; // di
  bool v46; // si
  __int64 UserSessionState; // rax
  int v48; // r8d
  int v49; // edx
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  char v53; // di
  bool v54; // si
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  char v58; // di
  bool v59; // si
  __int64 v60; // rax
  int v61; // r8d
  int v62; // edx
  bool v63; // si
  __int64 v64; // rax
  int v65; // r8d
  int v66; // edx
  char v67; // di
  bool v68; // si
  __int64 v69; // rax
  int v70; // r8d
  int v71; // edx
  char v72; // di
  bool v73; // si
  __int64 v74; // rax
  int v75; // r8d
  int v76; // edx
  char v77; // di
  bool v78; // si
  __int64 v79; // rax
  int v80; // r8d
  int v81; // edx
  CTouchProcessor *v82; // rcx
  char v83; // di
  bool v84; // si
  __int64 v85; // rax
  int v86; // r8d
  int v87; // edx
  char v88; // di
  bool v89; // si
  __int64 v90; // rax
  int v91; // r8d
  int v92; // edx
  char v93; // di
  bool v94; // si
  __int64 v95; // rax
  int v96; // r8d
  int v97; // edx
  char v98; // di
  bool v99; // si
  __int64 v100; // rax
  int v101; // r8d
  int v102; // edx
  int v103; // [rsp+28h] [rbp-D8h]
  __int16 v104; // [rsp+30h] [rbp-D0h]
  __int16 v105; // [rsp+30h] [rbp-D0h]
  int v106; // [rsp+44h] [rbp-BCh] BYREF
  struct tagQMSG *v107; // [rsp+48h] [rbp-B8h]
  _OWORD v108[7]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v109[5]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v110[3]; // [rsp+110h] [rbp+10h] BYREF

  v6 = a3;
  v7 = a2;
  v107 = a4;
  v9 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      (_DWORD)a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      245,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  v106 = 0;
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9642LL);
  if ( !*((_DWORD *)a5 + 27) )
  {
    *(_DWORD *)a6 = 23;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v25 = 0;
    }
    v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v11);
      LOBYTE(v48) = v26;
      LOBYTE(v49) = v25;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v49,
        v48,
        *(_QWORD *)(UserSessionState + 69136),
        4,
        4,
        246,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    v23 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v104 = 247;
LABEL_313:
    LOBYTE(v11) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)v23 + 3),
      v10,
      v11,
      *((_QWORD *)v23 + 8),
      5,
      4,
      v104,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    return 0LL;
  }
  if ( !(unsigned int)CPointerInfoNode::IsValid(v6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9669LL);
  if ( !*((_QWORD *)v6 + 24) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9670LL);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v12, (__int64)v7) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9671LL);
  v13 = *(_DWORD *)v6;
  if ( (*(_DWORD *)v6 & 1) == 0 )
  {
    *(_DWORD *)a6 = 2;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v45 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v45 = 0;
    }
    v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v45 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v50 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v11);
      LOBYTE(v51) = v46;
      LOBYTE(v52) = v45;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v52,
        v51,
        *(_QWORD *)(v50 + 69136),
        4,
        4,
        248,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    v23 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v104 = 249;
    goto LABEL_313;
  }
  if ( (v13 & 8) != 0 || (v13 & 0x10) != 0 || (v13 & 0x40) != 0 || (v13 & 0x20) != 0 )
  {
    *(_DWORD *)a6 = 16;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v98 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v98 = 0;
    }
    v99 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v98 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v100 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v11);
      LOBYTE(v101) = v99;
      LOBYTE(v102) = v98;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v102,
        v101,
        *(_QWORD *)(v100 + 69136),
        4,
        4,
        250,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    v23 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v104 = 251;
    goto LABEL_313;
  }
  ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame((CTouchProcessor *)this, v7, *((_WORD *)v6 + 86), 0LL);
  v11 = 0;
  v15 = ValidNodeInFrame;
  if ( !ValidNodeInFrame )
  {
    *(_DWORD *)a6 = 3;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v53 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v53 = 0;
    }
    v54 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v53 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v55 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, 0);
      LOBYTE(v56) = v54;
      LOBYTE(v57) = v53;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v57,
        v56,
        *(_QWORD *)(v55 + 69136),
        4,
        4,
        252,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      v11 = 0;
    }
    v23 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v104 = 253;
    goto LABEL_313;
  }
  v16 = *((_QWORD *)v7 + 31) + 160LL * *((unsigned int *)ValidNodeInFrame + 2);
  if ( !*((_QWORD *)a5 + 19) )
    *((_QWORD *)a5 + 19) = v16;
  v17 = *(_DWORD *)(v16 + 140);
  if ( (v17 & 1) == 0 )
  {
    *(_DWORD *)a6 = 12;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v18 = 0;
    }
    v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, 0);
      LOBYTE(v21) = v19;
      LOBYTE(v22) = v18;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(v20 + 69136),
        4,
        4,
        254,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      v11 = 0;
    }
    v23 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v104 = 255;
    goto LABEL_313;
  }
  if ( (v17 & 8) != 0 )
  {
    *(_DWORD *)a6 = 11;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v58 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v58 = 0;
    }
    v59 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v58 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v60 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, 0);
      LOBYTE(v61) = v59;
      LOBYTE(v62) = v58;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v62,
        v61,
        *(_QWORD *)(v60 + 69136),
        4,
        4,
        256,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      v11 = 0;
    }
    v23 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v104 = 257;
    goto LABEL_313;
  }
  if ( (*(_DWORD *)v15 & 1) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9734LL);
    v11 = 0;
  }
  v27 = *(_DWORD *)v6;
  if ( (*(_DWORD *)v6 & 0x800000) != 0
    || (v27 & 0x8000000) != 0
    || v27 < 0
    || (*((_DWORD *)v6 + 1) & 8) != 0
    || (v10 = *(_DWORD *)v15, (*(_DWORD *)v15 & 0x800000) != 0)
    || (v10 & 0x8000000) != 0
    || v10 < 0
    || (*((_DWORD *)v15 + 1) & 8) != 0 )
  {
    *(_DWORD *)a6 = 16;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v93 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v93 = 0;
    }
    v94 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v93 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v95 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, 0);
      LOBYTE(v96) = v94;
      LOBYTE(v97) = v93;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v97,
        v96,
        *(_QWORD *)(v95 + 69136),
        4,
        4,
        258,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      v11 = 0;
    }
    v23 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v104 = 259;
    goto LABEL_313;
  }
  if ( (v10 & 0x100000) != 0 && (v10 & 0x400000) == 0 )
  {
    if ( (v10 & 0x200000) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9764LL);
    *(_DWORD *)a6 = 21;
    v44 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v63 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v44 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v64 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v11);
      LOBYTE(v65) = v63;
      LOBYTE(v66) = v44;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v66,
        v65,
        *(_QWORD *)(v64 + 69136),
        4,
        4,
        260,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    v23 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v104 = 261;
    goto LABEL_313;
  }
  if ( *((_DWORD *)v15 + 45) != *((_DWORD *)v6 + 45) )
  {
    *(_DWORD *)a6 = 5;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v67 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v67 = 0;
    }
    v68 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v67 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v69 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, 0);
      LOBYTE(v70) = v68;
      LOBYTE(v71) = v67;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v71,
        v70,
        *(_QWORD *)(v69 + 69136),
        4,
        4,
        262,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      v11 = 0;
    }
    v23 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v104 = 263;
    goto LABEL_313;
  }
  if ( *((_DWORD *)v15 + 59) == 100 )
  {
    *(_DWORD *)a6 = 6;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v72 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v72 = 0;
    }
    v73 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v72 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v74 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, 0);
      LOBYTE(v75) = v73;
      LOBYTE(v76) = v72;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v76,
        v75,
        *(_QWORD *)(v74 + 69136),
        4,
        4,
        264,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      v11 = 0;
    }
    v23 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v104 = 265;
    goto LABEL_313;
  }
  CInputDest::CInputDest(v109, *((_QWORD *)v6 + 24), *((unsigned int *)v6 + 111), 1LL);
  Queue = CPointerInfoNode::GetQueue(v15, &v106);
  v30 = 0;
  if ( !Queue || (IsEqualByQ = CInputDest::IsEqualByQ(Queue, (const struct CInputDest *)v109), v30 = 0, !IsEqualByQ) )
  {
    *(_DWORD *)a6 = 4;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v88 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v88 = 0;
    }
    v89 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v88 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v90 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v29, 0);
      LOBYTE(v91) = v89;
      LOBYTE(v92) = v88;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v92,
        v91,
        *(_QWORD *)(v90 + 69136),
        4,
        4,
        266,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      v30 = 0;
    }
    v82 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v29) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v29) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v29 && !v9 )
      goto LABEL_278;
    v105 = 267;
    goto LABEL_277;
  }
  v32 = CInputDest::IsEqualByQ((CInputDest *)v109, (const struct CInputDest *)(v16 + 16));
  v30 = 0;
  if ( !v32 )
  {
    *(_DWORD *)a6 = 4;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v77 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v77 = 0;
    }
    v78 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v77 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v79 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v29, 0);
      LOBYTE(v80) = v78;
      LOBYTE(v81) = v77;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v81,
        v80,
        *(_QWORD *)(v79 + 69136),
        4,
        4,
        268,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      v30 = 0;
    }
    v82 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v29) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v29) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v29 && !v9 )
      goto LABEL_278;
    v105 = 269;
    goto LABEL_277;
  }
  if ( *((_QWORD *)a5 + 19) != v16 )
  {
    *(_DWORD *)a6 = 4;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v83 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v83 = 0;
    }
    v84 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v83 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v85 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v29, 0);
      LOBYTE(v86) = v84;
      LOBYTE(v87) = v83;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v87,
        v86,
        *(_QWORD *)(v85 + 69136),
        4,
        4,
        270,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      v30 = 0;
    }
    v82 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v29) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v29) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v29 && !v9 )
      goto LABEL_278;
    v105 = 271;
LABEL_277:
    LOBYTE(v30) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)v82 + 3),
      v29,
      v30,
      *((_QWORD *)v82 + 8),
      5,
      4,
      v105,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
LABEL_278:
    CInputDest::~CInputDest((CInputDest *)v109);
    return 0LL;
  }
  v33 = *((_DWORD *)v6 + 42);
  v34 = *((_DWORD *)v6 + 44);
  v35 = *((_DWORD *)v7 + 10);
  v108[0] = v109[0];
  v108[2] = v109[2];
  v108[1] = v109[1];
  v103 = v33;
  v36 = *((_QWORD *)v15 + 2);
  v108[4] = v109[4];
  v108[3] = v109[3];
  v108[6] = v110[1];
  v108[5] = v110[0];
  if ( !(unsigned int)ApiSetEditionIsPointerQueuedMessageCoalescable(v108, (__int64)v107, v35, v34, v36, v103) )
  {
    *(_DWORD *)a6 = 7;
    if ( HIDWORD(v110[0]) )
      HMAssignmentUnlock((__int64 *)v110);
    return 0LL;
  }
  if ( *(_DWORD *)a6 != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9851LL);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v39 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v39 = 0;
  }
  v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v41 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v37, v38);
    LOBYTE(v42) = v40;
    LOBYTE(v43) = v39;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v43,
      v42,
      *(_QWORD *)(v41 + 69136),
      4,
      4,
      272,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v37) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v37) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v38) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v38) = 0;
  }
  if ( (_BYTE)v37 || (_BYTE)v38 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v37,
      v38,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      273,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  if ( HIDWORD(v110[0]) )
    HMAssignmentUnlock((__int64 *)v110);
  return 1LL;
}
