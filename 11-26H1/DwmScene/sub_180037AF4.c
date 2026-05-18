/*
 * XREFs of sub_180037AF4 @ 0x180037AF4
 * Callers:
 *     sub_18002DF50 @ 0x18002DF50 (sub_18002DF50.c)
 *     sub_180075850 @ 0x180075850 (sub_180075850.c)
 * Callees:
 *     sub_18001DF68 @ 0x18001DF68 (sub_18001DF68.c)
 */

__int64 __fastcall sub_180037AF4(__int64 a1)
{
  __int64 result; // rax

  result = 0x2AAAAAAAAAAAAAALL;
  if ( *(_QWORD *)(a1 + 8) == 0x2AAAAAAAAAAAAAALL )
    sub_18001DF68();
  return result;
}
