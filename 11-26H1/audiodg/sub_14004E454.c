/*
 * XREFs of sub_14004E454 @ 0x14004E454
 * Callers:
 *     sub_1400B1447 @ 0x1400B1447 (sub_1400B1447.c)
 *     sub_1400B155B @ 0x1400B155B (sub_1400B155B.c)
 * Callees:
 *     sub_14004DB3C @ 0x14004DB3C (sub_14004DB3C.c)
 */

__int64 __fastcall sub_14004E454(__int64 a1, _WORD *a2, __int64 a3)
{
  __int64 result; // rax

  result = (__int64)a2;
  if ( a2 )
    return sub_14004DB3C(a2, a3, a1 + 24);
  return result;
}
