/*
 * XREFs of sub_14002A670 @ 0x14002A670
 * Callers:
 *     sub_14002A37C @ 0x14002A37C (sub_14002A37C.c)
 * Callees:
 *     sub_14002A6F8 @ 0x14002A6F8 (sub_14002A6F8.c)
 *     sub_140044584 @ 0x140044584 (sub_140044584.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_14002A670(__int64 a1, _DWORD *a2)
{
  _QWORD *v3; // rax

  *(_DWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = (_QWORD *)sub_140044584(56LL);
  *v3 = v3;
  v3[1] = v3;
  *(_QWORD *)(a1 + 8) = v3;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  sub_14002A6F8(a1 + 24, 16LL, *(_QWORD *)(a1 + 8));
  return a1;
}
