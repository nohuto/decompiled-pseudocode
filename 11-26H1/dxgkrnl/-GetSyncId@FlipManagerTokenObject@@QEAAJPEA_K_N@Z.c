/*
 * XREFs of ?GetSyncId@FlipManagerTokenObject@@QEAAJPEA_K_N@Z @ 0x1400A2D50
 * Callers:
 *     ?NotifyPendingFlipManagerPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x140045760 (-NotifyPendingFlipManagerPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

__int64 __fastcall FlipManagerTokenObject::GetSyncId(FlipManagerTokenObject *this, unsigned __int64 *a2)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 88, 0LL);
  *a2 = *((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = 0LL;
  CPushLock::ReleaseLock((FlipManagerTokenObject *)((char *)this + 88));
  return 0LL;
}
