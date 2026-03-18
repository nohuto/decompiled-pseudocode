/*
 * XREFs of HalAllocateDomainCommonBufferDmaThin @ 0x14058AF60
 * Callers:
 *     <none>
 * Callees:
 *     HalpAllocateCommonBufferDmaThin @ 0x140348C34 (HalpAllocateCommonBufferDmaThin.c)
 */

__int64 __fastcall HalAllocateDomainCommonBufferDmaThin(
        __int64 a1,
        __int64 a2,
        PHYSICAL_ADDRESS *a3,
        int a4,
        char a5,
        MEMORY_CACHING_TYPE *a6,
        int a7,
        PHYSICAL_ADDRESS *a8,
        _QWORD *a9)
{
  return HalpAllocateCommonBufferDmaThin(*(PHYSICAL_ADDRESS **)(a1 + 512), 0LL, a3, a4, a5, a6, a7, a8, a9);
}
