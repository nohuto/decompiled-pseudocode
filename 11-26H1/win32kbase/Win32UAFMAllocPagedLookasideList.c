/*
 * XREFs of Win32UAFMAllocPagedLookasideList @ 0x1401EAA80
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocatePagedLookasideList@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_KIIIPEAI@Z @ 0x1401EADCC (-AllocatePagedLookasideList@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumen.c)
 */

__int64 __fastcall Win32UAFMAllocPagedLookasideList(__int64 a1)
{
  return NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AllocatePagedLookasideList(a1);
}
