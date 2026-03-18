/*
 * XREFs of ?GetClip@CCursorClip@@QEBA?AUtagRECT@@XZ @ 0x14006E950
 * Callers:
 *     NtUserGetClipCursor @ 0x140082750 (NtUserGetClipCursor.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14006EEBC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 */

struct tagRECT *__fastcall CCursorClip::GetClip(struct tagRECT *this, struct tagRECT *__return_ptr retstr)
{
  RIMLockShared(&this[2]);
  *retstr = this[1];
  CPushLock::ReleaseLock((CPushLock *)&this[2]);
  return retstr;
}
