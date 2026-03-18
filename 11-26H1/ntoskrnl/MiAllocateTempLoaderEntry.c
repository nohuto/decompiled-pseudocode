/*
 * XREFs of MiAllocateTempLoaderEntry @ 0x140AEBF68
 * Callers:
 *     MiObtainSectionForDriver @ 0x140AEB960 (MiObtainSectionForDriver.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 */

__int64 MiAllocateTempLoaderEntry()
{
  int CurrentProcessorColor; // eax
  __int64 result; // rax

  CurrentProcessorColor = MmGetCurrentProcessorColor();
  result = ExAllocatePoolMm(64LL, 0x130uLL, 1682730317, CurrentProcessorColor | 0x80000000);
  if ( result )
  {
    *(_DWORD *)(result + 104) = 0x1000000;
    *(_WORD *)(result + 108) = 1;
    *(_QWORD *)(result + 136) = -2LL;
    *(_DWORD *)(result + 184) |= 0x100u;
  }
  return result;
}
