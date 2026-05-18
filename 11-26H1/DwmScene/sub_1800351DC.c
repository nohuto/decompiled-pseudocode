/*
 * XREFs of sub_1800351DC @ 0x1800351DC
 * Callers:
 *     sub_1800553F4 @ 0x1800553F4 (sub_1800553F4.c)
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
 *     sub_180030C74 @ 0x180030C74 (sub_180030C74.c)
 *     sub_18003197C @ 0x18003197C (sub_18003197C.c)
 *     sub_180033D5C @ 0x180033D5C (sub_180033D5C.c)
 *     sub_1800349D0 @ 0x1800349D0 (sub_1800349D0.c)
 *     sub_180097D90 @ 0x180097D90 (sub_180097D90.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_1800351DC(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v10; // r14
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // r9
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v19; // [rsp+48h] [rbp-B8h]
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h]
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  int v23; // [rsp+68h] [rbp-98h]
  __int64 v24; // [rsp+70h] [rbp-90h] BYREF
  __int64 v25; // [rsp+78h] [rbp-88h] BYREF
  __int64 v26; // [rsp+80h] [rbp-80h]
  _QWORD v27[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v28[4]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v29[8]; // [rsp+F0h] [rbp-10h] BYREF

  v10 = (_QWORD *)(a1 + 464);
  v11 = sub_180012C40(&v18, (_QWORD *)(a1 + 464));
  sub_18001FF74(
    v29,
    v11,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1050,
    (__int64)"PresentFrame",
    (__int64)"PresentFrame");
  sub_180011CC4(v28, "PresentFrame");
  v12 = sub_180033D5C(a1, &v20);
  sub_1800162D0(&v18, v12);
  sub_180030C74(&v22, (__int64)&v18);
  if ( v19 )
    sub_180010F00(v19);
  if ( v21 )
    sub_180010EC8(v21);
  sub_1800129D0((__int64)v28);
  (*(void (__fastcall **)(_QWORD, _QWORD *, __int64, __int64, __int64))(*(_QWORD *)*a2 + 216LL))(*a2, a3, a4, a5, a6);
  sub_18003197C((__int64)&v22);
  sub_180020074((__int64)v29);
  v13 = sub_180012C40(&v20, v10);
  sub_18001FF74(
    v27,
    v13,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1056,
    (__int64)"PresentFrame",
    (__int64)"kSpectreRenderCB_PostPresent");
  sub_180011CC4(v29, "kSpectreRenderCB_PostPresent");
  v14 = sub_180033D5C(a1, &v25);
  sub_1800162D0(&v18, v14);
  sub_180030C74(v28, (__int64)&v18);
  if ( v19 )
    sub_180010F00(v19);
  if ( v26 )
    sub_180010EC8(v26);
  sub_1800129D0((__int64)v29);
  v22 = *(_QWORD *)(a1 + 968);
  v23 = 6;
  sub_180012B20(&v24);
  sub_180097D90(v22, &v22);
  sub_180012C40(&v20, a3);
  v15 = sub_180012C40(&v22, a2);
  sub_1800349D0(a1, 6u, v15, v16);
  sub_18003197C((__int64)v28);
  return sub_180020074((__int64)v27);
}
