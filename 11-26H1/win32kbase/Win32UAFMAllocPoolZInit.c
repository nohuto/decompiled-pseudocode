/*
 * XREFs of Win32UAFMAllocPoolZInit @ 0x1401EAC40
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocatePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_K0IPEAI@Z @ 0x1401EAE68 (-AllocatePool@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void *__fastcall Win32UAFMAllocPoolZInit(size_t Size)
{
  void *Pool; // rax
  void *v3; // rbx

  Pool = (void *)NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AllocatePool(0x100uLL);
  v3 = Pool;
  if ( Pool )
    memset(Pool, 0, Size);
  return v3;
}
