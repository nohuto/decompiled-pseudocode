/*
 * XREFs of sub_18004DC48 @ 0x18004DC48
 * Callers:
 *     sub_1800345EC @ 0x1800345EC (sub_1800345EC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18001C968 @ 0x18001C968 (sub_18001C968.c)
 *     sub_18001E844 @ 0x18001E844 (sub_18001E844.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18004BFB8 @ 0x18004BFB8 (sub_18004BFB8.c)
 *     sub_18004CC90 @ 0x18004CC90 (sub_18004CC90.c)
 *     sub_18004D390 @ 0x18004D390 (sub_18004D390.c)
 *     sub_18004F174 @ 0x18004F174 (sub_18004F174.c)
 *     sub_18004F194 @ 0x18004F194 (sub_18004F194.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18004DC48(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 *v9; // rsi
  __int64 *v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // r8
  _QWORD *v16; // rax
  _QWORD v18[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19[4]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v20[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD pExceptionObject[2]; // [rsp+90h] [rbp-70h] BYREF
  int v22; // [rsp+A0h] [rbp-60h]
  __int128 v23; // [rsp+A8h] [rbp-58h]
  _QWORD v24[7]; // [rsp+C8h] [rbp-38h] BYREF

  v18[3] = a2;
  v18[2] = a4;
  if ( !*(_QWORD *)(a2 + 16) )
  {
    sub_180011CC4(v20, "ShaderManager::AddShaderProgram() -- shader program cannot be registered with an empty name");
    v7 = sub_180011CC4(
           v19,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_18003A468(pExceptionObject, (__int64)v7, v8, (__int64)v20, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v9 = (__int64 *)(a1 + 18576);
  if ( *(_QWORD *)sub_18004F194(a1 + 18576, v18, a2) != *(_QWORD *)(a1 + 18576) )
  {
    v10 = sub_18001C968(v19, (__int64)"ShaderManager::AddShaderProgram() -- shader program for name '", a2);
    v11 = sub_18001C87C((__int64)pExceptionObject, (__int64)v10, (__int64)"' is already added");
    v12 = sub_180011CC4(
            v20,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_18003A468(v24, (__int64)v12, v13, v11, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v24;
  }
  if ( (unsigned __int8)sub_18004F174(a4) )
  {
    sub_180011CC4(
      v19,
      "ShaderManager::AddShaderProgram() -- shader program cannot be registered with zero-length program buffer");
    v14 = sub_180011CC4(
            v20,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_18003A468(v24, (__int64)v14, v15, (__int64)v19, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v24;
  }
  v16 = sub_18004CC90(v18, a4);
  pExceptionObject[0] = *v16;
  pExceptionObject[1] = v16[1];
  *v16 = 0LL;
  v16[1] = 0LL;
  v22 = a3;
  v23 = 0LL;
  sub_18004BFB8(v9, (__int64)v19, a2, (__int64)pExceptionObject);
  sub_18004D390((__int64)pExceptionObject);
  sub_1800129D0(a2);
  return sub_18001E844((__int64)a4);
}
