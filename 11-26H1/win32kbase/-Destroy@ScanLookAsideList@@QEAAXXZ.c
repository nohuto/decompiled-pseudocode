/*
 * XREFs of ?Destroy@ScanLookAsideList@@QEAAXXZ @ 0x1401C3AA4
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1401C0C3C (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x140185044 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall ScanLookAsideList::Destroy(char **this, int a2, int a3)
{
  char *v3; // rdi
  __int64 UserSessionState; // rax

  v3 = *this;
  if ( *this )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)this, a2, a3);
    NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
      (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72016),
      v3);
    *this = 0LL;
  }
}
