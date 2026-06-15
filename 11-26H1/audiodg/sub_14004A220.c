/*
 * XREFs of sub_14004A220 @ 0x14004A220
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14004A220(__int64 a1)
{
  __int64 *i; // rbx
  __int64 result; // rax

  for ( i = &qword_1400D4CC0; i < &qword_1400D4CC0; ++i )
  {
    result = *i;
    if ( *i )
      result = sub_1400B6010(a1);
  }
  return result;
}
