/*
 * XREFs of sub_180035030 @ 0x180035030
 * Callers:
 *     sub_180063CC0 @ 0x180063CC0 (sub_180063CC0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012B20 @ 0x180012B20 (sub_180012B20.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_18001FF74 @ 0x18001FF74 (sub_18001FF74.c)
 *     sub_180020074 @ 0x180020074 (sub_180020074.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_180030C74 @ 0x180030C74 (sub_180030C74.c)
 *     sub_18003197C @ 0x18003197C (sub_18003197C.c)
 *     sub_180033D5C @ 0x180033D5C (sub_180033D5C.c)
 *     sub_1800349D0 @ 0x1800349D0 (sub_1800349D0.c)
 *     sub_180041DBC @ 0x180041DBC (sub_180041DBC.c)
 *     sub_180097D90 @ 0x180097D90 (sub_180097D90.c)
 *     sub_180098AFC @ 0x180098AFC (sub_180098AFC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180035030(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // r8
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v17; // [rsp+48h] [rbp-B8h]
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  int v19; // [rsp+58h] [rbp-A8h]
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+68h] [rbp-98h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h]
  __int64 v23; // [rsp+78h] [rbp-88h] BYREF
  __int64 v24[3]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v25[8]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v26[4]; // [rsp+E0h] [rbp-20h] BYREF

  v7 = sub_180012C40(&v16, (_QWORD *)(a1 + 464));
  sub_18001FF74(
    v25,
    v7,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1511,
    (__int64)"PostRenderScene",
    (__int64)"kSpectreRenderCB_PostRender");
  sub_180011CC4(v26, "kSpectreRenderCB_PostRender");
  v8 = sub_180033D5C(a1, &v21);
  sub_1800162D0(&v16, v8);
  sub_180030C74(v24, (__int64)&v16);
  if ( v17 )
    sub_180010F00(v17);
  if ( v22 )
    sub_180010EC8(v22);
  sub_1800129D0((__int64)v26);
  v18 = *(_QWORD *)(a1 + 968);
  v19 = 4;
  sub_180012B20(&v20);
  sub_180097D90(v18, &v18);
  sub_180012C40(&v23, a4);
  v9 = sub_180012C40(&v18, a3);
  sub_1800349D0(a1, 4u, v9, v10);
  sub_18003197C((__int64)v24);
  sub_180020074((__int64)v25);
  v11 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 184LL))(*a4);
  v12 = *a3;
  sub_180029EF8(v12 + 24, v13);
  result = sub_180041DBC(v11 + 184);
  if ( (_BYTE)result )
    return sub_180098AFC(v11, *(_QWORD *)(v11 + 192), v15, v12 + 272);
  return result;
}
