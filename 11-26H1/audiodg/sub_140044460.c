/*
 * XREFs of sub_140044460 @ 0x140044460
 * Callers:
 *     sub_140099520 @ 0x140099520 (sub_140099520.c)
 *     sub_140099530 @ 0x140099530 (sub_140099530.c)
 *     sub_140099550 @ 0x140099550 (sub_140099550.c)
 * Callees:
 *     sub_1400444D0 @ 0x1400444D0 (sub_1400444D0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140044460(__int64 a1)
{
  unsigned int v2; // edi

  v2 = sub_1400444D0(a1 + 512);
  if ( !v2 )
  {
    sub_1400B6010(qword_1400E8490);
    if ( a1 )
      sub_1400B6010(a1);
    sub_1400B6010(qword_1400E8490);
  }
  return v2;
}
