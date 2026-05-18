/*
 * XREFs of sub_18006C3B4 @ 0x18006C3B4
 * Callers:
 *     sub_1800268A0 @ 0x1800268A0 (sub_1800268A0.c)
 *     sub_18002706C @ 0x18002706C (sub_18002706C.c)
 *     sub_180034A88 @ 0x180034A88 (sub_180034A88.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18003E2DC @ 0x18003E2DC (sub_18003E2DC.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006C3B4(__int64 a1, int a2, int a3, int a4)
{
  _QWORD *v4; // rdx
  int v5; // r9d
  int v6; // r9d
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD v10[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v11[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  v4 = (_QWORD *)(a1 + 32 * (a3 + 5LL * a2));
  if ( !a4 )
    return sub_18003E2DC((__int64)v4);
  v5 = a4 - 1;
  if ( !v5 )
    return v4[1];
  v6 = v5 - 1;
  if ( !v6 )
    return v4[3];
  if ( v6 != 1 )
  {
    sub_180011CC4(v11, "Unsupported value");
    v7 = sub_180011CC4(
           v10,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\performancemanager.cpp");
    sub_18006A84C(pExceptionObject, (__int64)v7, v8, (__int64)v11, 1);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  return v4[2];
}
