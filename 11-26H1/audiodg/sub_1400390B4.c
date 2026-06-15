/*
 * XREFs of sub_1400390B4 @ 0x1400390B4
 * Callers:
 *     sub_14009F2B0 @ 0x14009F2B0 (sub_14009F2B0.c)
 *     sub_1400A01A0 @ 0x1400A01A0 (sub_1400A01A0.c)
 *     sub_1400A10D0 @ 0x1400A10D0 (sub_1400A10D0.c)
 *     sub_1400AC6D0 @ 0x1400AC6D0 (sub_1400AC6D0.c)
 *     sub_1400ACC20 @ 0x1400ACC20 (sub_1400ACC20.c)
 * Callees:
 *     sub_1400390D8 @ 0x1400390D8 (sub_1400390D8.c)
 */

__int64 __fastcall sub_1400390B4(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return sub_1400390D8(*(_QWORD *)a1, *(_QWORD *)(a1 + 8));
  return result;
}
