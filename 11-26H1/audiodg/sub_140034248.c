/*
 * XREFs of sub_140034248 @ 0x140034248
 * Callers:
 *     sub_1400A87A0 @ 0x1400A87A0 (sub_1400A87A0.c)
 *     sub_1400A89D0 @ 0x1400A89D0 (sub_1400A89D0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140034248(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  __int64 result; // rax

  ++*(_QWORD *)(a1 + 88);
  v3 = a1 + 256;
  if ( a2 )
  {
    sub_1400B6010(a1 + 256);
    result = sub_1400B6010(v3);
  }
  if ( a3 )
  {
    sub_1400B6010(v3);
    return sub_1400B6010(v3);
  }
  return result;
}
