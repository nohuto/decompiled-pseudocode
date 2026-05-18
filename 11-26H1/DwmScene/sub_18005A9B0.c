/*
 * XREFs of sub_18005A9B0 @ 0x18005A9B0
 * Callers:
 *     sub_180066AA4 @ 0x180066AA4 (sub_180066AA4.c)
 *     sub_180086020 @ 0x180086020 (sub_180086020.c)
 *     sub_180086570 @ 0x180086570 (sub_180086570.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005A9B0(__int64 a1, int a2, char a3)
{
  __int64 v3; // r9
  __int64 result; // rax
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD v7[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v8[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  if ( a2 < 0 || (v3 = *(_QWORD *)(a1 + 104), a2 >= (int)(-1431655765 * ((*(_QWORD *)(a1 + 112) - v3) >> 4))) )
  {
    sub_180011CC4(v8, "Camera::SetRenderPassEnabled() -- illegal render pass index");
    v5 = sub_180011CC4(
           v7,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\camera.cpp");
    sub_18003A468(pExceptionObject, (__int64)v5, v6, (__int64)v8, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  result = a2;
  *(_BYTE *)(v3 + 48LL * a2) = a3;
  return result;
}
