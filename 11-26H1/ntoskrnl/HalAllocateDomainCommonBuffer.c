/*
 * XREFs of HalAllocateDomainCommonBuffer @ 0x1405899D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpAllocateDomainCommonBufferInternal @ 0x140589FC0 (HalpAllocateDomainCommonBufferInternal.c)
 */

__int64 __fastcall HalAllocateDomainCommonBuffer(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  return HalpAllocateDomainCommonBufferInternal(*(_QWORD *)(a1 + 512), 0, a3, a4, a5, a6, a7, a8, a9);
}
