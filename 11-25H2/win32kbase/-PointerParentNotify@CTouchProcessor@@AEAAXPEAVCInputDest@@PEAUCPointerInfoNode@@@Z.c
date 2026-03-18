/*
 * XREFs of ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x140205D88
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x140209AA0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x14009F128 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1400C45CC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C4964 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ApiSetEditionPointerParentNotify @ 0x14019637C (ApiSetEditionPointerParentNotify.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1401F6D74 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9E38 (--0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1402054B0 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 */

void __fastcall CTouchProcessor::PointerParentNotify(PERESOURCE *this, struct CInputDest *a2, void **a3)
{
  struct CEResourceLock *v3; // rsi
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // r8
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  _OWORD v14[7]; // [rsp+28h] [rbp-99h] BYREF
  PERESOURCE *v15[6]; // [rsp+98h] [rbp-29h] BYREF
  _BYTE v16[64]; // [rsp+C8h] [rbp+7h] BYREF

  v3 = (struct CEResourceLock *)(this + 4);
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12579);
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12583);
  v6 = PtiCurrent();
  if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)a3, v6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12584);
  CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v16, a2);
  CInpUnlockGuardExclusive::CInpUnlockGuardExclusive((CInpUnlockGuardExclusive *)v15, v3, a3[2]);
  v7 = (__int64)a3[2];
  v8 = *((_OWORD *)a2 + 1);
  v14[0] = *(_OWORD *)a2;
  v9 = *((_OWORD *)a2 + 2);
  v14[1] = v8;
  v10 = *((_OWORD *)a2 + 3);
  v14[2] = v9;
  v11 = *((_OWORD *)a2 + 4);
  v14[3] = v10;
  v12 = *((_OWORD *)a2 + 5);
  v14[4] = v11;
  v13 = *((_OWORD *)a2 + 6);
  v14[5] = v12;
  v14[6] = v13;
  ApiSetEditionPointerParentNotify(v14, (__int64)a3, v7);
  CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v15);
  CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v16);
}
