/*
 * XREFs of Win32UAFMAllocPoolWithPriority @ 0x1401EAB00
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocatePoolWithPriority@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_K0IW4_EX_POOL_PRIORITY@@PEAI@Z @ 0x1401EAEF8 (-AllocatePoolWithPriority@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumenta.c)
 */

__int64 __fastcall Win32UAFMAllocPoolWithPriority(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  return NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AllocatePoolWithPriority(a1, a5);
}
