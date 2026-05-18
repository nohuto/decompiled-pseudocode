/*
 * XREFs of sub_1800970E0 @ 0x1800970E0
 * Callers:
 *     sub_180097380 @ 0x180097380 (sub_180097380.c)
 * Callees:
 *     sub_180095470 @ 0x180095470 (sub_180095470.c)
 *     sub_1800957E0 @ 0x1800957E0 (sub_1800957E0.c)
 *     sub_180095B54 @ 0x180095B54 (sub_180095B54.c)
 *     sub_180095EE8 @ 0x180095EE8 (sub_180095EE8.c)
 *     sub_1800961F4 @ 0x1800961F4 (sub_1800961F4.c)
 *     sub_1800964BC @ 0x1800964BC (sub_1800964BC.c)
 *     sub_1800965F8 @ 0x1800965F8 (sub_1800965F8.c)
 *     sub_18009683C @ 0x18009683C (sub_18009683C.c)
 *     sub_1800973C0 @ 0x1800973C0 (sub_1800973C0.c)
 */

void **__fastcall sub_1800970E0(_QWORD *a1)
{
  _QWORD *v1; // r13
  _QWORD *v2; // r12
  _QWORD *v3; // rbp
  _QWORD *v4; // r15
  _QWORD *v5; // r14
  _QWORD *v6; // rsi
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx

  *a1 = &Spectre::Engine::CommandListState::`vftable';
  v1 = a1 + 8;
  a1[8] = &Spectre::Engine::CommandListState::`vftable';
  v2 = a1 + 145;
  a1[145] = &Spectre::Engine::CommandListState::`vftable';
  v3 = a1 + 579;
  a1[579] = &Spectre::Engine::CommandListState::`vftable';
  v4 = a1 + 1157;
  a1[1157] = &Spectre::Engine::CommandListState::`vftable';
  v5 = a1 + 1213;
  a1[1213] = &Spectre::Engine::CommandListState::`vftable';
  v6 = a1 + 1222;
  a1[1222] = &Spectre::Engine::CommandListState::`vftable';
  v7 = a1 + 1231;
  a1[1231] = &Spectre::Engine::CommandListState::`vftable';
  v8 = a1 + 1809;
  a1[1809] = &Spectre::Engine::CommandListState::`vftable';
  a1[1817] = &Spectre::Engine::CommandListState::`vftable';
  a1[1828] = &Spectre::Engine::CommandListState::`vftable';
  sub_1800973C0(a1);
  a1[1828] = &Spectre::Engine::ScissorState::`vftable';
  a1[1817] = &Spectre::Engine::ViewportState::`vftable';
  sub_1800964BC(v8);
  sub_180095EE8(v7);
  sub_180095470(v6);
  sub_1800965F8(v5);
  sub_18009683C(v4);
  sub_180095B54(v3);
  sub_1800957E0(v2);
  sub_1800961F4(v1);
  return sub_1800955DC(a1);
}
