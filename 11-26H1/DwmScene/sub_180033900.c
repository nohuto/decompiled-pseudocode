/*
 * XREFs of sub_180033900 @ 0x180033900
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_18001FF74 @ 0x18001FF74 (sub_18001FF74.c)
 *     sub_180020074 @ 0x180020074 (sub_180020074.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_180030C74 @ 0x180030C74 (sub_180030C74.c)
 *     sub_18003197C @ 0x18003197C (sub_18003197C.c)
 *     sub_180032804 @ 0x180032804 (sub_180032804.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_180033D5C @ 0x180033D5C (sub_180033D5C.c)
 *     sub_180033E4C @ 0x180033E4C (sub_180033E4C.c)
 *     sub_180033EEC @ 0x180033EEC (sub_180033EEC.c)
 *     sub_180034428 @ 0x180034428 (sub_180034428.c)
 *     sub_180035614 @ 0x180035614 (sub_180035614.c)
 *     sub_18003587C @ 0x18003587C (sub_18003587C.c)
 *     sub_180035EE0 @ 0x180035EE0 (sub_180035EE0.c)
 *     sub_1800369D4 @ 0x1800369D4 (sub_1800369D4.c)
 *     sub_180036EBC @ 0x180036EBC (sub_180036EBC.c)
 *     sub_1800377D8 @ 0x1800377D8 (sub_1800377D8.c)
 *     sub_18003797C @ 0x18003797C (sub_18003797C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180033900(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+40h] [rbp-59h] BYREF
  volatile signed __int32 *v12; // [rsp+48h] [rbp-51h]
  _BYTE v13[8]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v14; // [rsp+58h] [rbp-41h]
  __int64 v15[4]; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v16[8]; // [rsp+80h] [rbp-19h] BYREF
  _QWORD v17[4]; // [rsp+C0h] [rbp+27h] BYREF

  sub_180029EF8((__int64)(a1 + 1), a2);
  sub_18003797C(a1);
  sub_180032804((__int64)a1);
  v3 = sub_180012C40(&v11, a1 + 58);
  sub_18001FF74(
    v16,
    v3,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    819,
    (__int64)"FrameTick",
    (__int64)"FrameTick");
  sub_180011CC4(v17, "FrameTick");
  v4 = (_QWORD *)sub_180033D5C(a1, v13);
  sub_1800162D0(&v11, v4);
  sub_180030C74(v15, (__int64)&v11);
  if ( v12 )
    sub_180010F00(v12);
  if ( v14 )
    sub_180010EC8(v14);
  sub_1800129D0((__int64)v17);
  sub_180035614(a1);
  if ( (unsigned int)sub_180033EEC(a1) > 1 )
  {
    sub_180033E4C(a1, &v11, 1LL);
    v6 = v11;
    if ( v11 )
    {
      v7 = sub_180033D14(a1, 1LL);
      v8 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v7 + 72LL))(v7, &unk_1801C9678, 1LL);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 224LL))(v6, v8);
    }
    if ( v12 )
      sub_180010EC8((__int64)v12);
    sub_1800377D8(a1);
    sub_1800369D4(a1);
    (*(void (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1);
    v9 = sub_180033D14(a1, 1LL);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v9 + 64LL))(v9, &unk_1801C9698, 0LL) )
      sub_180034428(v10);
    sub_180035EE0(a1);
    sub_18003587C(a1);
    sub_18003197C((__int64)v15);
    sub_180020074((__int64)v16);
    return sub_180036EBC(a1);
  }
  else
  {
    sub_18003197C((__int64)v15);
    return sub_180020074((__int64)v16);
  }
}
