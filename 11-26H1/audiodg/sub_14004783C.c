/*
 * XREFs of sub_14004783C @ 0x14004783C
 * Callers:
 *     sub_1400B2DBD @ 0x1400B2DBD (sub_1400B2DBD.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14004783C(__int64 *a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return sub_1400B6010(v1);
  return result;
}
