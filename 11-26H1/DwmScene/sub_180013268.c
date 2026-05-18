/*
 * XREFs of sub_180013268 @ 0x180013268
 * Callers:
 *     sub_180012E8C @ 0x180012E8C (sub_180012E8C.c)
 *     sub_180076188 @ 0x180076188 (sub_180076188.c)
 *     sub_1800CE5E0 @ 0x1800CE5E0 (sub_1800CE5E0.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180011B48 @ 0x180011B48 (sub_180011B48.c)
 *     sub_180013374 @ 0x180013374 (sub_180013374.c)
 *     sub_180013518 @ 0x180013518 (sub_180013518.c)
 *     sub_180014048 @ 0x180014048 (sub_180014048.c)
 */

__int64 __fastcall sub_180013268(_QWORD *a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+38h] [rbp-10h]
  __int64 v13; // [rsp+40h] [rbp-8h]

  v4 = (__int64)(a1[1] - *a1) >> 4;
  v5 = sub_180011B48(*a2);
  v6 = sub_180011790(v5);
  v7 = a1[1];
  v8 = v6;
  v11 = *a2;
  sub_180013374(*a1, v7, v6);
  sub_180014048(a1, v8, v4, *a2, a1, 0LL, v11, v12, v13);
  return sub_180013518(&v10);
}
