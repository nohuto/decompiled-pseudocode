/*
 * XREFs of sub_180060AC4 @ 0x180060AC4
 * Callers:
 *     sub_18005FC4C @ 0x18005FC4C (sub_18005FC4C.c)
 * Callees:
 *     sub_18000D81C @ 0x18000D81C (sub_18000D81C.c)
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall sub_180060AC4(_QWORD *a1)
{
  __int64 v2; // rax

  *a1 = &Spectre::Engine::ViewerEngine::ViewerSceneData::`vftable';
  sub_18000D81C((__int64)(a1 + 1), 16LL, 3LL, (__int64 (__fastcall *)(__int64))sub_180011D00);
  sub_18000D81C((__int64)(a1 + 7), 16LL, 3LL, (__int64 (__fastcall *)(__int64))sub_180011D00);
  a1[13] = 0LL;
  a1[14] = 0LL;
  v2 = sub_180011790(0x38uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  a1[13] = v2;
  a1[15] = 0LL;
  a1[16] = 0LL;
  sub_18000D81C((__int64)(a1 + 17), 16LL, 3LL, (__int64 (__fastcall *)(__int64))sub_180011D00);
  a1[23] = 0LL;
  a1[24] = 0LL;
  a1[25] = 0LL;
  a1[26] = 0LL;
  a1[27] = 0LL;
  a1[28] = 0LL;
  a1[29] = 0LL;
  a1[30] = 0LL;
  a1[31] = 0LL;
  a1[32] = 0LL;
  a1[33] = 0LL;
  a1[34] = 0LL;
  a1[35] = 0LL;
  a1[36] = 0LL;
  a1[37] = 0LL;
  a1[38] = 0LL;
  a1[39] = 0LL;
  a1[40] = 0LL;
  return a1;
}
