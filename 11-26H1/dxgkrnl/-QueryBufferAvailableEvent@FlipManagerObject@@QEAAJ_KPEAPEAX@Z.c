/*
 * XREFs of ?QueryBufferAvailableEvent@FlipManagerObject@@QEAAJ_KPEAPEAX@Z @ 0x140059F64
 * Callers:
 *     NtFlipObjectQueryBufferAvailableEvent @ 0x140059E20 (NtFlipObjectQueryBufferAvailableEvent.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14002206C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?QueryBufferAvailableEvent@CFlipManager@@QEAAJ_KPEAPEAX@Z @ 0x140059FD4 (-QueryBufferAvailableEvent@CFlipManager@@QEAAJ_KPEAPEAX@Z.c)
 */

__int64 __fastcall FlipManagerObject::QueryBufferAvailableEvent(
        FlipManagerObject *this,
        unsigned __int64 a2,
        void **a3)
{
  char *v3; // rdi
  int BufferAvailableEvent; // ebx

  v3 = (char *)this + 32;
  BufferAvailableEvent = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( BufferAvailableEvent >= 0 )
  {
    BufferAvailableEvent = CFlipManager::QueryBufferAvailableEvent((CFlipManager *)v3, a2, a3);
    CPushLock::ReleaseLock((CPushLock *)(v3 + 8));
  }
  return (unsigned int)BufferAvailableEvent;
}
