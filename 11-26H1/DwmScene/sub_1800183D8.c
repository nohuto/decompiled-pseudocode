/*
 * XREFs of sub_1800183D8 @ 0x1800183D8
 * Callers:
 *     sub_18001E5D0 @ 0x18001E5D0 (sub_18001E5D0.c)
 *     sub_180025424 @ 0x180025424 (sub_180025424.c)
 *     sub_1800D4630 @ 0x1800D4630 (sub_1800D4630.c)
 *     sub_1800D60B0 @ 0x1800D60B0 (sub_1800D60B0.c)
 *     sub_1800DD707 @ 0x1800DD707 (sub_1800DD707.c)
 * Callees:
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800183D8(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &stdext::exception::`vftable';
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a1 = &Spectre::Utils::SpectreException::`vftable';
  sub_1800181BC((_QWORD *)(a1 + 16), a2 + 16);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
  return a1;
}
