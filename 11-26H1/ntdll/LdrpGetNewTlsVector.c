/*
 * XREFs of LdrpGetNewTlsVector @ 0x180076F24
 * Callers:
 *     LdrpAllocateTls @ 0x180076CB0 (LdrpAllocateTls.c)
 *     LdrpHandleTlsData @ 0x180077550 (LdrpHandleTlsData.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

_DWORD *__fastcall LdrpGetNewTlsVector(unsigned int a1)
{
  __int64 v2; // rdi
  _DWORD *result; // rax
  _DWORD *v4; // rbx

  v2 = a1;
  result = RtlAllocateHeap_0(LdrpTlsHeap, NtdllBaseTag + 786432, 8LL * a1 + 16);
  if ( result )
  {
    *result = a1;
    v4 = result + 4;
    memset_thunk_772440563353939046(result + 4, 0, 8 * v2);
    return v4;
  }
  return result;
}
