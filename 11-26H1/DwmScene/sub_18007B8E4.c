/*
 * XREFs of sub_18007B8E4 @ 0x18007B8E4
 * Callers:
 *     sub_180045760 @ 0x180045760 (sub_180045760.c)
 *     sub_18007CDA4 @ 0x18007CDA4 (sub_18007CDA4.c)
 *     sub_18007D058 @ 0x18007D058 (sub_18007D058.c)
 *     sub_18007D08C @ 0x18007D08C (sub_18007D08C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18001C928 @ 0x18001C928 (sub_18001C928.c)
 *     sub_180028AE4 @ 0x180028AE4 (sub_180028AE4.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18007B8E4(__int64 a1, unsigned __int16 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD v11[4]; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v12[4]; // [rsp+58h] [rbp-41h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-21h] BYREF
  _QWORD v14[7]; // [rsp+B0h] [rbp+17h] BYREF

  if ( *(_DWORD *)(a1 + 1168) )
  {
    sub_180011CC4(
      v11,
      "ShaderPropertyLayout::SetPropertyDefault() -- cannot set property defaults after calling ShaderPropertyLayout::EndDeclaration()");
    v3 = sub_180011CC4(
           v12,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_18003A468(pExceptionObject, (__int64)v3, v4, (__int64)v11, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v5 = *(unsigned __int16 *)(a1 + 2LL * a2 + 128);
  if ( (_WORD)v5 == 0xFFFF )
  {
    v6 = sub_180028AE4(v12, a2);
    v7 = sub_18001C928(
           (__int64)pExceptionObject,
           (__int64)"ShaderPropertyLayout::SetPropertyDefault() -- property layout does not have a property with the specified ID ",
           v6);
    v8 = sub_180011CC4(
           v11,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_18003A468(v14, (__int64)v8, v9, v7, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v14;
  }
  return *(_QWORD *)(a1 + 80) + 4LL * *(unsigned int *)(56 * v5 + *(_QWORD *)(a1 + 56) + 40);
}
