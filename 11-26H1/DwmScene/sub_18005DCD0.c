/*
 * XREFs of sub_18005DCD0 @ 0x18005DCD0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 */

void __noreturn sub_18005DCD0()
{
  unsigned int v0; // eax
  int v1; // r8d
  _QWORD v2[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v3[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  sub_180011CC4(v3, "Not implemented");
  v0 = (unsigned int)sub_180011CC4(
                       v2,
                       "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\eng"
                       "ine\\shaderfamily.cpp");
  sub_18006A84C((unsigned int)pExceptionObject, v0, v1, (unsigned int)v3, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
