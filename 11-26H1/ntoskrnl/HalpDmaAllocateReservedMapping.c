/*
 * XREFs of HalpDmaAllocateReservedMapping @ 0x140CB6404
 * Callers:
 *     HalpDmaAllocateMappingResources @ 0x140CB6260 (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140CB6464 (HalpDmaAllocateReservedMappingArray.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     MmAllocateMappingAddress @ 0x140AF4800 (MmAllocateMappingAddress.c)
 */

_QWORD *__fastcall HalpDmaAllocateReservedMapping(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *result; // rax
  PVOID MappingAddress; // rax
  __int64 v4; // rcx

  v1 = (_QWORD *)HalpMmAllocCtxAlloc(a1, 48LL);
  if ( !v1 )
    return 0LL;
  MappingAddress = MmAllocateMappingAddress(0x200000uLL, 0x446C6148u);
  v1[2] = MappingAddress;
  if ( !MappingAddress )
  {
    HalpMmAllocCtxFree(v4, (__int64)v1);
    return 0LL;
  }
  v1[3] = 0LL;
  result = v1;
  v1[4] = 0LL;
  return result;
}
