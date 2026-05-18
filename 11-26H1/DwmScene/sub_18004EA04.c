/*
 * XREFs of sub_18004EA04 @ 0x18004EA04
 * Callers:
 *     sub_180080354 @ 0x180080354 (sub_180080354.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18001C968 @ 0x18001C968 (sub_18001C968.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18004F194 @ 0x18004F194 (sub_18004F194.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18004EA04(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rbx
  __int64 *v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v11[5]; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v13[4]; // [rsp+98h] [rbp-50h] BYREF
  _BYTE v14[32]; // [rsp+B8h] [rbp-30h] BYREF

  v11[4] = a2;
  v3 = (_QWORD *)(a1 + 18576);
  sub_18004F194(a1 + 18576, &v10, a2);
  if ( v10 == *v3 )
  {
    v6 = sub_18001C968(v13, (__int64)"ShaderManager::GetShaderProgram() -- shader program for name '", a2);
    v7 = sub_18001C87C((__int64)v14, (__int64)v6, (__int64)"' does not exist");
    v8 = sub_180011CC4(
           v11,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_18003A468(pExceptionObject, (__int64)v8, v9, v7, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v4 = v10 + 64;
  sub_1800129D0(a2);
  return v4;
}
