/*
 * XREFs of sub_1401106CC @ 0x1401106CC
 * Callers:
 *     sub_1400F7E54 @ 0x1400F7E54 (sub_1400F7E54.c)
 *     sub_1400F82EC @ 0x1400F82EC (sub_1400F82EC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1401106CC(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 608);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4D4E6152u);
    *(_QWORD *)(a1 + 608) = 0LL;
  }
}
