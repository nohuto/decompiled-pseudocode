/*
 * XREFs of ?GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z @ 0x14006C964
 * Callers:
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x14001CD74 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

__int64 __fastcall FlipManagerTokenObject::GetPresentId(FlipManagerTokenObject *this, unsigned __int64 *a2)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 88, 0LL);
  *a2 = *((_QWORD *)this + 16);
  CPushLock::ReleaseLock((FlipManagerTokenObject *)((char *)this + 88));
  return 0LL;
}
