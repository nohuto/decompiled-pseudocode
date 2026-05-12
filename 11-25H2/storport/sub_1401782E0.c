/*
 * XREFs of sub_1401782E0 @ 0x1401782E0
 * Callers:
 *     sub_140045574 @ 0x140045574 (sub_140045574.c)
 *     sub_140054FB0 @ 0x140054FB0 (sub_140054FB0.c)
 *     sub_1400C9020 @ 0x1400C9020 (sub_1400C9020.c)
 *     sub_1400CB5C0 @ 0x1400CB5C0 (sub_1400CB5C0.c)
 *     sub_14017A040 @ 0x14017A040 (sub_14017A040.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1401782E0(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4C526152u);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x4C526152u);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
