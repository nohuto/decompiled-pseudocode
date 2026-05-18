/*
 * XREFs of sub_18007C620 @ 0x18007C620
 * Callers:
 *     sub_18007E4C4 @ 0x18007E4C4 (sub_18007E4C4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 */

void __fastcall sub_18007C620(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // r8
  _QWORD v3[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v4[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  if ( *(_DWORD *)(a1 + 1168) != 1 )
  {
    sub_180011CC4(
      v4,
      "ShaderPropertyLayout::ExtendDeclaration() -- this function must only be called when this layout is complete");
    v1 = sub_180011CC4(
           v3,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_18003A468(pExceptionObject, (__int64)v1, v2, (__int64)v4, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 1168) = 0;
}
