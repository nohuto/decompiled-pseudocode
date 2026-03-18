/*
 * XREFs of InternalSetProp @ 0x1400DEB14
 * Callers:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1400DEA38 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1400489D0 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     RealInternalSetProp @ 0x1400DEB70 (RealInternalSetProp.c)
 */

__int64 __fastcall InternalSetProp(__int64 a1, __int64 a2, __int64 a3)
{
  LockRefactorStagingAssertOwned(*(struct _KTHREAD ***)(a1 + 144), a2, a3);
  return RealInternalSetProp(*(_QWORD *)(a1 + 144), a2, a3, 32769LL);
}
