/*
 * XREFs of KiFreeThreadCycleTable @ 0x140BF3BF0
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407B9978 (KiStartDynamicProcessor.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall KiFreeThreadCycleTable(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 34480);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 34480) = 0LL;
  }
}
