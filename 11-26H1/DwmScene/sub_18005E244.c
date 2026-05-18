/*
 * XREFs of sub_18005E244 @ 0x18005E244
 * Callers:
 *     sub_180043E08 @ 0x180043E08 (sub_180043E08.c)
 *     sub_180044C70 @ 0x180044C70 (sub_180044C70.c)
 *     sub_1800451CC @ 0x1800451CC (sub_1800451CC.c)
 *     sub_1800456D0 @ 0x1800456D0 (sub_1800456D0.c)
 *     sub_180045760 @ 0x180045760 (sub_180045760.c)
 *     sub_18005D8B8 @ 0x18005D8B8 (sub_18005D8B8.c)
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 *     sub_180078BE0 @ 0x180078BE0 (sub_180078BE0.c)
 *     sub_180078F80 @ 0x180078F80 (sub_180078F80.c)
 *     sub_180079644 @ 0x180079644 (sub_180079644.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_1800143E4 @ 0x1800143E4 (sub_1800143E4.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18001EA08 @ 0x18001EA08 (sub_18001EA08.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18004EEC0 @ 0x18004EEC0 (sub_18004EEC0.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_18005E244(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rsi
  __int64 result; // rax
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD v12[4]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v13[4]; // [rsp+60h] [rbp-39h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v15[32]; // [rsp+B8h] [rbp+1Fh] BYREF

  if ( *(_DWORD *)(a1 + 432) )
  {
    sub_180011CC4(
      v13,
      "ShaderFamily::SetPropertyLayout() -- Cannot set property layout after the shader family has ended declaration");
    v4 = sub_180011CC4(
           v12,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_18003A468(pExceptionObject, (__int64)v4, v5, (__int64)v13, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v6 = *(unsigned int *)(*a2 + 48);
  sub_180013540((__int64 *)(a1 + 16 * (v6 + 6)), a2);
  result = *a2;
  if ( !*(_QWORD *)(*a2 + 32) )
  {
    v8 = sub_18004EEC0(pExceptionObject, v6);
    v9 = sub_18001C87C((__int64)v15, (__int64)v8, (__int64)" (");
    v10 = sub_18001EA08((__int64)v13, v9, a1 + 16);
    sub_18001C87C((__int64)v12, v10, (__int64)")");
    sub_1800129D0((__int64)v13);
    sub_1800129D0((__int64)v15);
    sub_1800129D0((__int64)pExceptionObject);
    sub_1800143E4(*a2 + 16, (__int64)v12);
    result = sub_1800129D0((__int64)v12);
  }
  v11 = a2[1];
  if ( v11 )
    return sub_180010EC8(v11);
  return result;
}
