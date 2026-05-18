/*
 * XREFs of sub_1800537DC @ 0x1800537DC
 * Callers:
 *     sub_180019170 @ 0x180019170 (sub_180019170.c)
 *     sub_1800CAFCC @ 0x1800CAFCC (sub_1800CAFCC.c)
 *     sub_1800CB8A8 @ 0x1800CB8A8 (sub_1800CB8A8.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180029310 @ 0x180029310 (sub_180029310.c)
 *     sub_1800534C8 @ 0x1800534C8 (sub_1800534C8.c)
 *     sub_180053894 @ 0x180053894 (sub_180053894.c)
 *     sub_180054048 @ 0x180054048 (sub_180054048.c)
 *     sub_1800540C4 @ 0x1800540C4 (sub_1800540C4.c)
 *     sub_1800541A4 @ 0x1800541A4 (sub_1800541A4.c)
 *     sub_180054258 @ 0x180054258 (sub_180054258.c)
 *     sub_180054278 @ 0x180054278 (sub_180054278.c)
 */

__int64 __fastcall sub_1800537DC(__int64 a1, _QWORD *a2)
{
  int v4; // r8d
  __int64 v5; // rcx
  int v6; // r8d
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  char v15; // dl
  int v16; // r8d
  int v17; // r9d
  char v18; // r10
  char v19; // r11
  __int64 *v20; // rax
  _QWORD v22[3]; // [rsp+50h] [rbp-18h] BYREF

  sub_180029310(a1, 1, 0);
  sub_180029310(v5, v4 + 2, v4);
  sub_180029310(v7, v6 + 4, v6);
  sub_180054258(*a2);
  v8 = sub_1800540C4(*a2);
  v9 = sub_180054048(*a2, v8);
  v12 = sub_1800541A4(*a2, v10, v11, v9);
  v14 = sub_180054278(*a2, v13, v12);
  sub_180053894(a1, v14, v16, v17, v15, v18, v19, 0LL, 0, 0LL);
  v20 = sub_180012C40(v22, a2);
  return sub_1800534C8(a1, v20);
}
