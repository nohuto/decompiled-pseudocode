/*
 * XREFs of sub_14001189C @ 0x14001189C
 * Callers:
 *     sub_14008DBD0 @ 0x14008DBD0 (sub_14008DBD0.c)
 *     sub_14009F2B0 @ 0x14009F2B0 (sub_14009F2B0.c)
 *     sub_1400A01A0 @ 0x1400A01A0 (sub_1400A01A0.c)
 *     sub_1400A10D0 @ 0x1400A10D0 (sub_1400A10D0.c)
 *     sub_1400AC6D0 @ 0x1400AC6D0 (sub_1400AC6D0.c)
 *     sub_1400ACC20 @ 0x1400ACC20 (sub_1400ACC20.c)
 *     sub_1400B3FA4 @ 0x1400B3FA4 (sub_1400B3FA4.c)
 * Callees:
 *     sub_1400118C0 @ 0x1400118C0 (sub_1400118C0.c)
 */

__int64 __fastcall sub_14001189C(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return sub_1400118C0(*(_QWORD *)a1, *(_QWORD *)(a1 + 8));
  return result;
}
