/*
 * XREFs of sub_14002A7A4 @ 0x14002A7A4
 * Callers:
 *     sub_140047F4C @ 0x140047F4C (sub_140047F4C.c)
 * Callees:
 *     sub_14002A810 @ 0x14002A810 (sub_14002A810.c)
 *     sub_14002A84C @ 0x14002A84C (sub_14002A84C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_14002A7A4(__int64 a1, _DWORD *a2)
{
  *(_DWORD *)a1 = *a2;
  sub_14002A810(a1 + 8);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  sub_14002A84C(a1 + 24, 16LL, *(_QWORD *)(a1 + 8));
  return a1;
}
