/*
 * XREFs of RtlpMuiRegCreateLanguageConfigList @ 0x180058A0C
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x180058140 (RtlpLoadLanguageConfigList.c)
 *     RtlpPopulateLanguageConfigList @ 0x180058A90 (RtlpPopulateLanguageConfigList.c)
 *     RtlpMuiRegDupLanguageConfigList @ 0x18008FDC4 (RtlpMuiRegDupLanguageConfigList.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 */

_WORD *__fastcall RtlpMuiRegCreateLanguageConfigList(int a1)
{
  __int64 v1; // rax
  __int16 v2; // di
  unsigned __int64 v3; // rax
  unsigned int v4; // ebx
  _WORD *Heap_0; // rcx

  v1 = 4LL;
  if ( a1 >= 1 )
    v1 = (unsigned int)a1;
  v2 = v1;
  v3 = 12 * v1;
  if ( v3 > 0xFFFFFFFF )
    return 0LL;
  v4 = v3 + 16;
  if ( (unsigned int)v3 >= 0xFFFFFFF0 )
    return 0LL;
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, v4);
  if ( Heap_0 )
  {
    Heap_0[2] = 0;
    *((_QWORD *)Heap_0 + 1) = Heap_0 + 8;
    *(_DWORD *)Heap_0 = v4;
    Heap_0[3] = v2;
  }
  return Heap_0;
}
