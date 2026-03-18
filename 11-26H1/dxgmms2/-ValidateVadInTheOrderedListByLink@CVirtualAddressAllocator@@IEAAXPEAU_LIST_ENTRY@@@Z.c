/*
 * XREFs of ?ValidateVadInTheOrderedListByLink@CVirtualAddressAllocator@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x140112E68
 * Callers:
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1401061D4 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 * Callees:
 *     ReportVadValidationError @ 0x1400AAEE0 (ReportVadValidationError.c)
 */

void __fastcall CVirtualAddressAllocator::ValidateVadInTheOrderedListByLink(
        struct _LIST_ENTRY **this,
        struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *v2; // rbp
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY **p_Blink; // rdi
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r8

  v2 = (struct _LIST_ENTRY *)(this + 4);
  if ( a2 == (struct _LIST_ENTRY *)(this + 4) )
    return;
  Blink = a2->Blink;
  p_Blink = &a2[-3].Blink;
  Flink = a2[-1].Flink;
  if ( Blink == v2 )
  {
    if ( Flink == this[3] )
      goto LABEL_4;
    v10 = 157123952LL;
LABEL_12:
    ReportVadValidationError((__int64)this, (__int64)&a2[-3].Blink, v10);
    goto LABEL_4;
  }
  if ( Flink < Blink[-1].Blink )
  {
    v10 = 1140164592LL;
    goto LABEL_12;
  }
LABEL_4:
  v8 = p_Blink[4];
  if ( a2->Flink != v2 )
  {
    if ( v8 <= a2->Flink[-1].Flink )
      return;
    v9 = 769917942LL;
LABEL_9:
    ReportVadValidationError((__int64)this, (__int64)p_Blink, v9);
    return;
  }
  if ( v8 != this[2] )
  {
    v9 = 2451751071LL;
    goto LABEL_9;
  }
}
