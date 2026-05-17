/*
 * XREFs of RtlpDupTebLanguageList @ 0x18006F7BC
 * Callers:
 *     RtlSetThreadPreferredUILanguages2 @ 0x18006F580 (RtlSetThreadPreferredUILanguages2.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpMuiRegDupLanguageList @ 0x18006F730 (RtlpMuiRegDupLanguageList.c)
 *     RtlpFreeTebLanguageList @ 0x18006F928 (RtlpFreeTebLanguageList.c)
 *     RtlpMuiRegDupLanguageConfigList @ 0x18006F974 (RtlpMuiRegDupLanguageConfigList.c)
 */

_QWORD *__fastcall RtlpDupTebLanguageList(__int64 *a1)
{
  _QWORD *Heap_0; // rbx
  __int64 v3; // rax
  __int64 v5; // rax

  if ( !a1 )
    return 0LL;
  Heap_0 = (_QWORD *)RtlAllocateHeap_0();
  if ( !Heap_0 )
    return 0LL;
  if ( *a1 && (v3 = RtlpMuiRegDupLanguageList(*a1), (*Heap_0 = v3) == 0LL)
    || a1[1] && (v5 = RtlpMuiRegDupLanguageConfigList(), (Heap_0[1] = v5) == 0LL) )
  {
    RtlpFreeTebLanguageList(Heap_0);
    return 0LL;
  }
  return Heap_0;
}
