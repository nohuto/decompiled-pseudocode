/*
 * XREFs of sub_140058A10 @ 0x140058A10
 * Callers:
 *     sub_1400583C0 @ 0x1400583C0 (sub_1400583C0.c)
 *     sub_140058430 @ 0x140058430 (sub_140058430.c)
 *     sub_140058634 @ 0x140058634 (sub_140058634.c)
 *     sub_140058A40 @ 0x140058A40 (sub_140058A40.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140058A10(__int64 a1)
{
  __int64 result; // rax

  if ( qword_1400E8518 )
    return sub_1400B6010(a1);
  result = qword_1400E8538;
  if ( qword_1400E8538 )
    return sub_1400B6010(a1);
  return result;
}
