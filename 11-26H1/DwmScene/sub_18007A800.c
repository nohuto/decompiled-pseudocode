/*
 * XREFs of sub_18007A800 @ 0x18007A800
 * Callers:
 *     sub_180041DF0 @ 0x180041DF0 (sub_180041DF0.c)
 *     sub_180048938 @ 0x180048938 (sub_180048938.c)
 *     sub_1800494AC @ 0x1800494AC (sub_1800494AC.c)
 *     sub_18004F598 @ 0x18004F598 (sub_18004F598.c)
 *     sub_180056AE0 @ 0x180056AE0 (sub_180056AE0.c)
 *     sub_180087D64 @ 0x180087D64 (sub_180087D64.c)
 *     sub_18008E674 @ 0x18008E674 (sub_18008E674.c)
 * Callees:
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18007A800(__int64 a1, __int64 a2, _QWORD *a3)
{
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Component::`vftable';
  sub_1800181BC((_QWORD *)(a1 + 24), a2);
  sub_1800162D0((_QWORD *)(a1 + 56), a3);
  *(_BYTE *)(a1 + 72) = 1;
  *(_DWORD *)(a1 + 76) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  return a1;
}
