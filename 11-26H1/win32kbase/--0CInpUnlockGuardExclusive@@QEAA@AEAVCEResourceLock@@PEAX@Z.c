/*
 * XREFs of ??0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401A09E8
 * Callers:
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAI@Z @ 0x14010DBCC (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x140214300 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x140214BA0 (-DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z.c)
 * Callees:
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004BEE0 (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 */

CInpUnlockGuardExclusive *__fastcall CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        CInpUnlockGuardExclusive *this,
        struct CEResourceLock *a2,
        void *a3)
{
  *(_QWORD *)this = a3;
  *((_BYTE *)this + 32) = 0;
  if ( a3 == (void *)-1LL )
    *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 5) = a2;
  CRefUnRefPointerMsgId::ReferenceAndThreadLock(this, (int)a2, (int)a3);
  ExReleaseResourceAndLeaveCriticalRegion(**((PERESOURCE **)this + 5));
  return this;
}
