/*
 * XREFs of sub_1400BB1E8 @ 0x1400BB1E8
 * Callers:
 *     sub_1400BB250 @ 0x1400BB250 (sub_1400BB250.c)
 *     sub_140183464 @ 0x140183464 (sub_140183464.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1400BB1E8(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  *(_BYTE *)(a1 + 507) &= ~0x10u;
  v2 = *(void **)(a1 + 2384);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x65546152u);
    *(_QWORD *)(a1 + 2384) = 0LL;
  }
  v3 = *(void **)(a1 + 2408);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x65546152u);
    *(_QWORD *)(a1 + 2408) = 0LL;
  }
}
