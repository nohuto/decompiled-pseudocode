/*
 * XREFs of ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x140200550
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x14018900C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1401FE898 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z @ 0x140200300 (-GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x140208A20 (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14003B014 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     isRootPartition @ 0x14005E028 (isRootPartition.c)
 *     IsPTPIVEnabled @ 0x14005E094 (IsPTPIVEnabled.c)
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     ?GenerateFrameMessages@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x140061230 (-GenerateFrameMessages@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_.c)
 *     IsTouchpadDevice @ 0x14006721C (IsTouchpadDevice.c)
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1400C45CC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1400DEBBC (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1400DEC04 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     ?NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z @ 0x1400DF0CC (-NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z.c)
 *     EtwTraceBeginPointerFrameMessageGeneration @ 0x1400ECFD0 (EtwTraceBeginPointerFrameMessageGeneration.c)
 *     EtwTraceEndPointerFrameMessageGeneration @ 0x1400ED050 (EtwTraceEndPointerFrameMessageGeneration.c)
 *     EtwTraceDwmManipulationFrameRouted @ 0x1400F2830 (EtwTraceDwmManipulationFrameRouted.c)
 *     EtwTraceDwmManipulationFrameStart @ 0x1400F28D0 (EtwTraceDwmManipulationFrameStart.c)
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x140105A80 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     ?GenerateFrameMessages@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z @ 0x14011E35C (-GenerateFrameMessages@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     EditionProcessPointerInputAsMouse @ 0x140127C90 (EditionProcessPointerInputAsMouse.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x140187020 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1401876C8 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x140187960 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9E38 (--0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1401FB1F0 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1401FF270 (-FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x14020112C (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x140201C90 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1402042A8 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHK@Z @ 0x140204CB8 (-IsFrameReferenced@CTouchProcessor@@AEAAHK@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x14020729C (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z @ 0x140207FFC (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1402088EC (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_LLL @ 0x14020E050 (WPP_RECORDER_AND_TRACE_SF_LLL.c)
 *     IsPenIVEnabled @ 0x14021B7A4 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x14021B7FC (IsTouchIVEnabled.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CTouchProcessor::GenerateMessagesCore(
        PERESOURCE *this,
        int a2,
        int a3,
        int a4,
        const struct CPointerInputFrame *a5)
{
  int v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  CTouchProcessor *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r8
  struct tagTHREADINFO *v15; // rax
  unsigned int v16; // ebx
  unsigned int v17; // r14d
  const struct CPointerInfoNode *i; // rdi
  int MessagesForNode; // eax
  unsigned __int64 v20; // rcx
  BOOL v21; // r14d
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  BOOL v25; // edx
  struct tagTHREADINFO *v26; // rax
  unsigned int *v27; // rbx
  __int64 v28; // r8
  unsigned int *v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // ecx
  __int64 **v33; // r15
  int v34; // eax
  int v35; // r13d
  __int64 v36; // rdx
  unsigned __int64 v37; // rdi
  unsigned int v38; // r14d
  unsigned int v39; // ebx
  CTouchProcessor *v40; // rcx
  CTouchProcessor *v41; // rcx
  unsigned __int64 PrevMsgId; // rax
  int v43; // ecx
  int v44; // eax
  __int64 v45; // rax
  unsigned __int64 **v46; // r14
  __int64 *v47; // rbx
  unsigned int v48; // edi
  CTouchProcessor *v49; // rcx
  unsigned __int64 **v50; // rdi
  unsigned __int64 *v51; // rbx
  unsigned int v52; // r15d
  CTouchProcessor *v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  unsigned int v57; // r12d
  struct DEVICEINFO *v58; // rax
  struct CPTPProcessor *Processor; // rax
  unsigned int v60; // r14d
  char v61; // di
  int v62; // ebx
  __int64 UserSessionState; // rax
  int v64; // r8d
  int v65; // r15d
  int v66; // edx
  int v67; // r13d
  char v68; // r15
  char v69; // di
  int v70; // ebx
  __int64 v71; // rax
  int v72; // r8d
  int v73; // edx
  unsigned int v74; // r15d
  unsigned __int64 **v75; // r14
  __int64 v76; // rax
  unsigned int v77; // r15d
  unsigned __int64 v78; // rbx
  CTouchProcessor *v79; // rcx
  __int64 v80; // rax
  unsigned int v81; // edi
  unsigned __int64 *j; // rbx
  CTouchProcessor *v83; // rcx
  LARGE_INTEGER v84; // rbx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // r8
  const struct CPointerInfoNode *NodeForPointerPromotion; // rax
  _DWORD *v92; // rdx
  CTouchProcessor *v93; // rcx
  int v94; // r8d
  const struct CPointerInfoNode *v95; // rdi
  unsigned __int16 v96; // bx
  struct tagTHREADINFO *v97; // rax
  struct CEResourceLock *v98; // rdx
  unsigned __int16 v99; // si
  __int64 v100; // rdx
  __int64 v101; // rcx
  int (*v102)(void); // rax
  unsigned int v104; // [rsp+28h] [rbp-B1h]
  unsigned int v105; // [rsp+30h] [rbp-A9h]
  int v106; // [rsp+40h] [rbp-99h]
  unsigned int v107; // [rsp+70h] [rbp-69h]
  int v108; // [rsp+74h] [rbp-65h]
  unsigned __int64 v109; // [rsp+78h] [rbp-61h]
  int v110; // [rsp+80h] [rbp-59h]
  int v111; // [rsp+84h] [rbp-55h]
  __int64 v112; // [rsp+90h] [rbp-49h] BYREF
  const struct CPointerInputFrame *v113; // [rsp+98h] [rbp-41h]
  void (__fastcall *v114)(CTouchProcessor **); // [rsp+A0h] [rbp-39h]
  __int64 *v115; // [rsp+A8h] [rbp-31h] BYREF
  struct CEResourceLock *v116; // [rsp+B0h] [rbp-29h]
  PERESOURCE *v117[14]; // [rsp+B8h] [rbp-21h] BYREF
  int v119; // [rsp+140h] [rbp+67h]
  int v120; // [rsp+148h] [rbp+6Fh]
  int v122; // [rsp+158h] [rbp+7Fh]

  v120 = a3;
  v119 = a2;
  v8 = a2;
  v109 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
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
      a2,
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      72,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  v116 = (struct CEResourceLock *)(this + 4);
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2428);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((CTouchProcessor *)this, *((_DWORD *)a5 + 10)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2429);
  if ( IsInputThread(v10, v9) && *(_QWORD *)(W32GetUserSessionState(v12, v11) + 18824) )
  {
    if ( !a4 )
    {
      if ( (unsigned int)CTouchProcessor::CountMTNodesReadyForRouting(v12, a5) )
      {
        EtwTraceDwmManipulationFrameStart(*((unsigned int *)a5 + 10), *((_DWORD *)a5 + 12), v14);
        v15 = PtiCurrent();
        v112 = *((_QWORD *)v15 + 48);
        *((_QWORD *)v15 + 48) = &v112;
        v113 = a5;
        v114 = CTouchProcessor::DereferencePointerInputFrameAndMessageData;
        CTouchProcessor::ForwardInputToManipulationThread((__int64)this, (__int64)a5, 0);
        *((_QWORD *)PtiCurrent() + 48) = v112;
      }
      goto LABEL_26;
    }
  }
  else if ( !a4 )
  {
    goto LABEL_26;
  }
  v16 = 0;
  v17 = 0;
  for ( i = (const struct CPointerInfoNode *)*((_QWORD *)a5 + 30); v17 < *((_DWORD *)a5 + 12); v16 = (unsigned int)v12 )
  {
    MessagesForNode = CTouchProcessor::ShouldGenerateMessagesForNode(v12, a5, i, a4);
    v12 = (CTouchProcessor *)(v16 + 1);
    if ( !MessagesForNode )
      v12 = (CTouchProcessor *)v16;
    i = (const struct CPointerInfoNode *)((char *)i + 480);
    ++v17;
  }
  EtwTraceDwmManipulationFrameRouted(*((unsigned int *)a5 + 10), v16, v13);
LABEL_26:
  v20 = -(*((_DWORD *)a5 + 57) & 1);
  v21 = (*((_DWORD *)a5 + 57) & 1) == 0;
  if ( (*((_DWORD *)a5 + 57) & 1) != 0 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *(LARGE_INTEGER *)((char *)a5 + (isChildPartition(v24, v23) ? 0x48 : 0) + 120) = PerformanceCounter;
    InputTraceLogging::TelemetryDebug::Pointer::GenerateFrameMessages(
      (const struct CPointerInputFrame *)((char *)a5 + 72),
      *((_DWORD *)a5 + 57) & 1);
    v25 = v21;
    goto LABEL_33;
  }
  if ( (*((_DWORD *)a5 + 57) & 8) != 0 )
  {
    v26 = PtiCurrent();
    v112 = *((_QWORD *)v26 + 48);
    *((_QWORD *)v26 + 48) = &v112;
    v114 = CTouchProcessor::DereferencePointerInputFrameAndMessageData;
    v113 = a5;
    CTouchProcessor::ProcessPrimaryDown((CTouchProcessor *)this, a5, a4 != 0);
    v20 = (unsigned __int64)PtiCurrent();
    *(_QWORD *)(v20 + 384) = v112;
LABEL_31:
    v25 = v21;
    if ( (*((_DWORD *)a5 + 57) & 2) != 0 && !a4 )
      goto LABEL_141;
    goto LABEL_33;
  }
  v25 = (*((_DWORD *)a5 + 57) & 1) == 0;
  if ( (*((_DWORD *)a5 + 57) & 1) == 0 )
    goto LABEL_31;
LABEL_33:
  if ( v25 )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v115, "GenerateFrameMessages", 0LL);
    v27 = (unsigned int *)((char *)a5 + 48);
    EtwTraceBeginPointerFrameMessageGeneration(*((unsigned int *)a5 + 10), *((_DWORD *)a5 + 12), v28);
    v29 = (unsigned int *)((char *)a5 + 48);
    if ( isRootPartition(v31, v30)
      && ((unsigned __int8)IsTouchIVEnabled() || (unsigned __int8)IsPenIVEnabled() || IsPTPIVEnabled()) )
    {
      CTouchProcessor::CheckandDeliverContainerInput(this, a5, v119, a4);
      v29 = (unsigned int *)((char *)a5 + 48);
    }
    v32 = *v27;
    v33 = (__int64 **)((char *)a5 + 240);
    v111 = 0;
    v107 = 0;
    v34 = 0;
    v110 = 0;
    v35 = 0;
    v122 = 0;
    v36 = 0LL;
    v37 = *((_QWORD *)a5 + 30);
    v38 = 0;
    v108 = 0;
    if ( *v27 )
    {
      v39 = 0;
      do
      {
        v40 = (CTouchProcessor *)&(*v33)[60 * v32];
        if ( v37 >= (unsigned __int64)v40 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2582);
        if ( (unsigned int)CTouchProcessor::ShouldGenerateMessagesForNode(
                             v40,
                             a5,
                             (const struct CPointerInfoNode *)v37,
                             a4) )
        {
          PrevMsgId = CTouchProcessor::GetPrevMsgId(v41, *(_QWORD *)(v37 + 16));
          CTouchProcessor::ProcessAndUnreferencePreviousInput(
            (CTouchProcessor *)this,
            (const struct CPointerInfoNode *)v37,
            PrevMsgId,
            v109,
            v119,
            v120);
          v43 = *(_DWORD *)v37;
          if ( (*(_DWORD *)v37 & 0x1000) == 0 )
          {
            if ( (v43 & 8) != 0 )
            {
              if ( __CFSHR__(v43, 7) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2604);
              ++v35;
            }
            else if ( __CFSHR__(v43, 7) )
            {
              ++v108;
            }
            v44 = *(_DWORD *)(v37 + 180);
            if ( (v44 & 1) != 0 )
              ++v39;
            if ( (v44 & 2) == 0 )
              ++v111;
            if ( (v44 & 0x10000) != 0 )
            {
              ++v107;
            }
            else if ( (v44 & 0x40000) != 0 )
            {
              ++v122;
            }
            else
            {
              if ( (v44 & 0x20000) == 0 )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2629);
              ++v110;
            }
          }
        }
        v32 = *v29;
        v37 += 480LL;
        ++v38;
      }
      while ( v38 < *v29 );
      v34 = v108;
      v33 = (__int64 **)((char *)a5 + 240);
      v29 = (unsigned int *)((char *)a5 + 48);
      v36 = v39;
    }
    if ( v35 || v34 || (v45 = v32, v46 = (unsigned __int64 **)v33, (_DWORD)v36) )
    {
      v47 = *v33;
      v48 = 0;
      v45 = v32;
      v46 = (unsigned __int64 **)v33;
      if ( v32 )
      {
        do
        {
          v49 = (CTouchProcessor *)&(*v33)[60 * v32];
          if ( v47 >= (__int64 *)v49 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2650);
          if ( (*(_DWORD *)v47 & 0x1000) == 0
            && (unsigned int)CTouchProcessor::ShouldGenerateMessagesForNode(
                               v49,
                               a5,
                               (const struct CPointerInfoNode *)v47,
                               a4) )
          {
            CTouchProcessor::GenerateEnterMessages((CTouchProcessor *)this, a5, v48, v47[2], v109, v119, v120);
          }
          v45 = *v29;
          v47 += 60;
          ++v48;
          v32 = v45;
        }
        while ( v48 < (unsigned int)v45 );
        v46 = (unsigned __int64 **)((char *)a5 + 240);
      }
    }
    v50 = v46;
    if ( v108 )
    {
      v51 = *v46;
      v52 = 0;
      if ( (_DWORD)v45 )
      {
        do
        {
          v53 = (CTouchProcessor *)&(*v46)[60 * v45];
          if ( v51 >= (unsigned __int64 *)v53 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2679);
          if ( (*(_DWORD *)v51 & 0x1000) == 0
            && (unsigned int)CTouchProcessor::ShouldGenerateMessagesForNode(
                               v53,
                               a5,
                               (const struct CPointerInfoNode *)v51,
                               a4) )
          {
            CTouchProcessor::GenerateRoutedToMessages((CTouchProcessor *)this, a5, v52, v51[2], v109, v119, v120);
          }
          v45 = *((unsigned int *)a5 + 12);
          v51 += 60;
          ++v52;
        }
        while ( v52 < (unsigned int)v45 );
        v50 = (unsigned __int64 **)((char *)a5 + 240);
      }
    }
    if ( IsTouchpadDevice(*((_QWORD *)a5 + 8), v36) )
    {
      if ( isRootPartition(v55, v54) )
      {
        v57 = v107;
        if ( IsPTPIVEnabled() )
        {
          if ( v107 )
          {
            v58 = (struct DEVICEINFO *)HMValidateHandleNoSecure(*((_QWORD *)a5 + 8), 19);
            Processor = CPTPProcessorFactory::GetProcessor(v58);
            if ( Processor )
            {
              *((_DWORD *)Processor + 97) &= ~2u;
              *((_DWORD *)Processor + 96) = 0;
            }
          }
        }
      }
      else
      {
        v57 = v107;
      }
      v60 = 0;
      if ( (*((_DWORD *)a5 + 57) & 8) != 0 && v57 > 1 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
        {
          LOBYTE(v60) = 1;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (v61 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v61 = 0;
        }
        if ( (_BYTE)v60 || v61 )
        {
          v62 = *((_DWORD *)a5 + 10);
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v56);
          LOBYTE(v64) = v61;
          v65 = v122;
          LOBYTE(v66) = v60;
          WPP_RECORDER_AND_TRACE_SF_LLL(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v66,
            v64,
            *(_QWORD *)(UserSessionState + 69144),
            v104,
            v105,
            73,
            v106,
            v62,
            v57,
            v122);
        }
        else
        {
          v65 = v122;
        }
        v67 = a4;
        v60 = 0x2000;
        CTouchProcessor::GeneratePointerInputMessages((CTouchProcessor *)this, a5, v109, v119, v120, 0x2000u, 0, a4);
      }
      else
      {
        v65 = v122;
        v67 = a4;
      }
      if ( !v110 && v57 && v65 )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v68 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v68 = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (v69 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v69 = 0;
        }
        if ( v68 || v69 )
        {
          v70 = *((_DWORD *)a5 + 10);
          v71 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
          LOBYTE(v72) = v69;
          LOBYTE(v73) = v68;
          WPP_RECORDER_AND_TRACE_SF_LLL(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v73,
            v72,
            *(_QWORD *)(v71 + 69144),
            v104,
            v105,
            74,
            v106,
            v70,
            v57,
            v122);
        }
        CTouchProcessor::GeneratePointerInputMessages((CTouchProcessor *)this, a5, v109, v119, v120, 0x10000u, v60, v67);
        v60 |= 0x10000u;
      }
      v50 = (unsigned __int64 **)((char *)a5 + 240);
    }
    else
    {
      v60 = 0;
    }
    v74 = v109;
    CTouchProcessor::GeneratePointerInputMessages((CTouchProcessor *)this, a5, v109, v119, v120, 0, v60, a4);
    v75 = v50;
    if ( v122 )
    {
      v76 = *((unsigned int *)a5 + 12);
      v77 = 0;
      v78 = *((_QWORD *)a5 + 30);
      if ( (_DWORD)v76 )
      {
        do
        {
          v79 = (CTouchProcessor *)&(*v50)[60 * v76];
          if ( v78 >= (unsigned __int64)v79 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2837);
          if ( (*(_DWORD *)v78 & 0x1000) == 0
            && (unsigned int)CTouchProcessor::ShouldGenerateMessagesForNode(
                               v79,
                               a5,
                               (const struct CPointerInfoNode *)v78,
                               a4)
            && (*(_DWORD *)(v78 + 180) & 0x40000) != 0 )
          {
            CTouchProcessor::ProcessRoutedAwayList(
              (CTouchProcessor *)this,
              *(_WORD *)(v78 + 172),
              1,
              a5,
              v77,
              (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          }
          v76 = *((unsigned int *)a5 + 12);
          v78 += 480LL;
          ++v77;
        }
        while ( v77 < (unsigned int)v76 );
        v75 = (unsigned __int64 **)((char *)a5 + 240);
      }
      v74 = v109;
    }
    if ( v111 )
    {
      v80 = *((unsigned int *)a5 + 12);
      v81 = 0;
      for ( j = *v75; v81 < (unsigned int)v80; ++v81 )
      {
        v83 = (CTouchProcessor *)&(*v75)[60 * v80];
        if ( j >= (unsigned __int64 *)v83 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2866);
        if ( (unsigned int)CTouchProcessor::ShouldGenerateMessagesForNode(
                             v83,
                             a5,
                             (const struct CPointerInfoNode *)j,
                             a4) )
          CTouchProcessor::GenerateDepartureMessage((CTouchProcessor *)this, a5, v81, j[2], v74, v119, v120);
        v80 = *((unsigned int *)a5 + 12);
        j += 60;
      }
    }
    v84 = KeQueryPerformanceCounter(0LL);
    *(LARGE_INTEGER *)((char *)a5 + (isChildPartition(v86, v85) ? 0x48 : 0) + 120) = v84;
    InputTraceLogging::TelemetryDebug::Pointer::GenerateFrameMessages(
      (const struct CPointerInputFrame *)((char *)a5 + 72),
      0LL);
    InputTraceLogging::Pointer::GenerateFrameMessages(a5, v87, v88, v89);
    EtwTraceEndPointerFrameMessageGeneration(*((unsigned int *)a5 + 10), *((_DWORD *)a5 + 12), v90);
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v115);
    v8 = v119;
  }
LABEL_141:
  NodeForPointerPromotion = CTouchProcessor::FindNodeForPointerPromotion((CTouchProcessor *)v20, a5);
  v95 = NodeForPointerPromotion;
  if ( NodeForPointerPromotion && (unsigned int)CTouchProcessor::NodeMatchesMTGeneration(v93, NodeForPointerPromotion) )
  {
    v96 = (v120 != 0 ? 2 : 0) | (v8 != 0) | ((*v92 & 0x8000u) >> 13) | ((*v92 & 0x10000u) >> 13) | ((*v92 & 0x40u) >> 2);
    if ( v92[44] != *((_DWORD *)a5 + 10) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2908);
    v97 = PtiCurrent();
    v98 = v116;
    v112 = *((_QWORD *)v97 + 48);
    *((_QWORD *)v97 + 48) = &v112;
    v114 = CTouchProcessor::DereferencePointerInputFrameAndMessageData;
    v113 = a5;
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive((CInpUnlockGuardExclusive *)v117, v98, 0LL);
    v99 = *((_WORD *)v95 + 80);
    v102 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v101, v100) + 48) + 6312LL);
    if ( v102 && v102() >= 0 )
      EditionProcessPointerInputAsMouse((__int64)v95 + 168, v99, v96);
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v117);
    *((_QWORD *)PtiCurrent() + 48) = v112;
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v92) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v92) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v94) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v94) = 0;
  }
  if ( (_BYTE)v92 || (_BYTE)v94 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)v92,
      v94,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      75,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  return 1LL;
}
