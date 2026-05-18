/*
 * XREFs of sub_18005C634 @ 0x18005C634
 * Callers:
 *     sub_18005C4F0 @ 0x18005C4F0 (sub_18005C4F0.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005C634(__int64 a1, __int64 a2, __int64 a3, _DWORD **a4)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  __int64 result; // rax

  *(_DWORD *)a2 = **a4;
  v4 = (_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v5 = (_QWORD *)sub_180011790(0x20uLL);
  *v5 = v5;
  v5[1] = v5;
  *v4 = v5;
  v4[2] = 0LL;
  v4[3] = 0LL;
  result = sub_180011790(0x38uLL);
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  v4[2] = result;
  return result;
}
