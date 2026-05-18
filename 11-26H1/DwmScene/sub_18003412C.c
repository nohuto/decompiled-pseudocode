/*
 * XREFs of sub_18003412C @ 0x18003412C
 * Callers:
 *     sub_180016344 @ 0x180016344 (sub_180016344.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_18001F378 @ 0x18001F378 (sub_18001F378.c)
 *     sub_18001F9C0 @ 0x18001F9C0 (sub_18001F9C0.c)
 *     sub_180026600 @ 0x180026600 (sub_180026600.c)
 *     sub_180026628 @ 0x180026628 (sub_180026628.c)
 *     sub_180029B0C @ 0x180029B0C (sub_180029B0C.c)
 *     sub_180029DD4 @ 0x180029DD4 (sub_180029DD4.c)
 *     sub_18002CEDC @ 0x18002CEDC (sub_18002CEDC.c)
 *     sub_18002CF9C @ 0x18002CF9C (sub_18002CF9C.c)
 *     sub_18002D224 @ 0x18002D224 (sub_18002D224.c)
 *     sub_180030928 @ 0x180030928 (sub_180030928.c)
 *     sub_18003200C @ 0x18003200C (sub_18003200C.c)
 *     sub_180033E4C @ 0x180033E4C (sub_180033E4C.c)
 *     sub_180033EEC @ 0x180033EEC (sub_180033EEC.c)
 *     sub_180037DD0 @ 0x180037DD0 (sub_180037DD0.c)
 *     __RTDynamicCast @ 0x1800D7C64 (__RTDynamicCast.c)
 */

// Hidden C++ exception states: #wind=8
const void *__fastcall sub_18003412C(__int64 a1, const void *a2)
{
  int v4; // edi
  unsigned int i; // esi
  __int64 v6; // r13
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  const void *v16; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-C0h]
  _BYTE v18[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v19[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v20[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v21[232]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v22[16]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v23; // [rsp+170h] [rbp+70h]
  _QWORD v24[4]; // [rsp+180h] [rbp+80h] BYREF
  _QWORD v25[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v26[4]; // [rsp+1C0h] [rbp+C0h] BYREF

  v16 = a2;
  v4 = 0;
  sub_180030928((__int64)v19);
  sub_180029DD4(a1 + 112, (__int64)v18);
  for ( i = 0; i < (unsigned int)sub_180033EEC(a1); ++i )
  {
    sub_180033E4C(a1, &v16, i);
    v6 = (__int64)v16;
    if ( !_RTDynamicCast(
            v16,
            0LL,
            &Spectre::Engine::RenderDevice `RTTI Type Descriptor',
            &Spectre::Engine::RenderDeviceGeneric `RTTI Type Descriptor',
            0) )
    {
      v7 = sub_180026600(v6, v26);
      v8 = sub_18002D224((__int64)v20, (__int64)v7);
      v9 = sub_18002CF9C(v8, ": Hardware Feature Level ");
      sub_180013440(v24, v6 + 176);
      v4 |= 2u;
      v10 = sub_18002D224(v9, (__int64)v24);
      v11 = sub_18002CF9C(v10, ", Engine Feature Level ");
      v12 = sub_180026628(v6, v25);
      v13 = sub_18002D224(v11, (__int64)v12);
      sub_18002CF9C(v13, "; ");
      sub_180014244((__int64)v25);
      sub_180014244((__int64)v24);
      sub_180014244((__int64)v26);
    }
    if ( v17 )
      sub_180010EC8(v17);
  }
  sub_18001F378((__int64)v22);
  sub_180037DD0(v21, &v16);
  if ( v16 )
    sub_18001F9C0((__int64)v22, v16, v17);
  v14 = sub_1800141BC((__int64)v22);
  sub_18002CEDC((__int64)a2, v14, v14 + 2 * v23);
  sub_180014244((__int64)v22);
  sub_180029B0C((__int64)v18);
  sub_18003200C((__int64)v19);
  return a2;
}
