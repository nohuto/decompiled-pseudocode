/*
 * XREFs of sub_1800407E0 @ 0x1800407E0
 * Callers:
 *     sub_180041100 @ 0x180041100 (sub_180041100.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013644 @ 0x180013644 (sub_180013644.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_180038908 @ 0x180038908 (sub_180038908.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18003C964 @ 0x18003C964 (sub_18003C964.c)
 *     sub_18004048C @ 0x18004048C (sub_18004048C.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800407E0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r14
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 *v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // r8
  volatile __int32 *v18; // rbx
  __int64 v19; // r14
  _QWORD *v20; // rax
  __int64 *v21; // r8
  __int64 v22; // rdx
  __int64 result; // rax
  _QWORD *v24; // rax
  __int64 *v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v29[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+68h] [rbp-98h]
  __int64 *v32; // [rsp+80h] [rbp-80h]
  _QWORD *v33; // [rsp+88h] [rbp-78h]
  __int64 v34; // [rsp+90h] [rbp-70h] BYREF
  __int64 v35; // [rsp+98h] [rbp-68h]
  _QWORD pExceptionObject[7]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v37[7]; // [rsp+E8h] [rbp-18h] BYREF

  v32 = a2;
  v33 = a3;
  if ( !*a2 )
  {
    sub_180011CC4(&v34, "Scene::InsertNode() - node must not be null");
    v6 = sub_180011CC4(
           &v30,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003A468(pExceptionObject, (__int64)v6, v7, (__int64)&v34, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( !*a3 )
  {
    sub_180011CC4(
      &v34,
      "Scene::InsertNode() - new parent must not be null (to remove a node from the scene graph use RemoveNode() instead");
    v8 = sub_180011CC4(
           &v30,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003A468(pExceptionObject, (__int64)v8, v9, (__int64)&v34, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v10 = *(_QWORD *)sub_18001367C(*a2, &v30);
  if ( v31 )
    sub_180010EC8(v31);
  if ( v10 )
  {
    sub_180011CC4(
      &v34,
      "Scene::InsertNode() - node must not be already attached to a scene (to insert this node into the parents scene use"
      " RemoveNode() first");
    v11 = sub_180011CC4(
            &v30,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003A468(pExceptionObject, (__int64)v11, v12, (__int64)&v34, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v13 = sub_180012C40(v29, a2);
  sub_18004048C(a1, &v30, v13);
  v14 = sub_180012C40(&v28, a3);
  sub_18004048C(a1, &v34, v14);
  if ( v30 )
  {
    sub_180011CC4(pExceptionObject, "Scene::InsertNode() - the node must not already be in a layer.");
    v16 = sub_180011CC4(
            v29,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003A468(v37, (__int64)v16, v17, (__int64)pExceptionObject, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v37;
  }
  sub_180029EF8(a1 + 16, v15);
  if ( v34 )
  {
    v18 = (volatile __int32 *)(v34 + 76);
    v28 = v34 + 76;
    while ( _InterlockedExchange(v18, 1) )
      ;
    v19 = *sub_180013644(*a2, v29);
    if ( v29[1] )
      sub_180010EC8(v29[1]);
    if ( v19 )
    {
      *(_OWORD *)v29 = 0LL;
      sub_18003C964((__int64 *)*a2, (_QWORD **)v29);
    }
    v20 = sub_180012C40(v29, a3);
    sub_18003C964(v21, (_QWORD **)v20);
    result = sub_180038908(v18, v22, 3);
  }
  else
  {
    v24 = sub_180012C40(v29, a3);
    result = sub_18003C964(v25, (_QWORD **)v24);
  }
  if ( v35 )
    result = sub_180010EC8(v35);
  if ( v31 )
    result = sub_180010EC8(v31);
  v26 = a2[1];
  if ( v26 )
    result = sub_180010EC8(v26);
  v27 = a3[1];
  if ( v27 )
    return sub_180010EC8(v27);
  return result;
}
