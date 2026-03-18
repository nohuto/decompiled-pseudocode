/*
 * XREFs of ?Destroy@ScanLookAsideList@@QEAAXXZ @ 0x1401A0770
 * Callers:
 *     MultiUserNtGreCleanup @ 0x14006DBA4 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x14006D974 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall ScanLookAsideList::Destroy(char **this, __int64 a2)
{
  char *v2; // rdi
  __int64 UserSessionState; // rax

  v2 = *this;
  if ( *this )
  {
    UserSessionState = W32GetUserSessionState(this, a2);
    NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
      (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72032),
      v2);
    *this = 0LL;
  }
}
