/*
 * XREFs of ObIsKernelHandle @ 0x1404D8C40
 * Callers:
 *     MmPrefetchVirtualMemory @ 0x140A4EAA4 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ObIsKernelHandle(HANDLE Handle)
{
  return (unsigned __int64)Handle <= 0xFFFFFFFFFFFFFFFDuLL
      && ((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL;
}
