/*
 * XREFs of sub_180059600 @ 0x180059600
 * Callers:
 *     sub_18005B198 @ 0x18005B198 (sub_18005B198.c)
 *     sub_18005B3C0 @ 0x18005B3C0 (sub_18005B3C0.c)
 *     sub_18005B5C4 @ 0x18005B5C4 (sub_18005B5C4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18001E148 @ 0x18001E148 (sub_18001E148.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall sub_180059600(__int64 a1, int a2)
{
  unsigned int i; // ecx
  unsigned int v5; // eax
  int v6; // r8d
  _QWORD v7[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v8[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  for ( i = 0; ; ++i )
  {
    if ( i >= 3 )
    {
      sub_180011CC4(v8, "Invalid matrix stage");
      v5 = (unsigned int)sub_180011CC4(
                           v7,
                           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\"
                           "engine\\camera.cpp");
      sub_18006A84C((unsigned int)pExceptionObject, v5, v6, (unsigned int)v8, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    if ( 1 << i == a2 )
      break;
  }
  return (unsigned int)sub_18001E148((unsigned int *)(a1 + 4 * (i + 70LL))) != 0;
}
