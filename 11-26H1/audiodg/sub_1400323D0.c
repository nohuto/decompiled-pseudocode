/*
 * XREFs of sub_1400323D0 @ 0x1400323D0
 * Callers:
 *     sub_14004EC40 @ 0x14004EC40 (sub_14004EC40.c)
 *     sub_14004EC50 @ 0x14004EC50 (sub_14004EC50.c)
 * Callees:
 *     sub_1400444D0 @ 0x1400444D0 (sub_1400444D0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400323D0(__int64 a1)
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
