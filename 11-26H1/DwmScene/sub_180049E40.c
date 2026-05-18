/*
 * XREFs of sub_180049E40 @ 0x180049E40
 * Callers:
 *     sub_180049D60 @ 0x180049D60 (sub_180049D60.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_180015090 @ 0x180015090 (sub_180015090.c)
 *     sub_18002A0A4 @ 0x18002A0A4 (sub_18002A0A4.c)
 *     sub_180048F34 @ 0x180048F34 (sub_180048F34.c)
 *     sub_18004941C @ 0x18004941C (sub_18004941C.c)
 *     sub_18007AA80 @ 0x18007AA80 (sub_18007AA80.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180049E40(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 result; // rax
  __int64 v17; // rcx
  __int64 v18; // [rsp+38h] [rbp-61h] BYREF
  __int64 v19; // [rsp+40h] [rbp-59h]
  _QWORD *v20; // [rsp+48h] [rbp-51h]
  _QWORD v21[4]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v22[4]; // [rsp+70h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp-9h] BYREF

  v20 = a2;
  v6 = sub_180012C40(&v18, a2);
  sub_18007AA80(a1, v6);
  sub_180015090(&v18, a2);
  if ( (*a3 & 8) != 0 )
  {
    sub_180011CC4(v22, "MeshInstance::CloneInternal() -- material cloning not yet supported (reserved for future use)");
    v7 = sub_180011CC4(
           v21,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\meshinstance.cpp");
    sub_18004941C(pExceptionObject, (__int64)v7, v8, (__int64)v22);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  v9 = v18;
  if ( v18 + 104 != a1 + 104 )
    sub_180048F34(
      (__int64 *)(v18 + 104),
      *(_QWORD *)(a1 + 104),
      0x2E8BA2E8BA2E8BA3LL * ((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) >> 3));
  if ( (*a3 & 4) != 0 )
  {
    sub_180011CC4(v21, "MeshInstance::CloneInternal() -- mesh cloning not yet supported (reserved for future use)");
    v10 = sub_180011CC4(
            v22,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\meshinstance.cpp");
    sub_18004941C(pExceptionObject, (__int64)v10, v11, (__int64)v21);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  sub_180013540((__int64 *)(v9 + 88), (_QWORD *)(a1 + 88));
  if ( (*a3 & 0x10) != 0 )
  {
    sub_180011CC4(
      v21,
      "MeshInstance::CloneInternal() -- skinning controller cloning not yet supported (reserved for future use)");
    v12 = sub_180011CC4(
            v22,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\meshinstance.cpp");
    sub_18004941C(pExceptionObject, (__int64)v12, v13, (__int64)v21);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  sub_18002A0A4((__int64 *)(v9 + 136), (_QWORD *)(a1 + 136));
  if ( (*a3 & 0x20) != 0 )
  {
    sub_180011CC4(
      v21,
      "MeshInstance::CloneInternal() -- morph controller cloning not yet supported (reserved for future use)");
    v14 = sub_180011CC4(
            v22,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\meshinstance.cpp");
    sub_18004941C(pExceptionObject, (__int64)v14, v15, (__int64)v21);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  sub_18002A0A4((__int64 *)(v9 + 152), (_QWORD *)(a1 + 152));
  *(_BYTE *)(v9 + 168) = *(_BYTE *)(a1 + 168);
  *(_DWORD *)(v9 + 172) = *(_DWORD *)(a1 + 172);
  *(_DWORD *)(v9 + 176) = *(_DWORD *)(a1 + 176);
  *(_DWORD *)(v9 + 180) = *(_DWORD *)(a1 + 180);
  result = *(unsigned int *)(a1 + 184);
  *(_DWORD *)(v9 + 184) = result;
  if ( v19 )
    result = sub_180010EC8(v19);
  v17 = a2[1];
  if ( v17 )
    return sub_180010EC8(v17);
  return result;
}
