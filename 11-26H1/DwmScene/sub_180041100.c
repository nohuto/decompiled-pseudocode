/*
 * XREFs of sub_180041100 @ 0x180041100
 * Callers:
 *     sub_180013A30 @ 0x180013A30 (sub_180013A30.c)
 *     sub_180015E60 @ 0x180015E60 (sub_180015E60.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_1800407E0 @ 0x1800407E0 (sub_1800407E0.c)
 *     sub_180040D64 @ 0x180040D64 (sub_180040D64.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180041100(__int64 a1, __int64 *a2, __int64 *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 *v11; // r11
  __int64 v12; // r14
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 *v16; // rax
  _QWORD *v17; // r8
  __int64 result; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-69h] BYREF
  __int64 v22; // [rsp+38h] [rbp-61h]
  _QWORD v23[6]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v24; // [rsp+70h] [rbp-29h] BYREF
  __int64 v25; // [rsp+78h] [rbp-21h]
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp-9h] BYREF

  v23[4] = a2;
  v23[5] = a3;
  if ( !*a2 )
  {
    sub_180011CC4(&v24, "Scene::SetNodeParent() - node must not be null");
    v6 = sub_180011CC4(
           v23,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003A468(pExceptionObject, (__int64)v6, v7, (__int64)&v24, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( !*a3 )
  {
    sub_180011CC4(
      &v24,
      "Scene::SetNodeParent() - new parent must not be null  (to remove a node from the scene graph use RemoveNode() instead");
    v8 = sub_180011CC4(
           v23,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003A468(pExceptionObject, (__int64)v8, v9, (__int64)&v24, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_18001367C(*a3, &v24);
  v10 = *(_QWORD *)sub_18001367C(*a2, &v21);
  v12 = *v11;
  if ( v22 )
    sub_180010EC8(v22);
  if ( v25 )
    sub_180010EC8(v25);
  if ( v10 != v12 )
  {
    sub_180011CC4(&v24, "Scene::SetNodeParent() - both nodes must belong to the same scene");
    v13 = sub_180011CC4(
            v23,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003A468(pExceptionObject, (__int64)v13, v14, (__int64)&v24, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v15 = sub_180012C40(&v24, a2);
  sub_180040D64(a1, v15);
  sub_180012C40(&v24, a3);
  v16 = sub_180012C40(v23, a2);
  result = sub_1800407E0(a1, v16, v17);
  v19 = a2[1];
  if ( v19 )
    result = sub_180010EC8(v19);
  v20 = a3[1];
  if ( v20 )
    return sub_180010EC8(v20);
  return result;
}
