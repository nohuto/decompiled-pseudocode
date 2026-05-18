/*
 * XREFs of sub_18003FC1C @ 0x18003FC1C
 * Callers:
 *     sub_1800406B0 @ 0x1800406B0 (sub_1800406B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_1800143E4 @ 0x1800143E4 (sub_1800143E4.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18001C928 @ 0x18001C928 (sub_18001C928.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_18002D818 @ 0x18002D818 (sub_18002D818.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18003D758 @ 0x18003D758 (sub_18003D758.c)
 *     sub_18003E584 @ 0x18003E584 (sub_18003E584.c)
 *     sub_18003E5C0 @ 0x18003E5C0 (sub_18003E5C0.c)
 *     sub_18003FF30 @ 0x18003FF30 (sub_18003FF30.c)
 *     sub_1800403B8 @ 0x1800403B8 (sub_1800403B8.c)
 *     sub_180040BE4 @ 0x180040BE4 (sub_180040BE4.c)
 */

// Hidden C++ exception states: #wind=11
_QWORD *__fastcall sub_18003FC1C(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  volatile signed __int32 *v21; // rcx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _QWORD v25[6]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  __int64 v27; // [rsp+78h] [rbp-88h]
  _BYTE v28[32]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v29[4]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v31[32]; // [rsp+108h] [rbp+8h] BYREF

  v25[4] = a2;
  v25[5] = a3;
  sub_180029EF8(a1 + 16, (__int64)a2);
  v6 = sub_180013440(v25, a3);
  v7 = *(_QWORD *)sub_1800403B8(a1, &v26, v6);
  if ( v27 )
    sub_180010EC8(v27);
  if ( v7 )
  {
    v8 = sub_18002D818(v29, a3);
    v9 = sub_18001C928((__int64)&v26, (__int64)"Scene::CreateLayer() - a layer with ID ", v8);
    v10 = sub_18001C87C((__int64)v31, v9, (__int64)" already exists");
    v11 = sub_180011CC4(
            v25,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003A468(pExceptionObject, (__int64)v11, v12, v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_18003FF30(a1, &v26, &unk_1800FC9A0);
  v13 = sub_18002D818(v29, a3);
  sub_18001C928((__int64)v28, (__int64)"LayerRoot:", v13);
  sub_1800129D0((__int64)v29);
  v14 = v26;
  sub_1800143E4(v26 + 400, (__int64)v28);
  v15 = sub_18001C514(120LL);
  v16 = v15;
  if ( v15 )
  {
    *(_OWORD *)v15 = 0LL;
    *(_DWORD *)(v15 + 8) = 1;
    *(_DWORD *)(v15 + 12) = 1;
    *(_QWORD *)v15 = &std::_Ref_count_obj2<Spectre::Engine::SceneLayer>::`vftable';
    sub_18003E584(v15 + 16, a3, (__int64)&v26);
    v14 = v26;
  }
  else
  {
    v16 = 0LL;
  }
  *a2 = v16 + 16;
  a2[1] = v16;
  sub_18003E5C0((__int64 *)(a1 + 88), (__int64)v25, a3, (__int64)a2);
  v17 = sub_180012C40(v25, a2);
  sub_18003D758(v14);
  v18 = v17[1];
  v19 = 0LL;
  v20 = 0LL;
  if ( v18 )
  {
    v19 = *v17;
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 12));
    v20 = v18;
  }
  *(_QWORD *)(v14 + 88) = v19;
  v21 = *(volatile signed __int32 **)(v14 + 96);
  *(_QWORD *)(v14 + 96) = v20;
  if ( v21 )
    sub_180010F00(v21);
  v22 = v17[1];
  if ( v22 )
    sub_180010EC8(v22);
  v23 = sub_180012C40(v25, &v26);
  sub_180040BE4(a1, v23);
  sub_1800129D0((__int64)v28);
  if ( v27 )
    sub_180010EC8(v27);
  sub_180014244(a3);
  return a2;
}
