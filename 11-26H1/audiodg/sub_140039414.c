/*
 * XREFs of sub_140039414 @ 0x140039414
 * Callers:
 *     sub_140079AA0 @ 0x140079AA0 (sub_140079AA0.c)
 *     sub_140079B90 @ 0x140079B90 (sub_140079B90.c)
 *     sub_14007A790 @ 0x14007A790 (sub_14007A790.c)
 *     sub_14007BEF0 @ 0x14007BEF0 (sub_14007BEF0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140039414(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_1400B6010(v1);
  return result;
}
