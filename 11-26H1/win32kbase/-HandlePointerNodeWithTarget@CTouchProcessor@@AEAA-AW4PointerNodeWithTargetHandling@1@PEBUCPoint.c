/*
 * XREFs of ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1400CB810
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x14006AA00 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004B9C0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004BEE0 (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x14004E1C8 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x14004F080 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x14006A274 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x14006CD40 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x14006CFE8 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x140087568 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x140089F40 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1400CB240 (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z @ 0x1400CB620 (-SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1400CBA8C (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1400CE260 (-IsIndependentInputWindow@CInputDest@@QEBA_NXZ.c)
 *     ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x14015C3A4 (-RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetValidatePointerOffset @ 0x1401BB5B4 (ApiSetValidatePointerOffset.c)
 *     ApiSetPerformTargetingWithinPwnd @ 0x1401BEE94 (ApiSetPerformTargetingWithinPwnd.c)
 */

__int64 __fastcall CTouchProcessor::HandlePointerNodeWithTarget(
        CTouchProcessor *a1,
        CPointerInfoNode *a2,
        unsigned int a3,
        __int64 a4)
{
  struct tagTHREADINFO *v8; // rsi
  int v9; // r13d
  __int64 v10; // rax
  int v11; // r14d
  int v12; // r8d
  CInputDest *v14; // rcx
  int v15; // r8d
  int v16; // r9d
  __int16 v17; // dx
  struct tagPOINT v18; // rax
  int v19; // edx
  int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // rdx
  CTouchProcessor *v23; // rcx
  unsigned __int64 v24; // rdx
  struct tagPOINT v25; // [rsp+38h] [rbp-59h] BYREF
  struct CInputDest *v26; // [rsp+40h] [rbp-51h] BYREF
  _QWORD v27[4]; // [rsp+48h] [rbp-49h] BYREF
  char v28; // [rsp+68h] [rbp-29h]
  PERESOURCE *v29; // [rsp+70h] [rbp-21h]
  _BYTE v30[112]; // [rsp+78h] [rbp-19h] BYREF
  struct tagPOINT v33; // [rsp+110h] [rbp+7Fh] BYREF

  v8 = PtiCurrent((__int64)a1, (__int64)a2);
  v9 = 0;
  if ( !(unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)a4, v8) )
  {
    v33.x = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12471LL);
  }
  v10 = *((_QWORD *)v8 + 170);
  if ( (v10 & 0x2000) != 0 || (v11 = 0, (v10 & 0x2000000000LL) != 0) )
    v11 = 1;
  LOBYTE(v9) = (unsigned int)CPointerInfoNode::IsMessageDelegated(a2, a3) != 0;
  CTouchProcessor::HandleMTNodeTargetWindow(a1, (struct CPointerInfoNode *)a4);
  v12 = *(_DWORD *)(a4 + 4);
  if ( (v12 & 0x200) == 0
    || (v12 & 0x800) != 0
    || *(_DWORD *)(a4 + 168) != 2
    || CInputDest::GetThreadInfo((CInputDest *)(a4 + 352)) != v8 )
  {
    return 0LL;
  }
  if ( (*(_DWORD *)(a4 + 180) & 0x10000) == 0 )
  {
    v17 = *(_WORD *)(a4 + 172);
    v33 = 0LL;
    CTouchProcessor::GetPointerOffset((PERESOURCE *)a1, v17, &v33);
    v18 = v33;
LABEL_14:
    *(struct tagPOINT *)(a4 + 148) = v18;
    return 0LL;
  }
  *(_DWORD *)(a4 + 4) = v16 | v15;
  if ( CInputDest::IsIndependentInputWindow(v14) )
    return 0LL;
  v25 = 0LL;
  CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v30, (struct CInputDest *)(a4 + 352));
  v27[0] = 0LL;
  v29 = (PERESOURCE *)((char *)a1 + 32);
  v28 = 0;
  CRefUnRefPointerMsgId::ReferenceAndThreadLock((CRefUnRefPointerMsgId *)v27, v19, v20);
  ExReleaseResourceAndLeaveCriticalRegion(*v29);
  ApiSetPerformTargetingWithinPwnd(a4 + 352, a4 + 160, &v25);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*v29);
  CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v27, v21);
  CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v30, v22);
  if ( !CTouchProcessor::GetQueueForCurrentNode((PERESOURCE *)a1, v8, v11, a3, v9, a2) )
    return 1LL;
  if ( CTouchProcessor::RevalidateFrameProcessing(v23, v8, v11, (const struct CPointerInfoNode *)a4, 1) )
  {
    v24 = *(_QWORD *)(a4 + 16);
    v26 = 0LL;
    CTouchProcessor::RecheckPointerCapture(a1, v24, v11, &v26, (int *)&v33);
    if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetValidatePointerOffset)(
                          *(_QWORD *)(a4 + 200),
                          a4 + 160,
                          v25,
                          &v25) )
      return 0LL;
    CTouchProcessor::SetPointerOffset((PERESOURCE *)a1, *(_WORD *)(a4 + 172), (KSPIN_LOCK *)&v25);
    v18 = v25;
    goto LABEL_14;
  }
  return 2LL;
}
