/*
 * XREFs of HalAllocateCommonBufferWithBounds @ 0x14058AF10
 * Callers:
 *     <none>
 * Callees:
 *     HalpAllocateDomainCommonBufferInternal @ 0x14058C6F0 (HalpAllocateDomainCommonBufferInternal.c)
 */

__int64 __fastcall HalAllocateCommonBufferWithBounds(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        char a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // rcx
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF

  v8 = *(_QWORD *)(a1 + 512);
  v10 = 0LL;
  HalpAllocateDomainCommonBufferInternal(v8, a2, a3, a4, a5, a6, a7, a8, (__int64)&v10);
  return v10;
}
