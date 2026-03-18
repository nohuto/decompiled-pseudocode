/*
 * XREFs of ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x140208A20
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x14018ADE0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14003B014 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C54D4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x14010B3E8 (-CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z.c)
 *     ?RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x14010F174 (-RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9D98 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x140200550 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x140207F34 (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@Z @ 0x140208F90 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14020C628 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 */

void __fastcall CTouchProcessor::ProcessTouchpadInput(PERESOURCE *this, struct CPointerInputFrame *a2, int a3, int a4)
{
  int v8; // edx
  int v9; // r8d
  char v10; // bl
  struct RIMCOMPLETEFRAME *v11; // r8
  const struct CPointerInputFrame *v12; // rax
  __int64 v13; // rdx
  CTouchProcessor *v14; // rcx
  const struct CPointerInputFrame *v15; // rdi
  char v16; // di
  bool v17; // bp
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  _QWORD *v21; // rcx
  void *v22; // r8
  __int16 v23; // [rsp+30h] [rbp-78h]
  __int64 *v24; // [rsp+40h] [rbp-68h] BYREF
  PERESOURCE *v25[7]; // [rsp+48h] [rbp-60h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v25, this + 4, 0LL);
  v10 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
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
      14,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v24, "ProcessTouchpadGesture", 0LL);
  CTouchProcessor::CommitInputFrame((CTouchProcessor *)this, a2);
  v12 = CTouchProcessor::ReferenceInputFrame((CTouchProcessor *)this, a2, v11, 0);
  v15 = v12;
  if ( v12 )
  {
    if ( *((_DWORD *)v12 + 12) <= *((_DWORD *)v12 + 13) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 897);
    if ( !*((_QWORD *)v15 + 30) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 898);
    if ( *((_DWORD *)v15 + 12) == 1 && (*((_DWORD *)v15 + 57) & 8) != 0 )
    {
      v14 = (CTouchProcessor *)*((_QWORD *)v15 + 30);
      if ( (*(_DWORD *)v14 & 0x400) != 0 && (*((_DWORD *)v14 + 45) & 1) == 0 )
        CTouchProcessor::ProcessPointerInfoNodeEnterLeave(this, v15);
    }
    CTouchProcessor::RemoveUndispatchedFrameFromThreadFrameList(v14, v15);
    CTouchProcessor::GenerateMessagesCore(this, a3, a4, 0, v15);
    CTouchProcessor::UnreferenceFrame(this, v15);
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v13) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v10 = 0;
    if ( (_BYTE)v13 || v10 )
    {
      v22 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
      v23 = 17;
      goto LABEL_48;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v16 = 0;
    }
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
      LOBYTE(v19) = v17;
      LOBYTE(v20) = v16;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v19,
        *(_QWORD *)(UserSessionState + 69144),
        2,
        4,
        15,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v13) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v10 = 0;
    if ( (_BYTE)v13 || v10 )
    {
      v22 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
      v23 = 16;
LABEL_48:
      LOBYTE(v22) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        v21[3],
        v13,
        (_DWORD)v22,
        v21[8],
        5,
        4,
        v23,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v24);
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v25);
}
