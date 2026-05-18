/*
 * XREFs of sub_180054C14 @ 0x180054C14
 * Callers:
 *     sub_180054A54 @ 0x180054A54 (sub_180054A54.c)
 *     sub_18005E588 @ 0x18005E588 (sub_18005E588.c)
 * Callees:
 *     sub_180038048 @ 0x180038048 (sub_180038048.c)
 */

__int64 __fastcall sub_180054C14(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_180038048(v1);
  return result;
}
