/*
 * XREFs of sub_180040570 @ 0x180040570
 * Callers:
 *     sub_180013A30 @ 0x180013A30 (sub_180013A30.c)
 *     sub_180015E60 @ 0x180015E60 (sub_180015E60.c)
 *     sub_180018DA0 @ 0x180018DA0 (sub_180018DA0.c)
 *     sub_18001C3C0 @ 0x18001C3C0 (sub_18001C3C0.c)
 *     sub_18003F830 @ 0x18003F830 (sub_18003F830.c)
 *     sub_180063230 @ 0x180063230 (sub_180063230.c)
 *     sub_18006904C @ 0x18006904C (sub_18006904C.c)
 *     sub_18006DE14 @ 0x18006DE14 (sub_18006DE14.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18001C928 @ 0x18001C928 (sub_18001C928.c)
 *     sub_180029E54 @ 0x180029E54 (sub_180029E54.c)
 *     sub_18002D818 @ 0x18002D818 (sub_18002D818.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_1800403B8 @ 0x1800403B8 (sub_1800403B8.c)
 *     sub_18004068C @ 0x18004068C (sub_18004068C.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180040570(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rax
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h]
  _QWORD v15[4]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v16[5]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v18[4]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v19[32]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v20[32]; // [rsp+110h] [rbp+10h] BYREF

  v16[4] = a3;
  sub_180029E54(a1 + 16);
  v6 = sub_180013440(v15, a3);
  sub_1800403B8(a1, &v13, (__int64)v6);
  if ( !v13 )
  {
    v8 = sub_18002D818(v18, a3);
    v9 = sub_18001C928((__int64)v19, (__int64)"Scene::GetRootNode() - layer ", v8);
    v10 = sub_18001C87C((__int64)v20, v9, (__int64)" not found");
    v11 = sub_180011CC4(
            v16,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003A468(pExceptionObject, (__int64)v11, v12, v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_18004068C(v13, a2);
  if ( v14 )
    sub_180010EC8(v14);
  sub_180014244(a3);
  return a2;
}
