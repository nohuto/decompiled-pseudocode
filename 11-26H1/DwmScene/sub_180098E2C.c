/*
 * XREFs of sub_180098E2C @ 0x180098E2C
 * Callers:
 *     sub_180097F14 @ 0x180097F14 (sub_180097F14.c)
 * Callees:
 *     sub_18001DF68 @ 0x18001DF68 (sub_18001DF68.c)
 */

__int64 __fastcall sub_180098E2C(__int64 a1)
{
  __int64 result; // rax

  result = 0x666666666666666LL;
  if ( *(_QWORD *)(a1 + 8) == 0x666666666666666LL )
    sub_18001DF68();
  return result;
}
