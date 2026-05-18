/*
 * XREFs of sub_18006DE14 @ 0x18006DE14
 * Callers:
 *     sub_18002BED0 @ 0x18002BED0 (sub_18002BED0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_180014CE0 @ 0x180014CE0 (sub_180014CE0.c)
 *     sub_180014ED4 @ 0x180014ED4 (sub_180014ED4.c)
 *     sub_1800153D8 @ 0x1800153D8 (sub_1800153D8.c)
 *     sub_180016EFC @ 0x180016EFC (sub_180016EFC.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_180029B78 @ 0x180029B78 (sub_180029B78.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_18003AC0C @ 0x18003AC0C (sub_18003AC0C.c)
 *     sub_18003B55C @ 0x18003B55C (sub_18003B55C.c)
 *     sub_18003F830 @ 0x18003F830 (sub_18003F830.c)
 *     sub_18003FB88 @ 0x18003FB88 (sub_18003FB88.c)
 *     sub_180040570 @ 0x180040570 (sub_180040570.c)
 *     sub_1800434E4 @ 0x1800434E4 (sub_1800434E4.c)
 *     sub_18004B290 @ 0x18004B290 (sub_18004B290.c)
 *     sub_18004E8E8 @ 0x18004E8E8 (sub_18004E8E8.c)
 *     sub_180052460 @ 0x180052460 (sub_180052460.c)
 *     sub_180057650 @ 0x180057650 (sub_180057650.c)
 *     sub_18005D23C @ 0x18005D23C (sub_18005D23C.c)
 *     sub_18005DC88 @ 0x18005DC88 (sub_18005DC88.c)
 *     sub_18006C68C @ 0x18006C68C (sub_18006C68C.c)
 *     sub_180085798 @ 0x180085798 (sub_180085798.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_18006DE14(__int64 a1, __int64 a2)
{
  __int64 v4; // r13
  __int64 *v5; // rax
  __int64 *v6; // r14
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 *v13; // rbx
  __int64 *v14; // rax
  __int64 *v15; // rdi
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rbx
  _QWORD *v19; // rax
  __int64 *v20; // rax
  __int64 *v21; // rbx
  __int64 *v22; // rax
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 *v25; // rax
  __int64 v26; // rbx
  _QWORD *v27; // rax
  __int64 v28; // rbx
  __int64 *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  __int64 result; // rax
  _QWORD *v33; // [rsp+20h] [rbp-89h] BYREF
  __int64 v34; // [rsp+28h] [rbp-81h]
  __int64 v35[4]; // [rsp+30h] [rbp-79h] BYREF
  __int64 *v36; // [rsp+50h] [rbp-59h] BYREF
  __int64 v37; // [rsp+58h] [rbp-51h]
  int v38; // [rsp+60h] [rbp-49h] BYREF
  __int64 v39; // [rsp+64h] [rbp-45h]
  __int64 v40; // [rsp+6Ch] [rbp-3Dh]
  int v41; // [rsp+74h] [rbp-35h]
  int v42; // [rsp+78h] [rbp-31h]
  int v43; // [rsp+7Ch] [rbp-2Dh]
  unsigned __int32 v44; // [rsp+80h] [rbp-29h]
  unsigned __int32 v45; // [rsp+84h] [rbp-25h]
  int v46; // [rsp+88h] [rbp-21h]
  int v47; // [rsp+8Ch] [rbp-1Dh]
  int v48; // [rsp+90h] [rbp-19h]
  _QWORD v49[4]; // [rsp+98h] [rbp-11h] BYREF
  __int64 *v50; // [rsp+B8h] [rbp+Fh] BYREF
  __int64 v51; // [rsp+C0h] [rbp+17h]

  *(_QWORD *)(a1 + 32) = a2;
  v4 = *(_QWORD *)(a2 + 3984);
  v5 = (__int64 *)sub_18003FB88(&v36, v4);
  v6 = (__int64 *)(a1 + 288);
  sub_180011F5C((_QWORD *)(a1 + 288), v5);
  if ( v37 )
    sub_180010EC8(v37);
  v50 = v35;
  *(_OWORD *)v35 = 0LL;
  v7 = *(_QWORD *)(a1 + 296);
  if ( v7 )
  {
    v35[0] = (*v6 + 16) & -(__int64)(*v6 != 0);
    v35[1] = v7;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
  }
  v8 = (_QWORD *)sub_180012BF8(*(_QWORD *)(a1 + 32) + 8LL, &v36);
  v33 = (_QWORD *)((*v8 + 24LL) & -(__int64)(*v8 != 0LL));
  v34 = v8[1];
  *v8 = 0LL;
  v8[1] = 0LL;
  sub_180029B78((__int64)&v33, (__int64)v35);
  if ( v37 )
    sub_180010EC8(v37);
  v9 = *v6;
  v33 = v49;
  v10 = sub_180013440(v49, (__int64)&unk_1801C90D8);
  sub_180011CC4(&v50, "ImageProcessingCamera");
  v11 = sub_18003B55C((__int64)&v50);
  sub_18003F830(v9, (__int64)&v36, v11, (__int64)v10);
  sub_1800129D0((__int64)&v50);
  v12 = sub_18006C68C((__int64)v36, v35);
  v13 = (__int64 *)(a1 + 272);
  sub_180011F5C((_QWORD *)(a1 + 272), v12);
  if ( v35[1] )
    sub_180010EC8(v35[1]);
  sub_180057650(*v13, (__int64)&unk_1801C9098);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)*v13 + 16LL))(*v13);
  v14 = sub_180016EFC(*(_QWORD **)(a2 + 3984), v35);
  v15 = (__int64 *)(a1 + 304);
  sub_180011F5C((_QWORD *)(a1 + 304), v14);
  if ( v35[1] )
    sub_180010EC8(v35[1]);
  v16 = *v15;
  v17 = sub_180011CC4(v35, "Image Processing Manager Sampler");
  sub_1800292C4(v16, (__int64)v17);
  v39 = 0LL;
  v40 = 0LL;
  v41 = 1;
  v42 = 7;
  v47 = 0;
  v48 = 2139095039;
  v38 = 2;
  v43 = 0;
  v44 = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 85).m128_u32[0];
  v45 = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 170).m128_u32[0];
  v46 = 0;
  sub_180052460(*v15, &v38, 0LL);
  v18 = *(_QWORD *)(v4 + 512);
  v19 = sub_1800181BC(&v38, (__int64)&unk_1801CCF98);
  v20 = sub_18004E8E8(v18, v35, (__int64)v19);
  v21 = (__int64 *)(a1 + 432);
  sub_180011F5C((_QWORD *)(a1 + 432), v20);
  if ( v35[1] )
    sub_180010EC8(v35[1]);
  v22 = (__int64 *)sub_18005DC88(*v21, v35);
  sub_180011F5C((_QWORD *)(a1 + 416), v22);
  if ( v35[1] )
    sub_180010EC8(v35[1]);
  v23 = sub_18005D23C(*v21, v35);
  sub_180011F5C((_QWORD *)(a1 + 400), v23);
  if ( v35[1] )
    sub_180010EC8(v35[1]);
  v24 = sub_180033D14(*(_QWORD *)(a2 + 3984), 1);
  *(_DWORD *)(a1 + 448) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v24 + 72LL))(
                            v24,
                            &unk_1801CAA38,
                            0LL);
  sub_1800434E4(*(_QWORD *)(a1 + 400), (__int64)&unk_1801CD298, 1);
  v25 = (__int64 *)sub_180085798(v35, v4);
  sub_180011F5C((_QWORD *)(a1 + 320), v25);
  if ( v35[1] )
    sub_180010EC8(v35[1]);
  v26 = *v6;
  v27 = sub_180013440(&v38, (__int64)&unk_1801C9098);
  sub_180040570(v26, (__int64)v35, (__int64)v27);
  sub_180014ED4(v35[0], &v50);
  v28 = (__int64)v50;
  if ( !v50 )
  {
    v29 = sub_180014CE0(v35[0], &v33);
    sub_180011F5C(&v50, v29);
    if ( v34 )
      sub_180010EC8(v34);
    v28 = (__int64)v50;
  }
  v30 = sub_180012C40(&v33, (_QWORD *)(a1 + 320));
  sub_1800153D8(v28, v30);
  v31 = sub_180012C40(&v33, (_QWORD *)(a1 + 368));
  sub_18004B290(v28, v31);
  *(_BYTE *)(v28 + 72) = 0;
  result = (__int64)sub_18003AC0C((_QWORD *)(a1 + 336), &v50);
  if ( v51 )
    result = sub_180010EC8(v51);
  if ( v35[1] )
    result = sub_180010EC8(v35[1]);
  if ( v37 )
    return sub_180010EC8(v37);
  return result;
}
