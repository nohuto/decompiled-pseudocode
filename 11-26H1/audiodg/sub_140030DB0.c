/*
 * XREFs of sub_140030DB0 @ 0x140030DB0
 * Callers:
 *     sub_140059F60 @ 0x140059F60 (sub_140059F60.c)
 *     sub_140059F70 @ 0x140059F70 (sub_140059F70.c)
 *     sub_140059F80 @ 0x140059F80 (sub_140059F80.c)
 * Callees:
 *     sub_1400444D0 @ 0x1400444D0 (sub_1400444D0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140030DB0(__int64 a1)
{
  unsigned int v2; // edi

  v2 = sub_1400444D0(a1 + 344);
  if ( !v2 )
  {
    sub_1400B6010(qword_1400E8490);
    if ( a1 )
      sub_1400B6010(a1);
    sub_1400B6010(qword_1400E8490);
  }
  return v2;
}
