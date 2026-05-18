/*
 * XREFs of sub_180036FAC @ 0x180036FAC
 * Callers:
 *     sub_180037410 @ 0x180037410 (sub_180037410.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012B20 @ 0x180012B20 (sub_180012B20.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_18001FF74 @ 0x18001FF74 (sub_18001FF74.c)
 *     sub_180020074 @ 0x180020074 (sub_180020074.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_180030C74 @ 0x180030C74 (sub_180030C74.c)
 *     sub_18003197C @ 0x18003197C (sub_18003197C.c)
 *     sub_180033D5C @ 0x180033D5C (sub_180033D5C.c)
 *     sub_1800344BC @ 0x1800344BC (sub_1800344BC.c)
 *     sub_1800349D0 @ 0x1800349D0 (sub_1800349D0.c)
 *     sub_1800414D4 @ 0x1800414D4 (sub_1800414D4.c)
 *     sub_180097D90 @ 0x180097D90 (sub_180097D90.c)
 *     sub_1800D4F08 @ 0x1800D4F08 (sub_1800D4F08.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=24
__int64 __fastcall sub_180036FAC(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int128 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v15; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h]
  __int64 v18; // [rsp+70h] [rbp-90h] BYREF
  __int64 v19; // [rsp+78h] [rbp-88h] BYREF
  __int64 v20; // [rsp+80h] [rbp-80h]
  __int64 v21; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v22[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v23[16]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v24[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v25[4]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v26[8]; // [rsp+110h] [rbp+10h] BYREF

  sub_180029C50((__int64)(a1 + 1), (__int64)v23);
  sub_180029C50(*a2 + 16, (__int64)v22);
  sub_1800344BC(v4, &v14, a2);
  if ( (_QWORD)v14 )
    sub_1800D4F08();
  if ( *((_QWORD *)&v14 + 1) )
    sub_180010EC8(*((__int64 *)&v14 + 1));
  v5 = sub_180012C40(&v15, a1 + 58);
  sub_18001FF74(
    v26,
    v5,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    750,
    (__int64)"UpdateScene",
    (__int64)"PreUpdateScene");
  sub_180011CC4(v25, "PreUpdateScene");
  v6 = sub_180033D5C((__int64)a1, &v16);
  sub_1800162D0(&v14, v6);
  sub_180030C74(&v19, (__int64)&v14);
  if ( *((_QWORD *)&v14 + 1) )
    sub_180010F00(*((volatile signed __int32 **)&v14 + 1));
  if ( v17 )
    sub_180010EC8(v17);
  sub_1800129D0((__int64)v25);
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*a1 + 96LL))(a1, a2);
  sub_18003197C((__int64)&v19);
  sub_180020074((__int64)v26);
  v7 = sub_180012C40(&v16, a1 + 58);
  sub_18001FF74(
    v24,
    v7,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    765,
    (__int64)"UpdateScene",
    (__int64)"kSpectreRenderCB_PreSceneUpdate");
  sub_180011CC4(v26, "kSpectreRenderCB_PreSceneUpdate");
  v8 = sub_180033D5C((__int64)a1, &v19);
  sub_1800162D0(&v14, v8);
  sub_180030C74(v25, (__int64)&v14);
  if ( *((_QWORD *)&v14 + 1) )
    sub_180010F00(*((volatile signed __int32 **)&v14 + 1));
  if ( v20 )
    sub_180010EC8(v20);
  sub_1800129D0((__int64)v26);
  v16 = a1[121];
  LODWORD(v17) = 1;
  sub_180012B20(&v18);
  sub_180097D90(v16, &v16);
  v15 = 0LL;
  v14 = 0LL;
  sub_1800349D0((__int64)a1, 1u, &v14, &v15);
  sub_18003197C((__int64)v25);
  sub_180020074((__int64)v24);
  v9 = sub_180012C40(&v19, a1 + 58);
  sub_18001FF74(
    v24,
    v9,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    771,
    (__int64)"UpdateScene",
    (__int64)"Update Scene");
  sub_180011CC4(v26, "Update Scene");
  v10 = sub_180033D5C((__int64)a1, &v16);
  sub_1800162D0(&v15, v10);
  sub_180030C74(v25, (__int64)&v15);
  if ( *((_QWORD *)&v15 + 1) )
    sub_180010F00(*((volatile signed __int32 **)&v15 + 1));
  if ( v17 )
    sub_180010EC8(v17);
  sub_1800129D0((__int64)v26);
  sub_1800414D4(*a2, a1 + 46);
  sub_18003197C((__int64)v25);
  sub_180020074((__int64)v24);
  v11 = sub_180012C40(&v19, a1 + 58);
  sub_18001FF74(
    v24,
    v11,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    777,
    (__int64)"UpdateScene",
    (__int64)"kSpectreRenderCB_PostSceneUpdate");
  sub_180011CC4(v26, "kSpectreRenderCB_PostSceneUpdate");
  v12 = sub_180033D5C((__int64)a1, &v16);
  sub_1800162D0(&v15, v12);
  sub_180030C74(v25, (__int64)&v15);
  if ( *((_QWORD *)&v15 + 1) )
    sub_180010F00(*((volatile signed __int32 **)&v15 + 1));
  if ( v17 )
    sub_180010EC8(v17);
  sub_1800129D0((__int64)v26);
  v19 = a1[121];
  LODWORD(v20) = 2;
  sub_180012B20(&v21);
  sub_180097D90(v19, &v19);
  v15 = 0LL;
  v14 = 0LL;
  sub_1800349D0((__int64)a1, 2u, &v14, &v15);
  sub_18003197C((__int64)v25);
  sub_180020074((__int64)v24);
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*a1 + 104LL))(a1, a2);
  sub_180011E54((__int64)v22);
  return sub_180011E54((__int64)v23);
}
