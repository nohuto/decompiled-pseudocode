/*
 * XREFs of LdrpGetNewTlsVector @ 0x18007FB84
 * Callers:
 *     LdrpAllocateTls @ 0x18007F910 (LdrpAllocateTls.c)
 *     LdrpHandleTlsData @ 0x1800801B0 (LdrpHandleTlsData.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

_DWORD *__fastcall LdrpGetNewTlsVector(unsigned int a1)
{
  __int64 v2; // rdi
  _DWORD *result; // rax
  _DWORD *v4; // rbx

  v2 = a1;
  result = (_DWORD *)RtlAllocateHeap_0();
  if ( result )
  {
    *result = a1;
    v4 = result + 4;
    memset_thunk_772440563353939046(result + 4, 0, 8 * v2);
    return v4;
  }
  return result;
}
