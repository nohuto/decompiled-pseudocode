/*
 * XREFs of ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x140188830
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x14018C130 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14003B014 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x140060814 (-ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1400C3A38 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C54D4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ?AddUndispatchedFrameToThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1401105B8 (-AddUndispatchedFrameToThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140186278 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9D98 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?BufferInDelayZone@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z @ 0x1401FAA4C (-BufferInDelayZone@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?CheckAndSendFindMyPenWnf@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1401FB0DC (-CheckAndSendFindMyPenWnf@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x140207C38 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 *     ?ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@@@Z @ 0x140208F4C (-ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall CTouchProcessor::ProcessInput(
        CTouchProcessor *this,
        void *a2,
        char *a3,
        unsigned int a4,
        int a5,
        int a6,
        bool *a7)
{
  int v7; // esi
  __int64 v8; // rbx
  int v11; // edx
  int v12; // r8d
  bool *v13; // rax
  char v14; // di
  __int64 v15; // r13
  char *v16; // r12
  char *v17; // rbp
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int (*v21)(void); // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 (__fastcall *v24)(char *); // rax
  bool v25; // bl
  bool v26; // si
  __int64 UserSessionState; // rax
  int v28; // edx
  int v29; // r8d
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbx
  bool v36; // zf
  _QWORD *v37; // rax
  struct CPointerInputFrame *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  const struct CPointerInputFrame *v41; // rbx
  CTouchProcessor *v42; // rcx
  int v43; // edx
  void *v44; // r8
  __int16 v45; // [rsp+30h] [rbp-78h]
  PERESOURCE *v46[13]; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v47; // [rsp+B0h] [rbp+8h] BYREF
  int v48; // [rsp+C8h] [rbp+20h]

  v7 = (int)a2;
  v8 = a4;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v46,
    (CTouchProcessor *)((char *)this + 32),
    0LL);
  v13 = a7;
  *((_BYTE *)this + 40) = 0;
  *v13 = 0;
  v14 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v11) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v11) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v12) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v12) = 0;
  }
  if ( (_BYTE)v11 || (_BYTE)v12 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v12,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      10,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  v15 = HMValidateHandleNoSecure(v7, 19);
  v16 = &a3[v8];
  while ( a3 + 240 <= v16 )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v47, "ProcessTouchOrPenInput", 0LL);
    v17 = a3;
    a3 += *(unsigned int *)a3;
    v18 = (__int64)v17;
    v21 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v20, v19) + 48) + 5944LL);
    if ( v21 && v21() >= 0 )
    {
      v24 = *(__int64 (__fastcall **)(char *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v23, v22) + 48) + 5952LL);
      if ( !v24 )
        goto LABEL_17;
      v18 = v24(v17);
    }
    if ( !v18 )
    {
LABEL_17:
      v25 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v25 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_42;
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
      v45 = 11;
      goto LABEL_25;
    }
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v34 = isChildPartition(v32, v31) ? 0x48 : 0;
    *(LARGE_INTEGER *)&v17[v34 + 72] = PerformanceCounter;
    if ( !v15 )
    {
      v48 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 813LL);
    }
    v35 = *(_QWORD *)(v15 + 2272);
    v36 = !isChildPartition(v34, v33);
    v37 = v17 + 64;
    if ( !v36 )
      v37 = v17 + 136;
    *v37 = v35;
    InputTraceLogging::TelemetryDebug::Pointer::ProcessInput((const struct TELEMETRY_POINTER_FRAME_TIMES *)(v17 + 48));
    v38 = CTouchProcessor::CommitRimCompleteFrame((PERESOURCE *)this, (struct RIMCOMPLETEFRAME *)v17, 0, 0);
    v41 = v38;
    if ( v38 )
    {
      CTouchProcessor::ReferenceFrameInt(v40, v38);
      CTouchProcessor::AddUndispatchedFrameToThreadFrameList(v42, v41);
      CTouchProcessor::CheckAndSendFindMyPenWnf(this, v41);
      if ( CTouchProcessor::ProcessDelayZonePalmRejection(this, v41) )
        CTouchProcessor::ProcessInputPostDelayZonePalmRejection(this, v41, (struct RIMCOMPLETEFRAME *)v17);
      else
        InputTraceLogging::Pointer::BufferInDelayZone(v41);
      goto LABEL_42;
    }
    v25 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v25 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v39);
    v45 = 12;
LABEL_25:
    LOBYTE(v29) = v26;
    LOBYTE(v28) = v25;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v28,
      v29,
      *(_QWORD *)(UserSessionState + 69144),
      2,
      4,
      v45,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
LABEL_42:
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v47);
  }
  v43 = (int)a7;
  *a7 = *((_BYTE *)this + 40);
  if ( a3 != v16 )
  {
    v48 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 863LL);
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v43) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v43) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v14 = 0;
  if ( (_BYTE)v43 || v14 )
  {
    v44 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
    LOBYTE(v44) = v14;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v43,
      (_DWORD)v44,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      13,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v46);
}
