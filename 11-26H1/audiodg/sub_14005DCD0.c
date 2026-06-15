/*
 * XREFs of sub_14005DCD0 @ 0x14005DCD0
 * Callers:
 *     sub_14003FB78 @ 0x14003FB78 (sub_14003FB78.c)
 *     sub_14005DD58 @ 0x14005DD58 (sub_14005DD58.c)
 * Callees:
 *     sub_14002A54C @ 0x14002A54C (sub_14002A54C.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_14005DCD0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax

  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = (_QWORD *)sub_1400492F4(56LL, a2);
  *v3 = v3;
  v3[1] = v3;
  *(_QWORD *)(a1 + 8) = v3;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  sub_14002A54C((_QWORD *)(a1 + 24), 0x10uLL, *(_QWORD *)(a1 + 8));
  return a1;
}
