/*
 * XREFs of ?PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z @ 0x140016B60
 * Callers:
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x140015AE0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?ScanLookAsideList_Allocate@@YAPEAXXZ @ 0x1400167C0 (-ScanLookAsideList_Allocate@@YAPEAXXZ.c)
 *     ?Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z @ 0x140016910 (-Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x140016A50 (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall NSInstrumentation::PlatformAllocateFromPagedLookasideList(
        struct _PAGED_LOOKASIDE_LIST *this,
        void *a2)
{
  return ExAllocateFromPagedLookasideList(this);
}
