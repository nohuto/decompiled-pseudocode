/*
 * XREFs of HalAllocateCommonBufferVector @ 0x14058AE30
 * Callers:
 *     <none>
 * Callees:
 *     HalpAllocateCommonBufferVectorInternal @ 0x1404CB450 (HalpAllocateCommonBufferVectorInternal.c)
 */

__int64 __fastcall HalAllocateCommonBufferVector(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        MEMORY_CACHING_TYPE a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        __int64 *a9)
{
  __int64 result; // rax

  result = HalpAllocateCommonBufferVectorInternal(a1, a2, a3, a4, a5, a6, a7, a8, 1, a9);
  if ( (_DWORD)result == -1073741670 && *(_DWORD *)(*(_QWORD *)(a1 + 512) + 48LL) == 2 )
    return HalpAllocateCommonBufferVectorInternal(a1, a2, a3, a4, a5, a6, a7, a8, 0, a9);
  return result;
}
