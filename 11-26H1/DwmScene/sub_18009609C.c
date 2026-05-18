/*
 * XREFs of sub_18009609C @ 0x18009609C
 * Callers:
 *     sub_180096D50 @ 0x180096D50 (sub_180096D50.c)
 * Callees:
 *     sub_18000D81C @ 0x18000D81C (sub_18000D81C.c)
 *     sub_180096278 @ 0x180096278 (sub_180096278.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009609C(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &Spectre::Engine::VertexBufferState::`vftable';
  sub_18000D81C(a1 + 8, 16LL, 15LL, (__int64 (__fastcall *)(__int64))sub_180011D00);
  sub_18000D81C(a1 + 248, 16LL, 15LL, (__int64 (__fastcall *)(__int64))sub_180011D00);
  sub_18000D81C(a1 + 488, 16LL, 15LL, (__int64 (__fastcall *)(__int64))sub_180011D00);
  *(_BYTE *)(a1 + 1088) = 1;
  sub_180096278(a1 + 488, a2 + 760);
  *(_OWORD *)(a1 + 848) = *(_OWORD *)(a2 + 1000);
  *(_OWORD *)(a1 + 864) = *(_OWORD *)(a2 + 1016);
  *(_OWORD *)(a1 + 880) = *(_OWORD *)(a2 + 1032);
  *(_QWORD *)(a1 + 896) = *(_QWORD *)(a2 + 1048);
  *(_DWORD *)(a1 + 904) = *(_DWORD *)(a2 + 1056);
  *(_OWORD *)(a1 + 1028) = *(_OWORD *)(a2 + 1060);
  *(_OWORD *)(a1 + 1044) = *(_OWORD *)(a2 + 1076);
  *(_OWORD *)(a1 + 1060) = *(_OWORD *)(a2 + 1092);
  *(_QWORD *)(a1 + 1076) = *(_QWORD *)(a2 + 1108);
  *(_DWORD *)(a1 + 1084) = *(_DWORD *)(a2 + 1116);
  return a1;
}
