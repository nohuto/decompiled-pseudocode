/*
 * XREFs of sub_18007D618 @ 0x18007D618
 * Callers:
 *     sub_18007D8E0 @ 0x18007D8E0 (sub_18007D8E0.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180028DF4 @ 0x180028DF4 (sub_180028DF4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18007D618(_QWORD *a1)
{
  __int64 result; // rax

  sub_180028DF4(a1, 6, 7);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::ConstantBuffer::`vftable';
  a1[14] = 0LL;
  a1[15] = 0LL;
  result = sub_180011790(0x38uLL);
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  a1[14] = result;
  return result;
}
