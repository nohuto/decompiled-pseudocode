/*
 * XREFs of sub_18007BDCC @ 0x18007BDCC
 * Callers:
 *     sub_180043E08 @ 0x180043E08 (sub_180043E08.c)
 *     sub_180044C70 @ 0x180044C70 (sub_180044C70.c)
 *     sub_1800451CC @ 0x1800451CC (sub_1800451CC.c)
 *     sub_180045760 @ 0x180045760 (sub_180045760.c)
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 *     sub_180078F80 @ 0x180078F80 (sub_180078F80.c)
 *     sub_180079644 @ 0x180079644 (sub_180079644.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18007BE98 @ 0x18007BE98 (sub_18007BE98.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18007BDCC(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdi
  _QWORD v10[4]; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD v11[4]; // [rsp+58h] [rbp-80h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-60h] BYREF

  if ( *(_DWORD *)(a1 + 1168) )
  {
    sub_180011CC4(
      v11,
      "ShaderPropertyLayout::AddProperties() -- properties can only be added during declaration phase before EndDeclaration()");
    v7 = sub_180011CC4(
           v10,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_18003A468(pExceptionObject, (__int64)v7, v8, (__int64)v11, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( a3 )
  {
    v9 = a3;
    do
    {
      sub_18007BE98(a1, a2, a4);
      a2 += 64LL;
      --v9;
    }
    while ( v9 );
  }
}
