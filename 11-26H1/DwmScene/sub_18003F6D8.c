/*
 * XREFs of sub_18003F6D8 @ 0x18003F6D8
 * Callers:
 *     sub_1800159C0 @ 0x1800159C0 (sub_1800159C0.c)
 *     sub_180018DA0 @ 0x180018DA0 (sub_180018DA0.c)
 *     sub_18003AFB0 @ 0x18003AFB0 (sub_18003AFB0.c)
 *     sub_18003F830 @ 0x18003F830 (sub_18003F830.c)
 *     sub_180063230 @ 0x180063230 (sub_180063230.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18003F5D0 @ 0x18003F5D0 (sub_18003F5D0.c)
 *     sub_18004048C @ 0x18004048C (sub_18004048C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18003F6D8(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v5; // esi
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD v16[4]; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v17[4]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v18; // [rsp+70h] [rbp-29h] BYREF
  __int64 v19; // [rsp+78h] [rbp-21h]
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp-9h] BYREF

  v5 = a3;
  v16[3] = a4;
  if ( !a3 )
  {
    sub_180011CC4(&v18, "Scene::AddNode() -- Unique ID zero is reserved for root-level layer nodes.");
    v8 = sub_180011CC4(
           v17,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003A468(pExceptionObject, (__int64)v8, v9, (__int64)&v18, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( !*a4 )
  {
    sub_180011CC4(&v18, "Scene::AddNode() -- A non-null parent must be specified.");
    v10 = sub_180011CC4(
            v17,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003A468(pExceptionObject, (__int64)v10, v11, (__int64)&v18, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v12 = sub_180012C40(v17, a4);
  sub_18004048C(a1, &v18, v12);
  v13 = sub_180012C40(v16, &v18);
  sub_18003F5D0(a1, a2, v5, *(_QWORD *)(*a4 + 368LL), v13);
  if ( v19 )
    sub_180010EC8(v19);
  v14 = a4[1];
  if ( v14 )
    sub_180010EC8(v14);
  return a2;
}
