/*
 * XREFs of sub_14002C738 @ 0x14002C738
 * Callers:
 *     sub_1400AE183 @ 0x1400AE183 (sub_1400AE183.c)
 *     sub_1400AE1A7 @ 0x1400AE1A7 (sub_1400AE1A7.c)
 *     sub_1400AE1E0 @ 0x1400AE1E0 (sub_1400AE1E0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14002C738(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    result = sub_1400B6010(v2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
