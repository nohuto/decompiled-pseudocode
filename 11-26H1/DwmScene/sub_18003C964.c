/*
 * XREFs of sub_18003C964 @ 0x18003C964
 * Callers:
 *     sub_18003A924 @ 0x18003A924 (sub_18003A924.c)
 *     sub_18003F8DC @ 0x18003F8DC (sub_18003F8DC.c)
 *     sub_1800407E0 @ 0x1800407E0 (sub_1800407E0.c)
 *     sub_180040D64 @ 0x180040D64 (sub_180040D64.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013644 @ 0x180013644 (sub_180013644.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 *     sub_18002A0A4 @ 0x18002A0A4 (sub_18002A0A4.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18003AD4C @ 0x18003AD4C (sub_18003AD4C.c)
 *     sub_18003B78C @ 0x18003B78C (sub_18003B78C.c)
 *     sub_18003C58C @ 0x18003C58C (sub_18003C58C.c)
 *     sub_18003D3CC @ 0x18003D3CC (sub_18003D3CC.c)
 *     sub_18003D480 @ 0x18003D480 (sub_18003D480.c)
 *     sub_18003D52C @ 0x18003D52C (sub_18003D52C.c)
 *     sub_18003D758 @ 0x18003D758 (sub_18003D758.c)
 *     sub_18003FFD0 @ 0x18003FFD0 (sub_18003FFD0.c)
 *     sub_180040BE4 @ 0x180040BE4 (sub_180040BE4.c)
 */

// Hidden C++ exception states: #wind=7
unsigned __int64 __fastcall sub_18003C964(__int64 *a1, _QWORD **a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // r8
  bool v9; // r15
  char v10; // r12
  __int64 *v11; // rax
  __int64 v12; // r14
  __int64 *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  __int64 *v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 result; // rax
  __int64 v19; // rcx
  __int64 v20; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+38h] [rbp-C8h]
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h]
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h]
  __int128 v26; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+70h] [rbp-90h] BYREF
  __int64 v28; // [rsp+78h] [rbp-88h]
  __int64 v29; // [rsp+80h] [rbp-80h] BYREF
  __int64 v30; // [rsp+88h] [rbp-78h]
  __int64 v31; // [rsp+90h] [rbp-70h] BYREF
  __int64 v32; // [rsp+98h] [rbp-68h]
  _QWORD **v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v35[4]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+E8h] [rbp-18h] BYREF

  v33 = a2;
  sub_18003D758();
  sub_180012BF8((__int64)(a1 + 1), &v22);
  if ( !a1[46] )
  {
    sub_180011CC4(
      v35,
      "SceneNode::SetParent() -- Unique ID zero is reserved for root-level nodes -- this node must not be given a parent.");
    v4 = sub_180011CC4(
           &v31,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scenenode.cpp");
    sub_18003A468(pExceptionObject, (__int64)v4, v5, (__int64)v35, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *a2 )
  {
    v6 = sub_180012C40(&v29, a2);
    if ( (unsigned __int8)sub_18003D3CC(a1, v6) )
    {
      sub_180011CC4(
        v35,
        "SceneNode::SetParent() -- A node's parent cannot be set to node that is within the node's own tree (cyclic graph prohibited).");
      v7 = sub_180011CC4(
             &v31,
             "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scenenode.cpp");
      sub_18003A468(pExceptionObject, (__int64)v7, v8, (__int64)v35, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
  }
  sub_180013644((__int64)a1, &v29);
  sub_18001367C((__int64)a1, &v27);
  v26 = 0LL;
  v9 = 0;
  v10 = 0;
  if ( v29 )
  {
    v9 = *a2 == 0LL;
  }
  else
  {
    if ( !*a2 )
      goto LABEL_12;
    v10 = 1;
  }
  if ( v29 )
    sub_18003C58C(v29, &v22);
LABEL_12:
  if ( *a2 )
  {
    sub_18003AD4C(*a2, &v22);
    v11 = (__int64 *)sub_18001367C((__int64)*a2, &v20);
    sub_180011F5C(&v26, v11);
    if ( v21 )
      sub_180010EC8(v21);
  }
  sub_18002A0A4(a1 + 7, a2);
  v12 = v26;
  if ( v27 != (_QWORD)v26 )
  {
    sub_18003D52C(a1);
    sub_180012C40(&v20, &v22);
    while ( v20 )
    {
      sub_18002A0A4((__int64 *)(v20 + 72), &v26);
      v13 = sub_18003B78C(v22, &v24, &v20);
      sub_180011F5C(&v20, v13);
      if ( v25 )
        sub_180010EC8(v25);
    }
    if ( v21 )
      sub_180010EC8(v21);
    sub_18003D480(a1);
  }
  sub_180012C40(&v20, &v22);
  while ( v20 )
  {
    if ( v10 && v12 )
    {
      v14 = sub_180012C40(&v34, &v20);
      sub_180040BE4(v12, v14);
    }
    if ( v9 && v27 )
    {
      v15 = sub_180012C40(v35, &v20);
      sub_18003FFD0(v27, v15);
    }
    v16 = sub_18003B78C(v22, &v31, &v20);
    sub_180011F5C(&v20, v16);
    if ( v32 )
      sub_180010EC8(v32);
  }
  if ( v21 )
    sub_180010EC8(v21);
  v17 = _InterlockedIncrement64(&qword_1801C7C88);
  a1[26] = v17;
  result = a1[27];
  if ( v17 < result )
    v17 = a1[27];
  a1[27] = v17;
  if ( *((_QWORD *)&v26 + 1) )
    result = sub_180010EC8(*((__int64 *)&v26 + 1));
  if ( v28 )
    result = sub_180010EC8(v28);
  if ( v30 )
    result = sub_180010EC8(v30);
  if ( v23 )
    result = sub_180010EC8(v23);
  v19 = (__int64)a2[1];
  if ( v19 )
    return sub_180010EC8(v19);
  return result;
}
