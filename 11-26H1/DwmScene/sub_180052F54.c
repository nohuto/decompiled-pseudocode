/*
 * XREFs of sub_180052F54 @ 0x180052F54
 * Callers:
 *     sub_1800C4100 @ 0x1800C4100 (sub_1800C4100.c)
 * Callees:
 *     sub_180025A84 @ 0x180025A84 (sub_180025A84.c)
 *     sub_180050314 @ 0x180050314 (sub_180050314.c)
 *     sub_180052FF0 @ 0x180052FF0 (sub_180052FF0.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180052F54(_QWORD *a1, __int64 *a2, void **a3, __int64 a4)
{
  void *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rax
  void *v12; // rax
  _QWORD v14[7]; // [rsp+20h] [rbp-38h] BYREF

  v8 = *a3;
  v9 = a2[2];
  a2[2] = 0LL;
  v10 = a2[1];
  a2[1] = 0LL;
  v11 = *a2;
  *a2 = 0LL;
  v14[0] = v11;
  v14[1] = v10;
  v14[2] = v9;
  ((void (__fastcall *)(_QWORD *, _QWORD *, void *, __int64))sub_180052FF0)(a1, v14, v8, a4);
  *a1 = &Spectre::Engine::TextureImageSet::`vftable';
  v12 = *a3;
  *a3 = 0LL;
  a1[7] = v12;
  sub_180050314((__int64)a2);
  sub_180025A84(a3);
  return a1;
}
