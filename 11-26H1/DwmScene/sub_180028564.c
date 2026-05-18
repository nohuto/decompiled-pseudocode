/*
 * XREFs of sub_180028564 @ 0x180028564
 * Callers:
 *     sub_1800C1B5C @ 0x1800C1B5C (sub_1800C1B5C.c)
 *     sub_1800C1D80 @ 0x1800C1D80 (sub_1800C1D80.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180054298 @ 0x180054298 (sub_180054298.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_180028564(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // eax
  int v8; // r8d
  _QWORD v9[4]; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD v10[4]; // [rsp+58h] [rbp-80h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-60h] BYREF
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h] BYREF

  result = &retaddr;
  if ( *(float *)&a2 < 0.0 || *((float *)&a2 + 1) < 0.0 )
  {
    sub_180011CC4(v10, "Attempted to set an active size with a negative component");
    v7 = (unsigned int)sub_180011CC4(
                         v9,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\rendertarget.cpp");
    sub_18006A84C((unsigned int)pExceptionObject, v7, v8, (unsigned int)v10, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v5 = *(_QWORD *)(a1 + 96);
  if ( v5 )
    result = (_UNKNOWN **)sub_180054298(v5, a2);
  v6 = *(_QWORD *)(a1 + 112);
  if ( v6 )
    return (_UNKNOWN **)sub_180054298(v6, a2);
  return result;
}
