/*
 * XREFs of sub_1800D2570 @ 0x1800D2570
 * Callers:
 *     sub_1800D1BF4 @ 0x1800D1BF4 (sub_1800D1BF4.c)
 *     sub_1800D2658 @ 0x1800D2658 (sub_1800D2658.c)
 * Callees:
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_1800D08C8 @ 0x1800D08C8 (sub_1800D08C8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D2570(__int64 a1, __int64 a2, __int64 a3)
{
  sub_180013440((_QWORD *)a2, a3);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a3 + 32);
  sub_180013440((_QWORD *)(a2 + 40), a3 + 40);
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(a3 + 72);
  *(_QWORD *)(a2 + 80) = *(_QWORD *)(a3 + 80);
  *(_DWORD *)(a2 + 88) = *(_DWORD *)(a3 + 88);
  *(_BYTE *)(a2 + 92) = *(_BYTE *)(a3 + 92);
  return sub_1800D08C8(a2 + 96, a3 + 96);
}
