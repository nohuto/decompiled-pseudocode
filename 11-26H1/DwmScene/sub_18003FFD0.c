/*
 * XREFs of sub_18003FFD0 @ 0x18003FFD0
 * Callers:
 *     sub_18003C964 @ 0x18003C964 (sub_18003C964.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18003E6E8 @ 0x18003E6E8 (sub_18003E6E8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18003FFD0(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // rcx
  _QWORD *v7; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v8[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v9[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-48h] BYREF

  v7 = a2;
  if ( !*a2 )
  {
    sub_180011CC4(v9, "Scene::DeregisterNode() - node must not be null");
    v3 = sub_180011CC4(
           v8,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003A468(pExceptionObject, (__int64)v3, v4, (__int64)v9, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v7 = *(_QWORD **)(*a2 + 368LL);
  result = sub_18003E6E8((_QWORD *)(a1 + 120), (__int64)&v7);
  v6 = a2[1];
  if ( v6 )
    return sub_180010EC8(v6);
  return result;
}
