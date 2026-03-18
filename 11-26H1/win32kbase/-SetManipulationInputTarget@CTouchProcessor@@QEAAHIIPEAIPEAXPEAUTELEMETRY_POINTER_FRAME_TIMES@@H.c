/*
 * XREFs of ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x140108F24
 * Callers:
 *     NtUserSetManipulationInputTarget @ 0x140195D40 (NtUserSetManipulationInputTarget.c)
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x140214300 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004B9C0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004BEE0 (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14004C5B4 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x14004C6AC (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePha.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x140066560 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x140067018 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1400681A8 (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x140068490 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1400685B8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1400686C8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x140069CB8 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x14006BF24 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x14006C298 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x14006D2C4 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14006D41C (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x14006D4EC (-IsPrimaryDown@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x14006D51C (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14006D5C8 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14006F90C (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x140071D30 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14009C7BC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1400CDED0 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ApiSetEditionIsCompositionInputWindow @ 0x1400CE2DC (ApiSetEditionIsCompositionInputWindow.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1400CEB40 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAX_NPEAUCInputPointerNode@@AEBVCInputDest@@@Z @ 0x140109F08 (-HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREV.c)
 *     ?SetupQFramePostMT@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x14010A158 (-SetupQFramePostMT@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KV.c)
 *     ApiSetEditionGetInputDelegate @ 0x14010A470 (ApiSetEditionGetInputDelegate.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x14010A518 (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ?CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z @ 0x14010AA14 (-CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetSetManipulationInputTargetTransform @ 0x1401B9508 (ApiSetSetManipulationInputTargetTransform.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall CTouchProcessor::SetManipulationInputTarget(
        PERESOURCE *this,
        int a2,
        unsigned int a3,
        unsigned int *a4,
        HANDLE Handle,
        struct TELEMETRY_POINTER_FRAME_TIMES *a6,
        int a7)
{
  int v7; // ebx
  PERESOURCE *v8; // r13
  unsigned int v9; // edi
  char v10; // r15
  struct _ERESOURCE *v11; // rcx
  int v12; // edx
  int v13; // r8d
  int v14; // edx
  __int64 v15; // rcx
  int v16; // r8d
  __int64 v17; // r12
  unsigned int v18; // ebx
  int v19; // r8d
  CTouchProcessor *v20; // rcx
  struct CPointerQFrame *v21; // rax
  unsigned int v22; // ebx
  char v23; // bl
  bool v24; // si
  __int64 v25; // rdx
  void *v26; // r8
  __int64 v28; // rsi
  CPointerInfoNode *v29; // rcx
  int v30; // r13d
  unsigned int i; // edx
  PERESOURCE j; // rbx
  const struct tagPOINTEREVENTINT *v33; // r13
  __int64 v34; // r12
  __int64 v35; // rax
  CInputDest *v36; // rax
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // r13
  struct CPointerQFrame *v40; // rbx
  __int64 v41; // rcx
  unsigned int v42; // eax
  unsigned int v43; // esi
  CPointerInfoNode *v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rbx
  unsigned int MessagesCore; // esi
  unsigned int k; // ebx
  __int64 v49; // r8
  __int64 v50; // rcx
  int v51; // eax
  int v52; // eax
  __int64 v53; // rdx
  int v54; // r9d
  __int16 v55; // r13
  unsigned __int64 v56; // rbx
  struct CPointerInfoNode *ValidNodeInFrame; // r12
  unsigned __int16 v58; // dx
  int v59; // eax
  int v60; // ecx
  int Address; // edx
  __int64 v62; // r8
  __int64 UserSessionState; // rax
  int v64; // r8d
  int v65; // edx
  __int64 v66; // r8
  void *v67; // r8
  unsigned int v68; // [rsp+28h] [rbp-D8h]
  int v69; // [rsp+40h] [rbp-C0h]
  unsigned int v70; // [rsp+48h] [rbp-B8h]
  const struct CPointerInputFrame *v72; // [rsp+58h] [rbp-A8h]
  int v73; // [rsp+7Ch] [rbp-84h]
  int v74; // [rsp+94h] [rbp-6Ch]
  int v75; // [rsp+9Ch] [rbp-64h]
  int v76; // [rsp+A0h] [rbp-60h]
  _QWORD *v77; // [rsp+B0h] [rbp-50h]
  unsigned int v78; // [rsp+B8h] [rbp-48h]
  struct CPointerQFrame *v79; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int *v80; // [rsp+D0h] [rbp-30h]
  tagDomLock *v81; // [rsp+D8h] [rbp-28h]
  _QWORD v82[4]; // [rsp+E0h] [rbp-20h] BYREF
  char v83; // [rsp+100h] [rbp+0h]
  PERESOURCE *v84; // [rsp+108h] [rbp+8h]
  _OWORD v85[8]; // [rsp+110h] [rbp+10h] BYREF
  _OWORD v86[7]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v87[14]; // [rsp+200h] [rbp+100h] BYREF
  char v88; // [rsp+270h] [rbp+170h]
  _OWORD v89[8]; // [rsp+280h] [rbp+180h] BYREF
  _DWORD v90[28]; // [rsp+300h] [rbp+200h] BYREF

  v7 = a2;
  v8 = this;
  v80 = a4;
  v78 = a3;
  v9 = 0;
  v10 = 1;
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
      79,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  v82[0] = 0LL;
  v84 = v8 + 4;
  v83 = 0;
  v11 = v8[4];
  v81 = (tagDomLock *)(v8 + 4);
  ExEnterCriticalRegionAndAcquireResourceExclusive(v11);
  CRefUnRefPointerMsgId::ReferenceAndThreadLock((CRefUnRefPointerMsgId *)v82, v12, v13);
  v77 = CTouchProcessor::FindAndReferenceFrameById((__int64)v8, v7, 4);
  v17 = (__int64)v77;
  if ( !v77 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v23 = 0;
    }
    v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v14, v16);
      LOBYTE(v64) = v24;
      LOBYTE(v65) = v23;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v65,
        v64,
        *(_QWORD *)(UserSessionState + 69136),
        2,
        4,
        80,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    UserSetLastError(87);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v25) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v25) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v10 = 0;
    if ( (_BYTE)v25 || v10 )
    {
      v26 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
      LOBYTE(v26) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        (_DWORD)v26,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        81,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    goto LABEL_37;
  }
  if ( a7 && Handle )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3257LL);
  *(_OWORD *)(v77 + 9) = *(_OWORD *)a6;
  *(_OWORD *)(v77 + 11) = *((_OWORD *)a6 + 1);
  *(_OWORD *)(v77 + 13) = *((_OWORD *)a6 + 2);
  *(_OWORD *)(v77 + 15) = *((_OWORD *)a6 + 3);
  *(_OWORD *)(v77 + 17) = *((_OWORD *)a6 + 4);
  *(_OWORD *)(v77 + 19) = *((_OWORD *)a6 + 5);
  *(_OWORD *)(v77 + 21) = *((_OWORD *)a6 + 6);
  *(_OWORD *)(v77 + 23) = *((_OWORD *)a6 + 7);
  *(_OWORD *)(v77 + 25) = *((_OWORD *)a6 + 8);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v15, (__int64)v77) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3263LL);
  if ( !v77[32] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3264LL);
  v18 = *(_DWORD *)(v77[30] + 168LL);
  if ( v18 == 6 || !v18 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3267LL);
  v76 = -__CFSHR__(*(_DWORD *)(v77[32] + 368LL), 4);
  v75 = -__CFSHR__(*(_DWORD *)(v77[32] + 368LL), 5);
  memset(v87, 0, sizeof(v87));
  v88 = 0;
  memset(v90, 0, sizeof(v90));
  v73 = 0;
  if ( CSpatialProcessor::ResolveInputSinkToINPUTDEST(Handle, v18, (struct tagINPUTDEST *)v90) )
  {
    v73 = -(v90[4] & 1);
    CInputDest::CInputDest((CInputDest *)v89, (const struct tagINPUTDEST *)v90);
    CInputDest::operator=(v87, v89, v19);
    if ( HIDWORD(v89[5]) )
      HMAssignmentUnlock((__int64 *)&v89[5]);
  }
  v72 = CTouchProcessor::ReferencePreviousFrameByDeviceInt(v8, (const struct CPointerInputFrame *)v77);
  v21 = CTouchProcessor::SetupQFrame(v20, (struct CPointerInputFrame *)v77, -1LL, (const struct CInputDest *)v87, 0);
  v79 = v21;
  if ( v21 )
  {
    if ( *(_DWORD *)v21 != -1 )
      goto LABEL_21;
    v66 = 3311LL;
  }
  else
  {
    v66 = 3308LL;
  }
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, v66);
LABEL_21:
  v22 = 0;
  v69 = 0;
  v70 = 0;
  if ( !*((_DWORD *)v77 + 12) )
    goto LABEL_22;
  do
  {
    v28 = *(_QWORD *)(v17 + 240) + 480LL * v22;
    CInputDest::CInputDest((CInputDest *)v89, (const struct CInputDest *)v87);
    v74 = 0;
    if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v28)
      || !CPointerInfoNode::IsForManipulationThread(v29)
      || (*(_DWORD *)(v28 + 4) & 0x200) != 0 )
    {
      goto LABEL_76;
    }
    v30 = *(unsigned __int16 *)(v28 + 172);
    for ( i = 0; ; ++i )
    {
      if ( i >= v78 )
        goto LABEL_76;
      if ( v80[i] == v30 )
        break;
    }
    if ( !tagDomLock::IsLockedShared((PERESOURCE *)v81) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8594LL);
    for ( j = this[8]; ; j = (PERESOURCE)j->SystemResourcesList.Flink )
    {
      if ( j == (PERESOURCE)(this + 8) )
      {
        j = 0LL;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3334LL);
        if ( HIDWORD(v89[5]) )
          HMAssignmentUnlock((__int64 *)&v89[5]);
        memset(v89, 0, 0x78uLL);
LABEL_54:
        v33 = (const struct tagPOINTEREVENTINT *)(v28 + 160);
        goto LABEL_55;
      }
      if ( LOWORD(j->SharedWaiters) == (_WORD)v30 )
        break;
    }
    _InterlockedDecrement((volatile signed __int32 *)&j->SharedWaiters + 1);
    if ( SHIDWORD(j->SharedWaiters) < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3340LL);
    if ( (*(_DWORD *)v28 & 4) != 0 && LODWORD(j[2].Address) == 2 )
    {
      if ( LODWORD(v89[0]) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3351LL);
      if ( a7 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3352LL);
      if ( HIDWORD(v89[5]) )
        HMAssignmentUnlock((__int64 *)&v89[5]);
      memset(v89, 0, 0x78uLL);
    }
    else
    {
      if ( (*(_DWORD *)(v28 + 4) & 0x80u) != 0 || HIDWORD(v89[5]) || (v59 = 2, a7) )
        v59 = 1;
      LODWORD(j[2].Address) = v59;
    }
    v60 = HIDWORD(v89[5]);
    Address = (int)j[2].Address;
    if ( !HIDWORD(v89[5]) )
    {
      if ( Address == 2 )
      {
        if ( (*(_DWORD *)(v28 + 4) & 0x80u) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3390LL);
        if ( LODWORD(v89[0]) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3391LL);
        CInputDest::operator=((__int64)v89, v28 + 352);
        *(_DWORD *)v28 &= 0xFFFFFAFF;
        *(_DWORD *)(v28 + 144) = 0;
      }
      goto LABEL_54;
    }
    if ( Address != 1 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3373LL);
      v60 = HIDWORD(v89[5]);
    }
    if ( v60 != 2 )
    {
      if ( LODWORD(v89[0]) )
        goto LABEL_149;
LABEL_173:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3374LL);
      goto LABEL_149;
    }
    if ( (unsigned int)ApiSetEditionIsCompositionInputWindow(*(__int64 *)&v89[5]) != 1 )
      goto LABEL_173;
LABEL_149:
    if ( (*(_DWORD *)v28 & 0x400) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3375LL);
    if ( (*(_DWORD *)v28 & 0x100) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3376LL);
    if ( *(_DWORD *)(v28 + 144) != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3377LL);
    *(_DWORD *)(v28 + 4) |= 0x80u;
    v33 = (const struct tagPOINTEREVENTINT *)(v28 + 160);
    v62 = *(_QWORD *)(v28 + 248);
    v85[0] = v89[0];
    v85[2] = v89[2];
    v85[1] = v89[1];
    v85[4] = v89[4];
    v85[3] = v89[3];
    v85[6] = v89[6];
    v85[5] = v89[5];
    v74 = ApiSetSetManipulationInputTargetTransform((unsigned int)v85, (_DWORD)Handle, v62, (int)v28 + 160, v73);
LABEL_55:
    InputTraceLogging::Pointer::HandleResultFromUserMode(
      (const struct CPointerInputFrame *)v17,
      v33,
      Handle,
      a7 != 0,
      (struct CInputPointerNode *)j,
      (const struct CInputDest *)v89);
    if ( LODWORD(v89[0]) )
    {
      v34 = 0LL;
      if ( HIDWORD(v89[5]) )
      {
        v35 = *(_QWORD *)&v89[5] ? *(_QWORD *)(*(_QWORD *)&v89[5] + 16LL) : 0LL;
        if ( v35 )
          v34 = *(_QWORD *)(v35 + 464);
      }
      v36 = CInputDest::CInputDest((CInputDest *)v85, (const struct CInputDest *)v89);
      v37 = v34;
      v17 = (__int64)v77;
      v39 = CTouchProcessor::SetupQFramePostMT(v38, v77, &v79, v37, v36, v72 != 0LL);
      if ( !v39 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3513LL);
      *(_DWORD *)(v28 + 4) |= 0x200u;
      v40 = v79;
      v69 = 1;
      if ( v79 )
      {
        if ( *(_DWORD *)(v28 + 8) != *(_DWORD *)v79 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3526LL);
        if ( !*((_DWORD *)v40 + 34) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3527LL);
        *(_DWORD *)(v28 + 8) = *(_DWORD *)v39;
        ++*(_DWORD *)(v39 + 136);
        --*((_DWORD *)v40 + 34);
      }
      v41 = 0LL;
      if ( (v89[0] & 4) != 0 )
      {
        if ( HIDWORD(v89[5]) == 1 || HIDWORD(v89[5]) == 2 )
        {
          if ( *(_QWORD *)&v89[5] )
            v41 = **(_QWORD **)&v89[5];
          else
            v41 = 0LL;
        }
      }
      else if ( (v89[0] & 2) != 0 )
      {
        v41 = *((_QWORD *)&v89[1] + 1);
      }
      *(_QWORD *)(v28 + 192) = v41;
      CInputDest::operator=(v28 + 352, (__int64)v89);
      if ( (unsigned int)CPointerInfoNode::IsPrimaryDown((CPointerInfoNode *)v28) && *(_DWORD *)(v28 + 24) )
        *(_DWORD *)(v28 + 456) = *(_DWORD *)(v28 + 128);
      if ( v74 )
        *(_DWORD *)(v28 + 180) |= 0x400000u;
      if ( HIDWORD(v89[5]) )
      {
        v86[0] = v89[0];
        v86[2] = v89[2];
        v86[1] = v89[1];
        v86[4] = v89[4];
        v86[3] = v89[3];
        v86[6] = v89[6];
        v86[5] = v89[5];
        if ( ApiSetEditionGetInputDelegate(v86) )
          *(_DWORD *)v28 |= 0x100000u;
      }
      CTouchProcessor::ProcessQFrameNode(
        (CTouchProcessor *)this,
        (struct CPointerQFrame *)v39,
        v72,
        (struct CPointerInfoNode *)v28);
      if ( *(_DWORD *)v39 == -1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3560LL);
      v22 = v70;
LABEL_76:
      if ( HIDWORD(v89[5]) )
        HMAssignmentUnlock((__int64 *)&v89[5]);
      v8 = this;
    }
    else
    {
      v55 = *(_WORD *)(v28 + 172);
      v56 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( v72 )
      {
        ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(this, v72, v55, 0LL);
        if ( ValidNodeInFrame )
        {
          *(_QWORD *)(v28 + 192) = 0LL;
          CInputDest::~CInputDest((CInputDest *)(v28 + 352));
          *(_DWORD *)(v28 + 4) |= 0x200u;
          CTouchProcessor::ProcessEnterLeave(this, v72, (struct CPointerInfoNode *)v28);
          if ( (*(_DWORD *)ValidNodeInFrame & 0x80u) == 0 )
            CTouchProcessor::ProcessAndUnreferencePreviousInput(
              (CTouchProcessor *)this,
              (const struct CPointerInfoNode *)v28,
              *((_QWORD *)ValidNodeInFrame + 2),
              v56,
              v76,
              v75);
        }
        v17 = (__int64)v77;
      }
      if ( (*(_DWORD *)(v28 + 180) & 0x40000) != 0 )
      {
        v68 = v56;
        v22 = v70;
        CTouchProcessor::ProcessRoutedAwayList(
          (CTouchProcessor *)this,
          v55,
          1,
          (const struct CPointerInputFrame *)v17,
          v70,
          v68);
      }
      else
      {
        v22 = v70;
      }
      CTouchProcessor::FreePointerInfoNodeInt((__int64)this, v17, v22);
      v58 = v55;
      v8 = this;
      CTouchProcessor::CheckFreeOnDeparture((CTouchProcessor *)this, v58);
      if ( HIDWORD(v89[5]) )
        HMAssignmentUnlock((__int64 *)&v89[5]);
    }
    v42 = *(_DWORD *)(v17 + 48);
    v70 = ++v22;
  }
  while ( v22 < v42 );
  if ( !v69 )
  {
LABEL_22:
    if ( LODWORD(v87[0]) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3564LL);
    goto LABEL_90;
  }
  v43 = 0;
  if ( v42 )
  {
    do
    {
      if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)(*(_QWORD *)(v17 + 240) + 480LL * v43)) )
      {
        if ( CPointerInfoNode::IsForManipulationThread(v44) && (*(_DWORD *)(v45 + 4) & 0x200) != 0 )
        {
          v46 = *(_QWORD *)(v17 + 248) + 160LL * *(unsigned int *)(v45 + 8);
          if ( *(_QWORD *)(v46 + 8) != -1LL && (*(_DWORD *)(v46 + 140) & 0x10) == 0 )
          {
            CTouchProcessor::TryCoalesceQFrame(
              (CTouchProcessor *)v8,
              (struct CPointerInputFrame *)v17,
              v72,
              (const struct CPointerQFrame *)v46);
            if ( (*(_DWORD *)(v46 + 140) & 0x10) == 0 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3588LL);
          }
        }
      }
      ++v43;
    }
    while ( v43 < *(_DWORD *)(v17 + 48) );
  }
LABEL_90:
  if ( v72 )
    CTouchProcessor::UnreferenceFrameInt(v8, (__int64)v72);
  if ( v69 )
  {
    MessagesCore = CTouchProcessor::GenerateMessagesCore(v8, v76, v75, 1, (const struct CPointerInputFrame *)v17);
    for ( k = 0; k < *(_DWORD *)(v17 + 48); ++k )
    {
      v49 = *(_QWORD *)(v17 + 240);
      v50 = 480LL * k;
      v51 = *(_DWORD *)(v50 + v49 + 4);
      if ( (v51 & 0x200) != 0 && (v51 & 0x400) == 0 )
      {
        v52 = v51 | 0x400;
        v53 = *(_QWORD *)(v50 + v49 + 16);
        *(_DWORD *)(v50 + v49 + 4) = v52;
        if ( v53 )
        {
          if ( (v52 & 0x80u) != 0 )
          {
            v54 = *(_DWORD *)(v50 + v49 + 180);
            if ( (v54 & 4) != 0 )
              CTouchProcessor::SetPointerCapture(
                v8,
                v53,
                v50 + 352 + v49,
                2 - (unsigned int)((v54 & 0x10000) != 0),
                1,
                -__CFSHR__(*(_DWORD *)(v50 + v49), 21));
          }
        }
      }
    }
  }
  else
  {
    MessagesCore = 0;
  }
  CTouchProcessor::UnreferenceFrame((__int64)v8, v17);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v25) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v25) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v10 = 0;
  if ( (_BYTE)v25 || v10 )
  {
    v67 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
    LOBYTE(v67) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v25,
      (_DWORD)v67,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      82,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  }
  if ( HIDWORD(v87[11]) )
    HMAssignmentUnlock(&v87[10]);
  v9 = MessagesCore;
LABEL_37:
  CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v82, v25);
  ExReleaseResourceAndLeaveCriticalRegion(*v84);
  return v9;
}
