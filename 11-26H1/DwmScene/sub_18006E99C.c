/*
 * XREFs of sub_18006E99C @ 0x18006E99C
 * Callers:
 *     sub_1800597B4 @ 0x1800597B4 (sub_1800597B4.c)
 *     sub_18005F9E0 @ 0x18005F9E0 (sub_18005F9E0.c)
 *     sub_18005FB08 @ 0x18005FB08 (sub_18005FB08.c)
 * Callees:
 *     sub_18006D2C0 @ 0x18006D2C0 (sub_18006D2C0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18006E99C(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v5; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v6; // [rsp+58h] [rbp+10h]

  v6 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  sub_18006D2C0(&v5, *(_QWORD **)(a1 + 40), *(_QWORD **)(a1 + 48), a2, a3);
  return a2;
}
