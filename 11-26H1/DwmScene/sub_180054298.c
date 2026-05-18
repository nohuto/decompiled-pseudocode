/*
 * XREFs of sub_180054298 @ 0x180054298
 * Callers:
 *     sub_180028564 @ 0x180028564 (sub_180028564.c)
 *     sub_18005434C @ 0x18005434C (sub_18005434C.c)
 *     sub_1800C3100 @ 0x1800C3100 (sub_1800C3100.c)
 *     sub_1800C50F4 @ 0x1800C50F4 (sub_1800C50F4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180054298(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  int v3; // r8d
  _QWORD v4[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v5[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  if ( *(float *)&a2 < 0.0 || *((float *)&a2 + 1) < 0.0 )
  {
    sub_180011CC4(v5, "Attempted to set an active size with a negative component");
    v2 = (unsigned int)sub_180011CC4(
                         v4,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\texture.cpp");
    sub_18006A84C((unsigned int)pExceptionObject, v2, v3, (unsigned int)v5, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_QWORD *)(a1 + 152) = a2;
}
