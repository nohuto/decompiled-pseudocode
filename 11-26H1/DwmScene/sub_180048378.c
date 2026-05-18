/*
 * XREFs of sub_180048378 @ 0x180048378
 * Callers:
 *     sub_180014A50 @ 0x180014A50 (sub_180014A50.c)
 *     sub_180047660 @ 0x180047660 (sub_180047660.c)
 *     sub_180048850 @ 0x180048850 (sub_180048850.c)
 *     sub_1800488C0 @ 0x1800488C0 (sub_1800488C0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180046728 @ 0x180046728 (sub_180046728.c)
 *     sub_180048454 @ 0x180048454 (sub_180048454.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 */

__int64 __fastcall sub_180048378(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  unsigned int v4; // eax
  int v5; // r8d
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD v9[4]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v10[4]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp+Fh] BYREF

  if ( *(_BYTE *)(a1 + 310) )
  {
    sub_180011CC4(
      v10,
      "Mesh::SetTangents() -- Modifying mesh buffers apart from MappedResource while it is mapped is not supported.");
    v4 = (unsigned int)sub_180011CC4(
                         v9,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_18006A84C((unsigned int)pExceptionObject, v4, v5, (unsigned int)v10, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !a2 )
  {
    sub_180011CC4(
      v9,
      "Mesh::SetTangents() -- tangentArray must be non-null and contain N elements, where N=Mesh::GetVertexCount()");
    v6 = sub_180011CC4(
           v10,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180046728(pExceptionObject, (__int64)v6, v7, (__int64)v9);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  LOBYTE(a4) = a3;
  return sub_180048454(a1, a2, *(unsigned int *)(a1 + 120), a4);
}
