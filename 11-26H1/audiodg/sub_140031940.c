/*
 * XREFs of sub_140031940 @ 0x140031940
 * Callers:
 *     sub_140071DD0 @ 0x140071DD0 (sub_140071DD0.c)
 *     sub_140071DE0 @ 0x140071DE0 (sub_140071DE0.c)
 *     sub_140071DF0 @ 0x140071DF0 (sub_140071DF0.c)
 *     sub_140071E00 @ 0x140071E00 (sub_140071E00.c)
 *     sub_140071E20 @ 0x140071E20 (sub_140071E20.c)
 * Callees:
 *     sub_1400444D0 @ 0x1400444D0 (sub_1400444D0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140031940(__int64 a1)
{
  unsigned int v2; // edi

  v2 = sub_1400444D0(a1 + 224);
  if ( !v2 )
  {
    sub_1400B6010(qword_1400E8490);
    if ( a1 )
      sub_1400B6010(a1);
    sub_1400B6010(qword_1400E8490);
  }
  return v2;
}
