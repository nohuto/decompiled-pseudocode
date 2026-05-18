/*
 * XREFs of sub_180028D1C @ 0x180028D1C
 * Callers:
 *     sub_180028CF4 @ 0x180028CF4 (sub_180028CF4.c)
 *     sub_180051F84 @ 0x180051F84 (sub_180051F84.c)
 *     sub_1800837B0 @ 0x1800837B0 (sub_1800837B0.c)
 *     sub_1800841B8 @ 0x1800841B8 (sub_1800841B8.c)
 *     sub_18008486C @ 0x18008486C (sub_18008486C.c)
 *     sub_1800BA054 @ 0x1800BA054 (sub_1800BA054.c)
 *     sub_1800BA0EC @ 0x1800BA0EC (sub_1800BA0EC.c)
 *     sub_1800CCC94 @ 0x1800CCC94 (sub_1800CCC94.c)
 * Callees:
 *     sub_180028D5C @ 0x180028D5C (sub_180028D5C.c)
 */

__int64 __fastcall sub_180028D1C(__int64 a1)
{
  __int64 result; // rax

  sub_180028D5C();
  *(_QWORD *)a1 = &Spectre::Engine::DeviceResource::`vftable';
  result = a1;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 88) = -1;
  return result;
}
