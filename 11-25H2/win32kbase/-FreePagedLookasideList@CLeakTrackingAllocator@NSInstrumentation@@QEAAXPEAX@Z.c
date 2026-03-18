/*
 * XREFs of ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x14006D974
 * Callers:
 *     ?FreePagedLookasideList@Win32UAFMAllocatorCollection@@SAXPEAX@Z @ 0x14006D940 (-FreePagedLookasideList@Win32UAFMAllocatorCollection@@SAXPEAX@Z.c)
 *     MultiUserNtGreCleanup @ 0x14006DBA4 (MultiUserNtGreCleanup.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140169710 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x14016A0DC (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     ?Destroy@ScanLookAsideList@@QEAAXXZ @ 0x1401A0770 (-Destroy@ScanLookAsideList@@QEAAXXZ.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x14001EA70 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *this,
        char *a2)
{
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)(a2 + 16));
  NSInstrumentation::CLeakTrackingAllocator::Free(this, a2);
}
