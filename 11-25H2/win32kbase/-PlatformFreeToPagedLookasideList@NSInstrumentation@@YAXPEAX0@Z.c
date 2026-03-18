/*
 * XREFs of ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x140010B30
 * Callers:
 *     ?ScanLookAsideList_Allocate@@YAPEAXXZ @ 0x14000B080 (-ScanLookAsideList_Allocate@@YAPEAXXZ.c)
 *     Win32AllocateFromPagedLookasideList @ 0x14000BDC0 (Win32AllocateFromPagedLookasideList.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x14000C1D0 (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 *     ?ScanLookAsideList_Free@@YAXPEAX@Z @ 0x14000ED10 (-ScanLookAsideList_Free@@YAXPEAX@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x14000EE20 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x14000F490 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vDeleteREGION@REGION@@AEAAXXZ @ 0x14000FE30 (-vDeleteREGION@REGION@@AEAAXXZ.c)
 *     ?Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z @ 0x140010398 (-Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x140010450 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     Win32FreeToPagedLookasideList @ 0x1400109D0 (Win32FreeToPagedLookasideList.c)
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x140010A90 (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
 *     ?Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z @ 0x14006110C (-Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::PlatformFreeToPagedLookasideList(
        struct _PAGED_LOOKASIDE_LIST *this,
        void *a2,
        void *a3)
{
  ExFreeToPagedLookasideList(this, a2);
}
