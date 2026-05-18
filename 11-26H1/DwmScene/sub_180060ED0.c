/*
 * XREFs of sub_180060ED0 @ 0x180060ED0
 * Callers:
 *     sub_18006A2C0 @ 0x18006A2C0 (sub_18006A2C0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_18001E58C @ 0x18001E58C (sub_18001E58C.c)
 *     sub_18001F05C @ 0x18001F05C (sub_18001F05C.c)
 *     sub_18001FC54 @ 0x18001FC54 (sub_18001FC54.c)
 *     sub_180060338 @ 0x180060338 (sub_180060338.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180060ED0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r10
  bool v13; // di
  struct _Mtx_internal_imp_t *v14; // rbx
  _BYTE v16[16]; // [rsp+28h] [rbp-41h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-31h]
  _BYTE v18[16]; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-11h]
  _BYTE v20[32]; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v21[32]; // [rsp+88h] [rbp+1Fh] BYREF

  sub_18001E58C((__int64)v18, (__int64)L"Camera.");
  sub_18001E58C((__int64)v16, (__int64)L"/Internal/Camera.");
  v4 = sub_18001FC54(a2, (__int64)v21, 0LL, v19);
  v5 = 1;
  sub_1800141BC(v4);
  v6 = sub_1800141BC((__int64)v18);
  v13 = 1;
  if ( !sub_18001F05C(v8, v7, v6, v19) )
  {
    v9 = sub_18001FC54(a2, (__int64)v20, 0LL, v17);
    v5 = 3;
    sub_1800141BC(v9);
    v10 = sub_1800141BC((__int64)v16);
    if ( !sub_18001F05C(v12, v11, v10, v17) )
      v13 = 0;
  }
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    sub_180014244((__int64)v20);
  }
  if ( (v5 & 1) != 0 )
    sub_180014244((__int64)v21);
  if ( v13 )
  {
    v14 = (struct _Mtx_internal_imp_t *)(*(_QWORD *)a1 + 1552LL);
    sub_180012AC4((__int64)v14);
    sub_180060338((_QWORD *)(*(_QWORD *)a1 + 1488LL), (__int64)v20, a2);
    Mtx_unlock(v14);
  }
  sub_180014244((__int64)v16);
  return sub_180014244((__int64)v18);
}
