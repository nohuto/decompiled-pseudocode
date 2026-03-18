/*
 * XREFs of ?AcquireInverseSemaphore@DXGINVERSESEMAPHORE@@QEAAXXZ @ 0x140041AC8
 * Callers:
 *     ?AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1400F8114 (-AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGINVERSESEMAPHORE::AcquireInverseSemaphore(struct _KEVENT *this)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  this->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  if ( !this[2].Header.LockNV )
    KeClearEvent(this + 1);
  ++this[2].Header.LockNV;
  this->Header.WaitListHead.Flink = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
