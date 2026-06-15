/*
 * XREFs of sub_14002C6CC @ 0x14002C6CC
 * Callers:
 *     sub_140043B74 @ 0x140043B74 (sub_140043B74.c)
 *     sub_140083F60 @ 0x140083F60 (sub_140083F60.c)
 *     sub_140086580 @ 0x140086580 (sub_140086580.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14002C6CC(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi

  if ( !a1 )
    return 0LL;
  v3 = *a1;
  *a1 = 0LL;
  if ( a2 )
    sub_1400B6010(a2);
  if ( v3 )
    sub_1400B6010(v3);
  return *a1;
}
