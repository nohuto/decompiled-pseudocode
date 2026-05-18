/*
 * XREFs of sub_180079644 @ 0x180079644
 * Callers:
 *     sub_18007A030 @ 0x18007A030 (sub_18007A030.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_180043A88 @ 0x180043A88 (sub_180043A88.c)
 *     sub_180043AC0 @ 0x180043AC0 (sub_180043AC0.c)
 *     sub_180043B50 @ 0x180043B50 (sub_180043B50.c)
 *     sub_180043CD0 @ 0x180043CD0 (sub_180043CD0.c)
 *     sub_180043DE0 @ 0x180043DE0 (sub_180043DE0.c)
 *     sub_18004DE2C @ 0x18004DE2C (sub_18004DE2C.c)
 *     sub_18005E244 @ 0x18005E244 (sub_18005E244.c)
 *     sub_1800795BC @ 0x1800795BC (sub_1800795BC.c)
 *     sub_18007B9FC @ 0x18007B9FC (sub_18007B9FC.c)
 *     sub_18007BDCC @ 0x18007BDCC (sub_18007BDCC.c)
 *     sub_18007BE98 @ 0x18007BE98 (sub_18007BE98.c)
 *     sub_18007C50C @ 0x18007C50C (sub_18007C50C.c)
 *     sub_18007C6B8 @ 0x18007C6B8 (sub_18007C6B8.c)
 *     sub_18007D058 @ 0x18007D058 (sub_18007D058.c)
 */

// Hidden C++ exception states: #wind=24
__int64 __fastcall sub_180079644(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  unsigned __int16 v5; // ax
  __int64 *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rbx
  _QWORD *v9; // rax
  unsigned __int16 v10; // ax
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rbx
  _QWORD *v19; // rax
  __int64 v20; // rbx
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // r8
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
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  __int64 *v40; // rax
  __int64 v41; // r8
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rbx
  _QWORD *v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rbx
  _QWORD *v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rbx
  _QWORD *v53; // rax
  __int64 v54; // rbx
  __int64 *v55; // rax
  __int64 v56; // r8
  __int64 *v57; // rax
  __int64 v58; // r8
  __int64 result; // rax
  __int64 v60; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v61; // [rsp+40h] [rbp-C0h]
  _OWORD v62[2]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v63[4]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v64; // [rsp+88h] [rbp-78h] BYREF
  __int128 v65; // [rsp+98h] [rbp-68h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-58h]
  __m128i v67; // [rsp+B8h] [rbp-48h]
  __m128i v68; // [rsp+C8h] [rbp-38h]
  __int128 v69; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v70; // [rsp+F0h] [rbp-10h]
  __int128 v71; // [rsp+100h] [rbp+0h]
  __int128 v72; // [rsp+110h] [rbp+10h]
  _BYTE v73[64]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v74[64]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v75[64]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v76[64]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v77[64]; // [rsp+220h] [rbp+120h] BYREF
  _BYTE v78[64]; // [rsp+260h] [rbp+160h] BYREF
  _BYTE v79[64]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v80[64]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _BYTE v81[64]; // [rsp+320h] [rbp+220h] BYREF
  _BYTE v82[64]; // [rsp+360h] [rbp+260h] BYREF
  _BYTE v83[64]; // [rsp+3A0h] [rbp+2A0h] BYREF
  _BYTE v84[64]; // [rsp+3E0h] [rbp+2E0h] BYREF
  _BYTE v85[64]; // [rsp+420h] [rbp+320h] BYREF
  _BYTE v86[64]; // [rsp+460h] [rbp+360h] BYREF
  _BYTE v87[64]; // [rsp+4A0h] [rbp+3A0h] BYREF
  _BYTE v88[64]; // [rsp+4E0h] [rbp+3E0h] BYREF
  _BYTE v89[64]; // [rsp+520h] [rbp+420h] BYREF
  _BYTE v90[64]; // [rsp+560h] [rbp+460h] BYREF
  _BYTE v91[64]; // [rsp+5A0h] [rbp+4A0h] BYREF
  _BYTE v92[64]; // [rsp+5E0h] [rbp+4E0h] BYREF
  _BYTE v93[64]; // [rsp+620h] [rbp+520h] BYREF

  sub_18004DE2C(a2, &v60, 0);
  v3 = v60;
  v4 = sub_1800181BC(v62, (__int64)&unk_1801CD5F8);
  sub_180043A88((__int64)&v69, (__int64)v4);
  sub_18007BE98(v3, &v69, 0LL);
  sub_180043DE0((__int64)&v69);
  v5 = sub_18007C6B8(v60, &unk_1801CD5F8);
  v69 = xmmword_1800FA780;
  v70 = xmmword_1800FA790;
  v71 = xmmword_1800FA7A0;
  v72 = xmmword_1800FA7B0;
  sub_18007D058(v60, v5, &v69);
  sub_18007C50C(v60);
  v6 = sub_180012C40(&v64, &v60);
  sub_18005E244(v7, v6);
  if ( v61 )
    sub_180010EC8(v61);
  sub_18004DE2C(a2, &v60, 4u);
  v8 = v60;
  v9 = sub_1800181BC(v62, (__int64)&unk_1801CC9D8);
  sub_180043A88((__int64)&v69, (__int64)v9);
  sub_18007BE98(v8, &v69, 1LL);
  sub_180043DE0((__int64)&v69);
  v10 = sub_18007C6B8(v60, &unk_1801CC9D8);
  v69 = xmmword_1800FA780;
  v70 = xmmword_1800FA790;
  v71 = xmmword_1800FA7A0;
  v72 = xmmword_1800FA7B0;
  sub_18007D058(v60, v10, &v69);
  v11 = v60;
  v12 = sub_1800181BC(v62, (__int64)&unk_1801CC9F8);
  sub_180043A88((__int64)&v69, (__int64)v12);
  sub_18007BE98(v11, &v69, 1LL);
  sub_180043DE0((__int64)&v69);
  sub_18007C50C(v60);
  v13 = sub_180012C40(&v64, &v60);
  sub_18005E244(v14, v13);
  if ( v61 )
    sub_180010EC8(v61);
  sub_18004DE2C(a2, &v60, 2u);
  v15 = v60;
  v16 = sub_1800181BC(v62, (__int64)&unk_1801CD618);
  sub_180043A88((__int64)&v69, (__int64)v16);
  v17 = (unsigned __int16)sub_18007BE98(v15, &v69, 0LL);
  sub_180043DE0((__int64)&v69);
  *(_DWORD *)(*(_QWORD *)(v60 + 104)
            + 40LL * *(unsigned int *)(56LL * *(unsigned __int16 *)(v60 + 2 * v17 + 128) + *(_QWORD *)(v60 + 56) + 40)
            + 32) = 11;
  v18 = v60;
  v19 = sub_1800181BC(v62, (__int64)&unk_1801CD7F8);
  sub_180043A88((__int64)&v69, (__int64)v19);
  v20 = (unsigned __int16)sub_18007BE98(v18, &v69, 0LL);
  sub_180043DE0((__int64)&v69);
  *(_DWORD *)(*(_QWORD *)(v60 + 104)
            + 40LL * *(unsigned int *)(56LL * *(unsigned __int16 *)(v60 + 2 * v20 + 128) + *(_QWORD *)(v60 + 56) + 40)
            + 32) = 12;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801916B0);
  v67 = si128;
  v68 = si128;
  v62[0] = si128;
  v65 = 0LL;
  v64 = 0LL;
  sub_1800795BC(0.25, 0.25, 0.25, (__int64)&v65, (__int64)&v64);
  v21 = sub_1800181BC(v63, (__int64)&unk_1801CD638);
  sub_180043A88((__int64)v76, (__int64)v21);
  v22 = sub_1800181BC(&v69, (__int64)&unk_1801CD658);
  sub_180043CD0((__int64)v77, (__int64)v22, v23, 1.0);
  v24 = sub_1800181BC(v63, (__int64)&unk_1801CD678);
  sub_180043A88((__int64)v78, (__int64)v24);
  v25 = sub_1800181BC(&v69, (__int64)&unk_1801CD698);
  sub_180043A88((__int64)v79, (__int64)v25);
  v26 = sub_1800181BC(v63, (__int64)&unk_1801CD6B8);
  sub_180043B50((__int64)v80, (__int64)v26);
  v27 = sub_1800181BC(&v69, (__int64)&unk_1801CD6D8);
  sub_180043B50((__int64)v81, (__int64)v27);
  v28 = sub_1800181BC(v63, (__int64)&unk_1801CD6F8);
  sub_180043AC0((__int64)v82, (__int64)v28);
  v29 = sub_1800181BC(&v69, (__int64)&unk_1801CD718);
  sub_180043AC0((__int64)v83, (__int64)v29);
  v30 = sub_1800181BC(v63, (__int64)&unk_1801CD738);
  sub_180043AC0((__int64)v84, (__int64)v30);
  v31 = sub_1800181BC(&v69, (__int64)&unk_1801CD758);
  sub_180043AC0((__int64)v85, (__int64)v31);
  v32 = sub_1800181BC(v63, (__int64)&unk_1801CD778);
  sub_180043A88((__int64)v86, (__int64)v32);
  v33 = sub_1800181BC(&v69, (__int64)&unk_1801CD798);
  sub_180043A88((__int64)v87, (__int64)v33);
  v34 = sub_1800181BC(v63, (__int64)&unk_1801CD7B8);
  sub_180043A88((__int64)v88, (__int64)v34);
  v35 = sub_1800181BC(&v69, (__int64)&unk_1801CD7D8);
  sub_180043A88((__int64)v89, (__int64)v35);
  v62[0] = 0LL;
  v36 = sub_1800181BC(v63, (__int64)&unk_1801CD818);
  sub_180043B50((__int64)v90, (__int64)v36);
  v62[0] = _mm_load_si128((const __m128i *)&xmmword_1801916B0);
  v37 = sub_1800181BC(&v69, (__int64)&unk_1801CD838);
  sub_180043AC0((__int64)v91, (__int64)v37);
  v62[0] = 0LL;
  v38 = sub_1800181BC(v63, (__int64)&unk_1801CD858);
  sub_180043AC0((__int64)v92, (__int64)v38);
  v62[0] = 0LL;
  v39 = sub_1800181BC(&v69, (__int64)&unk_1801CD878);
  sub_180043AC0((__int64)v93, (__int64)v39);
  sub_18007BDCC(v60, v76, 18LL, 0LL);
  sub_18007C50C(v60);
  v40 = sub_180012C40(v62, &v60);
  sub_18005E244(v41, v40);
  sub_18000BFA4((__int64)v76, 64LL, 18LL, (void (__fastcall *)(__int64))sub_180043DE0);
  if ( v61 )
    sub_180010EC8(v61);
  sub_18004DE2C(a2, &v60, 6u);
  v42 = sub_1800181BC(&v69, (__int64)&unk_1801CC4D8);
  sub_180043A88((__int64)v76, (__int64)v42);
  v43 = sub_1800181BC(v63, (__int64)&unk_1801CC4F8);
  sub_180043A88((__int64)v77, (__int64)v43);
  v44 = sub_1800181BC(&v69, (__int64)&unk_1801CC518);
  sub_180043A88((__int64)v78, (__int64)v44);
  v45 = sub_1800181BC(v63, (__int64)&unk_1801CC578);
  sub_180043A88((__int64)v79, (__int64)v45);
  sub_18007BDCC(v60, v76, 4LL, 1LL);
  v46 = v60;
  v47 = sub_1800181BC(&v69, (__int64)&unk_1801CC858);
  sub_180043A88((__int64)v73, (__int64)v47);
  v48 = (unsigned __int16)sub_18007BE98(v46, v73, 1LL);
  sub_180043DE0((__int64)v73);
  v49 = v60;
  v50 = sub_1800181BC(v63, (__int64)&unk_1801CC878);
  sub_180043A88((__int64)v74, (__int64)v50);
  v51 = (unsigned __int16)sub_18007BE98(v49, v74, 1LL);
  sub_180043DE0((__int64)v74);
  v52 = v60;
  v53 = sub_1800181BC(v62, (__int64)&unk_1801CC898);
  sub_180043A88((__int64)v75, (__int64)v53);
  v54 = (unsigned __int16)sub_18007BE98(v52, v75, 1LL);
  sub_180043DE0((__int64)v75);
  *(_DWORD *)(*(_QWORD *)(v60 + 104)
            + 40LL * *(unsigned int *)(56LL * *(unsigned __int16 *)(v60 + 2 * v48 + 128) + *(_QWORD *)(v60 + 56) + 40)
            + 32) = 5;
  *(_DWORD *)(*(_QWORD *)(v60 + 104)
            + 40LL * *(unsigned int *)(56LL * *(unsigned __int16 *)(v60 + 2 * v51 + 128) + *(_QWORD *)(v60 + 56) + 40)
            + 32) = 6;
  *(_DWORD *)(*(_QWORD *)(v60 + 104)
            + 40LL * *(unsigned int *)(56LL * *(unsigned __int16 *)(v60 + 2 * v54 + 128) + *(_QWORD *)(v60 + 56) + 40)
            + 32) = 7;
  sub_18007C50C(v60);
  v55 = sub_180012C40(v62, &v60);
  sub_18005E244(v56, v55);
  sub_18000BFA4((__int64)v76, 64LL, 4LL, (void (__fastcall *)(__int64))sub_180043DE0);
  if ( v61 )
    sub_180010EC8(v61);
  sub_18004DE2C(a2, &v60, 9u);
  sub_18007B9FC(v60, &unk_1801CC298, 7LL, 3LL);
  sub_18007B9FC(v60, &unk_1801CC2B8, 5LL, 3LL);
  sub_18007B9FC(v60, &unk_1801CC2F8, 5LL, 3LL);
  sub_18007B9FC(v60, &unk_1801CC258, 5LL, 3LL);
  sub_18007B9FC(v60, &unk_1801CC278, 5LL, 3LL);
  sub_18007C50C(v60);
  v57 = sub_180012C40(v62, &v60);
  result = sub_18005E244(v58, v57);
  if ( v61 )
    return sub_180010EC8(v61);
  return result;
}
