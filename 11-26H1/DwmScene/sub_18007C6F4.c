/*
 * XREFs of sub_18007C6F4 @ 0x18007C6F4
 * Callers:
 *     sub_18007D0C0 @ 0x18007D0C0 (sub_18007D0C0.c)
 *     sub_18007EAEC @ 0x18007EAEC (sub_18007EAEC.c)
 *     sub_18007EB5C @ 0x18007EB5C (sub_18007EB5C.c)
 *     sub_18007EBB8 @ 0x18007EBB8 (sub_18007EBB8.c)
 *     sub_18007EC28 @ 0x18007EC28 (sub_18007EC28.c)
 *     sub_18007ECA8 @ 0x18007ECA8 (sub_18007ECA8.c)
 *     sub_18007ED34 @ 0x18007ED34 (sub_18007ED34.c)
 *     sub_18007EDAC @ 0x18007EDAC (sub_18007EDAC.c)
 *     sub_18007F1B0 @ 0x18007F1B0 (sub_18007F1B0.c)
 *     sub_18007F20C @ 0x18007F20C (sub_18007F20C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18001C968 @ 0x18001C968 (sub_18001C968.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18007C6B8 @ 0x18007C6B8 (sub_18007C6B8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18007C6F4(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD v8[4]; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+58h] [rbp-90h] BYREF
  __int64 v10[4]; // [rsp+90h] [rbp-58h] BYREF
  _BYTE v11[32]; // [rsp+B0h] [rbp-38h] BYREF

  result = sub_18007C6B8(a1, a2);
  if ( (_WORD)result == 511 )
  {
    v4 = sub_18001C968(
           v10,
           (__int64)"ShaderPropertyLayout::GetPropertyName() -- property layout does not have a property with the name \"",
           a2);
    v5 = sub_18001C87C((__int64)v11, (__int64)v4, (__int64)"\"");
    v6 = sub_180011CC4(
           v8,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_18003A468(pExceptionObject, (__int64)v6, v7, v5, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return result;
}
