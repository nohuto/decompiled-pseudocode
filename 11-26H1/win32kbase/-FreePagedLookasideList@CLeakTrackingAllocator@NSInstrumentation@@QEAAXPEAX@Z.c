/*
 * XREFs of ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x140185044
 * Callers:
 *     ?FreePagedLookasideList@Win32UAFMAllocatorCollection@@SAXPEAX@Z @ 0x140185010 (-FreePagedLookasideList@Win32UAFMAllocatorCollection@@SAXPEAX@Z.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x14019A350 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     MultiUserNtGreCleanup @ 0x1401C0C3C (MultiUserNtGreCleanup.c)
 *     ?Destroy@ScanLookAsideList@@QEAAXXZ @ 0x1401C3AA4 (-Destroy@ScanLookAsideList@@QEAAXXZ.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1401D6EE0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1400430A0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *this,
        char *a2)
{
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)(a2 + 16));
  NSInstrumentation::CLeakTrackingAllocator::Free(this, a2);
}
