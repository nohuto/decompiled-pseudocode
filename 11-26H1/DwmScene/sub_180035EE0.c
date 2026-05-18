/*
 * XREFs of sub_180035EE0 @ 0x180035EE0
 * Callers:
 *     sub_180033900 @ 0x180033900 (sub_180033900.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_18001FF74 @ 0x18001FF74 (sub_18001FF74.c)
 *     sub_180020074 @ 0x180020074 (sub_180020074.c)
 *     sub_180030C74 @ 0x180030C74 (sub_180030C74.c)
 *     sub_18003197C @ 0x18003197C (sub_18003197C.c)
 *     sub_180033D5C @ 0x180033D5C (sub_180033D5C.c)
 *     sub_180034A88 @ 0x180034A88 (sub_180034A88.c)
 *     sub_18005537C @ 0x18005537C (sub_18005537C.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180035EE0(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rdi
  _QWORD *i; // rbx
  __int64 v6; // rsi
  struct _Mtx_internal_imp_t *v7; // r14
  __int64 v9; // [rsp+48h] [rbp-69h] BYREF
  volatile signed __int32 *v10; // [rsp+50h] [rbp-61h]
  __int64 v11; // [rsp+58h] [rbp-59h] BYREF
  __int64 v12; // [rsp+60h] [rbp-51h]
  __int64 v13[4]; // [rsp+68h] [rbp-49h] BYREF
  _QWORD v14[8]; // [rsp+88h] [rbp-29h] BYREF
  _QWORD v15[4]; // [rsp+C8h] [rbp+17h] BYREF

  v2 = sub_180012C40(&v9, (_QWORD *)(a1 + 464));
  sub_18001FF74(
    v14,
    v2,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    898,
    (__int64)"RenderDisplays",
    (__int64)"RenderDisplays");
  sub_180011CC4(v15, "RenderDisplays");
  v3 = sub_180033D5C(a1, &v11);
  sub_1800162D0(&v9, v3);
  sub_180030C74(v13, (__int64)&v9);
  if ( v10 )
    sub_180010F00(v10);
  if ( v12 )
    sub_180010EC8(v12);
  sub_1800129D0((__int64)v15);
  v4 = *(_QWORD **)(a1 + 168);
  for ( i = (_QWORD *)*v4; i != v4; i = (_QWORD *)*i )
  {
    v6 = i[2];
    v7 = (struct _Mtx_internal_imp_t *)(v6 + 128);
    sub_180012AC4(v6 + 128);
    LODWORD(v6) = *(_DWORD *)(v6 + 32);
    Mtx_unlock(v7);
    if ( (_DWORD)v6 == 1 )
      sub_18005537C(i[2]);
  }
  sub_180034A88(a1);
  sub_18003197C((__int64)v13);
  return sub_180020074((__int64)v14);
}
