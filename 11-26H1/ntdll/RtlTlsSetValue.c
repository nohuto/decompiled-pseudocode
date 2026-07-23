/*
 * XREFs of RtlTlsSetValue @ 0x1800BCB60
 * Callers:
 *     RtlpHpEnvTlsSetValue @ 0x1800723C0 (RtlpHpEnvTlsSetValue.c)
 * Callees:
 *     RtlpTlsHeapAlloc @ 0x1800BCC00 (RtlpTlsHeapAlloc.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlTlsSetValue(unsigned int a1, void *a2)
{
  struct _TEB *v2; // rsi
  __int64 v5; // rbx
  void **TlsExpansionSlots; // r14
  void **v7; // rax

  v2 = NtCurrentTeb();
  if ( a1 < 0x40 )
  {
    v2->TlsSlots[a1] = a2;
    return 0LL;
  }
  v5 = a1 - 64;
  if ( (unsigned int)v5 >= 0x400 )
    return 3221225485LL;
  TlsExpansionSlots = v2->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
LABEL_6:
    TlsExpansionSlots[v5] = a2;
    return 0LL;
  }
  v7 = (void **)RtlpTlsHeapAlloc();
  TlsExpansionSlots = v7;
  if ( v7 )
  {
    memset_thunk_772440563353939046(v7, 0, 0x2000uLL);
    v2->TlsExpansionSlots = TlsExpansionSlots;
    goto LABEL_6;
  }
  return 3221225495LL;
}
