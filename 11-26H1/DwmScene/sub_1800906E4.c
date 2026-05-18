/*
 * XREFs of sub_1800906E4 @ 0x1800906E4
 * Callers:
 *     sub_180090114 @ 0x180090114 (sub_180090114.c)
 *     sub_1800DE0EB @ 0x1800DE0EB (sub_1800DE0EB.c)
 * Callees:
 *     sub_18005E490 @ 0x18005E490 (sub_18005E490.c)
 */

__int64 __fastcall sub_1800906E4(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18005E490(v1);
  return result;
}
