/*
 * XREFs of HalAllocateCommonBufferExV2 @ 0x14034C0E0
 * Callers:
 *     HalAllocateCommonBufferV2 @ 0x14034B9F0 (HalAllocateCommonBufferV2.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     MmAllocateContiguousNodeMemory @ 0x14034C170 (MmAllocateContiguousNodeMemory.c)
 */

void *__fastcall HalAllocateCommonBufferExV2(__int64 a1, _QWORD *a2, int a3, PHYSICAL_ADDRESS *a4, int a5, int a6)
{
  _QWORD *v7; // r8
  void *ContiguousNodeMemory; // rax
  void *v10; // rbx

  v7 = a2;
  if ( !a2 )
    v7 = (_QWORD *)(a1 + 144);
  ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(
                                   a3,
                                   0,
                                   *v7,
                                   *(_BYTE *)(a1 + 153) != 0 ? 0 : 0x10000,
                                   *(_BYTE *)(a1 + 445) != 0 ? 4 : 516,
                                   a6);
  v10 = ContiguousNodeMemory;
  if ( ContiguousNodeMemory )
    *a4 = MmGetPhysicalAddress(ContiguousNodeMemory);
  return v10;
}
