/*
 * XREFs of ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x140060B24
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1400D3070 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004B9C0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004BEE0 (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ApiSetSanitizeRIMCOMPLETEFRAME @ 0x140060FF4 (ApiSetSanitizeRIMCOMPLETEFRAME.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140061060 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x140061F18 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 *     ?ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@@@Z @ 0x140062B2C (-ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@.c)
 *     ?AddUndispatchedFrameToThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x140062B74 (-AddUndispatchedFrameToThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?CheckAndSendFindMyPenWnf@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x140062BB4 (-CheckAndSendFindMyPenWnf@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x140062CC0 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1400D2D18 (-ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?BufferInDelayZone@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z @ 0x1401C59A8 (-BufferInDelayZone@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z.c)
 */

void __fastcall CTouchProcessor::ProcessInput(
        PERESOURCE *this,
        void *a2,
        LARGE_INTEGER *a3,
        unsigned int a4,
        int a5,
        int a6,
        bool *a7)
{
  __int64 v8; // rbx
  int v11; // edx
  int v12; // r8d
  __int64 v13; // rdx
  int v14; // r8d
  bool *v15; // rax
  char v16; // di
  char *v17; // r12
  bool i; // cc
  bool *v19; // rdx
  LARGE_INTEGER *v20; // r14
  LARGE_INTEGER *v21; // rcx
  LARGE_INTEGER *v22; // rbp
  int v23; // edx
  int v24; // r8d
  LARGE_INTEGER PerformanceCounter; // rbx
  char v26; // al
  LARGE_INTEGER *v27; // rdx
  LONGLONG v28; // rbx
  bool v29; // zf
  LARGE_INTEGER *v30; // rax
  struct CPointerInputFrame *v31; // rax
  int v32; // edx
  __int64 v33; // rcx
  int v34; // r8d
  const struct CPointerInputFrame *v35; // rbx
  CTouchProcessor *v36; // rcx
  bool v37; // bl
  bool v38; // si
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  char v42; // bl
  bool v43; // si
  __int64 UserSessionState; // rax
  int v45; // r8d
  int v46; // edx
  void *v47; // r8
  _QWORD v48[4]; // [rsp+40h] [rbp-68h] BYREF
  char v49; // [rsp+60h] [rbp-48h]
  PERESOURCE *v50; // [rsp+68h] [rbp-40h]
  __int64 v51; // [rsp+B0h] [rbp+8h]
  char v52; // [rsp+C0h] [rbp+18h] BYREF
  int v53; // [rsp+C8h] [rbp+20h]

  v8 = a4;
  v48[0] = 0LL;
  v49 = 0;
  v50 = this + 4;
  ExEnterCriticalRegionAndAcquireResourceExclusive(this[4]);
  CRefUnRefPointerMsgId::ReferenceAndThreadLock((CRefUnRefPointerMsgId *)v48, v11, v12);
  v15 = a7;
  *((_BYTE *)this + 40) = 0;
  *v15 = 0;
  v16 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v13) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v13) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v14) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v14) = 0;
  }
  if ( (_BYTE)v13 || (_BYTE)v14 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v14,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      10,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  LOBYTE(v13) = 19;
  v51 = HMValidateHandleNoSecure(a2, v13);
  v17 = (char *)a3 + v8;
  for ( i = &a3[30] <= (LARGE_INTEGER *)((char *)a3 + v8); i; i = &a3[30] <= (LARGE_INTEGER *)v17 )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)&v52,
      "ProcessTouchOrPenInput",
      0LL);
    v20 = a3;
    v21 = a3;
    v22 = a3;
    a3 = (LARGE_INTEGER *)((char *)a3 + a3->LowPart);
    if ( ApiSetSanitizeRIMCOMPLETEFRAME(v21) )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v26 = isChildPartition();
      v27 = v20 + 9;
      if ( v26 )
        v27 = v20 + 18;
      *v27 = PerformanceCounter;
      if ( !v51 )
      {
        v53 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 811LL);
      }
      v28 = *(_QWORD *)(v51 + 2264);
      v29 = (unsigned __int8)isChildPartition() == 0;
      v30 = v22 + 8;
      if ( !v29 )
        v30 = v22 + 17;
      v30->QuadPart = v28;
      InputTraceLogging::TelemetryDebug::Pointer::ProcessInput((const struct TELEMETRY_POINTER_FRAME_TIMES *)&v22[6]);
      v31 = CTouchProcessor::CommitRimCompleteFrame((CTouchProcessor *)this, (struct RIMCOMPLETEFRAME *)v22, 0, 0);
      v35 = v31;
      if ( v31 )
      {
        CTouchProcessor::ReferenceFrameInt(v33, v31);
        CTouchProcessor::AddUndispatchedFrameToThreadFrameList(v36, v35);
        CTouchProcessor::CheckAndSendFindMyPenWnf((CTouchProcessor *)this, v35);
        if ( CTouchProcessor::ProcessDelayZonePalmRejection((CTouchProcessor *)this, v35) )
          CTouchProcessor::ProcessInputPostDelayZonePalmRejection(
            (CTouchProcessor *)this,
            v35,
            (struct RIMCOMPLETEFRAME *)v22);
        else
          InputTraceLogging::Pointer::BufferInDelayZone(v35);
      }
      else
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v42 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v42 = 0;
        }
        v43 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v32, v34);
          LOBYTE(v45) = v43;
          LOBYTE(v46) = v42;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v46,
            v45,
            *(_QWORD *)(UserSessionState + 69136),
            2,
            4,
            12,
            (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
        }
      }
    }
    else
    {
      v37 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v39 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v23, v24);
        LOBYTE(v40) = v38;
        LOBYTE(v41) = v37;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v41,
          v40,
          *(_QWORD *)(v39 + 69136),
          2,
          4,
          11,
          (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      }
    }
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v52);
  }
  v19 = a7;
  *a7 = *((_BYTE *)this + 40);
  if ( a3 != (LARGE_INTEGER *)v17 )
  {
    v53 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 861LL);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v19) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v19) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v16 = 0;
  if ( (_BYTE)v19 || v16 )
  {
    v47 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
    LOBYTE(v47) = v16;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)v19,
      (_DWORD)v47,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      13,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  }
  CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v48, (__int64)v19);
  ExReleaseResourceAndLeaveCriticalRegion(*v50);
}
