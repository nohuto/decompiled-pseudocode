/*
 * XREFs of ?RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z @ 0x14002A17C
 * Callers:
 *     NtFlipObjectRemovePoolBuffer @ 0x14002A0A0 (NtFlipObjectRemovePoolBuffer.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14002206C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?RemovePoolBuffer@CFlipManager@@QEAAJ_K@Z @ 0x14002A1DC (-RemovePoolBuffer@CFlipManager@@QEAAJ_K@Z.c)
 */

__int64 __fastcall FlipManagerObject::RemovePoolBuffer(FlipManagerObject *this, unsigned __int64 a2)
{
  char *v2; // rdi
  int v4; // ebx

  v2 = (char *)this + 32;
  v4 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v4 >= 0 )
  {
    v4 = CFlipManager::RemovePoolBuffer((CFlipManager *)v2, a2);
    CPushLock::ReleaseLock((CPushLock *)(v2 + 8));
  }
  return (unsigned int)v4;
}
