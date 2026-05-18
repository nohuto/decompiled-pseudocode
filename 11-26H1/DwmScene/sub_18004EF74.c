/*
 * XREFs of sub_18004EF74 @ 0x18004EF74
 * Callers:
 *     sub_180030CF0 @ 0x180030CF0 (sub_180030CF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800143E4 @ 0x1800143E4 (sub_1800143E4.c)
 *     sub_180043A88 @ 0x180043A88 (sub_180043A88.c)
 *     sub_180043DE0 @ 0x180043DE0 (sub_180043DE0.c)
 *     sub_18004DE2C @ 0x18004DE2C (sub_18004DE2C.c)
 *     sub_18007C390 @ 0x18007C390 (sub_18007C390.c)
 *     sub_18007C50C @ 0x18007C50C (sub_18007C50C.c)
 *     sub_18007E4C4 @ 0x18007E4C4 (sub_18007E4C4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18004EF74(__int64 a1)
{
  __int64 *v2; // rax
  _QWORD *v3; // rsi
  __int64 v4; // rbx
  __int64 *v5; // rax
  _QWORD *v6; // rax
  _QWORD v8[4]; // [rsp+28h] [rbp-39h] BYREF
  __int64 v9; // [rsp+48h] [rbp-19h] BYREF
  __int64 v10; // [rsp+50h] [rbp-11h]
  _BYTE v11[64]; // [rsp+68h] [rbp+7h] BYREF

  v2 = sub_18004DE2C(a1, &v9, 1u);
  v3 = (_QWORD *)(a1 + 18632);
  sub_180011F5C((_QWORD *)(a1 + 18632), v2);
  if ( v10 )
    sub_180010EC8(v10);
  v4 = *v3;
  sub_180011CC4(&v9, "Global");
  sub_1800143E4(v4 + 16, (__int64)&v9);
  sub_1800129D0((__int64)&v9);
  sub_18007C50C(*v3);
  v5 = (__int64 *)sub_18007C390(*v3, &v9);
  sub_180011F5C((_QWORD *)(a1 + 18648), v5);
  if ( v10 )
    sub_180010EC8(v10);
  v6 = sub_180011CC4(v8, "Global/RenderTargetSize");
  sub_180043A88((__int64)v11, (__int64)v6);
  sub_18007E4C4(*(_QWORD *)(a1 + 18648), v11);
  return sub_180043DE0((__int64)v11);
}
