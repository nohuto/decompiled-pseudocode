/*
 * XREFs of sub_180035438 @ 0x180035438
 * Callers:
 *     sub_180032AD4 @ 0x180032AD4 (sub_180032AD4.c)
 *     sub_180033140 @ 0x180033140 (sub_180033140.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_180029B0C @ 0x180029B0C (sub_180029B0C.c)
 *     sub_180029DD4 @ 0x180029DD4 (sub_180029DD4.c)
 *     sub_18002D818 @ 0x18002D818 (sub_18002D818.c)
 *     sub_180033E4C @ 0x180033E4C (sub_180033E4C.c)
 *     sub_180033EEC @ 0x180033EEC (sub_180033EEC.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180035438(__int64 a1)
{
  unsigned int i; // r12d
  __int64 v3; // r14
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 v9; // [rsp+50h] [rbp-79h] BYREF
  __int64 v10; // [rsp+58h] [rbp-71h]
  _BYTE v11[16]; // [rsp+60h] [rbp-69h] BYREF
  _QWORD v12[4]; // [rsp+70h] [rbp-59h] BYREF
  _QWORD v13[4]; // [rsp+90h] [rbp-39h] BYREF
  _QWORD v14[4]; // [rsp+B0h] [rbp-19h] BYREF
  _QWORD v15[4]; // [rsp+D0h] [rbp+7h] BYREF

  sub_18001DCFC(&qword_1801BD288, 3);
  sub_180033EEC(a1);
  sub_18001DCFC(&qword_1801BD288, 3);
  sub_180029DD4(a1 + 112, (__int64)v11);
  for ( i = 0; i < (unsigned int)sub_180033EEC(a1); ++i )
  {
    sub_180033E4C(a1, &v9, i);
    v3 = v9;
    v4 = sub_18002D818(v15, v9 + 208);
    sub_1800148EC((__int64)v4);
    v5 = sub_18002D818(v14, v3 + 144);
    sub_1800148EC((__int64)v5);
    v6 = sub_18002D818(v13, v3 + 80);
    sub_1800148EC((__int64)v6);
    v7 = sub_18002D818(v12, v3 + 112);
    sub_1800148EC((__int64)v7);
    sub_18001DCFC(&qword_1801BD288, 3);
    sub_1800129D0((__int64)v12);
    sub_1800129D0((__int64)v13);
    sub_1800129D0((__int64)v14);
    sub_1800129D0((__int64)v15);
    if ( v10 )
      sub_180010EC8(v10);
  }
  sub_18001DCFC(&qword_1801BD288, 3);
  return sub_180029B0C((__int64)v11);
}
