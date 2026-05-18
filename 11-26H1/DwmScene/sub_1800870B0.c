/*
 * XREFs of sub_1800870B0 @ 0x1800870B0
 * Callers:
 *     sub_180086570 @ 0x180086570 (sub_180086570.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800116C8 @ 0x1800116C8 (sub_1800116C8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_18001C8C0 @ 0x18001C8C0 (sub_18001C8C0.c)
 *     sub_180027EC8 @ 0x180027EC8 (sub_180027EC8.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_18007AB60 @ 0x18007AB60 (sub_18007AB60.c)
 */

__int64 __fastcall sub_1800870B0(__int64 a1, char a2)
{
  __int64 v4; // rax
  __int64 *v5; // rsi
  __int64 v6; // rbx
  __int64 *v7; // rax
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h]

  v4 = sub_18007AB60(a1);
  sub_1800116C8(v4, &v9);
  v5 = (__int64 *)(a1 + 1912);
  sub_180011F5C((_QWORD *)(a1 + 1912), &v9);
  if ( v10 )
    sub_180010EC8(v10);
  v6 = *v5;
  v7 = sub_18001C8C0(&v9, a1 + 24, (__int64)" ColorBuffer");
  sub_1800292C4(v6, (__int64)v7);
  return sub_180027EC8(*v5, *(_DWORD *)(a1 + 1940), *(_DWORD *)(a1 + 1940), a2, 3, 0LL);
}
