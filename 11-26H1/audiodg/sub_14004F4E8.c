/*
 * XREFs of sub_14004F4E8 @ 0x14004F4E8
 * Callers:
 *     sub_14004C16C @ 0x14004C16C (sub_14004C16C.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14004F4E8(__int64 a1)
{
  __int64 result; // rax

  result = qword_1400E83D8;
  if ( qword_1400E83D8 )
    return sub_1400B6010(a1);
  return result;
}
