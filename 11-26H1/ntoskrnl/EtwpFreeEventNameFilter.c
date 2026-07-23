/*
 * XREFs of EtwpFreeEventNameFilter @ 0x140AA32D8
 * Callers:
 *     EtwpUpdateGuidFilterData @ 0x140913B50 (EtwpUpdateGuidFilterData.c)
 *     EtwpFreeFilterInfo @ 0x140914938 (EtwpFreeFilterInfo.c)
 *     EtwpAllocateEventNameFilter @ 0x140AA2F10 (EtwpAllocateEventNameFilter.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeEventNameFilter(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[4];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}
