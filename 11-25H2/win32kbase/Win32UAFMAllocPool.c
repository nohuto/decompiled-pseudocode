/*
 * XREFs of Win32UAFMAllocPool @ 0x1401C1EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocatePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_K0IPEAI@Z @ 0x1401C2380 (-AllocatePool@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX.c)
 */

__int64 Win32UAFMAllocPool()
{
  return NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AllocatePool(0x100uLL);
}
