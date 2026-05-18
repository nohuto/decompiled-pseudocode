/*
 * XREFs of sub_180035A5C @ 0x180035A5C
 * Callers:
 *     sub_1800553F4 @ 0x1800553F4 (sub_1800553F4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012B20 @ 0x180012B20 (sub_180012B20.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_18001FF74 @ 0x18001FF74 (sub_18001FF74.c)
 *     sub_180020074 @ 0x180020074 (sub_180020074.c)
 *     sub_180030C74 @ 0x180030C74 (sub_180030C74.c)
 *     sub_18003197C @ 0x18003197C (sub_18003197C.c)
 *     sub_180033D5C @ 0x180033D5C (sub_180033D5C.c)
 *     sub_1800349D0 @ 0x1800349D0 (sub_1800349D0.c)
 *     sub_18007E34C @ 0x18007E34C (sub_18007E34C.c)
 *     sub_180097D90 @ 0x180097D90 (sub_180097D90.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall sub_180035A5C(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v8; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // r9
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // r9
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v24; // [rsp+48h] [rbp-B8h]
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v29; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h] BYREF
  __int64 v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h] BYREF
  __int64 v33; // [rsp+90h] [rbp-70h]
  __int64 v34[3]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v35; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-48h]
  _BYTE v37[8]; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v38; // [rsp+C8h] [rbp-38h]
  _QWORD v39[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v40[4]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v41[8]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v42[4]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v43[4]; // [rsp+190h] [rbp+90h] BYREF

  v8 = a1 + 58;
  v9 = sub_180012C40(&v28, a1 + 58);
  sub_18001FF74(
    v41,
    v9,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1017,
    (__int64)"RenderContent",
    (__int64)"RenderContent");
  sub_180011CC4(v43, "RenderContent");
  v10 = sub_180033D5C((__int64)a1, &v35);
  sub_1800162D0(&v28, v10);
  sub_180030C74(v40, (__int64)&v28);
  if ( v29 )
    sub_180010F00(v29);
  if ( v36 )
    sub_180010EC8(v36);
  sub_1800129D0((__int64)v43);
  v11 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a4 + 376LL))(*a4, v37);
  sub_180012A94(v11, &v28);
  if ( v38 )
    sub_180010F00(v38);
  if ( v28 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28) )
  {
    v12 = sub_180012C40(&v23, v8);
    sub_18001FF74(
      v39,
      v12,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
      1025,
      (__int64)"RenderContent",
      (__int64)"kSpectreRenderCB_PreRender");
    sub_180011CC4(v42, "kSpectreRenderCB_PreRender");
    v13 = sub_180033D5C((__int64)a1, &v32);
    sub_1800162D0(&v23, v13);
    sub_180030C74(v34, (__int64)&v23);
    if ( v24 )
      sub_180010F00(v24);
    if ( v33 )
      sub_180010EC8(v33);
    sub_1800129D0((__int64)v42);
    v25 = a1[121];
    v26 = 3;
    sub_180012B20(&v27);
    sub_180097D90(v25, &v25);
    sub_180012C40(&v30, a4);
    v14 = sub_180012C40(&v25, &v28);
    sub_1800349D0((__int64)a1, 3u, v14, v15);
    sub_18003197C((__int64)v34);
    sub_180020074((__int64)v39);
    v16 = sub_180012C40(&v25, v8);
    sub_18001FF74(
      v39,
      v16,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
      1030,
      (__int64)"RenderContent",
      (__int64)"RenderScene");
    sub_180011CC4(v42, "RenderScene");
    v17 = sub_180033D5C((__int64)a1, &v30);
    sub_1800162D0(&v23, v17);
    sub_180030C74(v34, (__int64)&v23);
    if ( v24 )
      sub_180010F00(v24);
    if ( v31 )
      sub_180010EC8(v31);
    sub_1800129D0((__int64)v42);
    (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64 *, _QWORD *))(*a1 + 128LL))(a1, a2, a3, &v28, a4);
    sub_18003197C((__int64)v34);
    sub_180020074((__int64)v39);
    v18 = sub_180012C40(&v25, v8);
    sub_18001FF74(
      v39,
      v18,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
      1036,
      (__int64)"RenderContent",
      (__int64)"kSpectreRenderCB_EndFrame");
    sub_180011CC4(v42, "kSpectreRenderCB_EndFrame");
    v19 = sub_180033D5C((__int64)a1, &v30);
    sub_1800162D0(&v23, v19);
    sub_180030C74(v34, (__int64)&v23);
    if ( v24 )
      sub_180010F00(v24);
    if ( v31 )
      sub_180010EC8(v31);
    sub_1800129D0((__int64)v42);
    v25 = a1[121];
    v26 = 5;
    sub_180012B20(&v27);
    sub_180097D90(v25, &v25);
    sub_180012C40(&v25, a4);
    v20 = sub_180012C40(&v32, &v28);
    sub_1800349D0((__int64)a1, 5u, v20, v21);
    sub_18003197C((__int64)v34);
    sub_180020074((__int64)v39);
  }
  if ( v29 )
    sub_180010EC8((__int64)v29);
  sub_18007E34C(*(_QWORD *)(a1[64] + 18648LL));
  sub_18003197C((__int64)v40);
  return sub_180020074((__int64)v41);
}
