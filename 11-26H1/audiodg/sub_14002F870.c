/*
 * XREFs of sub_14002F870 @ 0x14002F870
 * Callers:
 *     sub_14004EC60 @ 0x14004EC60 (sub_14004EC60.c)
 *     sub_14004EC70 @ 0x14004EC70 (sub_14004EC70.c)
 * Callees:
 *     sub_1400444D0 @ 0x1400444D0 (sub_1400444D0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14002F870(__int64 a1)
{
  unsigned int v2; // edi

  v2 = sub_1400444D0(a1 + 24);
  if ( !v2 )
  {
    sub_1400B6010(qword_1400E8490);
    if ( a1 )
      sub_1400B6010(a1);
    sub_1400B6010(qword_1400E8490);
  }
  return v2;
}
