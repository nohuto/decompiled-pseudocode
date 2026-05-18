/*
 * XREFs of sub_180047F8C @ 0x180047F8C
 * Callers:
 *     sub_180047660 @ 0x180047660 (sub_180047660.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180046728 @ 0x180046728 (sub_180046728.c)
 *     sub_18004806C @ 0x18004806C (sub_18004806C.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180047F8C(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  int v4; // r8d
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD v8[4]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v9[4]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp+Fh] BYREF

  if ( *(_BYTE *)(a1 + 310) )
  {
    sub_180011CC4(
      v9,
      "Mesh::SetJointData() -- Modifying mesh buffers apart from MappedResource while it is mapped is not supported.");
    v3 = (unsigned int)sub_180011CC4(
                         v8,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_18006A84C((unsigned int)pExceptionObject, v3, v4, (unsigned int)v9, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !a2 || !a3 )
  {
    sub_180011CC4(
      v8,
      "Mesh::SetJointData() -- jointWeightArray and jointIndexArray must be non-null and contain N elements, where N=Mesh"
      "::GetVertexCount()");
    v6 = sub_180011CC4(
           v9,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180046728(pExceptionObject, (__int64)v6, v7, (__int64)v8);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  return sub_18004806C(a1, a2, a3, *(unsigned int *)(a1 + 120));
}
