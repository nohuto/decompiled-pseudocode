/*
 * XREFs of sub_18003587C @ 0x18003587C
 * Callers:
 *     sub_180033900 @ 0x180033900 (sub_180033900.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800141F0 @ 0x1800141F0 (sub_1800141F0.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_18001FF74 @ 0x18001FF74 (sub_18001FF74.c)
 *     sub_180020074 @ 0x180020074 (sub_180020074.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_180030C38 @ 0x180030C38 (sub_180030C38.c)
 *     sub_180030C74 @ 0x180030C74 (sub_180030C74.c)
 *     sub_18003197C @ 0x18003197C (sub_18003197C.c)
 *     sub_180033140 @ 0x180033140 (sub_180033140.c)
 *     sub_180033D5C @ 0x180033D5C (sub_180033D5C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_18003587C(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  __int64 *v4; // rbx
  __int64 v5; // rdi
  __int64 v7; // [rsp+48h] [rbp-C0h] BYREF
  volatile signed __int32 *v8; // [rsp+50h] [rbp-B8h]
  __int64 v9; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v10; // [rsp+60h] [rbp-A8h]
  __int64 v11[3]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v12[16]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v13[3]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v14[8]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v15[4]; // [rsp+E8h] [rbp-20h] BYREF

  v2 = sub_180012C40(&v7, a1 + 58);
  sub_18001FF74(
    v14,
    v2,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1719,
    (__int64)"RemoveInvalidDevices",
    (__int64)"RemoveInvalidDevices");
  sub_180011CC4(v15, "RemoveInvalidDevices");
  v3 = sub_180033D5C((__int64)a1, &v9);
  sub_1800162D0(&v7, v3);
  sub_180030C74(v13, (__int64)&v7);
  if ( v8 )
    sub_180010F00(v8);
  if ( v10 )
    sub_180010EC8(v10);
  sub_1800129D0((__int64)v15);
  sub_180029C50((__int64)(a1 + 14), (__int64)v12);
  sub_180030C38(v11, (__int64)(a1 + 11));
  v4 = (__int64 *)v11[0];
  v5 = v11[1];
  while ( v4 != (__int64 *)v5 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*v4 + 16LL))(*v4) )
    {
      sub_18001DCFC(&qword_1801BD288, 3);
      sub_18001DCFC(&qword_1801BD288, 3);
      sub_180029C50(*v4 + 24, (__int64)&v9);
      sub_180033140(a1, v4);
      sub_18001DCFC(&qword_1801BD288, 3);
      sub_180011E54((__int64)&v9);
    }
    v4 += 2;
  }
  sub_1800141F0((__int64)v11);
  sub_180011E54((__int64)v12);
  sub_18003197C((__int64)v13);
  return sub_180020074((__int64)v14);
}
