/*
 * XREFs of sub_1800484B0 @ 0x1800484B0
 * Callers:
 *     sub_180014A50 @ 0x180014A50 (sub_180014A50.c)
 *     sub_180085798 @ 0x180085798 (sub_180085798.c)
 *     sub_180085950 @ 0x180085950 (sub_180085950.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800484B0(__int64 a1, int a2)
{
  unsigned int v2; // eax
  int v3; // r8d
  _QWORD v4[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v5[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  if ( *(_BYTE *)(a1 + 310) )
  {
    sub_180011CC4(v5, "Mesh::SetTopology() -- Modification of a mesh that while it is mapped is not supported.");
    v2 = (unsigned int)sub_180011CC4(
                         v4,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_18006A84C((unsigned int)pExceptionObject, v2, v3, (unsigned int)v5, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 300) = a2;
}
