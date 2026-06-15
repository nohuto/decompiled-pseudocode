/*
 * XREFs of sub_14002B1F0 @ 0x14002B1F0
 * Callers:
 *     sub_14004EC10 @ 0x14004EC10 (sub_14004EC10.c)
 *     sub_14004EC20 @ 0x14004EC20 (sub_14004EC20.c)
 *     sub_14004EC30 @ 0x14004EC30 (sub_14004EC30.c)
 * Callees:
 *     sub_1400444D0 @ 0x1400444D0 (sub_1400444D0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14002B1F0(__int64 a1)
{
  unsigned int v2; // edi

  v2 = sub_1400444D0(a1 + 32);
  if ( !v2 )
  {
    sub_1400B6010(qword_1400E8490);
    if ( a1 )
      sub_1400B6010(a1);
    sub_1400B6010(qword_1400E8490);
  }
  return v2;
}
