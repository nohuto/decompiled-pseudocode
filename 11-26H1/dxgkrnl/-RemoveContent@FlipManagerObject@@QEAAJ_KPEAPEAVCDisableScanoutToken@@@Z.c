/*
 * XREFs of ?RemoveContent@FlipManagerObject@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z @ 0x140029EC8
 * Callers:
 *     NtFlipObjectRemoveContent @ 0x140029D30 (NtFlipObjectRemoveContent.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14002206C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?RemoveContent@CFlipManager@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z @ 0x140029BFC (-RemoveContent@CFlipManager@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z.c)
 */

__int64 __fastcall FlipManagerObject::RemoveContent(
        FlipManagerObject *this,
        __int64 a2,
        struct CDisableScanoutToken **a3)
{
  char *v3; // rdi
  int v6; // ebx

  v3 = (char *)this + 32;
  v6 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v6 >= 0 )
  {
    v6 = CFlipManager::RemoveContent((CFlipManager *)v3, a2, a3);
    CPushLock::ReleaseLock((CPushLock *)(v3 + 8));
  }
  return (unsigned int)v6;
}
