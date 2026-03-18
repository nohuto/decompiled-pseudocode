/*
 * XREFs of ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x140067CE0
 * Callers:
 *     NtUserClipCursor @ 0x140107790 (NtUserClipCursor.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140065374 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x14006665C (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 */

void __fastcall CCursorClip::SetClip(const struct tagRECT *this, struct tagRECT *a2)
{
  struct tagRECT v4; // [rsp+20h] [rbp-18h] BYREF

  CPushLock::AcquireLockExclusive((CPushLock *)&this[2]);
  v4 = *a2;
  CCursorClip::UpdateClipRect(this, &v4);
  CPushLock::ReleaseLock((CPushLock *)&this[2]);
}
