/*
 * XREFs of sub_180032574 @ 0x180032574
 * Callers:
 *     sub_1800326D0 @ 0x1800326D0 (sub_1800326D0.c)
 *     sub_180061A20 @ 0x180061A20 (sub_180061A20.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_1800119A4 @ 0x1800119A4 (sub_1800119A4.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_18002E168 @ 0x18002E168 (sub_18002E168.c)
 *     sub_18002F964 @ 0x18002F964 (sub_18002F964.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180032574(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+28h] [rbp-28h]
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  volatile signed __int32 *v14; // [rsp+38h] [rbp-18h]
  _BYTE v15[16]; // [rsp+40h] [rbp-10h] BYREF

  sub_180012A94(*a2 + 56LL, &v13);
  sub_18001367C(v13, &v11);
  if ( v14 )
    sub_180010EC8((__int64)v14);
  sub_1800162D0(&v13, &v11);
  v4 = sub_18002F964((__int64 *)(a1 + 728), (__int64)v15, (__int64)&v13);
  v5 = (_QWORD *)(*(_QWORD *)v4 + 48LL);
  v6 = *(_QWORD *)(*(_QWORD *)v4 + 56LL);
  if ( v6 == *(_QWORD *)(*(_QWORD *)v4 + 64LL) )
    sub_18002E168(v5, v6, a2);
  else
    sub_1800119A4((__int64)v5, a2);
  if ( v14 )
    sub_180010F00(v14);
  sub_1800162D0(&v13, &v11);
  v7 = sub_18002F964((__int64 *)(a1 + 728), (__int64)v15, (__int64)&v13);
  v8 = (__int64)(*(_QWORD *)(*(_QWORD *)v7 + 56LL) - *(_QWORD *)(*(_QWORD *)v7 + 48LL)) >> 4;
  if ( v14 )
    sub_180010F00(v14);
  if ( v12 )
    sub_180010EC8(v12);
  v9 = a2[1];
  if ( v9 )
    sub_180010EC8(v9);
  return v8 - 1;
}
