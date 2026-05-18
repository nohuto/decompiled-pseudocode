/*
 * XREFs of sub_18001552C @ 0x18001552C
 * Callers:
 *     sub_180015CA0 @ 0x180015CA0 (sub_180015CA0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 *     sub_180014E04 @ 0x180014E04 (sub_180014E04.c)
 *     sub_180014ED4 @ 0x180014ED4 (sub_180014ED4.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_18003C6A8 @ 0x18003C6A8 (sub_18003C6A8.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18001552C(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 result; // rax
  __int64 v6; // [rsp+20h] [rbp-50h] BYREF
  __int64 v7; // [rsp+28h] [rbp-48h]
  __int128 v8; // [rsp+30h] [rbp-40h] BYREF
  __int64 v9; // [rsp+40h] [rbp-30h] BYREF
  __int64 v10; // [rsp+48h] [rbp-28h]
  __int64 v11; // [rsp+50h] [rbp-20h] BYREF
  __int64 v12; // [rsp+58h] [rbp-18h]
  _BYTE v13[16]; // [rsp+60h] [rbp-10h] BYREF

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  sub_180012C40(&v6, (_QWORD *)(v1 + 32));
  v2 = (_QWORD *)sub_18001367C(v6, &v9);
  sub_180029C50(*v2 + 16LL, v13);
  if ( v10 )
    sub_180010EC8(v10);
  v3 = sub_180014ED4(v6, &v11);
  v8 = 0LL;
  v8 = *(_OWORD *)v3;
  *v3 = 0LL;
  v3[1] = 0LL;
  sub_18003C6A8(v6, &v8);
  if ( v12 )
    sub_180010EC8(v12);
  v4 = sub_180014E04(v6, &v11);
  v8 = 0LL;
  v8 = *(_OWORD *)v4;
  *v4 = 0LL;
  v4[1] = 0LL;
  sub_18003C6A8(v6, &v8);
  if ( v12 )
    sub_180010EC8(v12);
  result = sub_180011E54((__int64)v13);
  if ( v7 )
    return sub_180010EC8(v7);
  return result;
}
