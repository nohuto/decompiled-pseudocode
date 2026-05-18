/*
 * XREFs of sub_180033D9C @ 0x180033D9C
 * Callers:
 *     sub_180013A30 @ 0x180013A30 (sub_180013A30.c)
 *     sub_180015E60 @ 0x180015E60 (sub_180015E60.c)
 *     sub_180018DA0 @ 0x180018DA0 (sub_180018DA0.c)
 *     sub_180033B20 @ 0x180033B20 (sub_180033B20.c)
 *     sub_180033C00 @ 0x180033C00 (sub_180033C00.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180033D9C(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rdx
  __int64 v4; // r8
  unsigned int v6; // eax
  int v7; // r8d
  _QWORD v8[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v9[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp-48h] BYREF

  v3 = *(_QWORD **)(a1 + 704);
  if ( v3 == *(_QWORD **)(a1 + 712) )
  {
    sub_180011CC4(v9, "Engine does not have default scene. Engine is probably not initialized.");
    v6 = (unsigned int)sub_180011CC4(
                         v8,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\engine.cpp");
    sub_18006A84C((unsigned int)pExceptionObject, v6, v7, (unsigned int)v9, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_180012C40(a2, v3);
  return v4;
}
