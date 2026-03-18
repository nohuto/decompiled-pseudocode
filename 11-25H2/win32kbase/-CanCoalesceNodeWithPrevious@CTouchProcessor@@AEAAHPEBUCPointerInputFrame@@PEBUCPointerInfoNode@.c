/*
 * XREFs of ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1400DFA04
 * Callers:
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1400DED58 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1401FC36C (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1400B7CE0 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C4964 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1400DA318 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1401887DC (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ApiSetEditionIsPointerQueuedMessageCoalescable @ 0x140195BB0 (ApiSetEditionIsPointerQueuedMessageCoalescable.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1401FF830 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x140204448 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
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
  __int64 v10; // rdx
  int v11; // r8d
  char v12; // di
  bool v13; // si
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  _QWORD *v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  char v20; // di
  bool v21; // si
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  __int64 *v26; // rsi
  char v27; // di
  bool v28; // si
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  __int64 v32; // r14
  int v33; // eax
  char v34; // di
  bool v35; // si
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  char v39; // di
  bool v40; // si
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  int v44; // eax
  bool v45; // di
  bool v46; // si
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  char v50; // di
  bool v51; // si
  __int64 v52; // rax
  int v53; // r8d
  int v54; // edx
  char v55; // di
  bool v56; // si
  __int64 v57; // rax
  int v58; // r8d
  int v59; // edx
  CInputDest *Queue; // rax
  __int64 v61; // rdx
  int v62; // r8d
  char IsEqualByQ; // al
  char v64; // al
  char v65; // di
  bool v66; // si
  __int64 v67; // rax
  int v68; // r8d
  int v69; // edx
  _QWORD *v70; // rcx
  char v71; // di
  bool v72; // si
  __int64 v73; // rax
  int v74; // r8d
  int v75; // edx
  __int64 v76; // rcx
  int v77; // eax
  int v78; // r9d
  int v79; // r8d
  __int64 v80; // rdx
  int v81; // r8d
  char v82; // di
  bool v83; // si
  __int64 v84; // rax
  int v85; // r8d
  int v86; // edx
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
  __int16 v103; // [rsp+30h] [rbp-D0h]
  __int16 v104; // [rsp+30h] [rbp-D0h]
  int v105; // [rsp+44h] [rbp-BCh] BYREF
  struct tagQMSG *v106; // [rsp+48h] [rbp-B8h]
  _OWORD v107[7]; // [rsp+50h] [rbp-B0h] BYREF
  __m128i v108[8]; // [rsp+C0h] [rbp-40h] BYREF

  v6 = a3;
  v7 = a2;
  v106 = a4;
  v9 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
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
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  v105 = 0;
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9659LL);
  if ( !*((_DWORD *)a5 + 27) )
  {
    *(_DWORD *)a6 = 23;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v12 = 0;
    }
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v12;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(UserSessionState + 69144),
        4,
        4,
        246,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v103 = 247;
    goto LABEL_296;
  }
  if ( !(unsigned int)CPointerInfoNode::IsValid(v6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9686LL);
  if ( !*((_QWORD *)v6 + 24) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9687LL);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v18, v7) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9688LL);
  v19 = *(_DWORD *)v6;
  if ( (*(_DWORD *)v6 & 1) == 0 )
  {
    *(_DWORD *)a6 = 2;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v20 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v20 = 0;
    }
    v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
      LOBYTE(v23) = v21;
      LOBYTE(v24) = v20;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v24,
        v23,
        *(_QWORD *)(v22 + 69144),
        4,
        4,
        248,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v103 = 249;
    goto LABEL_296;
  }
  if ( (v19 & 8) != 0 || (v19 & 0x10) != 0 || (v19 & 0x40) != 0 || (v19 & 0x20) != 0 )
  {
    *(_DWORD *)a6 = 16;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v98 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v98 = 0;
    }
    v99 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v98 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v100 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
      LOBYTE(v101) = v99;
      LOBYTE(v102) = v98;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v102,
        v101,
        *(_QWORD *)(v100 + 69144),
        4,
        4,
        250,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v103 = 251;
LABEL_296:
    LOBYTE(v11) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      v17[3],
      v10,
      v11,
      v17[8],
      5,
      4,
      v103,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    return 0LL;
  }
  ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame((CTouchProcessor *)this, v7, *((_WORD *)v6 + 86), 0LL);
  v11 = 0;
  v26 = (__int64 *)ValidNodeInFrame;
  if ( !ValidNodeInFrame )
  {
    *(_DWORD *)a6 = 3;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v27 = 0;
    }
    v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v29 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
      LOBYTE(v30) = v28;
      LOBYTE(v31) = v27;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v31,
        v30,
        *(_QWORD *)(v29 + 69144),
        4,
        4,
        252,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      v11 = 0;
    }
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v103 = 253;
    goto LABEL_296;
  }
  v32 = *((_QWORD *)v7 + 31) + 160LL * *((unsigned int *)ValidNodeInFrame + 2);
  if ( !*((_QWORD *)a5 + 19) )
    *((_QWORD *)a5 + 19) = v32;
  v33 = *(_DWORD *)(v32 + 140);
  if ( (v33 & 1) == 0 )
  {
    *(_DWORD *)a6 = 12;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v34 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v34 = 0;
    }
    v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v36 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
      LOBYTE(v37) = v35;
      LOBYTE(v38) = v34;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v38,
        v37,
        *(_QWORD *)(v36 + 69144),
        4,
        4,
        254,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      v11 = 0;
    }
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v103 = 255;
    goto LABEL_296;
  }
  if ( (v33 & 8) != 0 )
  {
    *(_DWORD *)a6 = 11;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v39 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v39 = 0;
    }
    v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v41 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
      LOBYTE(v42) = v40;
      LOBYTE(v43) = v39;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v43,
        v42,
        *(_QWORD *)(v41 + 69144),
        4,
        4,
        256,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      v11 = 0;
    }
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v103 = 257;
    goto LABEL_296;
  }
  if ( (*(_DWORD *)v26 & 1) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9751LL);
    v11 = 0;
  }
  v44 = *(_DWORD *)v6;
  if ( (*(_DWORD *)v6 & 0x800000) != 0
    || (v44 & 0x8000000) != 0
    || v44 < 0
    || (*((_DWORD *)v6 + 1) & 8) != 0
    || (v10 = *(unsigned int *)v26, (v10 & 0x800000) != 0)
    || (v10 & 0x8000000) != 0
    || (v10 & 0x80000000) != 0
    || (*((_DWORD *)v26 + 1) & 8) != 0 )
  {
    *(_DWORD *)a6 = 16;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v93 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v93 = 0;
    }
    v94 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v93 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v95 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
      LOBYTE(v96) = v94;
      LOBYTE(v97) = v93;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v97,
        v96,
        *(_QWORD *)(v95 + 69144),
        4,
        4,
        258,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      v11 = 0;
    }
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v103 = 259;
    goto LABEL_296;
  }
  if ( (v10 & 0x100000) != 0 && (v10 & 0x400000) == 0 )
  {
    if ( (v10 & 0x200000) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9781LL);
    *(_DWORD *)a6 = 21;
    v45 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v45 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v47 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
      LOBYTE(v48) = v46;
      LOBYTE(v49) = v45;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v49,
        v48,
        *(_QWORD *)(v47 + 69144),
        4,
        4,
        260,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v103 = 261;
    goto LABEL_296;
  }
  if ( *((_DWORD *)v26 + 45) != *((_DWORD *)v6 + 45) )
  {
    *(_DWORD *)a6 = 5;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v50 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v50 = 0;
    }
    v51 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v50 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v52 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
      LOBYTE(v53) = v51;
      LOBYTE(v54) = v50;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v54,
        v53,
        *(_QWORD *)(v52 + 69144),
        4,
        4,
        262,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      v11 = 0;
    }
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v103 = 263;
    goto LABEL_296;
  }
  if ( *((_DWORD *)v26 + 59) == 100 )
  {
    *(_DWORD *)a6 = 6;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v55 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v55 = 0;
    }
    v56 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v55 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v57 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
      LOBYTE(v58) = v56;
      LOBYTE(v59) = v55;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v59,
        v58,
        *(_QWORD *)(v57 + 69144),
        4,
        4,
        264,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      v11 = 0;
    }
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v103 = 265;
    goto LABEL_296;
  }
  CInputDest::CInputDest(v108, *((_QWORD *)v6 + 24), *((_DWORD *)v6 + 111), 1);
  Queue = CPointerInfoNode::GetQueue((CPointerInfoNode *)v26, &v105);
  v62 = 0;
  if ( !Queue || (IsEqualByQ = CInputDest::IsEqualByQ(Queue, (const struct CInputDest *)v108), v62 = 0, !IsEqualByQ) )
  {
    *(_DWORD *)a6 = 4;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v88 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v88 = 0;
    }
    v89 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v88 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v90 = W32GetUserSessionState(WPP_GLOBAL_Control, v61);
      LOBYTE(v91) = v89;
      LOBYTE(v92) = v88;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v92,
        v91,
        *(_QWORD *)(v90 + 69144),
        4,
        4,
        266,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      v62 = 0;
    }
    v70 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v61) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v61) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v61 && !v9 )
      goto LABEL_223;
    v104 = 267;
LABEL_261:
    LOBYTE(v62) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      v70[3],
      v61,
      v62,
      v70[8],
      5,
      4,
      v104,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    goto LABEL_223;
  }
  v64 = CInputDest::IsEqualByQ((CInputDest *)v108, (const struct CInputDest *)(v32 + 16));
  v62 = 0;
  if ( !v64 )
  {
    *(_DWORD *)a6 = 4;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v65 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v65 = 0;
    }
    v66 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v65 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v67 = W32GetUserSessionState(WPP_GLOBAL_Control, v61);
      LOBYTE(v68) = v66;
      LOBYTE(v69) = v65;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v69,
        v68,
        *(_QWORD *)(v67 + 69144),
        4,
        4,
        268,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      v62 = 0;
    }
    v70 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v61) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v61) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v61 && !v9 )
      goto LABEL_223;
    v104 = 269;
    goto LABEL_261;
  }
  if ( *((_QWORD *)a5 + 19) != v32 )
  {
    *(_DWORD *)a6 = 4;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v71 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v71 = 0;
    }
    v72 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v71 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v73 = W32GetUserSessionState(WPP_GLOBAL_Control, v61);
      LOBYTE(v74) = v72;
      LOBYTE(v75) = v71;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v75,
        v74,
        *(_QWORD *)(v73 + 69144),
        4,
        4,
        270,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      v62 = 0;
    }
    v70 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v61) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v61) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v61 && !v9 )
      goto LABEL_223;
    v104 = 271;
    goto LABEL_261;
  }
  v76 = v26[2];
  v77 = *((_DWORD *)v6 + 42);
  v78 = *((_DWORD *)v6 + 44);
  v79 = *((_DWORD *)v7 + 10);
  v107[0] = v108[0];
  v107[2] = v108[2];
  v107[1] = v108[1];
  v107[4] = v108[4];
  v107[3] = v108[3];
  v107[6] = v108[6];
  v107[5] = v108[5];
  if ( !(unsigned int)ApiSetEditionIsPointerQueuedMessageCoalescable(
                        (unsigned int)v107,
                        (_DWORD)v106,
                        v79,
                        v78,
                        v76,
                        v77) )
  {
    *(_DWORD *)a6 = 7;
LABEL_223:
    CInputDest::~CInputDest((CInputDest *)v108);
    return 0LL;
  }
  if ( *(_DWORD *)a6 != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9868LL);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v82 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v82 = 0;
  }
  v83 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v82 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v84 = W32GetUserSessionState(WPP_GLOBAL_Control, v80);
    LOBYTE(v85) = v83;
    LOBYTE(v86) = v82;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v86,
      v85,
      *(_QWORD *)(v84 + 69144),
      4,
      4,
      272,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v80) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v80) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v81) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v81) = 0;
  }
  if ( (_BYTE)v80 || (_BYTE)v81 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v80,
      v81,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      273,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  CInputDest::~CInputDest((CInputDest *)v108);
  return 1LL;
}
