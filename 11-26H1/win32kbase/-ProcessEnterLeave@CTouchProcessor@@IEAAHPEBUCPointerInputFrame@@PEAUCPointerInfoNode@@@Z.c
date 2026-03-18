/*
 * XREFs of ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1400CEB40
 * Callers:
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x14006BF24 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x140108F24 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x14021658C (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1400685B8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x14006C298 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14006D5C8 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14009C7BC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1400CDED0 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1400CE8A8 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1400D0D68 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdqd @ 0x140170B2C (WPP_RECORDER_AND_TRACE_SF_qdqd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall CTouchProcessor::ProcessEnterLeave(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        struct CPointerInfoNode *a3)
{
  char v3; // r12
  struct CPointerInfoNode *v7; // rsi
  int v8; // edx
  int v9; // r8d
  char v10; // di
  __int64 v11; // rcx
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  int v13; // eax
  __int64 *v14; // rax
  int v15; // r8d
  int v16; // edx
  char v17; // bl
  _UNKNOWN **v18; // r8
  bool v19; // si
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  CTouchProcessor *v23; // rcx
  __int64 *v25; // rax
  int v26; // r8d
  CTouchProcessor **v27; // r8
  char v28; // bl
  _UNKNOWN **v29; // rdx
  bool v30; // r15
  bool v31; // r13
  int v32; // r15d
  int v33; // eax
  int v34; // r15d
  int v35; // ebx
  __int64 v36; // rax
  int v37; // edx
  int v38; // r8d
  int v39; // ebx
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  char v43; // si
  bool v44; // r15
  __int16 v45; // bx
  __int64 UserSessionState; // rax
  int v47; // r8d
  int v48; // edx
  char v49; // bl
  bool v50; // si
  __int64 v51; // rax
  int v52; // r8d
  int v53; // edx
  int v54; // [rsp+20h] [rbp-E0h]
  int v55; // [rsp+28h] [rbp-D8h]
  __int16 v56; // [rsp+30h] [rbp-D0h]
  __int16 v57; // [rsp+30h] [rbp-D0h]
  int v58; // [rsp+38h] [rbp-C8h]
  char v59; // [rsp+40h] [rbp-C0h]
  char v60; // [rsp+48h] [rbp-B8h]
  char v61; // [rsp+50h] [rbp-B0h]
  char v62; // [rsp+58h] [rbp-A8h]
  __int64 v64[16]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v65[14]; // [rsp+F0h] [rbp-10h] BYREF
  char v66; // [rsp+160h] [rbp+60h]
  __int64 v67[10]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v68; // [rsp+1C0h] [rbp+C0h] BYREF
  int v69; // [rsp+1CCh] [rbp+CCh]

  v3 = 0;
  v7 = 0LL;
  memset(v65, 0, sizeof(v65));
  v66 = 0;
  memset(v64, 0, 113);
  v10 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v8) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v8) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v9) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v9) = 0;
  }
  if ( (_BYTE)v8 || (_BYTE)v9 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v9,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      170,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6543LL);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6544LL);
  if ( (*(_DWORD *)a3 & 0x400) == 0 && (*(_DWORD *)a3 & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6545LL);
  if ( (*(_DWORD *)a3 & 0x400) == 0 && !*((_DWORD *)a3 + 6) && *((_DWORD *)a3 + 88) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6546LL);
  if ( a2 )
  {
    if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v11, (__int64)a2) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6563LL);
    ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(this, a2, *((_WORD *)a3 + 86), 0LL);
    v7 = ValidNodeInFrame;
    if ( ValidNodeInFrame )
    {
      v13 = *(_DWORD *)ValidNodeInFrame;
      if ( (v13 & 0x80u) == 0 )
      {
        if ( (v13 & 4) != 0 || (v13 & 0x400) != 0 )
        {
          v25 = CInputDest::CInputDest(v67, *((_QWORD *)v7 + 24), *((_DWORD *)v7 + 111), 1);
          CInputDest::operator=(v64, v25, v26);
          if ( v69 )
            HMAssignmentUnlock(&v68);
        }
        else
        {
          CInputDest::operator=((__int64)v64, (__int64)v7 + 24);
        }
      }
      else
      {
        v7 = 0LL;
      }
    }
    else if ( !CPointerInfoNode::IsForManipulationThread(a3) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v43 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v43 = 0;
      }
      v18 = &WPP_RECORDER_INITIALIZED;
      v44 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v43 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v45 = *((_WORD *)a3 + 86);
        UserSessionState = W32GetUserSessionState(
                             (_DWORD)WPP_GLOBAL_Control,
                             v16,
                             (unsigned int)&WPP_RECORDER_INITIALIZED);
        LOBYTE(v47) = v44;
        LOBYTE(v48) = v43;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v48,
          v47,
          *(_QWORD *)(UserSessionState + 69136),
          4,
          4,
          173,
          (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids,
          v45);
        v18 = &WPP_RECORDER_INITIALIZED;
      }
      v23 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v16) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v16) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v10 = 0;
      if ( !(_BYTE)v16 && !v10 )
        goto LABEL_38;
      v57 = 174;
      goto LABEL_160;
    }
  }
  else
  {
    if ( !CPointerInfoNode::IsForManipulationThread(a3) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6553LL);
    if ( !CPointerInfoNode::IsForManipulationThread(a3) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v49 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v49 = 0;
      }
      v50 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v49 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v51 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v16, (_DWORD)v18);
        LOBYTE(v52) = v50;
        LOBYTE(v53) = v49;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v53,
          v52,
          *(_QWORD *)(v51 + 69136),
          4,
          4,
          171,
          (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      }
      v23 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v16) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v16) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v10 = 0;
      if ( !(_BYTE)v16 && !v10 )
        goto LABEL_38;
      v57 = 172;
      goto LABEL_160;
    }
  }
  if ( (*(_DWORD *)a3 & 0x400) != 0 )
  {
    v14 = CInputDest::CInputDest(v67, *((_QWORD *)a3 + 24), *((_DWORD *)a3 + 111), 1);
    CInputDest::operator=(v65, v14, v15);
    if ( v69 )
      HMAssignmentUnlock(&v68);
  }
  else
  {
    CInputDest::operator=((__int64)v65, (__int64)a3 + 24);
  }
  if ( (unsigned __int8)CInputDest::operator==(v64, v65) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v17 = 0;
    }
    v18 = &WPP_RECORDER_INITIALIZED;
    v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v16, (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v21) = v19;
      LOBYTE(v22) = v17;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(v20 + 69136),
        4,
        4,
        175,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      v18 = &WPP_RECORDER_INITIALIZED;
    }
    v23 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v16) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v16) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v10 = 0;
    if ( !(_BYTE)v16 && !v10 )
      goto LABEL_38;
    v57 = 176;
LABEL_160:
    LOBYTE(v18) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)v23 + 3),
      v16,
      (_DWORD)v18,
      *((_QWORD *)v23 + 8),
      5,
      4,
      v57,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
LABEL_38:
    if ( HIDWORD(v64[11]) )
      HMAssignmentUnlock(&v64[10]);
    memset(v64, 0, 0x78uLL);
    if ( HIDWORD(v65[11]) )
      HMAssignmentUnlock(&v65[10]);
    return 0LL;
  }
  v27 = &WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v28 = 0;
  }
  v29 = &WPP_RECORDER_INITIALIZED;
  v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v40 = W32GetUserSessionState(
            (_DWORD)WPP_GLOBAL_Control,
            (unsigned int)&WPP_RECORDER_INITIALIZED,
            (unsigned int)&WPP_GLOBAL_Control);
    LOBYTE(v41) = v30;
    LOBYTE(v42) = v28;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v42,
      v41,
      *(_QWORD *)(v40 + 69136),
      4,
      4,
      177,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    v29 = &WPP_RECORDER_INITIALIZED;
    v27 = &WPP_GLOBAL_Control;
  }
  if ( (*((_DWORD *)a3 + 1) & 0x200) != 0
    && ((v33 = *((_DWORD *)a3 + 45), (v33 & 4) != 0) || (v33 & 0x40000) != 0)
    && (v33 & 0x10000) == 0 )
  {
    *(_DWORD *)a3 |= 0x40u;
    if ( v7 )
      *(_DWORD *)v7 |= 0x20u;
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    {
      v3 = 1;
    }
    v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    LOBYTE(v34) = 0;
    if ( !v3 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_67;
    if ( v7 )
      v34 = -__CFSHR__(*(_DWORD *)v7, 6);
    v35 = -__CFSHR__(*(_DWORD *)a3, 7);
    v36 = W32GetUserSessionState(
            (_DWORD)WPP_GLOBAL_Control,
            (unsigned int)&WPP_RECORDER_INITIALIZED,
            (unsigned int)&WPP_GLOBAL_Control);
    v62 = v34;
    v61 = (char)v7;
    v60 = v35;
    v59 = (char)a3;
    v56 = 179;
  }
  else
  {
    *(_DWORD *)a3 |= 8u;
    if ( v7 )
      *(_DWORD *)v7 |= 0x10u;
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    {
      v3 = 1;
    }
    v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    LOBYTE(v32) = 0;
    if ( !v3 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_67;
    if ( v7 )
      v32 = -__CFSHR__(*(_DWORD *)v7, 5);
    v39 = -__CFSHR__(*(_DWORD *)a3, 4);
    v36 = W32GetUserSessionState(
            (_DWORD)WPP_GLOBAL_Control,
            (unsigned int)&WPP_RECORDER_INITIALIZED,
            (unsigned int)&WPP_GLOBAL_Control);
    v62 = v32;
    v61 = (char)v7;
    v60 = v39;
    v59 = (char)a3;
    v56 = 178;
  }
  LOBYTE(v38) = v31;
  LOBYTE(v37) = v3;
  WPP_RECORDER_AND_TRACE_SF_qdqd(
    *((_QWORD *)WPP_GLOBAL_Control + 3),
    v37,
    v38,
    *(_QWORD *)(v36 + 69136),
    v54,
    v55,
    v56,
    v58,
    v59,
    v60,
    v61,
    v62);
LABEL_67:
  if ( v7 )
  {
    if ( *((_DWORD *)v7 + 2) >= *((_DWORD *)a2 + 12) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6693LL);
    *(_DWORD *)(160LL * *((unsigned int *)v7 + 2) + *((_QWORD *)a2 + 31) + 140) &= ~1u;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v29) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v29) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v27) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v27) = 0;
  }
  if ( (_BYTE)v29 || (_BYTE)v27 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)v29,
      (_DWORD)v27,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      180,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  if ( HIDWORD(v64[11]) )
    HMAssignmentUnlock(&v64[10]);
  memset(v64, 0, 0x78uLL);
  if ( HIDWORD(v65[11]) )
    HMAssignmentUnlock(&v65[10]);
  return 1LL;
}
