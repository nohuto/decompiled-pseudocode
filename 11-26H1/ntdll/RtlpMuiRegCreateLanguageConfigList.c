/*
 * XREFs of RtlpMuiRegCreateLanguageConfigList @ 0x18000D2DC
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x18000CA10 (RtlpLoadLanguageConfigList.c)
 *     RtlpPopulateLanguageConfigList @ 0x18000D360 (RtlpPopulateLanguageConfigList.c)
 *     RtlpMuiRegDupLanguageConfigList @ 0x18006F974 (RtlpMuiRegDupLanguageConfigList.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 */

__int64 __fastcall RtlpMuiRegCreateLanguageConfigList(int a1)
{
  __int64 v1; // rax
  __int16 v2; // di
  unsigned __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 Heap_0; // rcx

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
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, v4);
  if ( Heap_0 )
  {
    *(_WORD *)(Heap_0 + 4) = 0;
    *(_QWORD *)(Heap_0 + 8) = Heap_0 + 16;
    *(_DWORD *)Heap_0 = v4;
    *(_WORD *)(Heap_0 + 6) = v2;
  }
  return Heap_0;
}
