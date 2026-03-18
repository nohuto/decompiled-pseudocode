/*
 * XREFs of ?FreePagedLookasideList@Win32UAFMAllocatorCollection@@SAXPEAX@Z @ 0x14006D940
 * Callers:
 *     Win32UAFMFreePagedLookasideList @ 0x1401C2110 (Win32UAFMFreePagedLookasideList.c)
 *     ?AllocatePagedLookasideList@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_KIIIPEAI@Z @ 0x1401C22E4 (-AllocatePagedLookasideList@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumen.c)
 * Callees:
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x14006D974 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall Win32UAFMAllocatorCollection::FreePagedLookasideList(void *a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
    (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72032),
    a1);
}
