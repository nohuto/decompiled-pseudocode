/*
 * XREFs of sub_18006105C @ 0x18006105C
 * Callers:
 *     sub_18006A340 @ 0x18006A340 (sub_18006A340.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_18001E58C @ 0x18001E58C (sub_18001E58C.c)
 *     sub_18001F05C @ 0x18001F05C (sub_18001F05C.c)
 *     sub_18001FC54 @ 0x18001FC54 (sub_18001FC54.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18006105C(__int64 a1, __int64 a2)
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
  bool v13; // si
  _BYTE v15[16]; // [rsp+28h] [rbp-41h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-31h]
  _BYTE v17[16]; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-11h]
  _BYTE v19[32]; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v20[32]; // [rsp+88h] [rbp+1Fh] BYREF

  sub_18001E58C((__int64)v17, (__int64)L"Lighting.");
  sub_18001E58C((__int64)v15, (__int64)L"/Internal/Lighting.");
  v4 = sub_18001FC54(a2, (__int64)v20, 0LL, v18);
  v5 = 1;
  sub_1800141BC(v4);
  v6 = sub_1800141BC((__int64)v17);
  v13 = 1;
  if ( !sub_18001F05C(v8, v7, v6, v18) )
  {
    v9 = sub_18001FC54(a2, (__int64)v19, 0LL, v16);
    v5 = 3;
    sub_1800141BC(v9);
    v10 = sub_1800141BC((__int64)v15);
    if ( !sub_18001F05C(v12, v11, v10, v16) )
      v13 = 0;
  }
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    sub_180014244((__int64)v19);
  }
  if ( (v5 & 1) != 0 )
    sub_180014244((__int64)v20);
  if ( v13 )
    *(_BYTE *)(*(_QWORD *)a1 + 1464LL) = 1;
  sub_180014244((__int64)v15);
  return sub_180014244((__int64)v17);
}
