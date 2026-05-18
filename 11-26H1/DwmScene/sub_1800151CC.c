/*
 * XREFs of sub_1800151CC @ 0x1800151CC
 * Callers:
 *     sub_180015930 @ 0x180015930 (sub_180015930.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 *     sub_180014BBC @ 0x180014BBC (sub_180014BBC.c)
 *     sub_180014CE0 @ 0x180014CE0 (sub_180014CE0.c)
 *     sub_1800153D8 @ 0x1800153D8 (sub_1800153D8.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800151CC(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+28h] [rbp-38h]
  __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  __int64 v8; // [rsp+38h] [rbp-28h]
  __int64 v9; // [rsp+40h] [rbp-20h] BYREF
  __int64 v10; // [rsp+48h] [rbp-18h]
  _BYTE v11[16]; // [rsp+50h] [rbp-10h] BYREF

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  sub_180012C40(&v5, (_QWORD *)(v1 + 32));
  v2 = (_QWORD *)sub_18001367C(v5, &v9);
  sub_180029C50(*v2 + 16LL, v11);
  if ( v10 )
    sub_180010EC8(v10);
  sub_180014CE0(v5, &v7);
  v3 = sub_180012C40(&v9, (_QWORD *)(qword_1801C8518 + 96));
  sub_1800153D8(v7, v3);
  sub_180014BBC(v5, &v9);
  if ( v10 )
    sub_180010EC8(v10);
  if ( v8 )
    sub_180010EC8(v8);
  result = sub_180011E54((__int64)v11);
  if ( v6 )
    return sub_180010EC8(v6);
  return result;
}
