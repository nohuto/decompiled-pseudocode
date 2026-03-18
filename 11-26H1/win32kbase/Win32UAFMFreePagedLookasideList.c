/*
 * XREFs of Win32UAFMFreePagedLookasideList @ 0x1401EACF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreePagedLookasideList@Win32UAFMAllocatorCollection@@SAXPEAX@Z @ 0x140185010 (-FreePagedLookasideList@Win32UAFMAllocatorCollection@@SAXPEAX@Z.c)
 *     ?FreePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1401EAFB8 (-FreePool@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z.c)
 */

__int64 __fastcall Win32UAFMFreePagedLookasideList(void **a1, unsigned int a2, int a3)
{
  Win32UAFMAllocatorCollection::FreePagedLookasideList(*a1, a2, a3);
  return NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreePool(a1, a2);
}
