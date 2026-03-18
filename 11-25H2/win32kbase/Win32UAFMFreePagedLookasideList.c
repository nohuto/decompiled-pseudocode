/*
 * XREFs of Win32UAFMFreePagedLookasideList @ 0x1401C2110
 * Callers:
 *     <none>
 * Callees:
 *     ?FreePagedLookasideList@Win32UAFMAllocatorCollection@@SAXPEAX@Z @ 0x14006D940 (-FreePagedLookasideList@Win32UAFMAllocatorCollection@@SAXPEAX@Z.c)
 *     ?FreePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1401C24D8 (-FreePool@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z.c)
 */

__int64 __fastcall Win32UAFMFreePagedLookasideList(void **a1, __int64 a2)
{
  unsigned int v3; // ebx

  v3 = a2;
  Win32UAFMAllocatorCollection::FreePagedLookasideList(*a1, a2);
  return NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreePool(a1, v3);
}
