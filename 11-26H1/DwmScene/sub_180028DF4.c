/*
 * XREFs of sub_180028DF4 @ 0x180028DF4
 * Callers:
 *     sub_180027998 @ 0x180027998 (sub_180027998.c)
 *     sub_180042464 @ 0x180042464 (sub_180042464.c)
 *     sub_18004285C @ 0x18004285C (sub_18004285C.c)
 *     sub_1800467B8 @ 0x1800467B8 (sub_1800467B8.c)
 *     sub_180051FD0 @ 0x180051FD0 (sub_180051FD0.c)
 *     sub_180052E0C @ 0x180052E0C (sub_180052E0C.c)
 *     sub_18006AA98 @ 0x18006AA98 (sub_18006AA98.c)
 *     sub_18007D618 @ 0x18007D618 (sub_18007D618.c)
 *     sub_180081C90 @ 0x180081C90 (sub_180081C90.c)
 *     sub_180083810 @ 0x180083810 (sub_180083810.c)
 *     sub_1800848BC @ 0x1800848BC (sub_1800848BC.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180028BA0 @ 0x180028BA0 (sub_180028BA0.c)
 *     sub_180028D5C @ 0x180028D5C (sub_180028D5C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180028DF4(_QWORD *a1, int a2, int a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rax

  sub_180028D5C((__int64)a1, a2, a3);
  *a1 = &Spectre::Engine::SharedResource::`vftable';
  a1[9] = 0LL;
  a1[10] = 0LL;
  a1[11] = 0LL;
  v4 = sub_180028BA0(1uLL);
  v5 = sub_180011790(v4);
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)(v5 + 16) = v5;
  *(_WORD *)(v5 + 24) = 257;
  a1[10] = v5;
  return a1;
}
