/*
 * XREFs of sub_140058A84 @ 0x140058A84
 * Callers:
 *     sub_140048238 @ 0x140048238 (sub_140048238.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140058A84(__int64 a1)
{
  __int64 result; // rax

  if ( qword_1400E8560 )
    return sub_1400B6010(a1);
  result = qword_1400E8568;
  if ( qword_1400E8568 )
    return sub_1400B6010(a1);
  return result;
}
