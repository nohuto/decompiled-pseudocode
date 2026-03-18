/*
 * XREFs of ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x14017BC08
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x14006AA00 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004B9C0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004BEE0 (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x14006A274 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x140087568 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x140089F40 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetEditionPointerParentNotify @ 0x1401BD42C (ApiSetEditionPointerParentNotify.c)
 */

void __fastcall CTouchProcessor::PointerParentNotify(
        PERESOURCE *this,
        struct CInputDest *a2,
        struct CPointerInfoNode *a3)
{
  PERESOURCE *v3; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rax
  int v9; // edx
  int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // r8
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rdx
  __int64 v20; // rdx
  _QWORD v21[4]; // [rsp+28h] [rbp-99h] BYREF
  char v22; // [rsp+48h] [rbp-79h]
  PERESOURCE *v23; // [rsp+50h] [rbp-71h]
  _OWORD v24[7]; // [rsp+58h] [rbp-69h] BYREF
  _BYTE v25[64]; // [rsp+C8h] [rbp+7h] BYREF

  v3 = this + 4;
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12556LL);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12560LL);
  v8 = PtiCurrent(v7, v6);
  if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(a3, v8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12561LL);
  CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v25, a2);
  v11 = *((_QWORD *)a3 + 2);
  v22 = 0;
  v23 = v3;
  if ( v11 == -1 )
    v11 = 0LL;
  v21[0] = v11;
  CRefUnRefPointerMsgId::ReferenceAndThreadLock((CRefUnRefPointerMsgId *)v21, v9, v10);
  ExReleaseResourceAndLeaveCriticalRegion(*v23);
  v12 = *((_QWORD *)a3 + 2);
  v13 = *((_OWORD *)a2 + 1);
  v24[0] = *(_OWORD *)a2;
  v14 = *((_OWORD *)a2 + 2);
  v24[1] = v13;
  v15 = *((_OWORD *)a2 + 3);
  v24[2] = v14;
  v16 = *((_OWORD *)a2 + 4);
  v24[3] = v15;
  v17 = *((_OWORD *)a2 + 5);
  v24[4] = v16;
  v18 = *((_OWORD *)a2 + 6);
  v24[5] = v17;
  v24[6] = v18;
  ApiSetEditionPointerParentNotify(v24, a3, v12);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*v23);
  CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v21, v19);
  CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v25, v20);
}
