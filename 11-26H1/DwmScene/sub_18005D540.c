/*
 * XREFs of sub_18005D540 @ 0x18005D540
 * Callers:
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800119A4 @ 0x1800119A4 (sub_1800119A4.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18002E168 @ 0x18002E168 (sub_18002E168.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18005D458 @ 0x18005D458 (sub_18005D458.c)
 *     sub_180080F34 @ 0x180080F34 (sub_180080F34.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_18005D540(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v9; // r12
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v16; // rax
  __int64 v17; // r8
  __int64 v19; // [rsp+40h] [rbp-C0h]
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+68h] [rbp-98h]
  _QWORD v22[5]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v23[4]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+B8h] [rbp-48h] BYREF

  v6 = a4;
  v19 = a1;
  v22[4] = a3;
  if ( (a4 & a6) != 0 )
  {
    sub_180011CC4(
      v23,
      "ShaderFamily::CreatePipelines() -- Combination basis options must not be part of required or excluded set");
    v16 = sub_180011CC4(
            v22,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_18003A468(pExceptionObject, (__int64)v16, v17, (__int64)v23, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v9 = 0LL;
  do
  {
    v10 = sub_18005D458(a1, &v20, v9 | v6, a6 & ~v9, 0);
    v11 = a2[1];
    if ( v11 == a2[2] )
      sub_18002E168(a2, v11, v10);
    else
      sub_1800119A4((__int64)a2, v10);
    if ( v21 )
      sub_180010EC8(v21);
    v12 = *(_QWORD *)(a2[1] - 16LL);
    v13 = sub_180011CC4(v23, byte_1800F9DE0);
    v14 = sub_1800181BC(v22, a3);
    sub_180080F34(v12, v14, v9, v13);
    v9 = a6 & ((~a6 | v9) + 1);
    v6 = a4;
    a1 = v19;
  }
  while ( v9 );
  sub_1800129D0(a3);
  return a2;
}
