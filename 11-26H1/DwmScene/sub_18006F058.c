/*
 * XREFs of sub_18006F058 @ 0x18006F058
 * Callers:
 *     sub_18006EC64 @ 0x18006EC64 (sub_18006EC64.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180026A6C @ 0x180026A6C (sub_180026A6C.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_180038B3C @ 0x180038B3C (sub_180038B3C.c)
 *     sub_180099888 @ 0x180099888 (sub_180099888.c)
 *     sub_18009993C @ 0x18009993C (sub_18009993C.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD **__fastcall sub_18006F058(__int64 a1, _QWORD **a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rbx
  _QWORD **v8; // [rsp+20h] [rbp-29h] BYREF
  __int64 v9; // [rsp+28h] [rbp-21h]
  __int64 v10; // [rsp+38h] [rbp-11h] BYREF
  __int64 v11; // [rsp+40h] [rbp-9h]
  __int64 v12; // [rsp+48h] [rbp-1h] BYREF
  __int64 v13; // [rsp+50h] [rbp+7h]
  _BYTE v14[16]; // [rsp+58h] [rbp+Fh] BYREF
  _QWORD v15[4]; // [rsp+68h] [rbp+1Fh] BYREF

  v8 = a2;
  v6 = *a4;
  sub_180029EF8(*a4 + 24, (__int64)a2);
  sub_180012C40(&v8, (_QWORD *)(v6 + 272));
  sub_180011CC4(v15, "IPM_ResolveMultisampledInput");
  sub_180099888(v14, &v8, v15);
  sub_1800129D0((__int64)v15);
  sub_180026A6C(*(_QWORD *)(a1 + 456), &v12);
  sub_180012C40(&v10, (_QWORD *)(a1 + 64));
  sub_180038B3C(v8, (__int64)&v10, (__int64)&v12);
  sub_180012C40(a2, (_QWORD *)(a1 + 64));
  if ( v11 )
    sub_180010EC8(v11);
  if ( v13 )
    sub_180010EC8(v13);
  sub_18009993C(v14);
  if ( v9 )
    sub_180010EC8(v9);
  return a2;
}
