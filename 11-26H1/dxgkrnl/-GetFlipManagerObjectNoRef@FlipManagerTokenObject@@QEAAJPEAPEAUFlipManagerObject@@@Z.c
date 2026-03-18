/*
 * XREFs of ?GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z @ 0x140022EEC
 * Callers:
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1400224D0 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

__int64 __fastcall FlipManagerTokenObject::GetFlipManagerObjectNoRef(
        FlipManagerTokenObject *this,
        struct FlipManagerObject **a2)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 88, 0LL);
  *a2 = (struct FlipManagerObject *)*((_QWORD *)this + 15);
  CPushLock::ReleaseLock((FlipManagerTokenObject *)((char *)this + 88));
  return 0LL;
}
