/*
 * XREFs of RtlpAllocateListLookup @ 0x18007E4C0
 * Callers:
 *     RtlpInitializeUCRIndex @ 0x18007DE6C (RtlpInitializeUCRIndex.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 */

__int64 __fastcall RtlpAllocateListLookup(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 result; // rax

  v4 = (unsigned __int64)((a3 + 31) & 0xFFFFFFE0) >> 3;
  v5 = (a3 + 31) & 0xFFFFFFE0;
  result = RtlAllocateHeap_0();
  if ( result )
  {
    *(_BYTE *)(result - 1) = 1;
    *(_QWORD *)(result + 40) = result + 56;
    *(_DWORD *)(result + 8) = v5;
    *(_QWORD *)(result + 48) = result + v4 + 56;
    *(_QWORD *)(result + 32) = a2;
  }
  return result;
}
