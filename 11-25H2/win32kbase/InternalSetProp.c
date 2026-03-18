/*
 * XREFs of InternalSetProp @ 0x14019F4EC
 * Callers:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x14015B7A8 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x14003F3E0 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     RealInternalSetProp @ 0x1400DE180 (RealInternalSetProp.c)
 */

__int64 __fastcall InternalSetProp(__int64 a1, __int64 a2, __int64 a3)
{
  LockRefactorStagingAssertOwned(*(struct _KTHREAD ***)(a1 + 144), a2);
  return RealInternalSetProp(*(struct _KTHREAD ***)(a1 + 144), a2, a3, 32769);
}
