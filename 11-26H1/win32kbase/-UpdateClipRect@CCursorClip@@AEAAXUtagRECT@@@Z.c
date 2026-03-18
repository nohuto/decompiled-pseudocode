/*
 * XREFs of ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x14008AE3C
 * Callers:
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x14008AAB0 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x14008AB10 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x14008F210 (-OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x140217EA8 (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14006EEBC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14006EF14 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 *     ?SetAppClip@Mouse@InputTraceLogging@@SAXAEBUtagRECT@@@Z @ 0x14008BCFC (-SetAppClip@Mouse@InputTraceLogging@@SAXAEBUtagRECT@@@Z.c)
 *     ?EnsureValidCursorPosition@CCursorClip@@QEAAXXZ @ 0x1401B78FC (-EnsureValidCursorPosition@CCursorClip@@QEAAXXZ.c)
 */

void __fastcall CCursorClip::UpdateClipRect(const struct tagRECT *this, struct tagRECT *a2)
{
  LONG left; // r9d
  LONG right; // r8d
  LONG top; // ecx
  LONG bottom; // r10d
  LONG v7; // eax
  LONG v8; // eax
  struct tagRECT v9; // xmm6
  __int64 v10; // rcx
  CCursorClip *v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+38h] [rbp-20h]

  left = this->left;
  right = this->right;
  top = this->top;
  if ( left <= a2->left )
    left = a2->left;
  bottom = this->bottom;
  if ( right >= a2->right )
    right = a2->right;
  v7 = a2->top;
  a2->left = left;
  if ( top <= v7 )
    top = v7;
  a2->right = right;
  v8 = a2->bottom;
  a2->top = top;
  if ( bottom >= v8 )
    bottom = v8;
  a2->bottom = bottom;
  if ( left > right || top > bottom )
    *a2 = *this;
  this[1] = *(const struct tagRECT *)a2;
  InputTraceLogging::Mouse::SetAppClip(this + 1);
  v9 = 0LL;
  v10 = *(_QWORD *)&this[1].left - *(_QWORD *)&this->left;
  if ( *(_QWORD *)&this[1].left == *(_QWORD *)&this->left )
    v10 = *(_QWORD *)&this[1].right - *(_QWORD *)&this->right;
  if ( v10 )
    v9 = this[1];
  CPushLock::ReleaseLock((CPushLock *)&this[2]);
  v12 = 2LL;
  v14 = 0LL;
  v13 = v9;
  SendMessageTo(0LL, &v12, 32LL);
  CCursorClip::EnsureValidCursorPosition(v11);
  CPushLock::AcquireLockExclusive((CPushLock *)&this[2]);
}
