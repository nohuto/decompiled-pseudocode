/*
 * XREFs of sub_1400114F0 @ 0x1400114F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140004C9C @ 0x140004C9C (sub_140004C9C.c)
 *     sub_1400115CC @ 0x1400115CC (sub_1400115CC.c)
 */

__int64 __fastcall sub_1400114F0(__int64 a1, __int64 a2)
{
  sub_1400115CC(a1 + 8);
  sub_1400115CC(a1 + 16);
  sub_140004C9C((_QWORD *)(a1 + 8), a2);
  return sub_140004C9C((_QWORD *)(a1 + 16), a2);
}
