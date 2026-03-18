/*
 * XREFs of ?PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z @ 0x14000B1B8
 * Callers:
 *     ?ScanLookAsideList_Allocate@@YAPEAXXZ @ 0x14000B080 (-ScanLookAsideList_Allocate@@YAPEAXXZ.c)
 *     Win32AllocateFromPagedLookasideList @ 0x14000BDC0 (Win32AllocateFromPagedLookasideList.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x14000C1D0 (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x14000EE20 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x14000F490 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z @ 0x14006110C (-Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall NSInstrumentation::PlatformAllocateFromPagedLookasideList(
        struct _PAGED_LOOKASIDE_LIST *this,
        void *a2)
{
  return ExAllocateFromPagedLookasideList(this);
}
