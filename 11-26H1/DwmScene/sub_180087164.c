/*
 * XREFs of sub_180087164 @ 0x180087164
 * Callers:
 *     sub_180086570 @ 0x180086570 (sub_180086570.c)
 *     sub_180086A80 @ 0x180086A80 (sub_180086A80.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_18001C8C0 @ 0x18001C8C0 (sub_18001C8C0.c)
 *     sub_180024998 @ 0x180024998 (sub_180024998.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_18006B170 @ 0x18006B170 (sub_18006B170.c)
 *     sub_18007AB60 @ 0x18007AB60 (sub_18007AB60.c)
 */

__int64 __fastcall sub_180087164(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 *v3; // rax
  __int64 **v4; // rsi
  __int64 *v5; // rbx
  __int64 *v6; // rax
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]

  v2 = (_QWORD *)sub_18007AB60(a1);
  v3 = sub_180024998(v2, &v8);
  v4 = (__int64 **)(a1 + 1832);
  sub_180011F5C((_QWORD *)(a1 + 1832), v3);
  if ( v9 )
    sub_180010EC8(v9);
  v5 = *v4;
  v6 = sub_18001C8C0(&v8, a1 + 24, (__int64)" DepthBuffer");
  sub_1800292C4((__int64)v5, (__int64)v6);
  return sub_18006B170(*v4, *(_DWORD *)(a1 + 1940), *(_DWORD *)(a1 + 1940), 1u, 0, 0LL);
}
