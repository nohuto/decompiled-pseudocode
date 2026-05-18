/*
 * XREFs of sub_18003AFB0 @ 0x18003AFB0
 * Callers:
 *     sub_180013A30 @ 0x180013A30 (sub_180013A30.c)
 *     sub_180015E60 @ 0x180015E60 (sub_180015E60.c)
 *     sub_18003AFB0 @ 0x18003AFB0 (sub_18003AFB0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _o___std_type_info_name @ 0x18000CD1E (_o___std_type_info_name.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013644 @ 0x180013644 (sub_180013644.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 *     sub_1800143E4 @ 0x1800143E4 (sub_1800143E4.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18001C928 @ 0x18001C928 (sub_18001C928.c)
 *     sub_18001EA08 @ 0x18001EA08 (sub_18001EA08.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18003AB58 @ 0x18003AB58 (sub_18003AB58.c)
 *     sub_18003ADE8 @ 0x18003ADE8 (sub_18003ADE8.c)
 *     sub_18003AFB0 @ 0x18003AFB0 (sub_18003AFB0.c)
 *     sub_18003CDEC @ 0x18003CDEC (sub_18003CDEC.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 *     sub_18003F6D8 @ 0x18003F6D8 (sub_18003F6D8.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=11
__int64 *__fastcall sub_18003AFB0(__int64 a1, __int64 *a2, unsigned int a3, __int64 *a4)
{
  __int64 *v8; // rax
  __int64 v9; // r10
  __int64 *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r10
  _QWORD *v16; // r14
  _QWORD *v17; // r12
  _QWORD *v18; // rax
  void (__fastcall *v19)(__int64, _OWORD *, __int64 *, _QWORD *); // r10
  __int64 v20; // r11
  __int64 v21; // rbx
  _BYTE *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  _QWORD *v28; // rax
  __int64 v29; // r8
  __int64 v30; // r14
  __int64 v31; // rbx
  _QWORD *v32; // rax
  __int64 v33; // r10
  __int64 v34; // rcx
  __int64 v36; // [rsp+30h] [rbp-D0h] BYREF
  int v37; // [rsp+38h] [rbp-C8h]
  int v38; // [rsp+40h] [rbp-C0h]
  __int64 v39; // [rsp+50h] [rbp-B0h] BYREF
  int v40; // [rsp+58h] [rbp-A8h]
  __int64 v41; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+68h] [rbp-98h]
  __int64 v43; // [rsp+70h] [rbp-90h] BYREF
  __int64 v44; // [rsp+78h] [rbp-88h]
  _QWORD v45[6]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v46[4]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v47[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v49[7]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v50[4]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v51[32]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v52[32]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v53[32]; // [rsp+1C0h] [rbp+C0h] BYREF

  v45[4] = a2;
  v45[5] = a4;
  v38 = 0;
  sub_18003D718(a1);
  if ( !*a4 )
  {
    v8 = sub_180013644(a1, &v43);
    sub_180011F5C(a4, v8);
    if ( v44 )
      sub_180010EC8(v44);
  }
  sub_18001367C(a1, &v43);
  sub_18001367C(*a4, &v41);
  v9 = v41;
  if ( !v41 )
  {
    v10 = (__int64 *)sub_18001367C(a1, v47);
    sub_180011F5C(&v41, v10);
    if ( *((_QWORD *)&v47[0] + 1) )
      sub_180010EC8(*((__int64 *)&v47[0] + 1));
    v9 = v41;
  }
  if ( *(_QWORD *)(v9 + 104) != *(_QWORD *)(v43 + 104) )
  {
    sub_180011CC4(v47, "SceneNode::Clone() -- source and target scenes must belong to the same engine");
    v11 = sub_180011CC4(
            v45,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scenenode.cpp");
    sub_18003A468(pExceptionObject, (__int64)v11, v12, (__int64)v47, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v13 = sub_180012C40(v47, a4);
  sub_18003F6D8(v15, a2, v14, v13);
  v38 = 1;
  *(_QWORD *)(*a2 + 448) = *(_QWORD *)(a1 + 448);
  sub_18003AB58((__int64 *)(*a2 + 432), (__int64 *)(a1 + 432));
  sub_1800143E4(*a2 + 400, a1 + 400);
  v39 = *(_QWORD *)(a1 + 172);
  v40 = *(_DWORD *)(a1 + 180);
  v47[0] = *(_OWORD *)(a1 + 156);
  v36 = *(_QWORD *)(a1 + 144);
  v37 = *(_DWORD *)(a1 + 152);
  sub_18003CDEC(*a2, &v36, v47, &v39);
  if ( (a3 & 2) != 0 )
  {
    LODWORD(v36) = a3;
    sub_18003D718(a1);
    v16 = *(_QWORD **)(a1 + 376);
    v17 = *(_QWORD **)(a1 + 384);
    while ( v16 != v17 )
    {
      v18 = sub_180012C40(v45, a2);
      v19(v20, v47, &v36, v18);
      if ( *(_QWORD *)&v47[0] )
      {
        sub_18003ADE8(*a2, v47);
      }
      else if ( (a3 & 0x10000) == 0 )
      {
        v21 = *v16;
        _RTtypeid(*v16);
        v22 = (_BYTE *)o___std_type_info_name();
        v23 = sub_180011CC4(v50, v22);
        v24 = sub_18001C928((__int64)v51, (__int64)"SceneNode::Clone() -- component type ", v23);
        v25 = sub_18001C87C((__int64)v52, v24, (__int64)" with name ");
        v26 = sub_18001EA08((__int64)v53, v25, v21 + 24);
        v27 = sub_18001C87C((__int64)pExceptionObject, v26, (__int64)" could not be cloned");
        v28 = sub_180011CC4(
                v46,
                "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scenenode.cpp");
        sub_18003A468(v49, (__int64)v28, v29, v27, 1);
        throw (Spectre::Engine::EngineInvalidArgException *)v49;
      }
      if ( *((_QWORD *)&v47[0] + 1) )
        sub_180010EC8(*((__int64 *)&v47[0] + 1));
      v16 += 2;
    }
  }
  if ( (a3 & 1) != 0 )
  {
    sub_18003D718(a1);
    v30 = *(_QWORD *)(a1 + 32);
    v31 = *(_QWORD *)(a1 + 40);
    while ( v30 != v31 )
    {
      v32 = sub_180012C40(v45, a2);
      sub_18003AFB0(v33, v47, a3, v32);
      if ( *((_QWORD *)&v47[0] + 1) )
        sub_180010EC8(*((__int64 *)&v47[0] + 1));
      v30 += 16LL;
    }
  }
  if ( v42 )
    sub_180010EC8(v42);
  if ( v44 )
    sub_180010EC8(v44);
  v34 = a4[1];
  if ( v34 )
    sub_180010EC8(v34);
  return a2;
}
