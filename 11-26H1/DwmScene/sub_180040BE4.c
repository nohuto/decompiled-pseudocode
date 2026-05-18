/*
 * XREFs of sub_180040BE4 @ 0x180040BE4
 * Callers:
 *     sub_18003C964 @ 0x18003C964 (sub_18003C964.c)
 *     sub_18003FC1C @ 0x18003FC1C (sub_18003FC1C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18003EC38 @ 0x18003EC38 (sub_18003EC38.c)
 *     sub_180041D60 @ 0x180041D60 (sub_180041D60.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180040BE4(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11[2]; // [rsp+30h] [rbp-69h] BYREF
  volatile signed __int32 *v12; // [rsp+40h] [rbp-59h]
  _QWORD *v13; // [rsp+50h] [rbp-49h]
  __int64 v14; // [rsp+58h] [rbp-41h] BYREF
  volatile signed __int32 *v15; // [rsp+60h] [rbp-39h]
  _QWORD v16[4]; // [rsp+78h] [rbp-21h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-1h] BYREF

  v13 = a2;
  v4 = *a2;
  if ( !*a2 )
  {
    sub_180011CC4(&v14, "Scene::RegisterNode() - node must not be null");
    v5 = sub_180011CC4(
           v11,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003A468(pExceptionObject, (__int64)v5, v6, (__int64)&v14, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *(_QWORD *)(v4 + 368) )
  {
    v16[0] = *(_QWORD *)(v4 + 368);
    if ( *(_QWORD *)sub_180041D60(a1 + 120, &v14, v16) != *(_QWORD *)(a1 + 128) )
    {
      sub_180011CC4(v16, "Scene::RegisterNode() - node id already exists");
      v7 = sub_180011CC4(
             v11,
             "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
      sub_18003A468(pExceptionObject, (__int64)v7, v8, (__int64)v16, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
  }
  sub_1800162D0(&v14, a2);
  v11[0] = *(_QWORD *)(*a2 + 368LL);
  v11[1] = v14;
  v12 = v15;
  v14 = 0LL;
  v15 = 0LL;
  result = sub_18003EC38((float *)(a1 + 120), (__int64)v16, v11);
  if ( v12 )
    result = sub_180010F00(v12);
  v10 = a2[1];
  if ( v10 )
    return sub_180010EC8(v10);
  return result;
}
