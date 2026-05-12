/*
 * XREFs of sub_140120864 @ 0x140120864
 * Callers:
 *     sub_1400E7D1C @ 0x1400E7D1C (sub_1400E7D1C.c)
 *     sub_1400EE990 @ 0x1400EE990 (sub_1400EE990.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140120864(__int64 a1)
{
  void *v2; // rcx

  if ( a1 )
  {
    v2 = *(void **)(a1 + 80);
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x52426152u);
      *(_QWORD *)(a1 + 80) = 0LL;
    }
  }
}
