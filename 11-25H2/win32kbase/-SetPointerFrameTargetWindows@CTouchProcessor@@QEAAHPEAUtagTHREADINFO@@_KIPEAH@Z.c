/*
 * XREFs of ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x140209AA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14003821C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x14009F128 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x1400B7D38 (-UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1400B8074 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1400B96E8 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1400C45CC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1400C4788 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1400C4808 (-RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C4964 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?TouchHitTest@CTouchProcessor@@CA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@@KKKPEAHPEAU_InputHitTestResult@@@Z @ 0x1400C4988 (-TouchHitTest@CTouchProcessor@@CA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C54D4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1400C56E8 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1400C5C20 (-SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CD3B0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@VCInputDest@@$0A@$00$0A@$00@@AEAAX_N0@Z @ 0x1400D00A4 (-UnlockWorker@-$Win32RawLockedItemBase@VCInputDest@@$0A@$00$0A@$00@@AEAAX_N0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400D0120 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1400D14F0 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1400DEC80 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UCPointerInputFrame@@$0A@$0A@$00$00@@AEAAX_N0@Z @ 0x14010F254 (-UnlockWorker@-$Win32RawLockedItemBase@UCPointerInputFrame@@$0A@$0A@$00$00@@AEAAX_N0@Z.c)
 *     ?HasDelegationThread@CInputDest@@QEBA_NXZ @ 0x14011123C (-HasDelegationThread@CInputDest@@QEBA_NXZ.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x140126154 (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     ApiSetEditionPointerActivate @ 0x1401962B4 (ApiSetEditionPointerActivate.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A4F40 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1401F6D74 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1401F6E78 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1401F701C (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9D98 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9E38 (--0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1401FDDC8 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1401FE1EC (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1401FF040 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePha.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1402029FC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x140204448 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x140204600 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x140204910 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ @ 0x140204B4C (-IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x140204E94 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1402054B0 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x14020553C (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x140205590 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x140205D88 (-PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140208EE8 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x140209A18 (-SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x14020AABC (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14020C628 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14020C984 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerFrameTargetWindows(
        PERESOURCE *this,
        struct tagTHREADINFO *a2,
        void *a3,
        unsigned int a4,
        int *a5)
{
  void *v6; // rdi
  struct tagTHREADINFO *v7; // r12
  unsigned int v9; // ebx
  int v10; // edx
  CTouchProcessor *v11; // rcx
  int v12; // r8d
  struct CPointerMsgData *NonConstMsgData; // rax
  int v14; // edx
  int v15; // r8d
  struct CPointerMsgData *v16; // rdi
  _QWORD *v17; // rcx
  __int64 v18; // rax
  ULONG_PTR v19; // r14
  int v20; // edx
  int v21; // r8d
  _DWORD *v22; // rsi
  struct tagTHREADINFO *v23; // rax
  CPointerInfoNode *v24; // r13
  int v25; // r8d
  __int64 v26; // rax
  int v27; // r12d
  struct tagTHREADINFO *v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rdi
  __int64 v31; // rax
  CPointerInfoNode *v32; // rcx
  struct tagTHREADINFO *v33; // r8
  int IsTargetSetForRetrieval; // eax
  CTouchProcessor *v35; // rcx
  CInputDest *v36; // r9
  int v37; // eax
  unsigned int v38; // ecx
  int IsAnyMessageNonDelegated; // eax
  CInputDest *Queue; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  CInputDest *v44; // rax
  char HasDelegationThread; // al
  __int64 v46; // rdx
  HWND WindowHandle; // rax
  __int64 v48; // rax
  CTouchProcessor *v49; // rcx
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  CTouchProcessor *v52; // rcx
  struct CPointerInfoNode *v53; // rax
  __int64 v54; // r8
  __int128 v55; // xmm1
  __int64 v56; // rdx
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  unsigned __int64 v62; // rdx
  __int64 v63; // r13
  __int64 v64; // rdx
  CPointerInfoNode *v65; // rcx
  int v66; // r9d
  char v67; // al
  _UNKNOWN **v68; // rcx
  __int64 UserSessionState; // rax
  int v70; // r8d
  int v71; // edx
  __int64 v72; // rdx
  unsigned int v73; // edi
  __int64 v74; // rax
  int v75; // edx
  int v76; // r8d
  __int16 v78; // [rsp+30h] [rbp-D0h]
  unsigned int v79; // [rsp+50h] [rbp-B0h]
  CInputDest *v80; // [rsp+58h] [rbp-A8h] BYREF
  int v81; // [rsp+60h] [rbp-A0h] BYREF
  char v82; // [rsp+64h] [rbp-9Ch]
  bool v83; // [rsp+65h] [rbp-9Bh]
  unsigned int v84; // [rsp+68h] [rbp-98h]
  struct tagTHREADINFO *v85; // [rsp+70h] [rbp-90h]
  int v86; // [rsp+78h] [rbp-88h]
  int v87; // [rsp+7Ch] [rbp-84h]
  int IsMessageDelegated; // [rsp+80h] [rbp-80h]
  struct tagQ *QueueForCurrentNode; // [rsp+88h] [rbp-78h]
  int v90; // [rsp+90h] [rbp-70h]
  int v91; // [rsp+94h] [rbp-6Ch]
  int v92[6]; // [rsp+98h] [rbp-68h] BYREF
  struct tagPOINT v93; // [rsp+B0h] [rbp-50h] BYREF
  int *v94; // [rsp+B8h] [rbp-48h]
  _BYTE v95[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v96; // [rsp+C8h] [rbp-38h]
  ULONG_PTR v97[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v98; // [rsp+E0h] [rbp-20h]
  CPointerInfoNode *v99; // [rsp+E8h] [rbp-18h]
  ULONG_PTR BugCheckParameter2[3]; // [rsp+F0h] [rbp-10h] BYREF
  PERESOURCE *v101[7]; // [rsp+108h] [rbp+8h] BYREF
  PERESOURCE *v102[6]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v103[64]; // [rsp+170h] [rbp+70h] BYREF
  _OWORD v104[7]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v105[128]; // [rsp+220h] [rbp+120h] BYREF

  v94 = a5;
  v6 = a3;
  v84 = a4;
  v7 = a2;
  v85 = a2;
  v9 = 1;
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
      (_DWORD)a2,
      (_DWORD)a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      90,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v102, this + 4, v6);
  v81 = 0;
  v93 = 0LL;
  v92[0] = 0;
  *a5 = 0;
  if ( a4 == 595 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v12) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      LOBYTE(v12) = 0;
    }
    if ( (_BYTE)v10 || (_BYTE)v12 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v12,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        91,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    goto LABEL_206;
  }
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v11, (__int64)v6);
  v16 = NonConstMsgData;
  if ( !NonConstMsgData )
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v14) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      LOBYTE(v9) = 0;
    if ( !(_BYTE)v14 && !(_BYTE)v9 )
      goto LABEL_67;
    v78 = 92;
LABEL_66:
    LOBYTE(v15) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      v17[3],
      v14,
      v15,
      v17[8],
      5,
      4,
      v78,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
LABEL_67:
    v9 = 0;
    goto LABEL_206;
  }
  v18 = CTouchProcessor::ReferenceFrame((__int64)this, *((_DWORD *)NonConstMsgData + 7));
  v19 = v18;
  if ( !v18 )
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v14) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      LOBYTE(v9) = 0;
    if ( !(_BYTE)v14 && !(_BYTE)v9 )
      goto LABEL_67;
    v78 = 93;
    goto LABEL_66;
  }
  if ( (*(_DWORD *)(v18 + 228) & 0x10) != 0 )
  {
    CTouchProcessor::UnreferenceFrame(this, v18);
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v20) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v20) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v21) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      LOBYTE(v21) = 0;
    }
    if ( (_BYTE)v20 || (_BYTE)v21 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v21,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        94,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    goto LABEL_206;
  }
  v22 = (_DWORD *)Win32AllocPoolZInitImpl(256LL, 0x78uLL, 0x70697355u);
  if ( !v22 )
  {
    CTouchProcessor::UnreferenceFrame(this, v19);
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v14) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      LOBYTE(v9) = 0;
    if ( !(_BYTE)v14 && !(_BYTE)v9 )
      goto LABEL_67;
    v78 = 95;
    goto LABEL_66;
  }
  *(_DWORD *)((char *)v22 + 113) = 0;
  *(_WORD *)((char *)v22 + 117) = 0;
  *((_BYTE *)v22 + 119) = 0;
  memset(v22, 0, 0x70uLL);
  *((_BYTE *)v22 + 112) = 0;
  v23 = PtiCurrent();
  v97[0] = *((_QWORD *)v23 + 48);
  *((_QWORD *)v23 + 48) = v97;
  v98 = (__int64)lambda_0e67b526681aa6a0208369450a9126fb_::_lambda_invoker_cdecl_;
  v97[1] = (ULONG_PTR)v22;
  if ( *((_DWORD *)v16 + 8) >= *(_DWORD *)(v19 + 48) )
  {
    LODWORD(v80) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3987);
  }
  v99 = (CPointerInfoNode *)(*(_QWORD *)(v19 + 240) + 480LL * *((unsigned int *)v16 + 8));
  v24 = v99;
  if ( !(unsigned int)CPointerInfoNode::IsValid(v99) )
  {
    LODWORD(v80) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3990);
  }
  if ( *((_WORD *)v24 + 86) != *((_WORD *)v16 + 8) )
  {
    LODWORD(v80) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3991);
  }
  switch ( v84 )
  {
    case 0x249u:
      if ( (*(_DWORD *)v24 & 0x800000) == 0 )
      {
        v25 = 3992;
LABEL_86:
        LODWORD(v80) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v25);
      }
      break;
    case 0x24Au:
      if ( (*(_DWORD *)v24 & 0x8000000) == 0 )
      {
        v25 = 3993;
        goto LABEL_86;
      }
      break;
    case 0x251u:
      if ( *(int *)v24 >= 0 )
      {
        v25 = 3994;
        goto LABEL_86;
      }
      break;
    default:
      if ( v84 == 594 && (*((_DWORD *)v24 + 1) & 8) == 0 )
      {
        v25 = 3995;
        goto LABEL_86;
      }
      break;
  }
  if ( (*(_DWORD *)v24 & 0x100) == 0 && !*((_QWORD *)v24 + 24) )
  {
    LODWORD(v80) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4003);
  }
  v26 = *((_QWORD *)v7 + 170);
  if ( (v26 & 0x2000) != 0 || (v27 = 0, (v26 & 0x2000000000LL) != 0) )
    v27 = 1;
  IsMessageDelegated = CPointerInfoNode::IsMessageDelegated(v24, v84);
  QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(this, v85, v27, v84, IsMessageDelegated, v24);
  if ( !QueueForCurrentNode )
  {
    LODWORD(v80) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4026);
  }
  v28 = PtiCurrent();
  v86 = 1;
  v87 = 1;
  v79 = 0;
  BugCheckParameter2[0] = *((_QWORD *)v28 + 48);
  *((_QWORD *)v28 + 48) = BugCheckParameter2;
  BugCheckParameter2[2] = (ULONG_PTR)CTouchProcessor::DereferencePointerInputFrame;
  BugCheckParameter2[1] = v19;
  v29 = *(unsigned int *)(v19 + 48);
  v30 = *(_QWORD *)(v19 + 240);
  if ( (_DWORD)v29 )
  {
    do
    {
      if ( v30 >= *(_QWORD *)(v19 + 240) + 480 * v29 )
      {
        v90 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4044);
      }
      CInputDest::~CInputDest((CInputDest *)v22);
      if ( v27 )
      {
        v31 = *((_QWORD *)v85 + 170);
        if ( (v31 & 0x2000) == 0 && (v31 & 0x2000000000LL) == 0 )
          break;
      }
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v30) )
        goto LABEL_106;
      IsTargetSetForRetrieval = CPointerInfoNode::IsTargetSetForRetrieval(v32, v33);
      v36 = 0LL;
      if ( IsTargetSetForRetrieval )
      {
        v37 = CTouchProcessor::HandlePointerNodeWithTarget(this, v24, v84, v30);
        if ( v37 == 1 )
          goto LABEL_186;
        if ( (v37 & 0xFFFFFFFD) != 0 )
        {
          v91 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4079);
        }
        goto LABEL_106;
      }
      if ( *(_DWORD *)(v30 + 8) == *((_DWORD *)v24 + 2)
        && ((CPointerInfoNode *)v30 == v24
         || (v27
          || (IsAnyMessageNonDelegated = CPointerInfoNode::IsAnyMessageNonDelegated((CPointerInfoNode *)v30),
              LODWORD(v36) = 0,
              IsAnyMessageNonDelegated))
         && (Queue = CPointerInfoNode::GetQueue((CPointerInfoNode *)v30, v92), v36 = 0LL, v80 = Queue, !v92[0])
         && (!Queue
          || (v41 = CInputDest::GetQueue(Queue, 2), v36 = 0LL, !v41)
          || CInputDest::UsesQueue(v80, QueueForCurrentNode))) )
      {
        v42 = *((_QWORD *)v85 + 170);
        if ( (v42 & 0x2000) == 0 && (v42 & 0x2000000000LL) == 0 )
          goto LABEL_134;
        v43 = *(_QWORD *)(v30 + 16);
        v80 = v36;
        if ( (unsigned int)CTouchProcessor::RecheckPointerCapture((CTouchProcessor *)this, v43, v27, &v80, &v81) )
        {
          CInputDest::operator=((__int64)v22, (__int64)v80);
        }
        else
        {
          v81 = 1;
          if ( *(_DWORD *)(v30 + 24) )
          {
            if ( !CInputDest::IsEqualByWindowHandle(v30 + 24, *(_QWORD *)(v30 + 192), 0) )
            {
              v92[1] = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4134);
            }
            CInputDest::operator=((__int64)v22, v30 + 24);
          }
          if ( !*v22 )
          {
            CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v101, (struct CInputDest *)(v30 + 352));
            memset(v104, 0, sizeof(v104));
            if ( (unsigned int)IsCurrentProcessDwm() )
            {
              v92[2] = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4143);
            }
            v44 = CTouchProcessor::TouchHitTest(
                    (CInputDest *)v105,
                    v30 + 160,
                    0,
                    0,
                    0,
                    *(_DWORD *)(v19 + 48),
                    0LL,
                    (__int64)v104);
            CInputDest::operator=(v22, v44);
            CInputDest::~CInputDest((CInputDest *)v105);
            CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v101);
          }
        }
        HasDelegationThread = CInputDest::HasDelegationThread((CInputDest *)v22);
        v35 = 0LL;
        if ( HasDelegationThread )
        {
          CTouchProcessor::SetPointerInfoNodeTarget(
            (CTouchProcessor *)this,
            (const struct CPointerInputFrame *)v19,
            v79,
            (const struct CInputDest *)v22,
            v81,
            &v93,
            0,
            0,
            1,
            1);
          v86 = 0;
          if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v30) )
          {
            v95[0] = 0;
            v96 = 0LL;
            AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v95, v46);
            WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v22);
            CBaseProcessor::PostQEventWork(0LL, (__int64)WindowHandle, 2u, 0, 0LL, *(_QWORD *)(v30 + 16));
            v38 = v79;
            if ( v95[0] )
            {
              v48 = v96;
              v96 = 0LL;
              v95[0] = 0;
              --*(_DWORD *)(v48 + 28);
            }
            goto LABEL_107;
          }
        }
        else
        {
LABEL_134:
          v49 = (CTouchProcessor *)*((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(
                                                       v35,
                                                       (const struct CPointerInputFrame *)v19,
                                                       (const struct CPointerInfoNode *)v30)
                                   + 35);
          if ( ((unsigned __int8)v49 & 1) != 0 )
          {
            v50 = *((_QWORD *)v85 + 170);
            if ( (v50 & 0x2000) == 0 && (v50 & 0x2000000000LL) == 0 )
              CTouchProcessor::SetQFrameNonCoalescable(
                v49,
                (const struct CPointerInputFrame *)v19,
                (const struct CPointerInfoNode *)v30);
          }
          v81 = 1;
          if ( (unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v30) )
          {
            CTouchProcessor::DetermineTouchpadPointerTargetWindow(
              (CTouchProcessor *)this,
              v85,
              (const struct CPointerInputFrame *)v19,
              (struct CPointerInfoNode *)v30,
              QueueForCurrentNode,
              v79,
              v27,
              &v81,
              &v93,
              (struct CInputDest *)v22);
            if ( !*v22 )
              goto LABEL_106;
          }
          else
          {
            CTouchProcessor::DeterminePointerTargetWindow(
              (CTouchProcessor *)this,
              v85,
              (struct CPointerInfoNode *)v30,
              QueueForCurrentNode,
              v27,
              &v81,
              &v93,
              (struct CInputDest *)v22);
          }
          QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(this, v85, v27, v84, IsMessageDelegated, v24);
          if ( !QueueForCurrentNode )
            goto LABEL_186;
          if ( (unsigned int)CTouchProcessor::RevalidateFrameProcessing(
                               0LL,
                               v85,
                               v27,
                               (const struct CPointerInfoNode *)v30,
                               0) )
          {
            if ( !*v22 )
              goto LABEL_157;
            if ( (*(_DWORD *)(v30 + 180) & 0x10000) != 0
              && !(unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v30)
              && (*(_DWORD *)(v30 + 4) & 0x80u) == 0 )
            {
              CTouchProcessor::PointerParentNotify(this, (struct CInputDest *)v22, (void **)v30);
              QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                                      this,
                                      v85,
                                      v27,
                                      v84,
                                      IsMessageDelegated,
                                      v24);
              if ( !QueueForCurrentNode )
                goto LABEL_186;
              if ( !(unsigned int)CTouchProcessor::RevalidateFrameProcessing(
                                    0LL,
                                    v85,
                                    v27,
                                    (const struct CPointerInfoNode *)v30,
                                    0) )
                goto LABEL_106;
              v51 = *(_QWORD *)(v30 + 16);
              v80 = 0LL;
              if ( (unsigned int)CTouchProcessor::RecheckPointerCapture((CTouchProcessor *)this, v51, v27, &v80, &v81) )
                CInputDest::operator=((__int64)v22, (__int64)v80);
            }
            if ( !*v22 || !(unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v30) )
              goto LABEL_157;
            v53 = CTouchProcessor::LookupNode(v52, (const struct CPointerInputFrame *)v19, v79);
            *((_DWORD *)v53 + 36) = v81;
            CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v103, (struct CInputDest *)v22);
            CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
              (CInpUnlockGuardExclusive *)v101,
              (struct CEResourceLock *)(this + 4),
              *(void **)(v30 + 16));
            v54 = *(_QWORD *)(v30 + 16);
            v55 = *((_OWORD *)v22 + 1);
            v56 = *(unsigned __int16 *)(v30 + 144);
            v104[0] = *(_OWORD *)v22;
            v57 = *((_OWORD *)v22 + 2);
            v104[1] = v55;
            v58 = *((_OWORD *)v22 + 3);
            v104[2] = v57;
            v59 = *((_OWORD *)v22 + 4);
            v104[3] = v58;
            v60 = *((_OWORD *)v22 + 5);
            v104[4] = v59;
            v61 = *((_OWORD *)v22 + 6);
            v104[5] = v60;
            v104[6] = v61;
            ApiSetEditionPointerActivate(v104, v56, v54, v30 + 160);
            CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v101);
            CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v103);
            QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(this, v85, v27, v84, IsMessageDelegated, v24);
            if ( !QueueForCurrentNode )
            {
LABEL_186:
              v87 = 0;
              *v94 = 1;
              break;
            }
            if ( (unsigned int)CTouchProcessor::RevalidateFrameProcessing(
                                 0LL,
                                 v85,
                                 v27,
                                 (const struct CPointerInfoNode *)v30,
                                 0) )
            {
              v62 = *(_QWORD *)(v30 + 16);
              v80 = 0LL;
              if ( (unsigned int)CTouchProcessor::RecheckPointerCapture((CTouchProcessor *)this, v62, v27, &v80, &v81) )
                CInputDest::operator=((__int64)v22, (__int64)v80);
LABEL_157:
              if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)v30, v85) )
              {
                v92[3] = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4329);
              }
              CTouchProcessor::SetPointerInfoNodeTarget(
                (CTouchProcessor *)this,
                (const struct CPointerInputFrame *)v19,
                v79,
                (const struct CInputDest *)v22,
                v81,
                &v93,
                0,
                0,
                1,
                0);
              if ( *v22 )
              {
                if ( (*(_DWORD *)(v30 + 180) & 0x10000) != 0 )
                {
                  CTouchProcessor::SetPointerImplicitCapture(
                    (CTouchProcessor *)this,
                    *(_QWORD *)(v30 + 16),
                    (const struct CInputDest *)v22,
                    v81,
                    v27);
                }
                else if ( v84 == 593 )
                {
                  CTouchProcessor::SetPointerExplicitCapture(
                    this,
                    *(_QWORD *)(v30 + 16),
                    (const struct CInputDest *)v22,
                    v81,
                    v27);
                }
              }
              if ( (unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v30) )
              {
                v38 = v79;
                if ( (*(_DWORD *)(v30 + 180) & 0x2000) != 0 )
                {
                  LODWORD(v80) = 0;
                  if ( v79 )
                  {
                    v63 = 0LL;
                    do
                    {
                      if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)(v63 + *(_QWORD *)(v19 + 240)))
                        && *(_DWORD *)(v30 + 8) == *((_DWORD *)v65 + 2) )
                      {
                        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
                          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
                          || (v67 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
                        {
                          v67 = v66;
                        }
                        v68 = &WPP_RECORDER_INITIALIZED;
                        v82 = v67;
                        v83 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                        if ( v67 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        {
                          LOBYTE(v68) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                          UserSessionState = W32GetUserSessionState(v68, v64);
                          LOBYTE(v70) = v83;
                          LOBYTE(v71) = v82;
                          WPP_RECORDER_AND_TRACE_SF_(
                            *((_QWORD *)WPP_GLOBAL_Control + 3),
                            v71,
                            v70,
                            *(_QWORD *)(UserSessionState + 69144),
                            4,
                            4,
                            96,
                            (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
                          v66 = 0;
                        }
                        CTouchProcessor::SetPointerInfoNodeTarget(
                          (CTouchProcessor *)this,
                          (const struct CPointerInputFrame *)v19,
                          (unsigned int)v80,
                          (const struct CInputDest *)v22,
                          v81,
                          &v93,
                          v66,
                          v66,
                          1,
                          v66);
                        if ( *v22 )
                        {
                          v72 = *(_QWORD *)(v19 + 240);
                          if ( (*(_DWORD *)(v72 + v63 + 180) & 0x10000) != 0 )
                          {
                            CTouchProcessor::SetPointerImplicitCapture(
                              (CTouchProcessor *)this,
                              *(_QWORD *)(v72 + v63 + 16),
                              (const struct CInputDest *)v22,
                              v81,
                              v27);
                          }
                          else if ( v84 == 593 )
                          {
                            CTouchProcessor::SetPointerExplicitCapture(
                              this,
                              *(_QWORD *)(v30 + 16),
                              (const struct CInputDest *)v22,
                              v81,
                              v27);
                          }
                        }
                      }
                      else if ( (unsigned int)CPointerInfoNode::IsValid(v65) )
                      {
                        v92[4] = 0x20000;
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4399);
                      }
                      v63 += 480LL;
                      v38 = v79;
                      LODWORD(v80) = (_DWORD)v80 + 1;
                    }
                    while ( (unsigned int)v80 < v79 );
                    v24 = v99;
                  }
                }
                goto LABEL_107;
              }
            }
          }
        }
      }
      else
      {
        v86 = (int)v36;
      }
LABEL_106:
      v38 = v79;
LABEL_107:
      v29 = *(unsigned int *)(v19 + 48);
      v30 += 480LL;
      v79 = v38 + 1;
    }
    while ( v38 + 1 < (unsigned int)v29 );
  }
  Win32RawLockedItemBase<CPointerInputFrame,0,0,1,1>::UnlockWorker(BugCheckParameter2, 0);
  Win32RawLockedItemBase<CInputDest,0,1,0,1>::UnlockWorker((ULONG_PTR)v97, 0);
  v73 = v87;
  if ( v87 )
  {
    if ( (*(_DWORD *)(v19 + 228) & 0x10) == 0 )
    {
      if ( v86 )
      {
        if ( !v27 )
        {
          v74 = CTouchProcessor::FindAndReferenceFrameById((__int64)this, *(_DWORD *)(v19 + 40), 4u);
          if ( v74 )
          {
            *(_DWORD *)(v74 + 228) |= 0x10u;
            CTouchProcessor::UnreferenceFrameInt(this, v74);
          }
        }
      }
    }
  }
  CTouchProcessor::UnreferenceFrame(this, v19);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v75) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v75) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v76) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v76) = 0;
  }
  if ( (_BYTE)v75 || (_BYTE)v76 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v75,
      v76,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      97,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  Win32RawLockedItemBase<CPointerInputFrame,0,0,1,1>::UnlockWorker(BugCheckParameter2, 1);
  if ( v98 != -1 )
  {
    PopAndFreeAlwaysW32ThreadLock((__int64)v97);
    v98 = -1LL;
  }
  v9 = v73;
LABEL_206:
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v102);
  return v9;
}
