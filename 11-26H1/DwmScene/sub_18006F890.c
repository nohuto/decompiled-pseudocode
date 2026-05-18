/*
 * XREFs of sub_18006F890 @ 0x18006F890
 * Callers:
 *     sub_18002B7A0 @ 0x18002B7A0 (sub_18002B7A0.c)
 * Callees:
 *     sub_180034428 @ 0x180034428 (sub_180034428.c)
 */

__int64 __fastcall sub_18006F890(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = a3 & 0x7E;
  if ( (a3 & 1) != 0 || (a3 & 0x7E) != 0 )
    sub_180034428();
  return result;
}
