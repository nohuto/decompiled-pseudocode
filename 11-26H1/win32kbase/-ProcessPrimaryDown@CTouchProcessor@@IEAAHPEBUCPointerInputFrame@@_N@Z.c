/*
 * XREFs of ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z @ 0x1400CC07C
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1400686C8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004B9C0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004BEE0 (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHK@Z @ 0x140067880 (-IsFrameReferenced@CTouchProcessor@@AEAAHK@Z.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x14006A8A0 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x14006D4EC (-IsPrimaryDown@CPointerInfoNode@@QEBAHXZ.c)
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x140087568 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x140089F40 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1400CBD48 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1400CE174 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x14018E8AC (-DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetEditionSetForegroundCheckNoActivate @ 0x1401C02CC (ApiSetEditionSetForegroundCheckNoActivate.c)
 */

__int64 __fastcall CTouchProcessor::ProcessPrimaryDown(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        unsigned __int8 a3)
{
  int v3; // r12d
  const struct CPointerInputFrame *v4; // rsi
  unsigned int v6; // r14d
  char v7; // di
  char v8; // r8
  PERESOURCE *v9; // r13
  unsigned int v10; // r15d
  int v11; // edx
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rax
  char v20; // al
  struct CInputDest *v21; // rsi
  int v22; // ecx
  int v23; // r8d
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  int v27; // edx
  __int64 v28; // rcx
  int v29; // r8d
  int v30; // edx
  __int64 v31; // rcx
  int v32; // r8d
  __int64 v33; // rbx
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  int v37; // edx
  char v38; // bl
  bool v39; // si
  __int64 v40; // rax
  int v41; // edx
  char v42; // r8
  int v44; // edx
  int v45; // r8d
  __int64 v46; // rdx
  __int64 v47; // rdx
  CTouchProcessor *v48; // rcx
  __int64 v49; // rsi
  __int64 v50; // rax
  char v51; // bl
  bool v52; // si
  char v53; // bl
  bool v54; // si
  __int64 UserSessionState; // rax
  int v56; // edx
  char v57; // bl
  bool v58; // si
  __int64 v59; // rax
  int v60; // edx
  char v61; // bl
  bool v62; // si
  __int64 v63; // rax
  int v64; // edx
  bool v65; // zf
  __int64 v66; // rax
  int v67; // edx
  _QWORD v68[4]; // [rsp+40h] [rbp-49h] BYREF
  char v69; // [rsp+60h] [rbp-29h]
  PERESOURCE *v70; // [rsp+68h] [rbp-21h]
  _BYTE v71[112]; // [rsp+70h] [rbp-19h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = 0;
  v7 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v8 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v8 = 0;
  }
  if ( (_BYTE)a2 || v8 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      v8,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      181,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  v9 = this + 4;
  v10 = 0;
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6716LL);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, *((_DWORD *)v4 + 10)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6717LL);
  if ( (*((_DWORD *)v4 + 57) & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6718LL);
  v12 = *((unsigned int *)v4 + 12);
  v13 = *((_QWORD *)v4 + 30);
  if ( (_DWORD)v12 )
  {
    do
    {
      if ( v13 >= *((_QWORD *)v4 + 30) + 480 * v12 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6730LL);
      if ( *(_QWORD *)(v13 + 16)
        && (unsigned int)CPointerInfoNode::IsPrimaryDown((CPointerInfoNode *)v13)
        && (unsigned int)CTouchProcessor::ShouldGenerateMessagesForNode(
                           v48,
                           v4,
                           (const struct CPointerInfoNode *)v13,
                           v3) )
      {
        break;
      }
      v12 = *((unsigned int *)v4 + 12);
      v13 += 480LL;
      ++v6;
    }
    while ( v6 < (unsigned int)v12 );
  }
  v14 = *((unsigned int *)v4 + 12);
  if ( v6 == (_DWORD)v14 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v53 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v53 = 0;
    }
    v54 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v53 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v11, 0);
      LOBYTE(v56) = v53;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v56,
        v54,
        *(_QWORD *)(UserSessionState + 69136),
        4,
        4,
        182,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v11) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v7 = 0;
    if ( (_BYTE)v11 || v7 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v7,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        183,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    return 0LL;
  }
  if ( v13 >= *((_QWORD *)v4 + 30) + 480 * v14 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6766LL);
  if ( !(unsigned int)CPointerInfoNode::IsPrimaryDown((CPointerInfoNode *)v13) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6767LL);
  if ( !*(_QWORD *)(v13 + 16) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6768LL);
  if ( (*(_DWORD *)v13 & 0x1000) != 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v57 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v57 = 0;
    }
    v58 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v57 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v59 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v60) = v57;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v60,
        v58,
        *(_QWORD *)(v59 + 69136),
        2,
        4,
        184,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v15) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v15) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v7 = 0;
    if ( (_BYTE)v15 || v7 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v7,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        185,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    return 0LL;
  }
  v16 = *(_DWORD *)(v13 + 444);
  if ( !v16 )
    goto LABEL_54;
  v17 = *(_QWORD *)(v13 + 192);
  if ( !v17 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v61 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v61 = 0;
    }
    v62 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v61 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v63 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v64) = v61;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v64,
        v62,
        *(_QWORD *)(v63 + 69136),
        2,
        4,
        186,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v15) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v15) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v7 = 0;
    if ( (_BYTE)v15 || v7 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v7,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        187,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    return 0LL;
  }
  if ( v16 != 2 )
  {
    if ( v16 == 1 )
    {
      v49 = *(_QWORD *)(v13 + 432);
      LOBYTE(v15) = 23;
      v50 = HMValidateHandleNoSecure(v17, v15);
      if ( v50 )
      {
        if ( v50 == v49 )
          goto LABEL_32;
      }
    }
    goto LABEL_72;
  }
  v18 = *(_QWORD *)(v13 + 432);
  LOBYTE(v15) = 1;
  v19 = HMValidateHandleNoSecure(v17, v15);
  if ( !v19 || (v65 = v19 == v18, v20 = 1, !v65) )
    v20 = 0;
  if ( !v20 )
  {
LABEL_72:
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v51 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v51 = 0;
    }
    v52 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v51 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v66 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v67) = v51;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v67,
        v52,
        *(_QWORD *)(v66 + 69136),
        2,
        4,
        188,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v15) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v15) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v7 = 0;
    if ( (_BYTE)v15 || v7 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v7,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        189,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    return 0LL;
  }
LABEL_32:
  v10 = 1;
  if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v13) )
  {
    v21 = (struct CInputDest *)(v13 + 352);
    if ( !(unsigned __int8)CInputDest::DoesBelongToForeground(v13 + 352, 1LL)
      || !(unsigned __int8)CInputDest::DoesBelongToForegroundThread(v13 + 352) )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v22, v15, v23) + 18928) )
      {
        v28 = *(_QWORD *)(W32GetUserSessionState(v25, v24, v26) + 18928);
        if ( (*(_DWORD *)(v28 + 436) & 0x2000000) != 0 )
        {
          v31 = *(_QWORD *)(W32GetUserSessionState(v28, v27, v29) + 18928);
          if ( *(_QWORD *)(v31 + 120) )
          {
            v33 = *(_QWORD *)(W32GetUserSessionState(v31, v30, v32) + 18944);
            if ( v33 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v35, v34, v36) + 18928) + 120LL)
                                  + 16LL) )
            {
              if ( (unsigned __int8)CInputDest::DoesBelongToForeground(v21, 1LL) )
              {
                if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                  || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
                  || (v38 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
                {
                  v38 = 0;
                }
                v39 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                if ( v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v40 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v37, (unsigned int)&WPP_RECORDER_INITIALIZED);
                  LOBYTE(v41) = v38;
                  WPP_RECORDER_AND_TRACE_SF_(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v41,
                    v39,
                    *(_QWORD *)(v40 + 69136),
                    4,
                    4,
                    190,
                    (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
                }
                if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                  || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
                  || (LOBYTE(v37) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
                {
                  LOBYTE(v37) = 0;
                }
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  || (v42 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
                {
                  v42 = 0;
                }
                if ( (_BYTE)v37 || v42 )
                  WPP_RECORDER_AND_TRACE_SF_(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v37,
                    v42,
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    5,
                    4,
                    191,
                    (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
                return 1LL;
              }
            }
          }
        }
      }
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v71, v21);
      v68[0] = 0LL;
      v69 = 0;
      v70 = v9;
      CRefUnRefPointerMsgId::ReferenceAndThreadLock((CRefUnRefPointerMsgId *)v68, v44, v45);
      ExReleaseResourceAndLeaveCriticalRegion(*v70);
      v10 = ApiSetEditionSetForegroundCheckNoActivate(v21);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*v70);
      CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v68, v46);
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v71, v47);
    }
  }
LABEL_54:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v15) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v15) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v7 = 0;
  if ( (_BYTE)v15 || v7 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v7,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      192,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  return v10;
}
