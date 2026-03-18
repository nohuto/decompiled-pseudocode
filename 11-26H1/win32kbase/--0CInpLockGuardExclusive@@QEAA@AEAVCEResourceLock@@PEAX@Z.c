/*
 * XREFs of ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x140160CCC
 * Callers:
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x140213800 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 *     ?CancelActivePointers@CTouchProcessor@@QEAAXXZ @ 0x140213C00 (-CancelActivePointers@CTouchProcessor@@QEAAXXZ.c)
 *     ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x140214BA0 (-DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z.c)
 *     ?GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z @ 0x140215150 (-GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z.c)
 *     ?GetPointerMessagePoint@CTouchProcessor@@QEAAHGPEAUtagPOINT@@@Z @ 0x140215940 (-GetPointerMessagePoint@CTouchProcessor@@QEAAHGPEAUtagPOINT@@@Z.c)
 *     ?IsPointerInContact@CTouchProcessor@@QEAAH_KPEA_N@Z @ 0x140215DD0 (-IsPointerInContact@CTouchProcessor@@QEAAH_KPEA_N@Z.c)
 *     ?NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z @ 0x1402160A0 (-NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_N1@Z @ 0x1402161B4 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_N1@Z.c)
 * Callees:
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004BEE0 (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 */

CInpLockGuardExclusive *__fastcall CInpLockGuardExclusive::CInpLockGuardExclusive(
        CInpLockGuardExclusive *this,
        PERESOURCE *a2,
        void *a3)
{
  int v4; // edx
  int v5; // r8d

  *(_QWORD *)this = a3;
  *((_BYTE *)this + 32) = 0;
  if ( a3 == (void *)-1LL )
    *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 5) = a2;
  ExEnterCriticalRegionAndAcquireResourceExclusive(*a2);
  CRefUnRefPointerMsgId::ReferenceAndThreadLock(this, v4, v5);
  return this;
}
