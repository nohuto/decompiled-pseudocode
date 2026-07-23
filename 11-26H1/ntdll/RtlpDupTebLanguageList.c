/*
 * XREFs of RtlpDupTebLanguageList @ 0x18008FC0C
 * Callers:
 *     RtlSetThreadPreferredUILanguages2 @ 0x18008F9D0 (RtlSetThreadPreferredUILanguages2.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpMuiRegDupLanguageList @ 0x18008FB80 (RtlpMuiRegDupLanguageList.c)
 *     RtlpFreeTebLanguageList @ 0x18008FD78 (RtlpFreeTebLanguageList.c)
 *     RtlpMuiRegDupLanguageConfigList @ 0x18008FDC4 (RtlpMuiRegDupLanguageConfigList.c)
 */

_QWORD *__fastcall RtlpDupTebLanguageList(__int64 *a1)
{
  _QWORD *Heap_0; // rbx
  void **v3; // rax
  __int64 v5; // rax

  if ( !a1 )
    return 0LL;
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x10uLL);
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
