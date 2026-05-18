/*
 * XREFs of sub_180034428 @ 0x180034428
 * Callers:
 *     sub_18002C790 @ 0x18002C790 (sub_18002C790.c)
 *     sub_180032804 @ 0x180032804 (sub_180032804.c)
 *     sub_180033900 @ 0x180033900 (sub_180033900.c)
 *     sub_1800369D4 @ 0x1800369D4 (sub_1800369D4.c)
 *     sub_18003C86C @ 0x18003C86C (sub_18003C86C.c)
 *     sub_1800422A0 @ 0x1800422A0 (sub_1800422A0.c)
 *     sub_180048E50 @ 0x180048E50 (sub_180048E50.c)
 *     sub_18004B180 @ 0x18004B180 (sub_18004B180.c)
 *     sub_180059AA0 @ 0x180059AA0 (sub_180059AA0.c)
 *     sub_18005A220 @ 0x18005A220 (sub_18005A220.c)
 *     sub_18006F890 @ 0x18006F890 (sub_18006F890.c)
 *     sub_18008EAF0 @ 0x18008EAF0 (sub_18008EAF0.c)
 * Callees:
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 */

// Hidden C++ exception states: #wind=1
void __noreturn sub_180034428()
{
  unsigned int v0; // eax
  int v1; // r8d
  _QWORD v2[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v3[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  sub_180011CC4(v3, "SymbolManager not supported.");
  v0 = (unsigned int)sub_180011CC4(
                       v2,
                       "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp");
  sub_18006A84C((unsigned int)pExceptionObject, v0, v1, (unsigned int)v3, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
