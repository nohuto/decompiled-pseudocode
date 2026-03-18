/*
 * XREFs of ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x140217EA8
 * Callers:
 *     NtUserLockCursor @ 0x1401E7A00 (NtUserLockCursor.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14006EEBC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14006EF14 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x14008AE3C (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     PtInRect @ 0x14010DA60 (PtInRect.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall CCursorClip::LockCursor(const struct tagRECT *this, struct tagRECT *a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 UserSessionState; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rax
  LONG top; // ecx
  struct tagRECT v11; // [rsp+20h] [rbp-28h] BYREF

  CPushLock::AcquireLockExclusive((CPushLock *)&this[2]);
  UserSessionState = W32GetUserSessionState(v5, v4, v6);
  if ( PtInRect(a2, *(_QWORD *)(*(_QWORD *)(UserSessionState + 19904) + 4960LL)) )
  {
    v11.left = v8;
    v9 = HIDWORD(v8);
  }
  else
  {
    top = a2->top;
    LODWORD(v8) = a2->left + (a2->right - a2->left) / 2;
    v11.left = v8;
    LODWORD(v9) = top + (a2->bottom - top) / 2;
  }
  v11.top = v9;
  v11.right = v8 + 1;
  v11.bottom = v9 + 1;
  CCursorClip::UpdateClipRect(this, &v11);
  CPushLock::ReleaseLock((CPushLock *)&this[2]);
}
