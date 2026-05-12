/*
 * XREFs of sub_140122570 @ 0x140122570
 * Callers:
 *     sub_1400DEFC4 @ 0x1400DEFC4 (sub_1400DEFC4.c)
 *     sub_1400EA04C @ 0x1400EA04C (sub_1400EA04C.c)
 *     sub_1400F7E54 @ 0x1400F7E54 (sub_1400F7E54.c)
 *     sub_1400F82EC @ 0x1400F82EC (sub_1400F82EC.c)
 *     sub_1401222E8 @ 0x1401222E8 (sub_1401222E8.c)
 *     sub_1401224B4 @ 0x1401224B4 (sub_1401224B4.c)
 * Callees:
 *     sub_140088234 @ 0x140088234 (sub_140088234.c)
 */

void __fastcall sub_140122570(__int64 a1, _QWORD *a2)
{
  void *v4; // rcx

  if ( a2 )
  {
    v4 = (void *)a2[7];
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x52436152u);
      a2[7] = 0LL;
    }
    if ( *a2 )
    {
      sub_140088234(*(_QWORD *)(a1 + 128));
      *a2 = 0LL;
    }
    ExFreePoolWithTag(a2, 0x52436152u);
  }
}
