/*
 * XREFs of sub_18006D8E8 @ 0x18006D8E8
 * Callers:
 *     sub_1800597B4 @ 0x1800597B4 (sub_1800597B4.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_180029E54 @ 0x180029E54 (sub_180029E54.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_180038F30 @ 0x180038F30 (sub_180038F30.c)
 *     sub_180038F8C @ 0x180038F8C (sub_180038F8C.c)
 *     sub_1800592E4 @ 0x1800592E4 (sub_1800592E4.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18006D8E8(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  void (__fastcall *v10)(__int64, __int64); // rbx
  _QWORD *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rbx
  __int64 *v17; // rax
  __int64 v18; // rsi
  __int64 *v19; // rax
  __int64 *v20; // rax
  __int64 v21; // r8
  __int64 *v22; // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v27; // [rsp+40h] [rbp-61h] BYREF
  __int64 v28; // [rsp+48h] [rbp-59h]
  __int128 v29; // [rsp+50h] [rbp-51h] BYREF
  __int64 v30; // [rsp+60h] [rbp-41h] BYREF
  volatile signed __int32 *v31; // [rsp+68h] [rbp-39h]
  _QWORD *v32; // [rsp+70h] [rbp-31h] BYREF
  __int64 v33; // [rsp+78h] [rbp-29h]
  __int64 v34; // [rsp+80h] [rbp-21h] BYREF
  __int64 v35; // [rsp+88h] [rbp-19h]
  _QWORD v36[11]; // [rsp+90h] [rbp-11h] BYREF

  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a3 + 376LL))(*a3, &v30);
  sub_180012A94(v8, &v32);
  if ( v31 )
    sub_180010F00(v31);
  v9 = *(_QWORD *)(a1 + 272);
  v10 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 88LL);
  v11 = v32;
  v12 = sub_180012BF8((__int64)(v32 + 1), &v29);
  v10(v9, v12);
  sub_180029E54(*(_QWORD *)(a1 + 288) + 16LL);
  sub_180029EF8((__int64)(v11 + 3), v13);
  sub_180012C40(&v30, v11 + 34);
  v14 = *(_QWORD *)(a1 + 272);
  v15 = sub_180012BF8((__int64)(v11 + 1), &v34);
  sub_1800592E4(v14, &v27, v15);
  if ( v35 )
    sub_180010EC8(v35);
  v16 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 184LL))(*a3);
  (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a3 + 200LL))(*a3, &v29);
  v17 = sub_1800162D0(v36, v16);
  v18 = v30;
  sub_180038F8C(v30, v17);
  v19 = sub_1800162D0(v36, &v29);
  sub_180038F30(v18, v19);
  v20 = sub_1800162D0(v36, v16);
  sub_180038F8C(v21, v20);
  v22 = sub_1800162D0(v36, &v29);
  sub_180038F30(v23, v22);
  if ( *((_QWORD *)&v29 + 1) )
    sub_180010F00(*((volatile signed __int32 **)&v29 + 1));
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*v11 + 104LL))(v11, &v27);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD *, _QWORD *, __int64))(*(_QWORD *)*a4 + 16LL))(*a4, a2, v11, a3, a5);
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*v11 + 112LL))(v11, &v27);
  v29 = 0LL;
  sub_180038F8C(v18, (__int64 *)&v29);
  v29 = 0LL;
  sub_180038F30(v18, (__int64 *)&v29);
  v29 = 0LL;
  sub_180038F8C(v27, (__int64 *)&v29);
  v29 = 0LL;
  sub_180038F30(v27, (__int64 *)&v29);
  if ( v28 )
    sub_180010EC8(v28);
  if ( v31 )
    sub_180010EC8((__int64)v31);
  if ( v33 )
    sub_180010EC8(v33);
  v24 = a4[1];
  if ( v24 )
    sub_180010EC8(v24);
  v25 = *(_QWORD *)(a5 + 8);
  if ( v25 )
    sub_180010EC8(v25);
  return a2;
}
