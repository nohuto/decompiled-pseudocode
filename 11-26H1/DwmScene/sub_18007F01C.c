/*
 * XREFs of sub_18007F01C @ 0x18007F01C
 * Callers:
 *     sub_18007EFAC @ 0x18007EFAC (sub_18007EFAC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_18001C928 @ 0x18001C928 (sub_18001C928.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18004E420 @ 0x18004E420 (sub_18004E420.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_18007F01C(__int64 a1, unsigned __int16 a2, __int64 *a3)
{
  __int64 v6; // r9
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // r8
  _QWORD *v16; // rax
  __int64 v17; // r8
  _QWORD *result; // rax
  __int64 v19; // rcx
  _QWORD v20[4]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v21[4]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-9h] BYREF
  _BYTE v23[32]; // [rsp+B8h] [rbp+2Fh] BYREF

  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(unsigned __int16 *)(v6 + 2LL * a2 + 128);
  if ( (_WORD)v7 == 0xFFFF )
  {
    v8 = sub_18004E420(*(_QWORD *)(v6 + 1152), v21, a2);
    v9 = sub_18001C928((__int64)v23, (__int64)"Property does not exist: ", v8);
    v10 = sub_180011CC4(
            v20,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertyblock.cpp");
    sub_18003A468(pExceptionObject, (__int64)v10, v11, v9, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v12 = 56 * v7;
  v13 = *(_QWORD *)(v6 + 56);
  if ( *(_DWORD *)(56 * v7 + v13 + 36) != 8 )
  {
    sub_180011CC4(v21, "ShaderPropertyBlock::SetTexture() -- Property is not of type Texture");
    v14 = sub_180011CC4(
            v20,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertyblock.cpp");
    sub_18003A468(pExceptionObject, (__int64)v14, v15, (__int64)v21, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *(_DWORD *)(v12 + v13 + 48) == 2 )
  {
    sub_180011CC4(v20, "ShaderPropertyBlock::SetTextureSampler() -- Cannot set the value of an imported property");
    v16 = sub_180011CC4(
            v21,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertyblock.cpp");
    sub_18003A468(pExceptionObject, (__int64)v16, v17, (__int64)v20, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  result = sub_180011F5C((_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * (5LL * *(unsigned int *)(v12 + v13 + 40) + 2)), a3);
  v19 = a3[1];
  if ( v19 )
    return (_QWORD *)sub_180010EC8(v19);
  return result;
}
