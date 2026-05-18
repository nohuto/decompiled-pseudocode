/*
 * XREFs of sub_1800990DC @ 0x1800990DC
 * Callers:
 *     sub_180098BB8 @ 0x180098BB8 (sub_180098BB8.c)
 *     sub_180098C90 @ 0x180098C90 (sub_180098C90.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_1800287AC @ 0x1800287AC (sub_1800287AC.c)
 */

_QWORD *__fastcall sub_1800990DC(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // r10
  _QWORD *v5; // r11
  __int64 *v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a3;
  sub_18001D6F4(&v8, (__int64)a2);
  v6 = sub_1800287AC(v5, v4);
  sub_18000E26C(v6, 0x28uLL);
  *a2 = v8;
  return a2;
}
