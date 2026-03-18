/*
 * XREFs of EtwpFreeEventNameFilter @ 0x140AA1814
 * Callers:
 *     EtwpUpdateGuidFilterData @ 0x140937FB0 (EtwpUpdateGuidFilterData.c)
 *     EtwpFreeFilterInfo @ 0x140938D98 (EtwpFreeFilterInfo.c)
 *     EtwpAllocateEventNameFilter @ 0x140AA144C (EtwpAllocateEventNameFilter.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeEventNameFilter(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[4];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}
