/*
 * XREFs of ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1400686C8
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x140065B14 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x140066A10 (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x140108F24 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     ?GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z @ 0x140215150 (-GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004B9C0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004BEE0 (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x140066560 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?GenerateFrameMessages@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z @ 0x140066E3C (-GenerateFrameMessages@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     EtwTraceBeginPointerFrameMessageGeneration @ 0x140066EE0 (EtwTraceBeginPointerFrameMessageGeneration.c)
 *     EtwTraceEndPointerFrameMessageGeneration @ 0x140066F20 (EtwTraceEndPointerFrameMessageGeneration.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x140067018 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1400676F0 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x14006775C (-FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHK@Z @ 0x140067880 (-IsFrameReferenced@CTouchProcessor@@AEAAHK@Z.c)
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x140067994 (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x14006A300 (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x14006A8A0 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     IsTouchpadDevice @ 0x14006E7CC (IsTouchpadDevice.c)
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     IsPTPIVEnabled @ 0x14008A078 (IsPTPIVEnabled.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x14008A620 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     isRootPartition @ 0x14009C868 (isRootPartition.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z @ 0x1400CC07C (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z.c)
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1400D4970 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     EtwTraceDwmManipulationFrameRouted @ 0x14013ABA0 (EtwTraceDwmManipulationFrameRouted.c)
 *     EtwTraceDwmManipulationFrameStart @ 0x14013AC40 (EtwTraceDwmManipulationFrameStart.c)
 *     ?NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z @ 0x14013C590 (-NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z.c)
 *     ?GenerateFrameMessages@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x14014BFE8 (-GenerateFrameMessages@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1401A26D4 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1401A3748 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetEditionProcessPointerInputAsMouse @ 0x1401BEE30 (ApiSetEditionProcessPointerInputAsMouse.c)
 *     IsTouchIVEnabled @ 0x1401C3E68 (IsTouchIVEnabled.c)
 *     IsPenIVEnabled @ 0x1401C3EA8 (IsPenIVEnabled.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x140213C90 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1402153E0 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_LLL @ 0x140217490 (WPP_RECORDER_AND_TRACE_SF_LLL.c)
 */

__int64 __fastcall CTouchProcessor::GenerateMessagesCore(
        PERESOURCE *this,
        unsigned int a2,
        int a3,
        int a4,
        const struct CPointerInputFrame *a5)
{
  int v6; // r15d
  int v7; // r12d
  unsigned int v8; // ebx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r8d
  const struct CPointerInfoNode *v16; // rdi
  unsigned int v17; // r14d
  int MessagesForNode; // eax
  BOOL v19; // r14d
  __int64 v20; // r8
  __int64 v21; // rax
  int v22; // r15d
  int v23; // r12d
  unsigned int v24; // r13d
  int v25; // edi
  unsigned __int64 v26; // rbx
  int v27; // r14d
  CTouchProcessor *v28; // rcx
  CTouchProcessor *v29; // rcx
  struct CPointerMsgData *PrevMsgId; // rax
  int v31; // ecx
  int v32; // eax
  int v33; // r10d
  int v34; // r11d
  int v35; // r14d
  __int64 v36; // rdx
  int v37; // r8d
  unsigned int v38; // edi
  CTouchProcessor *v39; // r14
  int v40; // r12d
  unsigned int v41; // r13d
  LARGE_INTEGER v42; // rbx
  __int64 v43; // rdx
  int v44; // r8d
  int v45; // r9d
  __int64 v46; // r8
  const struct CPointerInfoNode *NodeForPointerPromotion; // rax
  __int64 v48; // rdx
  CTouchProcessor *v49; // rcx
  int v50; // r8d
  const struct CPointerInfoNode *v51; // rdi
  __int64 v53; // rcx
  unsigned __int16 v54; // bx
  struct tagTHREADINFO *v55; // rax
  int v56; // r8d
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rcx
  struct tagTHREADINFO *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  struct tagTHREADINFO *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  unsigned __int64 *v66; // rbx
  unsigned int v67; // edi
  CTouchProcessor *v68; // rcx
  char v69; // r15
  char v70; // r14
  int v71; // ebx
  __int64 v72; // rax
  int v73; // r8d
  int v74; // edx
  __int64 v75; // rax
  unsigned __int64 v76; // rbx
  unsigned int v77; // edi
  CTouchProcessor *v78; // rcx
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v80; // rax
  unsigned int v81; // edi
  unsigned __int64 *i; // rbx
  CTouchProcessor *v83; // rcx
  struct tagTHREADINFO *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  char v87; // r14
  unsigned __int64 *v88; // rbx
  unsigned int v89; // edi
  CTouchProcessor *v90; // rcx
  struct DEVICEINFO *v91; // rax
  struct CPTPProcessor *Processor; // rax
  int v93; // ebx
  __int64 UserSessionState; // rax
  int v95; // r8d
  int v96; // edx
  unsigned int v97; // [rsp+28h] [rbp-B1h]
  unsigned int v98; // [rsp+30h] [rbp-A9h]
  int v99; // [rsp+40h] [rbp-99h]
  int v100; // [rsp+68h] [rbp-71h]
  int v101; // [rsp+6Ch] [rbp-6Dh]
  int v102; // [rsp+74h] [rbp-65h]
  unsigned int v103; // [rsp+78h] [rbp-61h]
  unsigned __int64 v104; // [rsp+80h] [rbp-59h]
  __int64 v105; // [rsp+88h] [rbp-51h] BYREF
  const struct CPointerInputFrame *v106; // [rsp+90h] [rbp-49h]
  void (__fastcall *v107)(struct CPointerInputFrame *); // [rsp+98h] [rbp-41h]
  _BYTE v108[8]; // [rsp+A0h] [rbp-39h] BYREF
  PERESOURCE *v109; // [rsp+A8h] [rbp-31h]
  _QWORD v110[4]; // [rsp+B0h] [rbp-29h] BYREF
  char v111; // [rsp+D0h] [rbp-9h]
  PERESOURCE *v112; // [rsp+D8h] [rbp-1h]
  unsigned int v114; // [rsp+140h] [rbp+67h]
  int v115; // [rsp+148h] [rbp+6Fh]
  int v117; // [rsp+158h] [rbp+7Fh]

  v115 = a3;
  v114 = a2;
  v6 = a4;
  v7 = a2;
  v104 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v8 = 0;
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
      a2,
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      72,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  v109 = this + 4;
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2412LL);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, *((_DWORD *)a5 + 10)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2413LL);
  if ( !IsInputThread(v11, v10, v12) || !*(_QWORD *)(W32GetUserSessionState(v14, v13, v15) + 18872) )
  {
    if ( !v6 )
      goto LABEL_21;
    goto LABEL_14;
  }
  if ( v6 )
  {
LABEL_14:
    v16 = (const struct CPointerInfoNode *)*((_QWORD *)a5 + 30);
    v17 = 0;
    if ( *((_DWORD *)a5 + 12) )
    {
      do
      {
        MessagesForNode = CTouchProcessor::ShouldGenerateMessagesForNode((CTouchProcessor *)v14, a5, v16, v6);
        v14 = v8 + 1;
        if ( !MessagesForNode )
          v14 = v8;
        v16 = (const struct CPointerInfoNode *)((char *)v16 + 480);
        ++v17;
        v8 = v14;
      }
      while ( v17 < *((_DWORD *)a5 + 12) );
      v7 = v114;
    }
    EtwTraceDwmManipulationFrameRouted(*((unsigned int *)a5 + 10), v8);
    goto LABEL_21;
  }
  if ( CTouchProcessor::CountMTNodesReadyForRouting((CTouchProcessor *)v14, a5) )
  {
    EtwTraceDwmManipulationFrameStart(*((unsigned int *)a5 + 10), *((unsigned int *)a5 + 12));
    v63 = PtiCurrent(v62, v61);
    v105 = *((_QWORD *)v63 + 47);
    *((_QWORD *)v63 + 47) = &v105;
    v106 = a5;
    v107 = CTouchProcessor::DereferencePointerInputFrameAndMessageData;
    CTouchProcessor::ForwardInputToManipulationThread(this, a5, 0LL);
    v14 = (__int64)PtiCurrent(v65, v64);
    *(_QWORD *)(v14 + 376) = v105;
  }
LABEL_21:
  v19 = (*((_DWORD *)a5 + 57) & 1) == 0;
  if ( (*((_DWORD *)a5 + 57) & 1) != 0 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *(LARGE_INTEGER *)((char *)a5 + ((unsigned __int8)isChildPartition() != 0 ? 0x48 : 0) + 120) = PerformanceCounter;
    InputTraceLogging::TelemetryDebug::Pointer::GenerateFrameMessages(
      (const struct CPointerInputFrame *)((char *)a5 + 72),
      *((_BYTE *)a5 + 228) & 1);
  }
  else
  {
    if ( (*((_DWORD *)a5 + 57) & 8) != 0 )
    {
      v84 = PtiCurrent(v14, v13);
      v105 = *((_QWORD *)v84 + 47);
      *((_QWORD *)v84 + 47) = &v105;
      v107 = CTouchProcessor::DereferencePointerInputFrameAndMessageData;
      v106 = a5;
      CTouchProcessor::ProcessPrimaryDown((CTouchProcessor *)this, a5, v6 != 0);
      v14 = (__int64)PtiCurrent(v86, v85);
      *(_QWORD *)(v14 + 376) = v105;
    }
    if ( (*((_DWORD *)a5 + 57) & 2) != 0 && !v6 )
      goto LABEL_58;
  }
  if ( v19 )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)v108,
      "GenerateFrameMessages",
      0LL);
    EtwTraceBeginPointerFrameMessageGeneration(*((unsigned int *)a5 + 10), *((_DWORD *)a5 + 12), v20);
    if ( (unsigned __int8)isRootPartition()
      && ((unsigned __int8)IsTouchIVEnabled() || (unsigned __int8)IsPenIVEnabled() || (unsigned __int8)IsPTPIVEnabled()) )
    {
      CTouchProcessor::CheckandDeliverContainerInput((CTouchProcessor *)this, a5, v7, v6);
    }
    v21 = *((unsigned int *)a5 + 12);
    v102 = 0;
    v22 = 0;
    v100 = 0;
    v23 = 0;
    v117 = 0;
    v24 = 0;
    v25 = 0;
    v26 = *((_QWORD *)a5 + 30);
    v27 = 0;
    if ( (_DWORD)v21 )
    {
      while ( 1 )
      {
        v28 = (CTouchProcessor *)(*((_QWORD *)a5 + 30) + 480 * v21);
        if ( v26 >= (unsigned __int64)v28 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2566LL);
        if ( !CTouchProcessor::ShouldGenerateMessagesForNode(v28, a5, (const struct CPointerInfoNode *)v26, a4) )
          goto LABEL_76;
        PrevMsgId = CTouchProcessor::GetPrevMsgId(v29, *(_QWORD *)(v26 + 16));
        CTouchProcessor::ProcessAndUnreferencePreviousInput(
          (CTouchProcessor *)this,
          (const struct CPointerInfoNode *)v26,
          (unsigned __int64)PrevMsgId,
          v104,
          v114,
          v115);
        v31 = *(_DWORD *)v26;
        if ( (*(_DWORD *)v26 & 0x1000) != 0 )
          goto LABEL_76;
        if ( (v31 & 8) != 0 )
        {
          if ( __CFSHR__(v31, 7) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2588LL);
          ++v22;
        }
        else if ( __CFSHR__(v31, 7) )
        {
          ++v25;
        }
        v32 = *(_DWORD *)(v26 + 180);
        if ( (v32 & 1) != 0 )
          ++v23;
        if ( (v32 & 2) == 0 )
          ++v102;
        if ( (v32 & 0x10000) != 0 )
          break;
        if ( (v32 & 0x40000) == 0 )
        {
          if ( (v32 & 0x20000) == 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2613LL);
          v33 = v117;
          v34 = ++v100;
          goto LABEL_44;
        }
        v33 = ++v117;
LABEL_77:
        v34 = v100;
LABEL_44:
        v21 = *((unsigned int *)a5 + 12);
        v26 += 480LL;
        if ( ++v27 >= (unsigned int)v21 )
        {
          v35 = v25;
          v103 = v24;
          v100 = v34;
          v117 = v33;
          v101 = v25;
          if ( v22 )
            goto LABEL_88;
          v103 = v24;
          v100 = v34;
          v117 = v33;
          v101 = v25;
          if ( v25 || (v103 = v24, v100 = v34, v117 = v33, v101 = 0, v23) )
          {
LABEL_88:
            v66 = (unsigned __int64 *)*((_QWORD *)a5 + 30);
            v67 = 0;
            if ( (_DWORD)v21 )
            {
              do
              {
                v68 = (CTouchProcessor *)(*((_QWORD *)a5 + 30) + 480 * v21);
                if ( v66 >= (unsigned __int64 *)v68 )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2634LL);
                if ( (*(_DWORD *)v66 & 0x1000) == 0
                  && CTouchProcessor::ShouldGenerateMessagesForNode(v68, a5, (const struct CPointerInfoNode *)v66, a4) )
                {
                  CTouchProcessor::GenerateEnterMessages((CTouchProcessor *)this, a5, v67, v66[2], v104, v114, v115);
                }
                v21 = *((unsigned int *)a5 + 12);
                v66 += 60;
                ++v67;
              }
              while ( v67 < (unsigned int)v21 );
              v35 = v101;
              v24 = v103;
            }
            if ( v35 )
            {
              v88 = (unsigned __int64 *)*((_QWORD *)a5 + 30);
              v89 = 0;
              if ( (_DWORD)v21 )
              {
                do
                {
                  v90 = (CTouchProcessor *)(*((_QWORD *)a5 + 30) + 480 * v21);
                  if ( v88 >= (unsigned __int64 *)v90 )
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2663LL);
                  if ( (*(_DWORD *)v88 & 0x1000) == 0
                    && CTouchProcessor::ShouldGenerateMessagesForNode(v90, a5, (const struct CPointerInfoNode *)v88, a4) )
                  {
                    CTouchProcessor::GenerateRoutedToMessages(
                      (CTouchProcessor *)this,
                      a5,
                      v89,
                      v88[2],
                      v104,
                      v114,
                      v115);
                  }
                  v21 = *((unsigned int *)a5 + 12);
                  v88 += 60;
                  ++v89;
                }
                while ( v89 < (unsigned int)v21 );
                v24 = v103;
              }
            }
          }
          goto LABEL_50;
        }
      }
      ++v24;
LABEL_76:
      v33 = v117;
      goto LABEL_77;
    }
LABEL_50:
    if ( (unsigned __int8)IsTouchpadDevice(*((_QWORD *)a5 + 8)) )
    {
      if ( (unsigned __int8)isRootPartition() )
      {
        if ( (unsigned __int8)IsPTPIVEnabled() )
        {
          if ( v24 )
          {
            LOBYTE(v36) = 19;
            v91 = (struct DEVICEINFO *)HMValidateHandleNoSecure(*((_QWORD *)a5 + 8), v36);
            Processor = CPTPProcessorFactory::GetProcessor(v91);
            if ( Processor )
            {
              *((_DWORD *)Processor + 97) &= ~2u;
              *((_DWORD *)Processor + 96) = 0;
            }
          }
        }
      }
      v38 = 0;
      if ( (*((_DWORD *)a5 + 57) & 8) != 0 && v24 > 1 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v87 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v87 = 0;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          LOBYTE(v38) = 1;
        if ( v87 || (_BYTE)v38 )
        {
          v93 = *((_DWORD *)a5 + 10);
          UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v36, v37);
          LOBYTE(v95) = v38;
          v40 = v117;
          LOBYTE(v96) = v87;
          WPP_RECORDER_AND_TRACE_SF_LLL(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v96,
            v95,
            *(_QWORD *)(UserSessionState + 69136),
            v97,
            v98,
            73,
            v99,
            v93,
            v24,
            v117);
        }
        else
        {
          v40 = v117;
        }
        v6 = a4;
        v39 = (CTouchProcessor *)this;
        v38 = 0x2000;
        CTouchProcessor::GeneratePointerInputMessages((CTouchProcessor *)this, a5, v104, v114, v115, 0x2000u, 0, a4);
      }
      else
      {
        v39 = (CTouchProcessor *)this;
        v40 = v117;
        v6 = a4;
      }
      if ( !v100 && v24 && v40 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v69 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v69 = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (v70 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v70 = 0;
        }
        if ( v69 || v70 )
        {
          v71 = *((_DWORD *)a5 + 10);
          v72 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, v37);
          LOBYTE(v73) = v70;
          LOBYTE(v74) = v69;
          WPP_RECORDER_AND_TRACE_SF_LLL(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v74,
            v73,
            *(_QWORD *)(v72 + 69136),
            v97,
            v98,
            74,
            v99,
            v71,
            v24,
            v40);
        }
        v6 = a4;
        v39 = (CTouchProcessor *)this;
        CTouchProcessor::GeneratePointerInputMessages((CTouchProcessor *)this, a5, v104, v114, v115, 0x10000u, v38, a4);
        v38 |= 0x10000u;
      }
    }
    else
    {
      v40 = v117;
      v38 = 0;
      v6 = a4;
      v39 = (CTouchProcessor *)this;
    }
    v41 = v104;
    CTouchProcessor::GeneratePointerInputMessages(v39, a5, v104, v114, v115, 0, v38, v6);
    if ( v40 )
    {
      v75 = *((unsigned int *)a5 + 12);
      v76 = *((_QWORD *)a5 + 30);
      v77 = 0;
      if ( (_DWORD)v75 )
      {
        do
        {
          v78 = (CTouchProcessor *)(*((_QWORD *)a5 + 30) + 480 * v75);
          if ( v76 >= (unsigned __int64)v78 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2821LL);
          if ( (*(_DWORD *)v76 & 0x1000) == 0
            && CTouchProcessor::ShouldGenerateMessagesForNode(v78, a5, (const struct CPointerInfoNode *)v76, v6)
            && (*(_DWORD *)(v76 + 180) & 0x40000) != 0 )
          {
            CTouchProcessor::ProcessRoutedAwayList(
              v39,
              *(_WORD *)(v76 + 172),
              1,
              a5,
              v77,
              (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          }
          v75 = *((unsigned int *)a5 + 12);
          v76 += 480LL;
          ++v77;
        }
        while ( v77 < (unsigned int)v75 );
        v41 = v104;
      }
    }
    if ( v102 )
    {
      v80 = *((unsigned int *)a5 + 12);
      v81 = 0;
      for ( i = (unsigned __int64 *)*((_QWORD *)a5 + 30); v81 < (unsigned int)v80; ++v81 )
      {
        v83 = (CTouchProcessor *)(*((_QWORD *)a5 + 30) + 480 * v80);
        if ( i >= (unsigned __int64 *)v83 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2850LL);
        if ( CTouchProcessor::ShouldGenerateMessagesForNode(v83, a5, (const struct CPointerInfoNode *)i, v6) )
          CTouchProcessor::GenerateDepartureMessage(v39, a5, v81, i[2], v41, v114, v115);
        v80 = *((unsigned int *)a5 + 12);
        i += 60;
      }
    }
    v42 = KeQueryPerformanceCounter(0LL);
    *(LARGE_INTEGER *)((char *)a5 + ((unsigned __int8)isChildPartition() != 0 ? 0x48 : 0) + 120) = v42;
    InputTraceLogging::TelemetryDebug::Pointer::GenerateFrameMessages(
      (const struct CPointerInputFrame *)((char *)a5 + 72),
      0);
    InputTraceLogging::Pointer::GenerateFrameMessages(a5, v43, v44, v45);
    EtwTraceEndPointerFrameMessageGeneration(*((unsigned int *)a5 + 10), *((_DWORD *)a5 + 12), v46);
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v108);
    v7 = v114;
  }
LABEL_58:
  NodeForPointerPromotion = CTouchProcessor::FindNodeForPointerPromotion((CTouchProcessor *)v14, a5);
  v51 = NodeForPointerPromotion;
  if ( NodeForPointerPromotion
    && (unsigned int)CTouchProcessor::NodeMatchesMTGeneration(v49, NodeForPointerPromotion, v6) )
  {
    v53 = (*(_DWORD *)v51 & 0x8000u) >> 13;
    v54 = (v115 != 0 ? 2 : 0) | (v7 != 0) | v53 | ((*(_DWORD *)v51 & 0x10000u) >> 13) | ((*(_DWORD *)v51 & 0x40u) >> 2);
    if ( *((_DWORD *)v51 + 44) != *((_DWORD *)a5 + 10) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2892LL);
    v55 = PtiCurrent(v53, v48);
    v110[0] = 0LL;
    v111 = 0;
    v105 = *((_QWORD *)v55 + 47);
    *((_QWORD *)v55 + 47) = &v105;
    v107 = CTouchProcessor::DereferencePointerInputFrameAndMessageData;
    v112 = v109;
    v106 = a5;
    CRefUnRefPointerMsgId::ReferenceAndThreadLock((CRefUnRefPointerMsgId *)v110, (int)v55, v56);
    ExReleaseResourceAndLeaveCriticalRegion(*v112);
    ApiSetEditionProcessPointerInputAsMouse((char *)v51 + 168, *((unsigned __int16 *)v51 + 80), v54);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*v112);
    CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v110, v57);
    v60 = PtiCurrent(v59, v58);
    *((_QWORD *)v60 + 47) = v105;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v48) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v48) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v50) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v50) = 0;
  }
  if ( (_BYTE)v48 || (_BYTE)v50 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v48,
      v50,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      75,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  return 1LL;
}
