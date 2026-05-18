/*
 * XREFs of sub_1800326D0 @ 0x1800326D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_1800143E4 @ 0x1800143E4 (sub_1800143E4.c)
 *     sub_180029C10 @ 0x180029C10 (sub_180029C10.c)
 *     sub_18002D2B0 @ 0x18002D2B0 (sub_18002D2B0.c)
 *     sub_180032574 @ 0x180032574 (sub_180032574.c)
 *     sub_18003B55C @ 0x18003B55C (sub_18003B55C.c)
 *     sub_18003F830 @ 0x18003F830 (sub_18003F830.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800326D0(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v10; // [rsp+20h] [rbp-49h] BYREF
  __int64 v11; // [rsp+30h] [rbp-39h] BYREF
  __int64 v12; // [rsp+38h] [rbp-31h]
  __int64 v13; // [rsp+40h] [rbp-29h] BYREF
  __int64 v14; // [rsp+48h] [rbp-21h]
  _BYTE v15[16]; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v16[4]; // [rsp+60h] [rbp-9h] BYREF
  _QWORD v17[4]; // [rsp+80h] [rbp+17h] BYREF

  sub_180029C10(*a2 + 16, (__int64)v15);
  v4 = *a2;
  v5 = sub_180013440(v16, (__int64)&unk_1801C90D8);
  sub_180011CC4(v17, "DefaultCamera");
  v6 = sub_18003B55C(v17);
  sub_18003F830(v4, &v13, v6, v5, v16);
  sub_1800129D0((__int64)v17);
  sub_18002D2B0(v13, &v11);
  sub_180011CC4(v17, "DefaultCamera");
  v7 = v11;
  sub_1800143E4(v11 + 24, (__int64)v17);
  sub_1800129D0((__int64)v17);
  *(_BYTE *)(v7 + 72) = 0;
  v8 = sub_180012C40(&v10, &v11);
  sub_180032574(a1, v8);
  if ( v12 )
    sub_180010EC8(v12);
  if ( v14 )
    sub_180010EC8(v14);
  return sub_180011E54((__int64)v15);
}
