/*
 * XREFs of sub_18001EE58 @ 0x18001EE58
 * Callers:
 *     sub_18001FBDC @ 0x18001FBDC (sub_18001FBDC.c)
 * Callees:
 *     sub_180012A10 @ 0x180012A10 (sub_180012A10.c)
 *     sub_180012FA4 @ 0x180012FA4 (sub_180012FA4.c)
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_180014014 @ 0x180014014 (sub_180014014.c)
 *     sub_1800140F0 @ 0x1800140F0 (sub_1800140F0.c)
 *     sub_18001F490 @ 0x18001F490 (sub_18001F490.c)
 */

__int64 *__fastcall sub_18001EE58(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rbp
  void *v13; // rbx
  __int64 v14; // rcx
  unsigned __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v4 = a1[2];
  if ( 0x7FFFFFFFFFFFFFFELL - v4 < a2 )
    sub_180012A10();
  v7 = a1[3];
  v8 = v4 + a2;
  v16 = sub_180014014(v4 + a2, v7, 0x7FFFFFFFFFFFFFFEuLL);
  v10 = sub_180012FA4(v9, &v16);
  v11 = v16;
  v12 = v10;
  a1[3] = v16;
  v17 = v10;
  a1[2] = v8;
  if ( v7 <= 7 )
  {
    sub_18001F490(v11, v10, a1, v4, a4);
    sub_180013074(a1, &v17);
  }
  else
  {
    v13 = (void *)*a1;
    sub_18001F490(v11, v10, *a1, v4, a4);
    sub_1800140F0(v14, v13, v7);
    *a1 = v12;
  }
  return a1;
}
