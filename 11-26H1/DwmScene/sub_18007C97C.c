/*
 * XREFs of sub_18007C97C @ 0x18007C97C
 * Callers:
 *     sub_180043264 @ 0x180043264 (sub_180043264.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18001C928 @ 0x18001C928 (sub_18001C928.c)
 *     sub_180028AE4 @ 0x180028AE4 (sub_180028AE4.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18007C97C(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rax
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD v8[4]; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+58h] [rbp-90h] BYREF
  _QWORD v10[4]; // [rsp+90h] [rbp-58h] BYREF
  _BYTE v11[32]; // [rsp+B0h] [rbp-38h] BYREF

  v2 = *(unsigned __int16 *)(a1 + 2LL * a2 + 128);
  if ( (_WORD)v2 == 0xFFFF )
  {
    v3 = sub_180028AE4(v10, a2);
    v4 = sub_18001C928(
           (__int64)v11,
           (__int64)"ShaderPropertyLayout::GetPropertyName() -- property layout does not have a property with the specified ID ",
           v3);
    v5 = sub_180011CC4(
           v8,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_18003A468(pExceptionObject, (__int64)v5, v6, v4, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(a1 + 56) + 56 * v2;
}
