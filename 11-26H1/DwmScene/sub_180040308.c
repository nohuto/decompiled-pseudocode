/*
 * XREFs of sub_180040308 @ 0x180040308
 * Callers:
 *     sub_18001C2D0 @ 0x18001C2D0 (sub_18001C2D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_180029E54 @ 0x180029E54 (sub_180029E54.c)
 *     sub_1800403B8 @ 0x1800403B8 (sub_1800403B8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180040308(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rbx
  _BYTE v7[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+28h] [rbp-40h]
  _QWORD v9[5]; // [rsp+30h] [rbp-38h] BYREF

  v9[4] = a2;
  sub_180029E54(a1 + 16);
  v4 = sub_180013440(v9, a2);
  v5 = *(_QWORD *)sub_1800403B8(a1, v7, v4);
  if ( v8 )
    sub_180010EC8(v8);
  sub_180014244(a2);
  return v5 + 48;
}
