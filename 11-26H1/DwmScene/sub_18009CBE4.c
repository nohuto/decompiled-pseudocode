/*
 * XREFs of sub_18009CBE4 @ 0x18009CBE4
 * Callers:
 *     sub_18009CC88 @ 0x18009CC88 (sub_18009CC88.c)
 * Callees:
 *     sub_18009CC4C @ 0x18009CC4C (sub_18009CC4C.c)
 *     sub_18009CD40 @ 0x18009CD40 (sub_18009CD40.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18009CBE4(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx

  *(_DWORD *)a1 = *a2;
  sub_18009CC4C(a1 + 8);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  sub_18009CD40(a1 + 24, v3, *(_QWORD *)(a1 + 8));
  return a1;
}
