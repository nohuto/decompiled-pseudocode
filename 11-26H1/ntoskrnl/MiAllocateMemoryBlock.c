/*
 * XREFs of MiAllocateMemoryBlock @ 0x140865AE4
 * Callers:
 *     MiAllocateInitialMemoryBlocks @ 0x1408659F8 (MiAllocateInitialMemoryBlocks.c)
 *     MiExtendMemoryBlocks @ 0x1408662E4 (MiExtendMemoryBlocks.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 */

__int64 __fastcall MiAllocateMemoryBlock(unsigned int *a1, unsigned int a2, int a3)
{
  unsigned __int64 v5; // rbx
  int CurrentProcessorColor; // eax
  __int64 result; // rax

  if ( a2 <= *a1 )
    return 0LL;
  v5 = a3 != 0 ? 24LL : 16LL;
  if ( a2 > *a1 + (-33LL - v5 * *a1) / v5 )
    return 0LL;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  result = ExAllocatePoolMm(64LL, a2 * v5 + 32, 1649240397, CurrentProcessorColor | 0x80000000);
  if ( result )
  {
    *(_DWORD *)(result + 16) = a2;
    if ( a3 )
      *(_QWORD *)result = 1LL;
  }
  return result;
}
