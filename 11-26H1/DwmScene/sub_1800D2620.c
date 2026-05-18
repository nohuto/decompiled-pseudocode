/*
 * XREFs of sub_1800D2620 @ 0x1800D2620
 * Callers:
 *     sub_1800D21F4 @ 0x1800D21F4 (sub_1800D21F4.c)
 *     sub_1800D40A8 @ 0x1800D40A8 (sub_1800D40A8.c)
 * Callees:
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_1800D41AC @ 0x1800D41AC (sub_1800D41AC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D2620(__int64 a1, _QWORD *a2, __int64 a3, __int64 *a4)
{
  sub_180013440(a2, *a4);
  return sub_1800D41AC(a2 + 4);
}
