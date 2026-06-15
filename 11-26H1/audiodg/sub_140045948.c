/*
 * XREFs of sub_140045948 @ 0x140045948
 * Callers:
 *     sub_14004591C @ 0x14004591C (sub_14004591C.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140045948(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    return sub_1400B6010(v2);
  return result;
}
