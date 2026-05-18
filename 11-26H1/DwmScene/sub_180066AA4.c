/*
 * XREFs of sub_180066AA4 @ 0x180066AA4
 * Callers:
 *     sub_180064320 @ 0x180064320 (sub_180064320.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18002E548 @ 0x18002E548 (sub_18002E548.c)
 *     sub_180033B20 @ 0x180033B20 (sub_180033B20.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_1800403B8 @ 0x1800403B8 (sub_1800403B8.c)
 *     sub_18004B25C @ 0x18004B25C (sub_18004B25C.c)
 *     sub_18005A7A4 @ 0x18005A7A4 (sub_18005A7A4.c)
 *     sub_18005A95C @ 0x18005A95C (sub_18005A95C.c)
 *     sub_18005A9B0 @ 0x18005A9B0 (sub_18005A9B0.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180066AA4(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // r15
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r13
  __int64 v8; // r8
  char v9; // r14
  _QWORD *v10; // rdi
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r8
  char v15; // al
  __int64 v16; // r8
  char v17; // al
  __int64 v18; // r8
  char v19; // al
  __int64 v20; // r8
  char v21; // al
  __int64 v22; // r8
  char v23; // al
  char v24; // al
  __int64 v25; // rbx
  __int64 v26; // r8
  __int64 *v27; // rdi
  __int64 v28; // rdi
  char v29; // al
  __int64 v30; // rdi
  char v31; // al
  __int64 v32; // rdi
  char v33; // al
  __int64 v34; // rdi
  char v35; // al
  __int64 v36; // rdi
  char v37; // al
  __int64 v38; // rdi
  char v39; // al
  __int64 v40; // rdi
  char v41; // al
  __int64 v42; // rdi
  char v43; // al
  __int64 v44; // rdi
  char v45; // al
  __int64 v46; // rbx
  char v47; // al
  char v48; // di
  __int64 v49; // r8
  char v50; // si
  __int64 v51; // rbx
  _QWORD *v52; // rax
  __int64 v53; // rbx
  _QWORD *v54; // rax
  __int64 result; // rax
  __int64 v56; // [rsp+30h] [rbp-69h] BYREF
  volatile signed __int32 *v57; // [rsp+38h] [rbp-61h]
  __int64 v58; // [rsp+50h] [rbp-49h] BYREF
  __int64 v59; // [rsp+58h] [rbp-41h]
  __int64 v60; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v61[4]; // [rsp+70h] [rbp-29h] BYREF
  _QWORD v62[12]; // [rsp+90h] [rbp-9h] BYREF

  v3 = a1;
  v4 = sub_180033D14(a1, *(_DWORD *)(*a2 + 112));
  v5 = sub_180012C40(&v60, a2);
  sub_180033B20(v3, &v58, v6, v5);
  LOBYTE(v3) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C9418, 0LL);
  v7 = v58;
  sub_18005A9B0(v58, 0, v3);
  if ( (_BYTE)v3 )
    *(_DWORD *)(v7 + 168) = 0;
  LOBYTE(v8) = 1;
  v9 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C9438, v8);
  v10 = sub_1800181BC(&v56, (__int64)&unk_1801CCA18);
  v11 = sub_1800181BC(v61, (__int64)&unk_1801CCA98);
  v12 = sub_1800181BC(v62, (__int64)&unk_1801CCA78);
  sub_18005A7A4(v7, v9 != 0, v13, (__int64)v12, (__int64)v11, (__int64)v10);
  sub_18005A95C(v7, 1, v9);
  LOBYTE(v14) = 1;
  v15 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C9458, v14);
  sub_18005A9B0(v7, 1, v15);
  LOBYTE(v16) = 1;
  v17 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C9478, v16);
  sub_18005A9B0(v7, 2, v17);
  LOBYTE(v18) = 1;
  v19 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C9498, v18);
  sub_18005A9B0(v7, 3, v19);
  LOBYTE(v20) = 1;
  v21 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C93D8, v20);
  sub_18004B25C(0, v21);
  LOBYTE(v22) = 1;
  v23 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C93F8, v22);
  sub_18004B25C(1, v23);
  v24 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C9838, 0LL);
  sub_18005A95C(v7, 0x4000000, v24);
  sub_1800162D0(&v56, a2);
  v25 = sub_18002E548(a1 + 728, (__int64)&v56);
  if ( v57 )
    sub_180010F00(v57);
  v27 = *(__int64 **)(v25 + 48);
  if ( v27 != *(__int64 **)(v25 + 56) )
  {
    v28 = *v27;
    v29 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C9518, 0LL);
    sub_18005A95C(v28, 0x10000, v29);
    v30 = **(_QWORD **)(v25 + 48);
    v31 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C9538, 0LL);
    sub_18005A95C(v30, 0x20000, v31);
    v32 = **(_QWORD **)(v25 + 48);
    v33 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C9558, 0LL);
    sub_18005A95C(v32, 0x40000, v33);
    v34 = **(_QWORD **)(v25 + 48);
    v35 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C9578, 0LL);
    sub_18005A95C(v34, 0x80000, v35);
    v36 = **(_QWORD **)(v25 + 48);
    v37 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C9598, 0LL);
    sub_18005A95C(v36, 0x100000, v37);
    v38 = **(_QWORD **)(v25 + 48);
    v39 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C95B8, 0LL);
    sub_18005A95C(v38, 0x200000, v39);
    v40 = **(_QWORD **)(v25 + 48);
    v41 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C95D8, 0LL);
    sub_18005A95C(v40, 0x400000, v41);
    v42 = **(_QWORD **)(v25 + 48);
    v43 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C95F8, 0LL);
    sub_18005A95C(v42, 0x800000, v43);
    v44 = **(_QWORD **)(v25 + 48);
    v45 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C9618, 0LL);
    sub_18005A95C(v44, 0x10000000, v45);
    v46 = **(_QWORD **)(v25 + 48);
    v47 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C9638, 0LL);
    sub_18005A95C(v46, 0x20000000, v47);
  }
  LOBYTE(v26) = 1;
  v48 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C9958, v26);
  LOBYTE(v49) = 1;
  v50 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C9978, v49);
  v51 = *a2;
  v52 = sub_180013440(v62, (__int64)&unk_1801C9058);
  *(_BYTE *)(*sub_1800403B8(v51, &v56, (__int64)v52) + 80LL) = v48;
  if ( v57 )
    sub_180010EC8((__int64)v57);
  v53 = *a2;
  v54 = sub_180013440(v62, (__int64)&unk_1801C9038);
  result = (__int64)sub_1800403B8(v53, &v56, (__int64)v54);
  *(_BYTE *)(*(_QWORD *)result + 80LL) = v50;
  if ( v57 )
    result = sub_180010EC8((__int64)v57);
  if ( v59 )
    return sub_180010EC8(v59);
  return result;
}
