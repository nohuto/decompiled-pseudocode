/*
 * XREFs of ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x14006AA00
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004B9C0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004BEE0 (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14004C5B4 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x14004C6AC (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePha.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x14004C77C (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x14004C8A0 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x14004CC94 (-GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z.c)
 *     ?GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z @ 0x14004E250 (-GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x14004F080 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1400685B8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x14006A12C (-SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x14006A274 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x14006A348 (-SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUta.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x14006A5D4 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x14006A864 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x14006A91C (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x14006BE60 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x14006C3AC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHH@Z @ 0x14006C440 (-UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEB.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x14006C700 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x14006C7BC (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x14006CD40 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x14006CFE8 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HasDelegationThread@CInputDest@@QEBA_NXZ @ 0x14006D0FC (-HasDelegationThread@CInputDest@@QEBA_NXZ.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14006D41C (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x140087568 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x140089F40 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14009C7BC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1400CA7A4 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1400CAD6C (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1400CB810 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1400CBD48 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400D0B5C (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400D7D60 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x140108E20 (-SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x140108EA0 (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x14015C3A4 (-RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x14015E9A4 (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1401625DC (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     ?IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ @ 0x14016CBE4 (-IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x14017406C (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x14017BC08 (-PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetEditionPointerActivate @ 0x1401BC0C0 (ApiSetEditionPointerActivate.c)
 *     ?TouchHitTest@CTouchProcessor@@CA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x140216B88 (-TouchHitTest@CTouchProcessor@@CA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerFrameTargetWindows(
        PERESOURCE *this,
        struct tagTHREADINFO *a2,
        __int64 a3,
        unsigned int a4,
        int *a5)
{
  __int64 v6; // rdi
  struct tagTHREADINFO *v7; // r13
  unsigned int v9; // ebx
  __int64 v10; // rax
  int v11; // edx
  int v12; // r8d
  __int64 v13; // rdx
  int v14; // r8d
  _QWORD *v15; // rax
  __int64 v16; // r15
  _DWORD *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct tagTHREADINFO *v20; // rax
  struct CPointerInfoNode *v21; // r12
  __int64 v22; // rax
  int v23; // r13d
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct tagTHREADINFO *v26; // rax
  __int64 v27; // rdx
  CPointerInfoNode *v28; // rcx
  unsigned __int64 i; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  struct CPointerCaptureData *PointerCaptureData; // rax
  struct CInputDest *PointerCaptureInt; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  BOOL v42; // r12d
  HWND WindowHandle; // rax
  __int64 v44; // rax
  unsigned int v45; // eax
  int v46; // eax
  unsigned int v47; // edi
  struct tagTHREADINFO *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  int v52; // r8d
  CTouchProcessor *v53; // rcx
  struct tagTHREADINFO *v54; // rax
  CTouchProcessor *v56; // rcx
  __int64 v57; // rax
  unsigned int v58; // r12d
  CTouchProcessor *v59; // rcx
  int v60; // r8d
  struct CInputDest *Queue; // rax
  struct tagTHREADINFO *ThreadInfo; // rax
  struct tagTHREADINFO *v63; // rax
  _QWORD *v64; // rax
  int v65; // r8d
  int IsAnyMessageNonDelegated; // eax
  __int64 v67; // rdx
  __int64 v68; // r8
  int v69; // edx
  int v70; // r8d
  __int64 v71; // rax
  __int64 v72; // r8
  __int128 v73; // xmm1
  __int64 v74; // rdx
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  __int128 v77; // xmm0
  __int128 v78; // xmm1
  __int128 v79; // xmm0
  __int64 v80; // rdx
  __int64 v81; // rdx
  struct tagTHREADINFO *v82; // rax
  struct tagTHREADINFO *v83; // rax
  int v84; // eax
  __int64 *v85; // rax
  __int64 v86; // rax
  void *v87; // rax
  CTouchProcessor *v88; // rcx
  int v89; // edx
  CPointerInfoNode *v90; // rcx
  int v91; // r8d
  char v92; // al
  _UNKNOWN **v93; // rcx
  __int64 UserSessionState; // rax
  int v95; // r8d
  int v96; // edx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  __int16 v98; // [rsp+30h] [rbp-D0h]
  int IsMessageDelegated; // [rsp+50h] [rbp-B0h]
  unsigned int v100; // [rsp+54h] [rbp-ACh]
  unsigned int v101; // [rsp+58h] [rbp-A8h] BYREF
  char v102; // [rsp+5Ch] [rbp-A4h]
  bool v103; // [rsp+5Dh] [rbp-A3h]
  unsigned int v104; // [rsp+60h] [rbp-A0h]
  CPointerInfoNode *v105; // [rsp+68h] [rbp-98h] BYREF
  struct tagTHREADINFO *v106; // [rsp+70h] [rbp-90h]
  int v107; // [rsp+78h] [rbp-88h]
  struct CPointerInfoNode *v108; // [rsp+80h] [rbp-80h]
  struct tagQ *QueueForCurrentNode; // [rsp+88h] [rbp-78h]
  struct tagPOINT v110; // [rsp+90h] [rbp-70h] BYREF
  int v111; // [rsp+98h] [rbp-68h]
  int v112; // [rsp+9Ch] [rbp-64h]
  int v113; // [rsp+A0h] [rbp-60h]
  int v114[7]; // [rsp+A4h] [rbp-5Ch] BYREF
  struct CInputDest *v115; // [rsp+C0h] [rbp-40h] BYREF
  int *v116; // [rsp+C8h] [rbp-38h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v118; // [rsp+E0h] [rbp-20h]
  ULONG_PTR v119[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v120; // [rsp+F8h] [rbp-8h]
  _BYTE v121[8]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v122; // [rsp+108h] [rbp+8h]
  _QWORD v123[4]; // [rsp+110h] [rbp+10h] BYREF
  char v124; // [rsp+130h] [rbp+30h]
  PERESOURCE *v125; // [rsp+138h] [rbp+38h]
  _QWORD v126[4]; // [rsp+140h] [rbp+40h] BYREF
  char v127; // [rsp+160h] [rbp+60h]
  PERESOURCE *v128; // [rsp+168h] [rbp+68h]
  _BYTE v129[56]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v130[56]; // [rsp+1A8h] [rbp+A8h] BYREF
  _OWORD v131[8]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v132[112]; // [rsp+260h] [rbp+160h] BYREF

  v116 = a5;
  v6 = a3;
  v104 = a4;
  v7 = a2;
  v106 = a2;
  v9 = 1;
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
      (_DWORD)a2,
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      90,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  v124 = 0;
  v10 = v6;
  if ( v6 == -1 )
    v10 = 0LL;
  v123[0] = v10;
  v125 = this + 4;
  ExEnterCriticalRegionAndAcquireResourceExclusive(this[4]);
  CRefUnRefPointerMsgId::ReferenceAndThreadLock((CRefUnRefPointerMsgId *)v123, v11, v12);
  v110 = 0LL;
  v114[0] = 0;
  *a5 = 0;
  if ( a4 == 595 )
  {
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
        91,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    goto LABEL_122;
  }
  if ( !v6 )
  {
    v88 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v13) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      LOBYTE(v9) = 0;
    if ( !(_BYTE)v13 && !(_BYTE)v9 )
      goto LABEL_255;
    v98 = 92;
    goto LABEL_254;
  }
  if ( (*(_DWORD *)(v6 + 36) & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 10641LL);
  v15 = CTouchProcessor::ReferenceFrame((__int64)this, *(_DWORD *)(v6 + 28));
  v16 = (__int64)v15;
  if ( !v15 )
  {
    v88 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v13) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      LOBYTE(v9) = 0;
    if ( !(_BYTE)v13 && !(_BYTE)v9 )
      goto LABEL_255;
    v98 = 93;
LABEL_254:
    LOBYTE(v14) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)v88 + 3),
      v13,
      v14,
      *((_QWORD *)v88 + 8),
      5,
      4,
      v98,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
LABEL_255:
    CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v123);
    return 0LL;
  }
  if ( (*((_DWORD *)v15 + 57) & 0x10) != 0 )
  {
    CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v15);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v13) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v65) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      LOBYTE(v65) = 0;
    }
    if ( (_BYTE)v13 || (_BYTE)v65 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v65,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        94,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    goto LABEL_122;
  }
  v17 = (_DWORD *)Win32AllocPoolZInitImpl(256LL, 0x78uLL, 0x70697355u);
  if ( !v17 )
  {
    CTouchProcessor::UnreferenceFrame((__int64)this, v16);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v13) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      LOBYTE(v9) = 0;
    if ( (_BYTE)v13 || (_BYTE)v9 )
    {
      LOBYTE(v60) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v60,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        95,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    v9 = 0;
LABEL_122:
    CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v123, v13);
    ExReleaseResourceAndLeaveCriticalRegion(*v125);
    return v9;
  }
  *(_DWORD *)((char *)v17 + 113) = 0;
  *(_WORD *)((char *)v17 + 117) = 0;
  *((_BYTE *)v17 + 119) = 0;
  memset(v17, 0, 0x70uLL);
  *((_BYTE *)v17 + 112) = 0;
  v20 = PtiCurrent(v19, v18);
  BugCheckParameter2[0] = *((_QWORD *)v20 + 47);
  *((_QWORD *)v20 + 47) = BugCheckParameter2;
  v118 = (__int64)lambda_0e67b526681aa6a0208369450a9126fb_::_lambda_invoker_cdecl_;
  BugCheckParameter2[1] = (ULONG_PTR)v17;
  if ( *(_DWORD *)(v6 + 32) >= *(_DWORD *)(v16 + 48) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3971LL);
  v108 = (struct CPointerInfoNode *)(*(_QWORD *)(v16 + 240) + 480LL * *(unsigned int *)(v6 + 32));
  v21 = v108;
  if ( !(unsigned int)CPointerInfoNode::IsValid(v108) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3974LL);
  if ( *((_WORD *)v108 + 86) != *(_WORD *)(v6 + 16) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3975LL);
  switch ( v104 )
  {
    case 0x249u:
      if ( (*(_DWORD *)v108 & 0x800000) != 0 )
        goto LABEL_26;
      v68 = 3976LL;
      break;
    case 0x24Au:
      if ( (*(_DWORD *)v108 & 0x8000000) != 0 )
        goto LABEL_26;
      v68 = 3977LL;
      break;
    case 0x251u:
      if ( *(int *)v108 < 0 )
        goto LABEL_26;
      v68 = 3978LL;
      break;
    default:
      if ( v104 != 594 || (*((_DWORD *)v108 + 1) & 8) != 0 )
        goto LABEL_26;
      v68 = 3979LL;
      break;
  }
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, v68);
LABEL_26:
  if ( (*(_DWORD *)v108 & 0x100) == 0 && !*((_QWORD *)v108 + 24) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3987LL);
  v22 = *((_QWORD *)v7 + 170);
  if ( (v22 & 0x2000) != 0 || (v23 = 0, (v22 & 0x2000000000LL) != 0) )
    v23 = 1;
  IsMessageDelegated = CPointerInfoNode::IsMessageDelegated(v108, v104);
  QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                          (CTouchProcessor *)this,
                          v106,
                          v23,
                          v104,
                          IsMessageDelegated,
                          v108);
  if ( !QueueForCurrentNode )
  {
    v101 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4010LL);
  }
  v26 = PtiCurrent(v25, v24);
  v107 = 1;
  v100 = 0;
  v119[0] = *((_QWORD *)v26 + 47);
  v28 = (CPointerInfoNode *)v119;
  *((_QWORD *)v26 + 47) = v119;
  v120 = (__int64)CTouchProcessor::DereferencePointerInputFrame;
  v119[1] = v16;
  for ( i = *(_QWORD *)(v16 + 240); ; i += 480LL )
  {
    v30 = *(unsigned int *)(v16 + 48);
    if ( v100 >= (unsigned int)v30 )
      goto LABEL_68;
    if ( i >= *(_QWORD *)(v16 + 240) + 480 * v30 )
    {
      v111 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4028LL);
    }
    CInputDest::~CInputDest((CInputDest *)v17);
    if ( v23 )
    {
      v31 = *((_QWORD *)v106 + 170);
      if ( (v31 & 0x2000) == 0 && (v31 & 0x2000000000LL) == 0 )
      {
LABEL_68:
        v47 = 1;
        goto LABEL_69;
      }
    }
    if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)i) )
      goto LABEL_56;
    if ( !(unsigned int)CPointerInfoNode::IsValid(v28) )
    {
      v112 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 505LL);
      LODWORD(v32) = 0;
    }
    v33 = *((_QWORD *)v106 + 170);
    if ( (v33 & 0x2000) != 0 || (v33 & 0x2000000000LL) != 0 )
    {
      if ( (*(_DWORD *)i & 0x100) != 0 )
        goto LABEL_65;
    }
    else if ( (*(_DWORD *)i & 0x100) != 0 && (*(_DWORD *)i & 0x200) == 0 )
    {
LABEL_65:
      v46 = CTouchProcessor::HandlePointerNodeWithTarget(this, v21, v104, i);
      if ( v46 == 1 )
      {
        v47 = 0;
        *v116 = 1;
        goto LABEL_69;
      }
      if ( (v46 & 0xFFFFFFFD) != 0 )
      {
        v113 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4063LL);
      }
      goto LABEL_56;
    }
    if ( *(_DWORD *)(i + 8) != *((_DWORD *)v21 + 2) )
      goto LABEL_131;
    if ( (struct CPointerInfoNode *)i != v21 )
    {
      if ( !v23 )
      {
        IsAnyMessageNonDelegated = CPointerInfoNode::IsAnyMessageNonDelegated((CPointerInfoNode *)i);
        LODWORD(v32) = 0;
        if ( !IsAnyMessageNonDelegated )
          goto LABEL_131;
      }
      Queue = CPointerInfoNode::GetQueue((CPointerInfoNode *)i, v114);
      LODWORD(v32) = 0;
      v28 = Queue;
      if ( v114[0]
        || Queue
        && *(_DWORD *)Queue
        && (ThreadInfo = CInputDest::GetThreadInfo(Queue)) != 0LL
        && *((_QWORD *)ThreadInfo + 58) != v32
        && ((v63 = CInputDest::GetThreadInfo(v28)) == 0LL
         || (v28 = QueueForCurrentNode, *((struct tagQ **)v63 + 58) != QueueForCurrentNode)) )
      {
LABEL_131:
        v107 = v32;
        goto LABEL_56;
      }
    }
    v34 = *((_QWORD *)v106 + 170);
    if ( (v34 & 0x2000) != 0 || (v34 & 0x2000000000LL) != 0 )
    {
      v35 = *(_QWORD *)(i + 16);
      v101 = v32;
      PointerCaptureData = CTouchProcessor::GetPointerCaptureData(this, v35);
      if ( PointerCaptureData
        && (PointerCaptureInt = CTouchProcessor::GetPointerCaptureInt(
                                  (CTouchProcessor *)this,
                                  (struct CPointerCaptureData *)((char *)PointerCaptureData + (v23 != 0 ? 0x88 : 0) + 32),
                                  (int *)&v101)) != 0LL )
      {
        CInputDest::operator=((__int64)v17, (__int64)PointerCaptureInt);
      }
      else
      {
        v101 = 1;
        if ( *(_DWORD *)(i + 24) )
        {
          v84 = *(_DWORD *)(i + 116);
          if ( v84 != 2 && v84 != 1
            || ((v85 = *(__int64 **)(i + 104)) != 0LL ? (v86 = *v85) : (v86 = 0LL), v86 != *(_QWORD *)(i + 192)) )
          {
            v114[1] = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4118LL);
          }
          CInputDest::operator=((__int64)v17, i + 24);
        }
        if ( !*v17 )
        {
          CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v129, (struct CInputDest *)(i + 352));
          memset(v132, 0, sizeof(v132));
          if ( (unsigned int)IsCurrentProcessDwm() )
          {
            v114[2] = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4127LL);
          }
          LODWORD(BugCheckParameter4) = *(_DWORD *)(v16 + 48);
          v87 = (void *)CTouchProcessor::TouchHitTest(v131, i + 160, 0LL, 0LL, BugCheckParameter4, 0LL, v132);
          CInputDest::operator=(v17, v87);
          CInputDest::~CInputDest((CInputDest *)v131);
          CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v129);
        }
      }
      if ( CInputDest::HasDelegationThread((CInputDest *)v17) )
      {
        v105 = CTouchProcessor::LookupNode(v28, (const struct CPointerInputFrame *)v16, v100);
        v41 = *((unsigned int *)PtiCurrent(v39, v38) + 340);
        v42 = (v41 & 0x2000) != 0 || _bittest64((const signed __int64 *)PtiCurrent(v41, v40) + 170, 0x25u);
        CTouchProcessor::SetPointerInfoNodeTargetInt(
          (CTouchProcessor *)v41,
          v105,
          (const struct CInputDest *)v17,
          v101,
          &v110,
          0,
          0,
          v42,
          1);
        if ( CPointerInfoNode::GetHistoryCount(v105) > 1 )
          CTouchProcessor::UpdateHistoryWithTarget(
            (CTouchProcessor *)this,
            (const struct CPointerInputFrame *)v16,
            v105,
            (const struct CInputDest *)v17,
            v101,
            &v110,
            0,
            v42,
            1);
        v107 = 0;
        if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)i) )
        {
          AtomicExecutionCheck::AtomicExecutionCheck(v121);
          WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v17);
          HIDWORD(BugCheckParameter4) = 0;
          CBaseProcessor::PostQEventWork(*(_QWORD *)(i + 16), WindowHandle, 2LL);
          v21 = v108;
          if ( v121[0] )
          {
            v44 = v122;
            v122 = 0LL;
            v121[0] = 0;
            --*(_DWORD *)(v44 + 28);
          }
        }
        else
        {
LABEL_241:
          v21 = v108;
        }
LABEL_56:
        v45 = v100;
        goto LABEL_57;
      }
    }
    v56 = (CTouchProcessor *)*((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(
                                                 v28,
                                                 (const struct CPointerInputFrame *)v16,
                                                 (const struct CPointerInfoNode *)i)
                             + 35);
    if ( ((unsigned __int8)v56 & 1) != 0 )
    {
      v57 = *((_QWORD *)v106 + 170);
      if ( (v57 & 0x2000) == 0 && (v57 & 0x2000000000LL) == 0 )
        CTouchProcessor::SetQFrameNonCoalescable(
          v56,
          (const struct CPointerInputFrame *)v16,
          (const struct CPointerInfoNode *)i);
    }
    v101 = 1;
    if ( (unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)i) )
    {
      CTouchProcessor::DetermineTouchpadPointerTargetWindow(
        (CTouchProcessor *)this,
        v106,
        (const struct CPointerInputFrame *)v16,
        (struct CPointerInfoNode *)i,
        QueueForCurrentNode,
        v100,
        v23,
        (int *)&v101,
        &v110,
        (struct CInputDest *)v17);
      if ( !*v17 )
        goto LABEL_56;
    }
    else
    {
      CTouchProcessor::DeterminePointerTargetWindow(
        (CTouchProcessor *)this,
        v106,
        (struct CPointerInfoNode *)i,
        QueueForCurrentNode,
        v23,
        (int *)&v101,
        &v110,
        (struct CInputDest *)v17);
    }
    QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                            (CTouchProcessor *)this,
                            v106,
                            v23,
                            v104,
                            IsMessageDelegated,
                            v21);
    if ( !QueueForCurrentNode )
      goto LABEL_154;
    if ( !CTouchProcessor::RevalidateFrameProcessing(v28, v106, v23, (const struct CPointerInfoNode *)i, 0) )
      goto LABEL_56;
    if ( !*v17
      || (*(_DWORD *)(i + 180) & 0x10000) == 0
      || (unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)i)
      || (*(_DWORD *)(i + 4) & 0x80u) != 0 )
    {
      goto LABEL_98;
    }
    CTouchProcessor::PointerParentNotify(
      (CTouchProcessor *)this,
      (struct CInputDest *)v17,
      (struct CPointerInfoNode *)i);
    QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                            (CTouchProcessor *)this,
                            v106,
                            v23,
                            v104,
                            IsMessageDelegated,
                            v21);
    if ( !QueueForCurrentNode )
      goto LABEL_154;
    if ( !CTouchProcessor::RevalidateFrameProcessing(v28, v106, v23, (const struct CPointerInfoNode *)i, 0) )
      goto LABEL_56;
    v67 = *(_QWORD *)(i + 16);
    v115 = 0LL;
    LODWORD(v105) = 0;
    CTouchProcessor::GetPointerCapture(this, v67, v23, &v115, (int *)&v105);
    if ( v115 )
    {
      v58 = (unsigned int)v105;
      CInputDest::operator=((__int64)v17, (__int64)v115);
    }
    else
    {
LABEL_98:
      v58 = v101;
    }
    if ( *v17 && (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)i) )
      break;
LABEL_101:
    if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)i, v106) )
    {
      v114[3] = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4312LL);
    }
    CTouchProcessor::SetPointerInfoNodeTarget(
      (CTouchProcessor *)this,
      (const struct CPointerInputFrame *)v16,
      v100,
      (const struct CInputDest *)v17,
      v58,
      &v110,
      0,
      0,
      1,
      0);
    if ( *v17 )
    {
      if ( (*(_DWORD *)(i + 180) & 0x10000) != 0 )
      {
        CTouchProcessor::SetPointerImplicitCapture(
          (CTouchProcessor *)this,
          *(_QWORD *)(i + 16),
          (const struct CInputDest *)v17,
          v58,
          v23);
      }
      else if ( v104 == 593 )
      {
        CTouchProcessor::SetPointerExplicitCapture(
          (CTouchProcessor *)this,
          *(_QWORD *)(i + 16),
          (const struct CInputDest *)v17,
          v58,
          v23);
      }
    }
    if ( !(unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)i) )
      goto LABEL_241;
    v45 = v100;
    if ( (*(_DWORD *)(i + 180) & 0x2000) != 0 )
    {
      v101 = 0;
      if ( v100 )
      {
        v105 = 0LL;
        do
        {
          if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)((char *)v105 + *(_QWORD *)(v16 + 240)))
            && *(_DWORD *)(i + 8) == *((_DWORD *)v90 + 2) )
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
              || (v92 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v92 = v91;
            }
            v93 = &WPP_RECORDER_INITIALIZED;
            v102 = v92;
            v103 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v92 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v93) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              UserSessionState = W32GetUserSessionState((_DWORD)v93, v89, v91);
              LOBYTE(v95) = v103;
              LOBYTE(v96) = v102;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v96,
                v95,
                *(_QWORD *)(UserSessionState + 69136),
                4,
                4,
                96,
                (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
              v91 = 0;
            }
            CTouchProcessor::SetPointerInfoNodeTarget(
              (CTouchProcessor *)this,
              (const struct CPointerInputFrame *)v16,
              v101,
              (const struct CInputDest *)v17,
              v58,
              &v110,
              v91,
              v91,
              1,
              v91);
            if ( *v17 )
            {
              v27 = *(_QWORD *)(v16 + 240);
              v28 = v105;
              if ( (*(_DWORD *)((_BYTE *)v105 + v27 + 180) & 0x10000) != 0 )
              {
                CTouchProcessor::SetPointerImplicitCapture(
                  (CTouchProcessor *)this,
                  *(_QWORD *)((char *)v105 + v27 + 16),
                  (const struct CInputDest *)v17,
                  v58,
                  v23);
              }
              else if ( v104 == 593 )
              {
                CTouchProcessor::SetPointerExplicitCapture(
                  (CTouchProcessor *)this,
                  *(_QWORD *)(i + 16),
                  (const struct CInputDest *)v17,
                  v58,
                  v23);
              }
            }
          }
          else if ( (unsigned int)CPointerInfoNode::IsValid(v90) )
          {
            v114[4] = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4382LL);
          }
          v105 = (CPointerInfoNode *)((char *)v105 + 480);
          ++v101;
        }
        while ( v101 < v100 );
        goto LABEL_241;
      }
    }
    v21 = v108;
LABEL_57:
    v100 = v45 + 1;
  }
  *((_DWORD *)CTouchProcessor::LookupNode(v59, (const struct CPointerInputFrame *)v16, v100) + 36) = v58;
  CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v130, (struct CInputDest *)v17);
  v71 = *(_QWORD *)(i + 16);
  v127 = 0;
  if ( v71 == -1 )
    v71 = 0LL;
  v126[0] = v71;
  v128 = this + 4;
  CRefUnRefPointerMsgId::ReferenceAndThreadLock((CRefUnRefPointerMsgId *)v126, v69, v70);
  ExReleaseResourceAndLeaveCriticalRegion(*v128);
  v72 = *(_QWORD *)(i + 16);
  v73 = *((_OWORD *)v17 + 1);
  v74 = *(unsigned __int16 *)(i + 144);
  v131[0] = *(_OWORD *)v17;
  v75 = *((_OWORD *)v17 + 2);
  v131[1] = v73;
  v76 = *((_OWORD *)v17 + 3);
  v131[2] = v75;
  v77 = *((_OWORD *)v17 + 4);
  v131[3] = v76;
  v78 = *((_OWORD *)v17 + 5);
  v131[4] = v77;
  v79 = *((_OWORD *)v17 + 6);
  v131[5] = v78;
  v131[6] = v79;
  ApiSetEditionPointerActivate(v131, v74, v72, i + 160);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*v128);
  CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v126, v80);
  CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v130);
  QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                          (CTouchProcessor *)this,
                          v106,
                          v23,
                          v104,
                          IsMessageDelegated,
                          v108);
  if ( QueueForCurrentNode )
  {
    if ( !CTouchProcessor::RevalidateFrameProcessing(v28, v106, v23, (const struct CPointerInfoNode *)i, 0) )
      goto LABEL_241;
    v81 = *(_QWORD *)(i + 16);
    v115 = 0LL;
    LODWORD(v105) = 0;
    CTouchProcessor::GetPointerCapture(this, v81, v23, &v115, (int *)&v105);
    if ( v115 )
    {
      v58 = (unsigned int)v105;
      CInputDest::operator=((__int64)v17, (__int64)v115);
    }
    goto LABEL_101;
  }
LABEL_154:
  v47 = 0;
  *v116 = 1;
LABEL_69:
  if ( v120 == -1 )
  {
    v83 = PtiCurrent((__int64)v28, v27);
    KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)v119, 0LL, (ULONG_PTR)v83);
  }
  v48 = PtiCurrent((__int64)v28, v27);
  v50 = v119[0];
  *((_QWORD *)v48 + 47) = v119[0];
  v120 = -1LL;
  if ( v118 == -1 )
  {
    v82 = PtiCurrent(v50, v49);
    KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, 0LL, (ULONG_PTR)v82);
  }
  PopAndFreeAlwaysW32ThreadLock(BugCheckParameter2);
  v118 = -1LL;
  if ( v47 )
  {
    if ( (*(_DWORD *)(v16 + 228) & 0x10) == 0 )
    {
      if ( v107 )
      {
        if ( !v23 )
        {
          v64 = CTouchProcessor::FindAndReferenceFrameById((__int64)this, *(_DWORD *)(v16 + 40), 4);
          if ( v64 )
          {
            *((_DWORD *)v64 + 57) |= 0x10u;
            CTouchProcessor::UnreferenceFrameInt(this, v64);
          }
        }
      }
    }
  }
  CTouchProcessor::UnreferenceFrame((__int64)this, v16);
  v53 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v51) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v51) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    LOBYTE(v9) = 0;
  if ( (_BYTE)v51 || (_BYTE)v9 )
  {
    LOBYTE(v52) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v51,
      v52,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      97,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  }
  if ( v120 != -1 )
  {
    v54 = PtiCurrent((__int64)v53, v51);
    *((_QWORD *)v54 + 47) = v119[0];
    v120 = -1LL;
  }
  if ( v118 != -1 )
  {
    PopAndFreeAlwaysW32ThreadLock(BugCheckParameter2);
    v118 = -1LL;
  }
  CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v123, v51);
  ExReleaseResourceAndLeaveCriticalRegion(*v125);
  return v47;
}
