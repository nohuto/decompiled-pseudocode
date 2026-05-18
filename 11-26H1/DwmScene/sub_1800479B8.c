/*
 * XREFs of sub_1800479B8 @ 0x1800479B8
 * Callers:
 *     sub_1800475BC @ 0x1800475BC (sub_1800475BC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180029310 @ 0x180029310 (sub_180029310.c)
 *     sub_180046728 @ 0x180046728 (sub_180046728.c)
 *     sub_180047CD8 @ 0x180047CD8 (sub_180047CD8.c)
 *     sub_180047EF0 @ 0x180047EF0 (sub_180047EF0.c)
 *     sub_180047F40 @ 0x180047F40 (sub_180047F40.c)
 *     sub_18004806C @ 0x18004806C (sub_18004806C.c)
 *     sub_1800481F0 @ 0x1800481F0 (sub_1800481F0.c)
 *     sub_180048324 @ 0x180048324 (sub_180048324.c)
 *     sub_180048454 @ 0x180048454 (sub_180048454.c)
 *     sub_18004861C @ 0x18004861C (sub_18004861C.c)
 *     sub_180048744 @ 0x180048744 (sub_180048744.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800479B8(unsigned int *a1, int a2, int a3, __int64 a4, int a5)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned int v11; // r10d
  int v12; // r9d
  __int64 result; // rax
  _QWORD *v14; // rax
  __int64 v15; // r8
  _QWORD v16[4]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v17[4]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp+7h] BYREF

  if ( !a3 || !a2 )
  {
    sub_180011CC4(v16, "Mesh::ReserveDynamic() -- vertex capacity and index capacity must not be zero");
    v14 = sub_180011CC4(
            v17,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180046728(pExceptionObject, (__int64)v14, v15, (__int64)v16);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  if ( a1[76] == 2 )
  {
    sub_180011CC4(
      v17,
      "Mesh::ReserveDynamic() -- this mesh instance is already dynamic -- ReserveDynamic() must be called only once");
    v6 = sub_180011CC4(
           v16,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180046728(pExceptionObject, (__int64)v6, v7, (__int64)v17);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  if ( (a5 & 0x100) == 0 )
  {
    sub_180011CC4(v16, "Mesh::ReserveDynamic() -- dynamic mesh vertex format must include position");
    v8 = sub_180011CC4(
           v17,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180046728(pExceptionObject, (__int64)v8, v9, (__int64)v16);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  a1[76] = 2;
  sub_180029310((__int64)a1, 4, 1);
  *(_DWORD *)(v10 + 292) = a5;
  *(_DWORD *)(v10 + 296) = a5;
  *(_DWORD *)(v10 + 124) = v11;
  *(_DWORD *)(v10 + 120) = v11;
  *(_DWORD *)(v10 + 116) = v12;
  *(_DWORD *)(v10 + 112) = v12;
  *(_WORD *)(v10 + 308) = 0;
  result = sub_180048324(v10, 0LL, v11);
  if ( (a5 & 0x80u) != 0 )
    result = sub_180047CD8(a1, 0LL, a1[31]);
  if ( (a5 & 1) != 0 )
    result = sub_18004861C(a1, 0LL, a1[31]);
  if ( (a5 & 2) != 0 )
    result = sub_180048744(a1, 0LL, a1[31]);
  if ( (a5 & 0x10000000) != 0 )
  {
    a1[72] = 1;
    result = sub_180047F40(a1, 0LL, a1[29]);
  }
  else if ( (a5 & 0x40) != 0 )
  {
    a1[72] = 0;
    result = sub_180047EF0(a1, 0LL, a1[29]);
  }
  if ( (a5 & 0x10) != 0 )
    result = sub_1800481F0(a1, 0LL, a1[31], 0LL);
  if ( (a5 & 0x20) != 0 )
    result = sub_180048454(a1, 0LL, a1[31], 0LL);
  if ( (a5 & 0x400) != 0 )
    return sub_18004806C(a1, 0LL, 0LL, a1[31]);
  return result;
}
