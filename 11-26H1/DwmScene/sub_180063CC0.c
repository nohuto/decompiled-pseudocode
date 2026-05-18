/*
 * XREFs of sub_180063CC0 @ 0x180063CC0
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
 *     sub_180030C74 @ 0x180030C74 (sub_180030C74.c)
 *     sub_18003197C @ 0x18003197C (sub_18003197C.c)
 *     sub_180033D5C @ 0x180033D5C (sub_180033D5C.c)
 *     sub_180035030 @ 0x180035030 (sub_180035030.c)
 *     sub_180061720 @ 0x180061720 (sub_180061720.c)
 *     sub_180068050 @ 0x180068050 (sub_180068050.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180063CC0(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v11; // [rsp+40h] [rbp-89h] BYREF
  volatile signed __int32 *v12; // [rsp+48h] [rbp-81h]
  __int64 v13; // [rsp+50h] [rbp-79h] BYREF
  __int64 v14; // [rsp+58h] [rbp-71h]
  __int64 v15[4]; // [rsp+60h] [rbp-69h] BYREF
  _QWORD v16[8]; // [rsp+80h] [rbp-49h] BYREF
  _QWORD v17[4]; // [rsp+C0h] [rbp-9h] BYREF

  v8 = sub_180012C40(&v11, (_QWORD *)(a1 + 464));
  sub_18001FF74(
    v16,
    v8,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\viewerengine.cpp",
    1484,
    (__int64)"PostRenderScene",
    (__int64)"PostRenderScene");
  sub_180011CC4(v17, "PostRenderScene");
  v9 = sub_180033D5C(a1, &v13);
  sub_1800162D0(&v11, v9);
  sub_180030C74(v15, (__int64)&v11);
  if ( v12 )
    sub_180010F00(v12);
  if ( v14 )
    sub_180010EC8(v14);
  sub_1800129D0((__int64)v17);
  sub_180035030(a1, a2, a3, a4);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 280LL))(*a4) )
  {
    sub_180068050(a1, a3, a4, a2);
    sub_180061720(a1, a2, a3, a4);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)*a3 + 128LL))(*a3);
  sub_18003197C((__int64)v15);
  return sub_180020074((__int64)v16);
}
