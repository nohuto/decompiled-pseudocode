/*
 * XREFs of sub_1800879C4 @ 0x1800879C4
 * Callers:
 *     sub_1800896FC @ 0x1800896FC (sub_1800896FC.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_180017D00 @ 0x180017D00 (sub_180017D00.c)
 *     sub_18001F0E8 @ 0x18001F0E8 (sub_18001F0E8.c)
 *     sub_18001F3BC @ 0x18001F3BC (sub_18001F3BC.c)
 *     sub_18001F73C @ 0x18001F73C (sub_18001F73C.c)
 *     sub_18001F7B4 @ 0x18001F7B4 (sub_18001F7B4.c)
 */

__int64 __fastcall sub_1800879C4(void **a1, unsigned __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  unsigned __int64 v6; // rax
  char *v7; // rsi
  size_t v8; // rbx
  __int64 v9; // rdx
  _QWORD v11[3]; // [rsp+20h] [rbp-48h] BYREF
  char *v12; // [rsp+38h] [rbp-30h]
  char *v13; // [rsp+40h] [rbp-28h]

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    sub_180012A30();
  v4 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  v5 = sub_18001F73C(a1, a2);
  v6 = sub_180017D00(v5);
  v11[0] = a1;
  v11[2] = v5;
  v7 = (char *)sub_180011790(v6);
  v12 = &v7[4 * v4];
  v8 = 4 * (a2 - v4);
  memset(v12, 0, v8);
  v9 = (__int64)a1[1];
  v13 = &v12[v8];
  sub_18001F0E8(*a1, v9, v7);
  v11[1] = 0LL;
  sub_18001F7B4((__int64)a1, (__int64)v7, a2, v5);
  return sub_18001F3BC((__int64)v11);
}
