/*
 * XREFs of ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z @ 0x140207FFC
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x140200550 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x14009F128 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1400B7D80 (-DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1400B9628 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1400C45CC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1400C4788 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x1400C486C (-IsPrimaryDown@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1400DEC04 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     ApiSetEditionSetForegroundCheckNoActivate @ 0x140196A48 (ApiSetEditionSetForegroundCheckNoActivate.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1401F6D74 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1401F701C (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9E38 (--0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHK@Z @ 0x140204CB8 (-IsFrameReferenced@CTouchProcessor@@AEAAHK@Z.c)
 */

__int64 __fastcall CTouchProcessor::ProcessPrimaryDown(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        unsigned __int8 a3)
{
  int v3; // r15d
  const struct CPointerInputFrame *v4; // rsi
  char v6; // di
  char v7; // r8
  struct CEResourceLock *v8; // r12
  unsigned int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // ebp
  unsigned __int64 v13; // rbx
  CTouchProcessor *v14; // rcx
  __int64 v15; // rax
  char v16; // bl
  bool v17; // si
  __int64 UserSessionState; // rax
  int v19; // edx
  __int64 v20; // rdx
  char v21; // bl
  bool v22; // si
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rdx
  char v26; // bl
  bool v27; // si
  __int64 v28; // rax
  int v29; // edx
  CInputDest *v30; // rsi
  __int64 v31; // rdx
  char v32; // bl
  bool v33; // si
  __int64 v34; // rax
  int v35; // edx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  char v48; // bl
  bool v49; // si
  __int64 v50; // rax
  int v51; // edx
  char v52; // r8
  __int64 v53; // rdx
  PERESOURCE *v54[6]; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v55[120]; // [rsp+70h] [rbp-78h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v7 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v7 = 0;
  }
  if ( (_BYTE)a2 || v7 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      v7,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      181,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  v8 = (struct CEResourceLock *)(this + 4);
  v9 = 0;
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6733);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, *((_DWORD *)v4 + 10)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6734);
  if ( (*((_DWORD *)v4 + 57) & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6735);
  v11 = *((unsigned int *)v4 + 12);
  v12 = 0;
  v13 = *((_QWORD *)v4 + 30);
  if ( (_DWORD)v11 )
  {
    do
    {
      if ( v13 >= *((_QWORD *)v4 + 30) + 480 * v11 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6747);
      if ( *(_QWORD *)(v13 + 16)
        && (unsigned int)CPointerInfoNode::IsPrimaryDown((CPointerInfoNode *)v13)
        && (unsigned int)CTouchProcessor::ShouldGenerateMessagesForNode(
                           v14,
                           v4,
                           (const struct CPointerInfoNode *)v13,
                           v3) )
      {
        break;
      }
      v11 = *((unsigned int *)v4 + 12);
      v13 += 480LL;
      ++v12;
    }
    while ( v12 < (unsigned int)v11 );
    v9 = 0;
  }
  v15 = *((unsigned int *)v4 + 12);
  if ( v12 == (_DWORD)v15 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v16 = 0;
    }
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
      LOBYTE(v19) = v16;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v17,
        *(_QWORD *)(UserSessionState + 69144),
        4,
        4,
        182,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v6 = 0;
    if ( (_BYTE)v10 || v6 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v6,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        183,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    return 0LL;
  }
  if ( v13 >= *((_QWORD *)v4 + 30) + 480 * v15 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6783);
  if ( !(unsigned int)CPointerInfoNode::IsPrimaryDown((CPointerInfoNode *)v13) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6784);
  if ( !*(_QWORD *)(v13 + 16) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6785);
  if ( (*(_DWORD *)v13 & 0x1000) != 0 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v21 = 0;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
      LOBYTE(v24) = v21;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v24,
        v22,
        *(_QWORD *)(v23 + 69144),
        2,
        4,
        184,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v20) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v20) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v6 = 0;
    if ( (_BYTE)v20 || v6 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v6,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        185,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    return 0LL;
  }
  if ( *(_DWORD *)(v13 + 444) )
  {
    v25 = *(_QWORD *)(v13 + 192);
    if ( !v25 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v26 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v26 = 0;
      }
      v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v28 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        LOBYTE(v29) = v26;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v29,
          v27,
          *(_QWORD *)(v28 + 69144),
          2,
          4,
          186,
          (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      }
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v25) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v25) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v6 = 0;
      if ( (_BYTE)v25 || v6 )
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v25,
          v6,
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5,
          4,
          187,
          (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      return 0LL;
    }
    v30 = (CInputDest *)(v13 + 352);
    if ( !CInputDest::IsEqualByWindowHandle(v13 + 352, v25, 1) )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v32 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v32 = 0;
      }
      v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v34 = W32GetUserSessionState(WPP_GLOBAL_Control, v31);
        LOBYTE(v35) = v32;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v35,
          v33,
          *(_QWORD *)(v34 + 69144),
          2,
          4,
          188,
          (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      }
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v31) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v31) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v6 = 0;
      if ( (_BYTE)v31 || v6 )
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v31,
          v6,
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5,
          4,
          189,
          (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      return 0LL;
    }
    v9 = 1;
    if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v13) )
    {
      if ( !CInputDest::DoesBelongToForeground((CInputDest *)(v13 + 352), 1LL)
        || !CInputDest::DoesBelongToForegroundThread((CInputDest *)(v13 + 352), v20) )
      {
        if ( *(_QWORD *)(W32GetUserSessionState(v37, v20) + 18888) )
        {
          v41 = *(_QWORD *)(W32GetUserSessionState(v39, v38) + 18888);
          if ( (*(_DWORD *)(v41 + 412) & 0x2000000) != 0 )
          {
            v43 = *(_QWORD *)(W32GetUserSessionState(v41, v40) + 18888);
            if ( *(_QWORD *)(v43 + 120) )
            {
              v44 = *(_QWORD *)(W32GetUserSessionState(v43, v42) + 18904);
              if ( v44 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v46, v45) + 18888) + 120LL) + 16LL)
                && CInputDest::DoesBelongToForeground(v30, 1LL) )
              {
                if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
                  || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
                  || (v48 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
                {
                  v48 = 0;
                }
                v49 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                if ( v48 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v50 = W32GetUserSessionState(WPP_GLOBAL_Control, v47);
                  LOBYTE(v51) = v48;
                  WPP_RECORDER_AND_TRACE_SF_(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v51,
                    v49,
                    *(_QWORD *)(v50 + 69144),
                    4,
                    4,
                    190,
                    (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
                }
                if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
                  || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
                  || (LOBYTE(v47) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
                {
                  LOBYTE(v47) = 0;
                }
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  || (v52 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
                {
                  v52 = 0;
                }
                if ( (_BYTE)v47 || v52 )
                  WPP_RECORDER_AND_TRACE_SF_(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v47,
                    v52,
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    5,
                    4,
                    191,
                    (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
                return 1LL;
              }
            }
          }
        }
        CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v55, v30);
        CInpUnlockGuardExclusive::CInpUnlockGuardExclusive((CInpUnlockGuardExclusive *)v54, v8, 0LL);
        v9 = ApiSetEditionSetForegroundCheckNoActivate((__int64)v30, v53);
        CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v54);
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v55);
      }
    }
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v20) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v20) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v6 = 0;
  if ( (_BYTE)v20 || v6 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v20,
      v6,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      192,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  return v9;
}
