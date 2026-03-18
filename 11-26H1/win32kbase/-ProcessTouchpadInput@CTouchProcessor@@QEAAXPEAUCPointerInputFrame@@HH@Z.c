/*
 * XREFs of ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x140066A10
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1401AFE10 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004B9C0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004BEE0 (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14004C5B4 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x140066770 (-CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@@Z @ 0x140066860 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@@Z.c)
 *     ?RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x140066E08 (-RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1400686C8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x14017406C (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x14021658C (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 */

void __fastcall CTouchProcessor::ProcessTouchpadInput(PERESOURCE *this, struct CPointerInputFrame *a2, int a3, int a4)
{
  int v8; // edx
  int v9; // r8d
  int v10; // edx
  int v11; // r8d
  char v12; // bl
  struct RIMCOMPLETEFRAME *v13; // r8
  const struct CPointerInputFrame *v14; // rax
  int v15; // edx
  CTouchProcessor *v16; // rcx
  unsigned int v17; // r8d
  __int64 v18; // rdi
  int v19; // edx
  __int64 v20; // rdx
  char v21; // di
  bool v22; // bp
  __int64 UserSessionState; // rax
  int v24; // r8d
  int v25; // edx
  void *v26; // r8
  void *v27; // r8
  _BYTE v28[8]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v29[4]; // [rsp+48h] [rbp-60h] BYREF
  char v30; // [rsp+68h] [rbp-40h]
  PERESOURCE *v31; // [rsp+70h] [rbp-38h]

  v29[0] = 0LL;
  v30 = 0;
  v31 = this + 4;
  ExEnterCriticalRegionAndAcquireResourceExclusive(this[4]);
  CRefUnRefPointerMsgId::ReferenceAndThreadLock((CRefUnRefPointerMsgId *)v29, v8, v9);
  v12 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v10) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v11) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v11) = 0;
  }
  if ( (_BYTE)v10 || (_BYTE)v11 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v11,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      14,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v28,
    "ProcessTouchpadGesture",
    0LL);
  CTouchProcessor::CommitInputFrame((CTouchProcessor *)this, a2);
  v14 = CTouchProcessor::ReferenceInputFrame(this, a2, v13);
  v18 = (__int64)v14;
  if ( v14 )
  {
    if ( *((_DWORD *)v14 + 12) <= *((_DWORD *)v14 + 13) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 895LL);
    if ( !*(_QWORD *)(v18 + 240) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 896LL);
    if ( *(_DWORD *)(v18 + 48) == 1 && (*(_DWORD *)(v18 + 228) & 8) != 0 )
    {
      v16 = *(CTouchProcessor **)(v18 + 240);
      if ( (*(_DWORD *)v16 & 0x400) != 0 && (*((_DWORD *)v16 + 45) & 1) == 0 )
        CTouchProcessor::ProcessPointerInfoNodeEnterLeave(
          (CTouchProcessor *)this,
          (const struct CPointerInputFrame *)v18,
          v17);
    }
    CTouchProcessor::RemoveUndispatchedFrameFromThreadFrameList(v16, (const struct CPointerInputFrame *)v18);
    CTouchProcessor::GenerateMessagesCore((CTouchProcessor *)this, a3, a4, 0, (const struct CPointerInputFrame *)v18);
    CTouchProcessor::UnreferenceFrame((__int64)this, v18);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v19) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v19) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v12 = 0;
    if ( (_BYTE)v19 || v12 )
    {
      v27 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
      LOBYTE(v27) = v12;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        (_DWORD)v27,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        17,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v28);
    CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v29, v20);
    ExReleaseResourceAndLeaveCriticalRegion(*v31);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v21 = 0;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, v17);
      LOBYTE(v24) = v22;
      LOBYTE(v25) = v21;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        v24,
        *(_QWORD *)(UserSessionState + 69136),
        2,
        4,
        15,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v15) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v15) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v12 = 0;
    if ( (_BYTE)v15 || v12 )
    {
      v26 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
      LOBYTE(v26) = v12;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        (_DWORD)v26,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        16,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v28);
    CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v29);
  }
}
