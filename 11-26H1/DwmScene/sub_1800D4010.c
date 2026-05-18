/*
 * XREFs of sub_1800D4010 @ 0x1800D4010
 * Callers:
 *     sub_1800D42D0 @ 0x1800D42D0 (sub_1800D42D0.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_18001EB8C @ 0x18001EB8C (sub_18001EB8C.c)
 *     sub_18001F128 @ 0x18001F128 (sub_18001F128.c)
 *     sub_18001F81C @ 0x18001F81C (sub_18001F81C.c)
 *     sub_1800532EC @ 0x1800532EC (sub_1800532EC.c)
 */

__int64 __fastcall sub_1800D4010(__int64 *a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r9
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (a1[1] - *a1) >> 5;
  v5 = sub_18001EB8C(*a2);
  v6 = sub_180011790(v5);
  v7 = a1[1];
  v8 = v6;
  v12[2] = *a2;
  v9 = *a1;
  v12[0] = a1;
  sub_18001F128(v9, v7, v6);
  v10 = *a2;
  v12[1] = 0LL;
  sub_18001F81C((__int64)a1, v8, v4, v10);
  return sub_1800532EC((__int64)v12);
}
