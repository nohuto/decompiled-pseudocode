/*
 * XREFs of sub_1400DE06C @ 0x1400DE06C
 * Callers:
 *     sub_140113EA8 @ 0x140113EA8 (sub_140113EA8.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 */

void *__fastcall sub_1400DE06C(__int64 a1, unsigned int a2, __int64 a3, PHYSICAL_ADDRESS *a4)
{
  __int64 v5; // r9
  void *ContiguousNodeMemory; // rax
  void *v7; // rbx

  v5 = *(_QWORD *)(a1 + 128);
  if ( (*(_DWORD *)(*(_QWORD *)(v5 + 400) + 184LL) & 0x2000) != 0 && a2 <= 0x1000 )
    ContiguousNodeMemory = (void *)sub_1400143E0(72LL, 4096LL, 1380147538LL, *(_QWORD *)(v5 + 8));
  else
    ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(a2, 0x100000000LL, -1LL, 0LL);
  v7 = ContiguousNodeMemory;
  if ( ContiguousNodeMemory )
    *a4 = MmGetPhysicalAddress(ContiguousNodeMemory);
  return v7;
}
