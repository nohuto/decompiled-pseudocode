/*
 * XREFs of sub_18007B100 @ 0x18007B100
 * Callers:
 *     sub_18007B9FC @ 0x18007B9FC (sub_18007B9FC.c)
 *     sub_18007BE98 @ 0x18007BE98 (sub_18007BE98.c)
 *     sub_18007C314 @ 0x18007C314 (sub_18007C314.c)
 *     sub_18007E4C4 @ 0x18007E4C4 (sub_18007E4C4.c)
 * Callees:
 *     memmove @ 0x18000D92D (memmove.c)
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_180017D00 @ 0x180017D00 (sub_180017D00.c)
 *     sub_18001F3BC @ 0x18001F3BC (sub_18001F3BC.c)
 *     sub_18001F73C @ 0x18001F73C (sub_18001F73C.c)
 *     sub_18001F7B4 @ 0x18001F7B4 (sub_18001F7B4.c)
 *     sub_18007B264 @ 0x18007B264 (sub_18007B264.c)
 */

__int64 __fastcall sub_18007B100(const void **a1, unsigned __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  char *v7; // rdi
  __int64 v8; // rax
  size_t v9; // r8
  const void *v10; // rdx
  _QWORD v12[3]; // [rsp+20h] [rbp-38h] BYREF
  char *v13; // [rsp+38h] [rbp-20h]
  __int64 v14; // [rsp+40h] [rbp-18h]

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    sub_180012A30();
  v4 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  v5 = sub_18001F73C(a1, a2);
  v6 = sub_180017D00(v5);
  v12[0] = a1;
  v12[2] = v5;
  v7 = (char *)sub_180011790(v6);
  v13 = &v7[4 * v4];
  v8 = sub_18007B264(v13, a2 - v4, a1);
  v9 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v10 = *a1;
  v14 = v8;
  memmove(v7, v10, v9);
  v12[1] = 0LL;
  sub_18001F7B4((__int64)a1, (__int64)v7, a2, v5);
  return sub_18001F3BC((__int64)v12);
}
