/*
 * XREFs of ?ClearClip@CCursorClip@@QEAAXXZ @ 0x140120970
 * Callers:
 *     ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x140065200 (--1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ.c)
 *     NtUserClipCursor @ 0x140107790 (NtUserClipCursor.c)
 *     NtUserLockCursor @ 0x14011D610 (NtUserLockCursor.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140065374 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x14006665C (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 */

void __fastcall CCursorClip::ClearClip(CCursorClip *this)
{
  __int64 v2; // rcx
  struct tagRECT v3; // [rsp+20h] [rbp-18h] BYREF

  CPushLock::AcquireLockExclusive((CCursorClip *)((char *)this + 32));
  v2 = *((_QWORD *)this + 2) - *(_QWORD *)this;
  if ( !v2 )
    v2 = *((_QWORD *)this + 3) - *((_QWORD *)this + 1);
  if ( v2 )
  {
    v3 = *(struct tagRECT *)this;
    CCursorClip::UpdateClipRect((const struct tagRECT *)this, &v3);
  }
  CPushLock::ReleaseLock((CCursorClip *)((char *)this + 32));
}
