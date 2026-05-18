/*
 * XREFs of sub_180084410 @ 0x180084410
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 */

void __noreturn sub_180084410()
{
  _QWORD *v0; // rax
  __int64 v1; // r8
  _QWORD v2[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v3[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  sub_180011CC4(v3, "Deprecated code path");
  v0 = sub_180011CC4(
         v2,
         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\depthbuffergeneric.cpp");
  sub_18006A84C(pExceptionObject, (__int64)v0, v1, (__int64)v3, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
