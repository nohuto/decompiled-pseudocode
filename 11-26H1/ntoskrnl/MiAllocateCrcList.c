/*
 * XREFs of MiAllocateCrcList @ 0x140B58BB8
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x140880C48 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1403FFC10 (MiGetAvailablePagesBelowPriority.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiCommitmentAvailable @ 0x140451F10 (MiCommitmentAvailable.c)
 *     MiPagesInChildPartitions @ 0x1404C8AA8 (MiPagesInChildPartitions.c)
 *     MiGetPrivatePageCount @ 0x1404E7B08 (MiGetPrivatePageCount.c)
 */

__int64 __fastcall MiAllocateCrcList(__int64 *a1, char a2, ULONG_PTR *a3)
{
  __int64 v3; // rbp
  __int64 v5; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 PrivatePageCount; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 AvailablePagesBelowPriority; // rax
  ULONG_PTR v13; // rbx
  int CurrentProcessorColor; // eax
  __int64 result; // rax

  v3 = *a1;
  v5 = *(_QWORD *)(*a1 + 16704);
  v7 = *a3 / 0x28;
  PrivatePageCount = MiGetPrivatePageCount(*a1);
  v9 = v5 + PrivatePageCount;
  if ( v5 + PrivatePageCount < PrivatePageCount )
    v9 = -1LL;
  if ( (a2 & 1) != 0 )
    v9 = MiPagesInChildPartitions();
  if ( v9 <= v7 )
    v7 = v9;
  v10 = *(_QWORD *)(v3 + 22528) - 1024LL;
  if ( (__int64)v10 <= 0 )
    return 0LL;
  if ( (40 * v7 + 4095) >> 12 <= v10 )
    v10 = (40 * v7 + 4095) >> 12;
  v11 = MiCommitmentAvailable(v3);
  if ( !v11 )
    return 0LL;
  if ( v10 > v11 )
    v10 = v11;
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v3, 2u);
  if ( v10 > AvailablePagesBelowPriority )
    v10 = AvailablePagesBelowPriority;
  v13 = v10 << 12;
  if ( v13 < 0x200000 )
    v13 = 0x200000LL;
  while ( 1 )
  {
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    result = ExAllocatePoolMm(64LL, v13, 1836405581, CurrentProcessorColor | 0x80000000);
    if ( result )
      break;
    v13 >>= 1;
    if ( v13 < 0x10000 )
      return result;
  }
  *a3 = v13;
  return result;
}
