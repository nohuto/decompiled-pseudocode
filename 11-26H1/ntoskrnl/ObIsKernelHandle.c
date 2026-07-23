/*
 * XREFs of ObIsKernelHandle @ 0x1404D2320
 * Callers:
 *     MmPrefetchVirtualMemory @ 0x140A57D94 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ObIsKernelHandle(HANDLE Handle)
{
  return (unsigned __int64)Handle <= 0xFFFFFFFFFFFFFFFDuLL
      && ((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL;
}
