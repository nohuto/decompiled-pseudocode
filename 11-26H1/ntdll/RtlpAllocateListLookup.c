/*
 * XREFs of RtlpAllocateListLookup @ 0x18006CBB0
 * Callers:
 *     RtlpInitializeUCRIndex @ 0x18006C558 (RtlpInitializeUCRIndex.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 */

_QWORD *__fastcall RtlpAllocateListLookup(void *a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // edi
  _QWORD *result; // rax

  v4 = (unsigned __int64)((a3 + 31) & 0xFFFFFFE0) >> 3;
  v5 = (a3 + 31) & 0xFFFFFFE0;
  result = RtlAllocateHeap_0(a1, 0x80000Au, v4 + 8 * (v5 + 7LL));
  if ( result )
  {
    *((_BYTE *)result - 1) = 1;
    result[5] = result + 7;
    *((_DWORD *)result + 2) = v5;
    result[6] = (char *)result + v4 + 56;
    result[4] = a2;
  }
  return result;
}
