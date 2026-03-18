/*
 * XREFs of ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x14020E4F8
 * Callers:
 *     NtUserLockCursor @ 0x14011D610 (NtUserLockCursor.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140065374 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x14006665C (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     PtInRect @ 0x1400DCE04 (PtInRect.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall CCursorClip::LockCursor(const struct tagRECT *this, struct tagRECT *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rax
  LONG top; // ecx
  struct tagRECT v10; // [rsp+20h] [rbp-28h] BYREF

  CPushLock::AcquireLockExclusive((CPushLock *)&this[2]);
  UserSessionState = W32GetUserSessionState(v5, v4);
  if ( PtInRect(a2, *(_QWORD *)(*(_QWORD *)(UserSessionState + 19872) + 4960LL)) )
  {
    v10.left = v7;
    v8 = HIDWORD(v7);
  }
  else
  {
    top = a2->top;
    LODWORD(v7) = a2->left + (a2->right - a2->left) / 2;
    v10.left = v7;
    LODWORD(v8) = top + (a2->bottom - top) / 2;
  }
  v10.top = v8;
  v10.right = v7 + 1;
  v10.bottom = v8 + 1;
  CCursorClip::UpdateClipRect(this, &v10);
  CPushLock::ReleaseLock((CPushLock *)&this[2]);
}
