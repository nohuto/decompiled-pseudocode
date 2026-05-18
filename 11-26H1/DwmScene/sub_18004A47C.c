/*
 * XREFs of sub_18004A47C @ 0x18004A47C
 * Callers:
 *     sub_18004AD40 @ 0x18004AD40 (sub_18004AD40.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18004B71C @ 0x18004B71C (sub_18004B71C.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18004A47C(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rcx
  unsigned int v3; // eax
  int v4; // r8d
  _QWORD v6[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v7[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  v2 = (_QWORD *)(a1 + 104);
  if ( a2 >= 0x2E8BA2E8BA2E8BA3LL * ((__int64)(v2[1] - *v2) >> 3) )
  {
    sub_180011CC4(v7, "Out of range");
    v3 = (unsigned int)sub_180011CC4(
                         v6,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\meshinstance.cpp");
    sub_18006A84C((unsigned int)pExceptionObject, v3, v4, (unsigned int)v7, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  return *(_BYTE *)(sub_18004B71C(v2, a2) + 16);
}
