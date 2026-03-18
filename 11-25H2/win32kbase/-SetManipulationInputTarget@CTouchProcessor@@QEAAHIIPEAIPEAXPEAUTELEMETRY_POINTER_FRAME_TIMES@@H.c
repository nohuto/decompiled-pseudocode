/*
 * XREFs of ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x14018900C
 * Callers:
 *     NtUserSetManipulationInputTarget @ 0x140174C80 (NtUserSetManipulationInputTarget.c)
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1401FB9F0 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14003821C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     ?HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAX_NPEAUCInputPointerNode@@AEBVCInputDest@@@Z @ 0x1400B76B4 (-HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREV.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1400B8074 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1400B96E8 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1400B9B64 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x1400C486C (-IsPrimaryDown@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C4964 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C54D4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C5510 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1400DED58 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1400DF11C (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1400DF140 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1400F46E0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z @ 0x14013EE0C (-CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1401887DC (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x140189D28 (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14018E544 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     ApiSetEditionGetInputDelegate @ 0x140195368 (ApiSetEditionGetInputDelegate.c)
 *     ApiSetSetManipulationInputTargetTransform @ 0x1401975D4 (ApiSetSetManipulationInputTargetTransform.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1401F6E78 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9D98 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1401FF040 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePha.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1401FF184 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1401FF830 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140200170 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x140200550 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x14020729C (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1402088EC (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x140209150 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x14020B6A4 (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 *     ?SetupQFramePostMT@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x14020B8C8 (-SetupQFramePostMT@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KV.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x14020C254 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14020C628 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14020C984 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall CTouchProcessor::SetManipulationInputTarget(
        CTouchProcessor *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        void *a5,
        struct TELEMETRY_POINTER_FRAME_TIMES *a6,
        int a7)
{
  unsigned int v7; // ebx
  CTouchProcessor *v8; // r14
  unsigned int v9; // esi
  char v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r13
  char v14; // bl
  bool v15; // di
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  int v19; // edx
  void *v20; // r8
  unsigned int v21; // ebx
  int v22; // edi
  CTouchProcessor *v23; // rcx
  struct CPointerQFrame *v24; // rax
  __int64 v25; // r8
  int v26; // ebx
  unsigned int v27; // ecx
  __int64 v28; // r14
  CPointerInfoNode *v29; // rcx
  int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // edi
  CPointerInfoNode *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rbx
  struct CInputPointerNode *NodeById; // rax
  __int64 v37; // r9
  struct CInputPointerNode *v38; // rbx
  int v39; // eax
  int v40; // ecx
  __int64 v41; // r8
  unsigned __int16 v42; // di
  unsigned __int64 v43; // rbx
  struct CPointerInfoNode *ValidNodeInFrame; // rdi
  bool v45; // zf
  unsigned int v46; // ebx
  __int64 Queue; // rdi
  CInputDest *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdi
  struct CPointerQFrame *v51; // rbx
  struct CPointerInfoNode *v52; // r9
  unsigned int MessagesCore; // edi
  unsigned int i; // ebx
  __int64 v55; // r8
  int v56; // eax
  __int64 v57; // rdx
  int v58; // eax
  int v59; // ecx
  int v60; // edx
  void *v61; // r8
  unsigned int v63; // [rsp+28h] [rbp-D8h]
  int v64; // [rsp+40h] [rbp-C0h]
  int v65; // [rsp+44h] [rbp-BCh]
  int v66; // [rsp+48h] [rbp-B8h]
  unsigned __int16 v67; // [rsp+48h] [rbp-B8h]
  unsigned int v69; // [rsp+58h] [rbp-A8h]
  struct CPointerInputFrame *v70; // [rsp+60h] [rbp-A0h]
  int v71; // [rsp+9Ch] [rbp-64h]
  int v72; // [rsp+A0h] [rbp-60h]
  unsigned int v73; // [rsp+ACh] [rbp-54h]
  struct CPointerQFrame *v74; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int *v75; // [rsp+C8h] [rbp-38h]
  _OWORD v76[7]; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v77[7]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v78[14]; // [rsp+1B0h] [rbp+B0h] BYREF
  char v79; // [rsp+220h] [rbp+120h]
  PERESOURCE *v80[6]; // [rsp+230h] [rbp+130h] BYREF
  char v81[128]; // [rsp+260h] [rbp+160h] BYREF
  __int128 v82; // [rsp+2E0h] [rbp+1E0h] BYREF
  __int128 v83; // [rsp+2F0h] [rbp+1F0h]
  __int128 v84; // [rsp+300h] [rbp+200h]
  __int128 v85; // [rsp+310h] [rbp+210h]
  __int128 v86; // [rsp+320h] [rbp+220h]
  __int128 v87; // [rsp+330h] [rbp+230h]
  __int128 v88; // [rsp+340h] [rbp+240h]
  _DWORD v89[28]; // [rsp+360h] [rbp+260h] BYREF
  _QWORD v90[16]; // [rsp+3D0h] [rbp+2D0h] BYREF

  v7 = a2;
  v8 = this;
  v75 = a4;
  v73 = a3;
  v9 = 0;
  v10 = 1;
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
      79,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v80,
    (CTouchProcessor *)((char *)v8 + 32),
    0LL);
  v13 = CTouchProcessor::FindAndReferenceFrameById(v8, v7, 4LL);
  if ( !v13 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v14 = 0;
    }
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
      LOBYTE(v17) = v15;
      LOBYTE(v18) = v14;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v17,
        *(_QWORD *)(UserSessionState + 69144),
        2,
        4,
        80,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
    UserSetLastError(87);
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v19) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v19) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v10 = 0;
    if ( (_BYTE)v19 || v10 )
    {
      v20 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
      LOBYTE(v20) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        (_DWORD)v20,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        81,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
    goto LABEL_154;
  }
  if ( a7 && a5 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3273LL);
  *(_OWORD *)(v13 + 72) = *(_OWORD *)a6;
  *(_OWORD *)(v13 + 88) = *((_OWORD *)a6 + 1);
  *(_OWORD *)(v13 + 104) = *((_OWORD *)a6 + 2);
  *(_OWORD *)(v13 + 120) = *((_OWORD *)a6 + 3);
  *(_OWORD *)(v13 + 136) = *((_OWORD *)a6 + 4);
  *(_OWORD *)(v13 + 152) = *((_OWORD *)a6 + 5);
  *(_OWORD *)(v13 + 168) = *((_OWORD *)a6 + 6);
  *(_OWORD *)(v13 + 184) = *((_OWORD *)a6 + 7);
  *(_OWORD *)(v13 + 200) = *((_OWORD *)a6 + 8);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v12, v13) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3279LL);
  if ( !*(_QWORD *)(v13 + 256) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3280LL);
  v21 = *(_DWORD *)(*(_QWORD *)(v13 + 240) + 168LL);
  if ( v21 == 6 || !v21 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3283LL);
  v72 = -__CFSHR__(*(_DWORD *)(*(_QWORD *)(v13 + 256) + 368LL), 4);
  v71 = -__CFSHR__(*(_DWORD *)(*(_QWORD *)(v13 + 256) + 368LL), 5);
  memset(v78, 0, sizeof(v78));
  v79 = 0;
  memset(v89, 0, sizeof(v89));
  v65 = 0;
  v22 = 0;
  if ( CSpatialProcessor::ResolveInputSinkToINPUTDEST(a5, v21, (struct tagINPUTDEST *)v89) )
  {
    v22 = -(v89[4] & 1);
    v65 = v22;
    CInputDest::CInputDest((CInputDest *)v90, (const struct tagINPUTDEST *)v89);
    CInputDest::operator=(v78, v90);
    CInputDest::~CInputDest((CInputDest *)v90);
  }
  v70 = CTouchProcessor::ReferencePreviousFrameByDeviceInt(v8, (const struct CPointerInputFrame *)v13);
  v24 = CTouchProcessor::SetupQFrame(
          v23,
          (struct CPointerInputFrame *)v13,
          0xFFFFFFFFFFFFFFFFuLL,
          (const struct CInputDest *)v78,
          0);
  v74 = v24;
  if ( v24 )
  {
    if ( *(_DWORD *)v24 != -1 )
      goto LABEL_46;
    v25 = 3327LL;
  }
  else
  {
    v25 = 3324LL;
  }
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, v25);
LABEL_46:
  v26 = 0;
  v27 = 0;
  v64 = 0;
  v69 = 0;
  if ( !*(_DWORD *)(v13 + 48) )
    goto LABEL_128;
  do
  {
    v28 = *(_QWORD *)(v13 + 240) + 480LL * v27;
    CInputDest::CInputDest((CInputDest *)&v82, (const struct CInputDest *)v78);
    v66 = 0;
    if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v28)
      && CPointerInfoNode::IsForManipulationThread(v29)
      && (*(_DWORD *)(v28 + 4) & 0x200) == 0
      && (v30 = 0, v73) )
    {
      while ( v75[v30] != *(unsigned __int16 *)(v28 + 172) )
      {
        if ( ++v30 >= v73 )
          goto LABEL_53;
      }
      NodeById = CTouchProcessor::FindNodeById(this, *(_WORD *)(v28 + 172), 0, 0);
      v38 = NodeById;
      if ( NodeById )
      {
        _InterlockedDecrement((volatile signed __int32 *)NodeById + 9);
        if ( *((int *)NodeById + 9) < 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3356LL);
        if ( (*(_DWORD *)v28 & 4) != 0 && *((_DWORD *)v38 + 74) == 2 )
        {
          if ( (_DWORD)v82 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3367LL);
          if ( a7 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3368LL);
          CInputDest::~CInputDest((CInputDest *)&v82);
        }
        else
        {
          if ( (*(_DWORD *)(v28 + 4) & 0x80u) != 0 || HIDWORD(v87) || (v39 = 2, a7) )
            v39 = 1;
          *((_DWORD *)v38 + 74) = v39;
        }
        v40 = *((_DWORD *)v38 + 74);
        if ( HIDWORD(v87) )
        {
          if ( v40 != 1 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3389LL);
          if ( !CInputDest::IsCompositionInput((CInputDest *)&v82) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3390LL);
          if ( (*(_DWORD *)v28 & 0x400) == 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3391LL);
          if ( (*(_DWORD *)v28 & 0x100) == 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3392LL);
          if ( *(_DWORD *)(v28 + 144) != 1 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3393LL);
          *(_DWORD *)(v28 + 4) |= 0x80u;
          v41 = *(_QWORD *)(v28 + 248);
          v76[0] = v82;
          v76[2] = v84;
          v76[1] = v83;
          v76[4] = v86;
          v76[3] = v85;
          v76[6] = v88;
          v76[5] = v87;
          v66 = ApiSetSetManipulationInputTargetTransform((unsigned int)v76, (_DWORD)a5, v41, (int)v28 + 160, v22);
        }
        else if ( v40 == 2 )
        {
          if ( (*(_DWORD *)(v28 + 4) & 0x80u) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3406LL);
          if ( (_DWORD)v82 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3407LL);
          CInputDest::operator=(&v82, v28 + 352);
          *(_DWORD *)v28 &= 0xFFFFFAFF;
          *(_DWORD *)(v28 + 144) = 0;
        }
      }
      else
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3350LL);
        CInputDest::~CInputDest((CInputDest *)&v82);
      }
      LOBYTE(v37) = a7 != 0;
      InputTraceLogging::Pointer::HandleResultFromUserMode(
        (const struct CPointerInputFrame *)v13,
        (const struct tagPOINTEREVENTINT *)(v28 + 160),
        a5,
        v37,
        v38,
        (const struct CInputDest *)&v82);
      if ( (_DWORD)v82 )
      {
        Queue = CInputDest::GetQueue((CInputDest *)&v82, 2);
        v48 = CInputDest::CInputDest((CInputDest *)v81, (const struct CInputDest *)&v82);
        v50 = CTouchProcessor::SetupQFramePostMT(v49, v13, &v74, Queue, v48, v70 != 0LL);
        if ( !v50 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3529LL);
        *(_DWORD *)(v28 + 4) |= 0x200u;
        v51 = v74;
        v64 = 1;
        if ( v74 )
        {
          if ( *(_DWORD *)(v28 + 8) != *(_DWORD *)v74 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3542LL);
          if ( !*((_DWORD *)v51 + 34) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3543LL);
          *(_DWORD *)(v28 + 8) = *(_DWORD *)v50;
          ++*(_DWORD *)(v50 + 136);
          --*((_DWORD *)v51 + 34);
        }
        *(_QWORD *)(v28 + 192) = CInputDest::GetWindowHandle((CInputDest *)&v82);
        CInputDest::operator=(v28 + 352, &v82);
        if ( (unsigned int)CPointerInfoNode::IsPrimaryDown((CPointerInfoNode *)v28) && *(_DWORD *)(v28 + 24) )
          *(_DWORD *)(v28 + 456) = *(_DWORD *)(v28 + 128);
        if ( v66 )
          *(_DWORD *)(v28 + 180) |= 0x400000u;
        if ( HIDWORD(v87) )
        {
          v77[0] = v82;
          v77[2] = v84;
          v77[1] = v83;
          v77[4] = v86;
          v77[3] = v85;
          v77[6] = v88;
          v77[5] = v87;
          if ( ApiSetEditionGetInputDelegate(v77) )
            *(_DWORD *)v28 |= 0x100000u;
        }
        v52 = (struct CPointerInfoNode *)v28;
        v8 = this;
        CTouchProcessor::ProcessQFrameNode(this, (struct CPointerQFrame *)v50, v70, v52);
        if ( *(_DWORD *)v50 == -1 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3576LL);
      }
      else
      {
        v42 = *(_WORD *)(v28 + 172);
        v43 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v67 = v42;
        if ( v70 )
        {
          ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(this, v70, v42, 0LL);
          if ( ValidNodeInFrame )
          {
            *(_QWORD *)(v28 + 192) = 0LL;
            CInputDest::~CInputDest((CInputDest *)(v28 + 352));
            *(_DWORD *)(v28 + 4) |= 0x200u;
            CTouchProcessor::ProcessEnterLeave((PERESOURCE *)this, v70, (struct CPointerInfoNode *)v28);
            if ( (*(_DWORD *)ValidNodeInFrame & 0x80u) == 0 )
              CTouchProcessor::ProcessAndUnreferencePreviousInput(
                this,
                (const struct CPointerInfoNode *)v28,
                *((_QWORD *)ValidNodeInFrame + 2),
                v43,
                v72,
                v71);
          }
          v42 = v67;
        }
        v45 = (*(_DWORD *)(v28 + 180) & 0x40000) == 0;
        v8 = this;
        if ( v45 )
        {
          v46 = v69;
        }
        else
        {
          v63 = v43;
          v46 = v69;
          CTouchProcessor::ProcessRoutedAwayList(this, v42, 1, (const struct CPointerInputFrame *)v13, v69, v63);
        }
        CTouchProcessor::FreePointerInfoNodeInt(this, v13, v46);
        CTouchProcessor::CheckFreeOnDeparture(this, v42);
      }
    }
    else
    {
LABEL_53:
      v8 = this;
    }
    CInputDest::~CInputDest((CInputDest *)&v82);
    v31 = *(_DWORD *)(v13 + 48);
    v27 = v69 + 1;
    v22 = v65;
    v69 = v27;
  }
  while ( v27 < v31 );
  v26 = v64;
  if ( v64 )
  {
    v32 = 0;
    if ( v31 )
    {
      do
      {
        if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)(*(_QWORD *)(v13 + 240) + 480LL * v32)) )
        {
          if ( CPointerInfoNode::IsForManipulationThread(v33) && (*(_DWORD *)(v34 + 4) & 0x200) != 0 )
          {
            v35 = *(_QWORD *)(v13 + 248) + 160LL * *(unsigned int *)(v34 + 8);
            if ( *(_QWORD *)(v35 + 8) != -1LL && (*(_DWORD *)(v35 + 140) & 0x10) == 0 )
            {
              CTouchProcessor::TryCoalesceQFrame(
                v8,
                (struct CPointerInputFrame *)v13,
                v70,
                (const struct CPointerQFrame *)v35);
              if ( (*(_DWORD *)(v35 + 140) & 0x10) == 0 )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3604LL);
            }
          }
        }
        ++v32;
      }
      while ( v32 < *(_DWORD *)(v13 + 48) );
      v26 = v64;
    }
  }
  else
  {
LABEL_128:
    if ( LODWORD(v78[0]) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3580LL);
  }
  if ( v70 )
    CTouchProcessor::UnreferenceFrameInt(v8, v70);
  if ( v26 )
  {
    MessagesCore = CTouchProcessor::GenerateMessagesCore(v8, v72, v71, 1, (const struct CPointerInputFrame *)v13);
    for ( i = 0; i < *(_DWORD *)(v13 + 48); ++i )
    {
      v55 = *(_QWORD *)(v13 + 240) + 480LL * i;
      v56 = *(_DWORD *)(v55 + 4);
      if ( (v56 & 0x200) != 0 && (v56 & 0x400) == 0 )
      {
        v57 = *(_QWORD *)(v55 + 16);
        v58 = v56 | 0x400;
        *(_DWORD *)(v55 + 4) = v58;
        if ( v57 )
        {
          if ( (v58 & 0x80u) != 0 )
          {
            v59 = *(_DWORD *)(v55 + 180);
            if ( (v59 & 4) != 0 )
              CTouchProcessor::SetPointerCapture(
                v8,
                v57,
                v55 + 352,
                2 - (unsigned int)((v59 & 0x10000) != 0),
                1,
                -__CFSHR__(*(_DWORD *)v55, 21));
          }
        }
      }
    }
  }
  else
  {
    MessagesCore = 0;
  }
  CTouchProcessor::UnreferenceFrame(v8, v13);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v60) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v60) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v10 = 0;
  if ( (_BYTE)v60 || v10 )
  {
    v61 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
    LOBYTE(v61) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v60,
      (_DWORD)v61,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      82,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  }
  CInputDest::~CInputDest((CInputDest *)v78);
  v9 = MessagesCore;
LABEL_154:
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v80);
  return v9;
}
