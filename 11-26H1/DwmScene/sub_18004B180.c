/*
 * XREFs of sub_18004B180 @ 0x18004B180
 * Callers:
 *     sub_18004AD40 @ 0x18004AD40 (sub_18004AD40.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180014E04 @ 0x180014E04 (sub_180014E04.c)
 *     sub_18002901C @ 0x18002901C (sub_18002901C.c)
 *     sub_180034428 @ 0x180034428 (sub_180034428.c)
 *     sub_180042248 @ 0x180042248 (sub_180042248.c)
 *     sub_180048CF4 @ 0x180048CF4 (sub_180048CF4.c)
 *     sub_18007AB60 @ 0x18007AB60 (sub_18007AB60.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall sub_18004B180(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  int v6; // ecx
  __int64 *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // [rsp+20h] [rbp-98h] BYREF
  __int64 v10; // [rsp+28h] [rbp-90h]
  __int64 v11; // [rsp+30h] [rbp-88h] BYREF
  __int64 v12; // [rsp+38h] [rbp-80h]
  _BYTE v13[96]; // [rsp+40h] [rbp-78h] BYREF

  result = *a4;
  v6 = *(_DWORD *)(*a4 + 440);
  if ( (v6 & 0x10000) != 0 && (v6 & 0x800000) != 0 )
  {
    v7 = sub_180042248(a1, &v11);
    result = (__int64)sub_180014E04(*v7, &v9);
    if ( v12 )
      result = sub_180010EC8(v12);
    v8 = v9;
    if ( v9 )
    {
      sub_18002901C((__int64)v13, 12LL, 8LL, sub_18000E480);
      sub_180048CF4((unsigned __int64 *)(v8 + 88), (__int64)v13);
      sub_18007AB60(a1);
      sub_180034428();
    }
    if ( v10 )
      return sub_180010EC8(v10);
  }
  return result;
}
