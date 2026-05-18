/*
 * XREFs of sub_18000E6A0 @ 0x18000E6A0
 * Callers:
 *     sub_18000FD08 @ 0x18000FD08 (sub_18000FD08.c)
 * Callees:
 *     sub_18000ED34 @ 0x18000ED34 (sub_18000ED34.c)
 */

__int64 __fastcall sub_18000E6A0(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return sub_18000ED34(result);
  return result;
}
