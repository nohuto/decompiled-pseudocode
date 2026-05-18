/*
 * XREFs of sub_18009817C @ 0x18009817C
 * Callers:
 *     sub_180097F14 @ 0x180097F14 (sub_180097F14.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180028BA0 @ 0x180028BA0 (sub_180028BA0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18009817C(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rax

  *a1 = a2;
  a1[1] = 0LL;
  v3 = sub_180028BA0(1uLL);
  a1[1] = sub_180011790(v3);
  return a1;
}
