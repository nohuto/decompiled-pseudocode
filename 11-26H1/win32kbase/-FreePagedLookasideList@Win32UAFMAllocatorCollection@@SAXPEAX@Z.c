/*
 * XREFs of ?FreePagedLookasideList@Win32UAFMAllocatorCollection@@SAXPEAX@Z @ 0x140185010
 * Callers:
 *     Win32UAFMFreePagedLookasideList @ 0x1401EACF0 (Win32UAFMFreePagedLookasideList.c)
 *     ?AllocatePagedLookasideList@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_KIIIPEAI@Z @ 0x1401EADCC (-AllocatePagedLookasideList@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumen.c)
 * Callees:
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x140185044 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall Win32UAFMAllocatorCollection::FreePagedLookasideList(void *a1, int a2, int a3)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
  NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
    (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72016),
    a1);
}
