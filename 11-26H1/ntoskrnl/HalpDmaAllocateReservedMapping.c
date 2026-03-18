/*
 * XREFs of HalpDmaAllocateReservedMapping @ 0x140CB03C4
 * Callers:
 *     HalpDmaAllocateMappingResources @ 0x140CB0220 (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140CB0424 (HalpDmaAllocateReservedMappingArray.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x140357FFC (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x140359004 (HalpMmAllocCtxFree.c)
 *     MmAllocateMappingAddress @ 0x140AF1F30 (MmAllocateMappingAddress.c)
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
