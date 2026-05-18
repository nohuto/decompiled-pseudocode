/*
 * XREFs of sub_180076500 @ 0x180076500
 * Callers:
 *     sub_180076280 @ 0x180076280 (sub_180076280.c)
 * Callees:
 *     sub_180038000 @ 0x180038000 (sub_180038000.c)
 */

__int64 __fastcall sub_180076500(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_180038000(v1);
  return result;
}
