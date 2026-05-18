/*
 * XREFs of sub_18003EE54 @ 0x18003EE54
 * Callers:
 *     sub_18003EFB4 @ 0x18003EFB4 (sub_18003EFB4.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180028BA0 @ 0x180028BA0 (sub_180028BA0.c)
 *     sub_180041860 @ 0x180041860 (sub_180041860.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18003EE54(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v3; // rax
  _QWORD *v4; // rax

  *(_DWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = sub_180028BA0(1uLL);
  v4 = (_QWORD *)sub_180011790(v3);
  *v4 = v4;
  v4[1] = v4;
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  sub_180041860(a1 + 24, 16LL, *(_QWORD *)(a1 + 8));
  return a1;
}
