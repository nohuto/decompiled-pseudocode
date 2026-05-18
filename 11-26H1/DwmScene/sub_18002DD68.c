/*
 * XREFs of sub_18002DD68 @ 0x18002DD68
 * Callers:
 *     sub_18002FAB8 @ 0x18002FAB8 (sub_18002FAB8.c)
 *     sub_180031E54 @ 0x180031E54 (sub_180031E54.c)
 *     sub_180037A50 @ 0x180037A50 (sub_180037A50.c)
 *     sub_180038048 @ 0x180038048 (sub_180038048.c)
 *     sub_18003A924 @ 0x18003A924 (sub_18003A924.c)
 *     sub_180054A54 @ 0x180054A54 (sub_180054A54.c)
 *     sub_18005E588 @ 0x18005E588 (sub_18005E588.c)
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 *     sub_180090744 @ 0x180090744 (sub_180090744.c)
 * Callees:
 *     sub_180032460 @ 0x180032460 (sub_180032460.c)
 */

__int64 __fastcall sub_18002DD68(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180032460(v3);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
