/*
 * XREFs of sub_18007CA8C @ 0x18007CA8C
 * Callers:
 *     sub_180043E08 @ 0x180043E08 (sub_180043E08.c)
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 *     sub_18007C50C @ 0x18007C50C (sub_18007C50C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18007CA8C(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v4[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v5[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  if ( (a2 & 0xFFFFFFEF) != 0 && *(_DWORD *)(a1 + 1168) )
  {
    sub_180011CC4(v5, "ShaderPropertyLayout::SetAlignment() -- alignment in bytes must be 0, 4, 8 or 16.");
    v2 = sub_180011CC4(
           v4,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_18003A468(pExceptionObject, (__int64)v2, v3, (__int64)v5, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 1172) = a2 >> 2;
}
