/*
 * XREFs of sub_180044C70 @ 0x180044C70
 * Callers:
 *     sub_1800777B0 @ 0x1800777B0 (sub_1800777B0.c)
 *     sub_1800793B0 @ 0x1800793B0 (sub_1800793B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180014288 @ 0x180014288 (sub_180014288.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_180043A88 @ 0x180043A88 (sub_180043A88.c)
 *     sub_180043AC0 @ 0x180043AC0 (sub_180043AC0.c)
 *     sub_180043B50 @ 0x180043B50 (sub_180043B50.c)
 *     sub_180043BE0 @ 0x180043BE0 (sub_180043BE0.c)
 *     sub_180043CD0 @ 0x180043CD0 (sub_180043CD0.c)
 *     sub_180043D5C @ 0x180043D5C (sub_180043D5C.c)
 *     sub_18004DE2C @ 0x18004DE2C (sub_18004DE2C.c)
 *     sub_18005E244 @ 0x18005E244 (sub_18005E244.c)
 *     sub_18007BDCC @ 0x18007BDCC (sub_18007BDCC.c)
 *     sub_18007C50C @ 0x18007C50C (sub_18007C50C.c)
 */

// Hidden C++ exception states: #wind=32
__int64 __fastcall sub_180044C70(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  void *v6; // rax
  void *v7; // rax
  void *v8; // rax
  void *v9; // rax
  void *v10; // rax
  void *v11; // rax
  void *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // r8
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // r8
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // r9
  __int64 result; // rax
  __int64 v38; // rcx
  _QWORD v39[4]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v40[4]; // [rsp+48h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+68h] [rbp-98h] BYREF
  __int64 v42; // [rsp+78h] [rbp-88h] BYREF
  __int64 v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+88h] [rbp-78h]
  _BYTE v45[64]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v46[64]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v47[64]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v48[64]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v49[64]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v50[64]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v51[64]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v52[64]; // [rsp+250h] [rbp+150h] BYREF
  _BYTE v53[64]; // [rsp+290h] [rbp+190h] BYREF
  _BYTE v54[64]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _BYTE v55[64]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE v56[64]; // [rsp+350h] [rbp+250h] BYREF
  _BYTE v57[64]; // [rsp+390h] [rbp+290h] BYREF
  _BYTE v58[64]; // [rsp+3D0h] [rbp+2D0h] BYREF
  _BYTE v59[64]; // [rsp+410h] [rbp+310h] BYREF
  _BYTE v60[64]; // [rsp+450h] [rbp+350h] BYREF
  _BYTE v61[64]; // [rsp+490h] [rbp+390h] BYREF
  _BYTE v62[64]; // [rsp+4D0h] [rbp+3D0h] BYREF
  _BYTE v63[64]; // [rsp+510h] [rbp+410h] BYREF
  _BYTE v64[64]; // [rsp+550h] [rbp+450h] BYREF
  _BYTE v65[64]; // [rsp+590h] [rbp+490h] BYREF
  _BYTE v66[64]; // [rsp+5D0h] [rbp+4D0h] BYREF
  _BYTE v67[64]; // [rsp+610h] [rbp+510h] BYREF
  _BYTE v68[64]; // [rsp+650h] [rbp+550h] BYREF
  _BYTE v69[64]; // [rsp+690h] [rbp+590h] BYREF
  _BYTE v70[64]; // [rsp+6D0h] [rbp+5D0h] BYREF
  _BYTE v71[64]; // [rsp+710h] [rbp+610h] BYREF
  _BYTE v72[64]; // [rsp+750h] [rbp+650h] BYREF
  _BYTE v73[64]; // [rsp+790h] [rbp+690h] BYREF
  _BYTE v74[64]; // [rsp+7D0h] [rbp+6D0h] BYREF

  v44 = a2;
  sub_18004DE2C(a1, &v42, 2LL);
  si128 = _mm_load_si128((const __m128i *)&xmmword_180191680);
  v3 = sub_1800181BC(v39, (__int64)&unk_1801CBD98);
  sub_180043AC0((__int64)v45, (__int64)v3);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801915E0);
  v4 = sub_1800181BC(v40, (__int64)&unk_1801CBDB8);
  sub_180043AC0((__int64)v46, (__int64)v4);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801916B0);
  v5 = sub_1800181BC(v39, (__int64)&unk_1801CBDD8);
  sub_180043B50((__int64)v47, (__int64)v5);
  v6 = sub_180014288(v40, (__int64)&unk_1801CBE58, (__int64)&unk_1801CBD78);
  sub_180043D5C((__int64)v48, (__int64)v6);
  v7 = sub_180014288(v39, (__int64)&unk_1801CBE78, (__int64)&unk_1801CBD78);
  sub_180043D5C((__int64)v49, (__int64)v7);
  v8 = sub_180014288(v40, (__int64)&unk_1801CBE98, (__int64)&unk_1801CBD78);
  sub_180043D5C((__int64)v50, (__int64)v8);
  v9 = sub_180014288(v39, (__int64)&unk_1801CBEB8, (__int64)&unk_1801CBD78);
  sub_180043D5C((__int64)v51, (__int64)v9);
  v10 = sub_180014288(v40, (__int64)&unk_1801CBED8, (__int64)&unk_1801CBD78);
  sub_180043D5C((__int64)v52, (__int64)v10);
  v11 = sub_180014288(v39, (__int64)&unk_1801CBEF8, (__int64)&unk_1801CBD78);
  sub_180043D5C((__int64)v53, (__int64)v11);
  v12 = sub_180014288(v40, (__int64)&unk_1801CBF18, (__int64)&unk_1801CBD78);
  sub_180043D5C((__int64)v54, (__int64)v12);
  v13 = sub_1800181BC(v39, (__int64)&unk_1801CBF38);
  sub_180043A88((__int64)v55, (__int64)v13);
  v14 = sub_1800181BC(v40, (__int64)&unk_1801CBF58);
  sub_180043A88((__int64)v56, (__int64)v14);
  v15 = sub_1800181BC(v39, (__int64)&unk_1801CBE18);
  sub_180043CD0((__int64)v57, (__int64)v15, v16, 1.0);
  v17 = sub_1800181BC(v40, (__int64)&unk_1801CBF78);
  sub_180043BE0((__int64)v58, (__int64)v17);
  v18 = sub_1800181BC(v39, (__int64)&unk_1801CBF98);
  sub_180043CD0((__int64)v59, (__int64)v18, v19, 0.5);
  v20 = sub_1800181BC(v40, (__int64)&unk_1801CBFB8);
  sub_180043A88((__int64)v60, (__int64)v20);
  si128 = 0LL;
  v21 = sub_1800181BC(v39, (__int64)&unk_1801CBE38);
  sub_180043AC0((__int64)v61, (__int64)v21);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801916B0);
  v22 = sub_1800181BC(v40, (__int64)&unk_1801CBDF8);
  sub_180043B50((__int64)v62, (__int64)v22);
  v23 = sub_1800181BC(v39, (__int64)&unk_1801CBFD8);
  sub_180043D5C((__int64)v63, (__int64)v23);
  v24 = sub_1800181BC(v40, (__int64)&unk_1801CBFF8);
  sub_180043D5C((__int64)v64, (__int64)v24);
  v25 = sub_1800181BC(v39, (__int64)&unk_1801CC018);
  sub_180043D5C((__int64)v65, (__int64)v25);
  v26 = sub_1800181BC(v40, (__int64)&unk_1801CC038);
  sub_180043D5C((__int64)v66, (__int64)v26);
  v27 = sub_1800181BC(v39, (__int64)&unk_1801CC058);
  sub_180043D5C((__int64)v67, (__int64)v27);
  v28 = sub_1800181BC(v40, (__int64)&unk_1801CBE58);
  sub_180043A88((__int64)v68, (__int64)v28);
  v29 = sub_1800181BC(v39, (__int64)&unk_1801CBE78);
  sub_180043A88((__int64)v69, (__int64)v29);
  v30 = sub_1800181BC(v40, (__int64)&unk_1801CBE98);
  sub_180043A88((__int64)v70, (__int64)v30);
  v31 = sub_1800181BC(v39, (__int64)&unk_1801CBEB8);
  sub_180043A88((__int64)v71, (__int64)v31);
  v32 = sub_1800181BC(v40, (__int64)&unk_1801CBEF8);
  sub_180043A88((__int64)v72, (__int64)v32);
  v33 = sub_1800181BC(v39, (__int64)&unk_1801CBED8);
  sub_180043A88((__int64)v73, (__int64)v33);
  v34 = sub_1800181BC(v40, (__int64)&unk_1801CBF18);
  sub_180043A88((__int64)v74, (__int64)v34);
  sub_18007BDCC(v42, v45, 30LL, 0LL);
  sub_18007C50C(v42);
  v35 = sub_180012C40(&si128, &v42);
  sub_18005E244(v36, v35);
  result = sub_18000BFA4((__int64)v45, 64LL, 30LL, (void (__fastcall *)(__int64))sub_180043DE0);
  if ( v43 )
    result = sub_180010EC8(v43);
  v38 = *(_QWORD *)(a2 + 8);
  if ( v38 )
    return sub_180010EC8(v38);
  return result;
}
