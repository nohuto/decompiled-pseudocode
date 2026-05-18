/*
 * XREFs of sub_18004DE74 @ 0x18004DE74
 * Callers:
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 *     sub_180078BE0 @ 0x180078BE0 (sub_180078BE0.c)
 *     sub_180078F80 @ 0x180078F80 (sub_180078F80.c)
 *     sub_18007A030 @ 0x18007A030 (sub_18007A030.c)
 *     sub_1800926D0 @ 0x1800926D0 (sub_1800926D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18001C968 @ 0x18001C968 (sub_18001C968.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18004232C @ 0x18004232C (sub_18004232C.c)
 *     sub_18004C408 @ 0x18004C408 (sub_18004C408.c)
 *     sub_18004CBA4 @ 0x18004CBA4 (sub_18004CBA4.c)
 *     sub_18004EAF0 @ 0x18004EAF0 (sub_18004EAF0.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall sub_18004DE74(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h]
  _QWORD *v21; // [rsp+48h] [rbp-B8h]
  _QWORD *v22; // [rsp+50h] [rbp-B0h]
  __int64 v23; // [rsp+58h] [rbp-A8h]
  _QWORD v24[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25[4]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v27[7]; // [rsp+D8h] [rbp-28h] BYREF

  v21 = a2;
  v23 = a3;
  v22 = a4;
  if ( !*(_QWORD *)(a3 + 16) )
  {
    sub_180011CC4(v24, "ShaderManager::CreateShaderFamily() -- shader family must have a non-empty name");
    v8 = sub_180011CC4(
           v25,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_18003A468(pExceptionObject, (__int64)v8, v9, (__int64)v24, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v10 = sub_1800181BC(v24, a3);
  if ( (unsigned __int8)sub_18004EAF0(a1, v10) )
  {
    v11 = sub_18001C968(v25, (__int64)"ShaderManager::CreateShaderFamily() -- shader family with name '", a3);
    v12 = sub_18001C87C((__int64)pExceptionObject, (__int64)v11, (__int64)"' already exists");
    v13 = sub_180011CC4(
            v24,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_18003A468(v27, (__int64)v13, v14, v12, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v27;
  }
  v15 = sub_18004232C(a1, &v19);
  sub_18004CBA4(a2, a3, (__int64)v15, a4);
  if ( v20 )
    sub_180010EC8(v20);
  v16 = sub_18004C408((__int64 *)(a1 + 18560), (__int64)&v19, a3);
  sub_180013540((__int64 *)(*(_QWORD *)v16 + 64LL), a2);
  sub_1800129D0(a3);
  v17 = a4[1];
  if ( v17 )
    sub_180010EC8(v17);
  return a2;
}
