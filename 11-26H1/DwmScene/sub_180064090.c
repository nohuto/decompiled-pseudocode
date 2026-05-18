/*
 * XREFs of sub_180064090 @ 0x180064090
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
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18001FF74 @ 0x18001FF74 (sub_18001FF74.c)
 *     sub_180020074 @ 0x180020074 (sub_180020074.c)
 *     sub_180030C74 @ 0x180030C74 (sub_180030C74.c)
 *     sub_18003197C @ 0x18003197C (sub_18003197C.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_180033D5C @ 0x180033D5C (sub_180033D5C.c)
 *     sub_180033FB8 @ 0x180033FB8 (sub_180033FB8.c)
 *     sub_18004E8E8 @ 0x18004E8E8 (sub_18004E8E8.c)
 *     sub_18005E0AC @ 0x18005E0AC (sub_18005E0AC.c)
 *     sub_1800648C4 @ 0x1800648C4 (sub_1800648C4.c)
 *     sub_18006624C @ 0x18006624C (sub_18006624C.c)
 *     sub_180066A5C @ 0x180066A5C (sub_180066A5C.c)
 *     sub_180068050 @ 0x180068050 (sub_180068050.c)
 *     sub_18006904C @ 0x18006904C (sub_18006904C.c)
 *     sub_180069B0C @ 0x180069B0C (sub_180069B0C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180064090(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  char v13; // al
  char v14; // bl
  __int64 v15; // r8
  __int64 v16; // rbx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  unsigned int v19; // eax
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v22; // [rsp+48h] [rbp-B8h]
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h]
  __int64 v25; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-98h]
  __int64 v27[3]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v28[5]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v29[8]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v30[4]; // [rsp+F0h] [rbp-10h] BYREF

  v8 = sub_180012C40(&v23, (_QWORD *)(a1 + 464));
  sub_18001FF74(
    v29,
    v8,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\viewerengine.cpp",
    1570,
    (__int64)"PreRenderScene",
    (__int64)"PreRenderScene");
  sub_180011CC4(v30, "PreRenderScene");
  v9 = sub_180033D5C(a1, &v25);
  sub_1800162D0(&v21, v9);
  sub_180030C74(v27, (__int64)&v21);
  if ( v22 )
    sub_180010F00(v22);
  if ( v26 )
    sub_180010EC8(v26);
  sub_1800129D0((__int64)v30);
  v10 = sub_180033D14(a1, *(_DWORD *)(*(_QWORD *)a2 + 112LL));
  sub_180069B0C(v11, *a3, *a4, v10);
  LOBYTE(v12) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801CBA58, v12);
  v14 = v13;
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CBA78);
  LOBYTE(v15) = v14;
  sub_1800648C4(a1, a2, v15);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 120LL))(*a3);
  *(_BYTE *)(a1 + 1457) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(
                            v10,
                            &unk_1801CBA18,
                            0LL);
  sub_180066A5C(a1);
  sub_18006624C(a1, *a4, *(unsigned int *)(*(_QWORD *)a2 + 112LL));
  sub_180068050(a1, a3, a4, a2);
  v16 = *(_QWORD *)(a1 + 512);
  v17 = sub_1800181BC(v28, (__int64)&unk_1801CCF58);
  sub_18004E8E8(v16, &v23, (__int64)v17);
  sub_18005E0AC(v23, (__int64)&unk_1801CCE58, *(_BYTE *)(a1 + 1457));
  v18 = sub_1800181BC(v30, (__int64)&unk_1801CD4D8);
  sub_18004E8E8(v16, &v21, (__int64)v18);
  sub_18005E0AC(v21, (__int64)&unk_1801CCE58, *(_BYTE *)(a1 + 1457));
  v19 = sub_180033FB8(a1, a3);
  sub_18006904C(a1, a2, v19, a4);
  if ( v22 )
    sub_180010EC8((__int64)v22);
  if ( v24 )
    sub_180010EC8(v24);
  sub_18003197C((__int64)v27);
  return sub_180020074((__int64)v29);
}
