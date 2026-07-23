/*
 * XREFs of HalAllocateDomainCommonBufferDmarThin @ 0x14058DBD0
 * Callers:
 *     <none>
 * Callees:
 *     HalpAllocateCommonBufferDmarThin @ 0x1404EB464 (HalpAllocateCommonBufferDmarThin.c)
 */

__int64 __fastcall HalAllocateDomainCommonBufferDmarThin(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        MEMORY_CACHING_TYPE *a6,
        unsigned int a7,
        _QWORD *a8,
        _RTL_BALANCED_NODE **a9)
{
  return HalpAllocateCommonBufferDmarThin(*(__int64 **)(a1 + 512), 0LL, a3, a4, a5, a6, a7, a8, a9);
}
