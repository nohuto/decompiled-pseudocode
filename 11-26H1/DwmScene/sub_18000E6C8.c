/*
 * XREFs of sub_18000E6C8 @ 0x18000E6C8
 * Callers:
 *     sub_18000E530 @ 0x18000E530 (sub_18000E530.c)
 *     sub_18000E740 @ 0x18000E740 (sub_18000E740.c)
 *     sub_18000E8A4 @ 0x18000E8A4 (sub_18000E8A4.c)
 *     sub_180010B1C @ 0x180010B1C (sub_180010B1C.c)
 * Callees:
 *     sub_18000EB40 @ 0x18000EB40 (sub_18000EB40.c)
 */

__int64 __fastcall sub_18000E6C8(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return sub_18000EB40();
  return result;
}
