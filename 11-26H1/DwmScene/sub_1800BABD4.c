/*
 * XREFs of sub_1800BABD4 @ 0x1800BABD4
 * Callers:
 *     sub_1800167D4 @ 0x1800167D4 (sub_1800167D4.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_18001E908 @ 0x18001E908 (sub_18001E908.c)
 *     sub_18001F378 @ 0x18001F378 (sub_18001F378.c)
 *     sub_18001F9C0 @ 0x18001F9C0 (sub_18001F9C0.c)
 *     sub_1800254C0 @ 0x1800254C0 (sub_1800254C0.c)
 *     sub_180025874 @ 0x180025874 (sub_180025874.c)
 *     sub_180028BA0 @ 0x180028BA0 (sub_180028BA0.c)
 *     sub_1800BD2E0 @ 0x1800BD2E0 (sub_1800BD2E0.c)
 */

// Hidden C++ exception states: #wind=10
_QWORD *__fastcall sub_1800BABD4(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  const void *v10; // rdx
  unsigned __int64 v11; // rax
  const void *v12; // rdx
  __int64 v13; // rcx
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  v15[0] = *a3;
  v15[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  sub_1800254C0((__int64)a1, a2, v15);
  *a1 = &Spectre::Engine::D3D11::RenderDeviceD3D11::`vftable';
  a1[517] = 0LL;
  a1[518] = 0LL;
  v5 = sub_180028BA0(1uLL);
  v6 = sub_180011790(v5);
  *(_QWORD *)v6 = v6;
  *(_QWORD *)(v6 + 8) = v6;
  *(_QWORD *)(v6 + 16) = v6;
  *(_WORD *)(v6 + 24) = 257;
  a1[517] = v6;
  a1[519] = 0LL;
  a1[520] = 0LL;
  v7 = sub_180028BA0(1uLL);
  v8 = sub_180011790(v7);
  *(_QWORD *)v8 = v8;
  *(_QWORD *)(v8 + 8) = v8;
  *(_QWORD *)(v8 + 16) = v8;
  *(_WORD *)(v8 + 24) = 257;
  a1[519] = v8;
  sub_180025874((__int64)(a1 + 521));
  a1[531] = 6LL;
  a1[532] = 0LL;
  a1[533] = 0LL;
  a1[534] = 0LL;
  a1[535] = 0LL;
  sub_18001F378((__int64)(a1 + 575));
  a1[580] = 0LL;
  sub_18001DCFC(&qword_1801BD4C8, 3);
  sub_18001DCFC(&qword_1801BD4C8, 3);
  v9 = sub_18001E908((__int64)L"RenderDeviceD3D11");
  sub_18001F9C0((__int64)(a1 + 14), v10, v9);
  v11 = sub_18001E908((__int64)L"<detached>");
  sub_18001F9C0((__int64)(a1 + 10), v12, v11);
  a1[536] = 0LL;
  sub_1800BD2E0(a1);
  v13 = a3[1];
  if ( v13 )
    sub_180010EC8(v13);
  return a1;
}
