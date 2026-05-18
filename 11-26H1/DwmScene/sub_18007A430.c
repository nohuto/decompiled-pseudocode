/*
 * XREFs of sub_18007A430 @ 0x18007A430
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_18000D81C @ 0x18000D81C (sub_18000D81C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180012E6C @ 0x180012E6C (sub_180012E6C.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 *     sub_1800141F0 @ 0x1800141F0 (sub_1800141F0.c)
 *     sub_18005DC5C @ 0x18005DC5C (sub_18005DC5C.c)
 *     sub_180075FB8 @ 0x180075FB8 (sub_180075FB8.c)
 *     sub_180076054 @ 0x180076054 (sub_180076054.c)
 *     sub_180076168 @ 0x180076168 (sub_180076168.c)
 *     sub_180077F90 @ 0x180077F90 (sub_180077F90.c)
 *     sub_180077FD8 @ 0x180077FD8 (sub_180077FD8.c)
 *     sub_18007ECA8 @ 0x18007ECA8 (sub_18007ECA8.c)
 *     sub_18007F20C @ 0x18007F20C (sub_18007F20C.c)
 *     sub_18009BCD8 @ 0x18009BCD8 (sub_18009BCD8.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall sub_18007A430(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v6; // [rsp+38h] [rbp-C8h]
  __int64 v7; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v8; // [rsp+48h] [rbp-B8h]
  __int64 v9; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v10; // [rsp+58h] [rbp-A8h]
  __int128 v11; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v12[3]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v13[24]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v14[24]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v15[24]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v16[24]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v17[24]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v18[24]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v19[48]; // [rsp+118h] [rbp+18h] BYREF

  sub_180012C40(&v7, (_QWORD *)(a1 + 56));
  result = sub_18005DC5C(v7, &v5, 9);
  if ( v8 )
    result = sub_180010EC8(v8);
  if ( v5 )
  {
    v11 = 0LL;
    sub_18000D81C((__int64)v19, 16LL, 3LL, (__int64 (__fastcall *)(__int64))sub_180011D00);
    sub_180012A94(*a2 + 56LL, &v9);
    sub_18001367C(v9, &v7);
    if ( v10 )
      sub_180010EC8(v10);
    sub_180012E6C(v7, (__int64)v18);
    sub_180076168(v7, (__int64)v17);
    sub_18009BCD8((unsigned int)v18, (unsigned int)v17, a1 + 112, (unsigned int)&v11, (__int64)v19);
    sub_180076054((__int64)v16, (void *)(*(_QWORD *)(a1 + 176) + 496LL), *(_QWORD *)(a1 + 176) + 544LL);
    sub_18007F20C(v5, &unk_1801CC258, v16);
    sub_180076054((__int64)v15, (void *)(*(_QWORD *)(a1 + 176) + 544LL), *(_QWORD *)(a1 + 176) + 592LL);
    sub_18007F20C(v5, &unk_1801CC278, v15);
    sub_180076054((__int64)v14, (void *)(*(_QWORD *)(a1 + 176) + 448LL), *(_QWORD *)(a1 + 176) + 496LL);
    sub_18007F20C(v5, &unk_1801CC2F8, v14);
    sub_180076054((__int64)v13, (void *)(*(_QWORD *)(a1 + 176) + 352LL), *(_QWORD *)(a1 + 176) + 400LL);
    sub_18007F20C(v5, &unk_1801CC2B8, v13);
    sub_180075FB8(v12, *(_QWORD *)(a1 + 176), *(_QWORD *)(a1 + 176) + 192LL);
    sub_18007ECA8(v5, &unk_1801CC298, v12);
    sub_180077F90((__int64)v12);
    sub_180077FD8((__int64)v13);
    sub_180077FD8((__int64)v14);
    sub_180077FD8((__int64)v15);
    sub_180077FD8((__int64)v16);
    sub_1800141F0((__int64)v17);
    sub_1800141F0((__int64)v18);
    if ( v8 )
      sub_180010EC8(v8);
    result = sub_18000BFA4(
               (__int64)v19,
               16LL,
               3LL,
               (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
    if ( *((_QWORD *)&v11 + 1) )
      result = sub_180010EC8(*((__int64 *)&v11 + 1));
  }
  if ( v6 )
    return sub_180010EC8(v6);
  return result;
}
