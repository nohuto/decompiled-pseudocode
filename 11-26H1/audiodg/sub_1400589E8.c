/*
 * XREFs of sub_1400589E8 @ 0x1400589E8
 * Callers:
 *     sub_140056F08 @ 0x140056F08 (sub_140056F08.c)
 *     sub_14009E050 @ 0x14009E050 (sub_14009E050.c)
 *     sub_14009E120 @ 0x14009E120 (sub_14009E120.c)
 *     sub_14009E224 @ 0x14009E224 (sub_14009E224.c)
 *     sub_14009E30C @ 0x14009E30C (sub_14009E30C.c)
 *     sub_14009E3F0 @ 0x14009E3F0 (sub_14009E3F0.c)
 *     sub_14009E46C @ 0x14009E46C (sub_14009E46C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400589E8(__int64 a1)
{
  __int64 result; // rax

  if ( qword_1400E8550 )
    return sub_1400B6010(a1);
  result = qword_1400E8558;
  if ( qword_1400E8558 )
    return sub_1400B6010(a1);
  return result;
}
