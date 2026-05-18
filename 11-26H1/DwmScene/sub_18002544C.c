/*
 * XREFs of sub_18002544C @ 0x18002544C
 * Callers:
 *     sub_1800254C0 @ 0x1800254C0 (sub_1800254C0.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_1800D5364 @ 0x1800D5364 (sub_1800D5364.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18002544C(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax

  *a1 = &Spectre::Engine::RenderDevice::QueryPool::`vftable';
  sub_1800D5364(a1 + 1);
  a1[2] = a2;
  a1[3] = 0LL;
  a1[4] = 0LL;
  v4 = sub_180011790(0x40uLL);
  *(_QWORD *)v4 = v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)(v4 + 16) = v4;
  *(_WORD *)(v4 + 24) = 257;
  a1[3] = v4;
  return a1;
}
