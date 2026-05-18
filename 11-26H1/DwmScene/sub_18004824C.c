/*
 * XREFs of sub_18004824C @ 0x18004824C
 * Callers:
 *     sub_180014A50 @ 0x180014A50 (sub_180014A50.c)
 *     sub_180047660 @ 0x180047660 (sub_180047660.c)
 *     sub_180085798 @ 0x180085798 (sub_180085798.c)
 *     sub_180085950 @ 0x180085950 (sub_180085950.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180046728 @ 0x180046728 (sub_180046728.c)
 *     sub_180048324 @ 0x180048324 (sub_180048324.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 */

__int64 __fastcall sub_18004824C(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  int v3; // r8d
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD v7[4]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v8[4]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp+Fh] BYREF

  if ( *(_BYTE *)(a1 + 310) )
  {
    sub_180011CC4(
      v8,
      "Mesh::SetPositions() -- Modifying mesh buffers apart from MappedResource while it is mapped is not supported.");
    v2 = (unsigned int)sub_180011CC4(
                         v7,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_18006A84C((unsigned int)pExceptionObject, v2, v3, (unsigned int)v8, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !a2 )
  {
    sub_180011CC4(
      v7,
      "Mesh::SetPositions() -- positionArray must be non-null and contain N elements, where N=Mesh::GetVertexCount()");
    v4 = sub_180011CC4(
           v8,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180046728(pExceptionObject, (__int64)v4, v5, (__int64)v7);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  return sub_180048324(a1, a2, *(unsigned int *)(a1 + 120));
}
