/*
 * XREFs of sub_180032F74 @ 0x180032F74
 * Callers:
 *     sub_18001A000 @ 0x18001A000 (sub_18001A000.c)
 *     sub_180032AD4 @ 0x180032AD4 (sub_180032AD4.c)
 * Callees:
 *     sub_18002DDA0 @ 0x18002DDA0 (sub_18002DDA0.c)
 *     sub_18002FE8C @ 0x18002FE8C (sub_18002FE8C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180032F74(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  v8 = 0;
  v7 = 1;
  sub_18002FE8C(a2, a1, &v7, &v9);
  v8 = 1;
  sub_18002DDA0(a1 + 168, *(_QWORD *)(a1 + 168), a2);
  return a2;
}
