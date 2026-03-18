/*
 * XREFs of ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x140204910
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x140209AA0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x14009F128 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1400B7D64 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1400B9B10 (-IsIndependentInputWindow@CInputDest@@QEBA_NXZ.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1400C45CC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1400C4808 (-RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1400D14F0 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ApiSetPerformTargetingWithinPwnd @ 0x140197458 (ApiSetPerformTargetingWithinPwnd.c)
 *     ApiSetValidatePointerOffset @ 0x140197724 (ApiSetValidatePointerOffset.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1401F6D74 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9E38 (--0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x140203D5C (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x140204600 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1402046FC (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x140204E94 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1402054B0 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z @ 0x14020B5AC (-SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::HandlePointerNodeWithTarget(
        PERESOURCE *a1,
        CPointerInfoNode *a2,
        unsigned int a3,
        __int64 a4)
{
  struct tagTHREADINFO *v8; // rsi
  __int64 v9; // rax
  int v10; // r14d
  int v11; // edx
  int v12; // edx
  int v13; // r8d
  CTouchProcessor *v14; // rcx
  unsigned __int64 v16; // rdx
  struct tagPOINT v17; // rax
  unsigned __int16 v18; // dx
  struct tagPOINT v19; // [rsp+30h] [rbp-59h] BYREF
  struct CInputDest *v20; // [rsp+38h] [rbp-51h] BYREF
  PERESOURCE *v21[6]; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v22[112]; // [rsp+70h] [rbp-19h] BYREF
  struct tagPOINT v24; // [rsp+108h] [rbp+7Fh] BYREF

  v8 = PtiCurrent();
  if ( !(unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)a4, v8) )
  {
    v24.x = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12494);
  }
  v9 = *((_QWORD *)v8 + 170);
  if ( (v9 & 0x2000) != 0 || (v10 = 0, (v9 & 0x2000000000LL) != 0) )
    v10 = 1;
  v24.x = CPointerInfoNode::IsMessageDelegated(a2, a3);
  CTouchProcessor::HandleMTNodeTargetWindow(a1, (struct CPointerInfoNode *)a4);
  v11 = *(_DWORD *)(a4 + 4);
  if ( (v11 & 0x200) == 0
    || (v11 & 0x800) != 0
    || *(_DWORD *)(a4 + 168) != 2
    || CInputDest::GetThreadInfo((CInputDest *)(a4 + 352)) != v8 )
  {
    return 0LL;
  }
  if ( (*(_DWORD *)(a4 + 180) & 0x10000) == 0 )
  {
    v18 = *(_WORD *)(a4 + 172);
    v24 = 0LL;
    CTouchProcessor::GetPointerOffset(a1, v18, &v24);
    v17 = v24;
    goto LABEL_19;
  }
  *(_DWORD *)(a4 + 4) = v13 | v12;
  if ( !CInputDest::IsIndependentInputWindow((CInputDest *)(a4 + 352)) )
  {
    v19 = 0LL;
    CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v22, (struct CInputDest *)(a4 + 352));
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v21,
      (struct CEResourceLock *)(a1 + 4),
      0LL);
    ApiSetPerformTargetingWithinPwnd(a4 + 352, a4 + 160, (__int64)&v19);
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v21);
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v22);
    if ( !CTouchProcessor::GetQueueForCurrentNode(a1, v8, v10, a3, v24.x != 0, a2) )
      return 1LL;
    if ( !(unsigned int)CTouchProcessor::RevalidateFrameProcessing(v14, v8, v10, (const struct CPointerInfoNode *)a4, 1) )
      return 2LL;
    v16 = *(_QWORD *)(a4 + 16);
    v20 = 0LL;
    CTouchProcessor::RecheckPointerCapture((CTouchProcessor *)a1, v16, v10, &v20, (int *)&v24);
    if ( (unsigned int)ApiSetValidatePointerOffset(*(_QWORD *)(a4 + 200), a4 + 160, *(_QWORD *)&v19, (__int64)&v19) )
    {
      CTouchProcessor::SetPointerOffset((CTouchProcessor *)a1, *(_WORD *)(a4 + 172), &v19);
      v17 = v19;
LABEL_19:
      *(struct tagPOINT *)(a4 + 148) = v17;
    }
  }
  return 0LL;
}
