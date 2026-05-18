/*
 * XREFs of sub_18005FF1C @ 0x18005FF1C
 * Callers:
 *     sub_18005F864 @ 0x18005F864 (sub_18005F864.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180011B48 @ 0x180011B48 (sub_180011B48.c)
 *     sub_180013518 @ 0x180013518 (sub_180013518.c)
 *     sub_18002FAB8 @ 0x18002FAB8 (sub_18002FAB8.c)
 *     sub_180037A50 @ 0x180037A50 (sub_180037A50.c)
 */

__int64 __fastcall sub_18005FF1C(__int64 *a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r9
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (a1[1] - *a1) >> 4;
  v5 = sub_180011B48(*a2);
  v6 = (_QWORD *)sub_180011790(v5);
  v7 = a1[1];
  v8 = (__int64)v6;
  v12[2] = *a2;
  v9 = *a1;
  v12[0] = a1;
  sub_18002FAB8(v9, v7, v6);
  v10 = *a2;
  v12[1] = 0LL;
  sub_180037A50((__int64)a1, v8, v4, v10);
  return sub_180013518((__int64)v12);
}
