/*
 * XREFs of EtwpUpdateEventFilterAndFree @ 0x140915530
 * Callers:
 *     EtwpUpdateGuidFilterData @ 0x140913B50 (EtwpUpdateGuidFilterData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpUpdateEventFilterAndFree(volatile __int64 *a1, __int64 *a2)
{
  void *v2; // rax

  v2 = (void *)_InterlockedExchange64(a1, *a2);
  *a2 = 0LL;
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
