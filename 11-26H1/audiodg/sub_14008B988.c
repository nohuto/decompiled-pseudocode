/*
 * XREFs of sub_14008B988 @ 0x14008B988
 * Callers:
 *     sub_14008BA90 @ 0x14008BA90 (sub_14008BA90.c)
 * Callees:
 *     sub_14008C660 @ 0x14008C660 (sub_14008C660.c)
 */

__int64 __fastcall sub_14008B988(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = off_1400BED80;
  result = sub_14008C660(*(_QWORD *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
