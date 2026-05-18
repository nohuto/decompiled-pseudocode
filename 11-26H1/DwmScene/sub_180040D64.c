/*
 * XREFs of sub_180040D64 @ 0x180040D64
 * Callers:
 *     sub_180013A30 @ 0x180013A30 (sub_180013A30.c)
 *     sub_180015CE0 @ 0x180015CE0 (sub_180015CE0.c)
 *     sub_180015E60 @ 0x180015E60 (sub_180015E60.c)
 *     sub_180041100 @ 0x180041100 (sub_180041100.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_180038908 @ 0x180038908 (sub_180038908.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18003C964 @ 0x18003C964 (sub_18003C964.c)
 *     sub_18004048C @ 0x18004048C (sub_18004048C.c)
 *     sub_18004068C @ 0x18004068C (sub_18004068C.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180040D64(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 *v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 **v10; // rax
  __int64 v11; // rdx
  __int64 *v12; // r14
  __int64 *v13; // r15
  _QWORD *v14; // rax
  __int64 v15; // r8
  volatile __int32 *v16; // rbx
  __int64 v17; // rdx
  __int64 result; // rax
  __int64 v19; // rcx
  volatile __int32 *v20; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+38h] [rbp-C8h]
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h]
  _QWORD *v24; // [rsp+60h] [rbp-A0h]
  _OWORD v25[2]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v26[4]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v28[7]; // [rsp+E0h] [rbp-20h] BYREF

  v24 = a2;
  if ( !*a2 )
  {
    sub_180011CC4(v25, "Scene::RemoveNode() - node must not be null");
    v4 = sub_180011CC4(
           &v22,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003A468(pExceptionObject, (__int64)v4, v5, (__int64)v25, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v6 = sub_180012C40(v25, a2);
  sub_18004048C(a1, &v22, v6);
  v7 = v22;
  if ( !v22 )
  {
    sub_180011CC4(pExceptionObject, "Scene::RemoveNode() - node is not in any layer");
    v8 = sub_180011CC4(
           v26,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003A468(v28, (__int64)v8, v9, (__int64)pExceptionObject, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v28;
  }
  v10 = (__int64 **)sub_18004068C(v22, &v20);
  v12 = (__int64 *)*a2;
  v13 = *v10;
  if ( v21 )
    sub_180010EC8(v21);
  if ( v12 == v13 )
  {
    sub_180011CC4(
      v26,
      "Scene::RemoveNode() - the root node of a layer is for internal use by the system and must not be removed");
    v14 = sub_180011CC4(
            pExceptionObject,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003A468(v28, (__int64)v14, v15, (__int64)v26, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v28;
  }
  sub_180029EF8(a1 + 16, v11);
  v16 = (volatile __int32 *)(v7 + 76);
  v20 = v16;
  while ( _InterlockedExchange(v16, 1) )
    ;
  v25[0] = 0LL;
  sub_18003C964((__int64 *)*a2, (_QWORD **)v25);
  result = sub_180038908(v16, v17, 3);
  if ( v23 )
    result = sub_180010EC8(v23);
  v19 = a2[1];
  if ( v19 )
    return sub_180010EC8(v19);
  return result;
}
