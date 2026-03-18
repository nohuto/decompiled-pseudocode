/*
 * XREFs of ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x14018DCD0
 * Callers:
 *     NtSetShellCursorState @ 0x1401E1D00 (NtSetShellCursorState.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14006EEBC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14006EF14 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z @ 0x14018DDE0 (-SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z.c)
 *     ?EnsureValidCursorPosition@CCursorClip@@QEAAXXZ @ 0x1401B78FC (-EnsureValidCursorPosition@CCursorClip@@QEAAXXZ.c)
 *     SendShellClipChanged @ 0x1401BA170 (SendShellClipChanged.c)
 */

__int64 __fastcall CCursorClip::SetShellClip(CCursorClip *this, struct tagRECT *a2, unsigned int a3)
{
  CPushLock *v3; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // rcx
  int v11; // edi
  CCursorClip *v12; // rcx

  v3 = (CCursorClip *)((char *)this + 32);
  CPushLock::AcquireLockExclusive((CCursorClip *)((char *)this + 32));
  v10 = (char *)*((_QWORD *)this + 32);
  if ( v10 )
    GreDeleteFastMutex(v10, v7, v8, v9);
  *((_QWORD *)this + 32) = a2;
  *((_DWORD *)this + 66) = a3;
  InputTraceLogging::Mouse::SetShellClip(a2, a3);
  v11 = *((_DWORD *)this + 66);
  CPushLock::ReleaseLock(v3);
  SendShellClipChanged(a2);
  if ( v11 )
    CCursorClip::EnsureValidCursorPosition(v12);
  return 0LL;
}
