/*
 * XREFs of sub_1400379C0 @ 0x1400379C0
 * Callers:
 *     sub_14005D040 @ 0x14005D040 (sub_14005D040.c)
 * Callees:
 *     sub_1400444D0 @ 0x1400444D0 (sub_1400444D0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400379C0(__int64 a1)
{
  unsigned int v2; // edi

  v2 = sub_1400444D0(a1 + 16);
  if ( !v2 )
  {
    sub_1400B6010(qword_1400E8490);
    if ( a1 )
      sub_1400B6010(a1);
    sub_1400B6010(qword_1400E8490);
  }
  return v2;
}
