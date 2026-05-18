/*
 * XREFs of sub_1800780E0 @ 0x1800780E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_1800187D4 @ 0x1800187D4 (sub_1800187D4.c)
 *     sub_18002DD68 @ 0x18002DD68 (sub_18002DD68.c)
 *     sub_18004232C @ 0x18004232C (sub_18004232C.c)
 *     sub_180043A88 @ 0x180043A88 (sub_180043A88.c)
 *     sub_180043AC0 @ 0x180043AC0 (sub_180043AC0.c)
 *     sub_180043B50 @ 0x180043B50 (sub_180043B50.c)
 *     sub_180043CD0 @ 0x180043CD0 (sub_180043CD0.c)
 *     sub_180043DE0 @ 0x180043DE0 (sub_180043DE0.c)
 *     sub_18004DE2C @ 0x18004DE2C (sub_18004DE2C.c)
 *     sub_18004DE74 @ 0x18004DE74 (sub_18004DE74.c)
 *     sub_18004E1AC @ 0x18004E1AC (sub_18004E1AC.c)
 *     sub_18004E8E8 @ 0x18004E8E8 (sub_18004E8E8.c)
 *     sub_18005D05C @ 0x18005D05C (sub_18005D05C.c)
 *     sub_18005D458 @ 0x18005D458 (sub_18005D458.c)
 *     sub_18005D540 @ 0x18005D540 (sub_18005D540.c)
 *     sub_18005D8B8 @ 0x18005D8B8 (sub_18005D8B8.c)
 *     sub_18005E244 @ 0x18005E244 (sub_18005E244.c)
 *     sub_180078B44 @ 0x180078B44 (sub_180078B44.c)
 *     sub_18007B9FC @ 0x18007B9FC (sub_18007B9FC.c)
 *     sub_18007BDCC @ 0x18007BDCC (sub_18007BDCC.c)
 *     sub_18007BE98 @ 0x18007BE98 (sub_18007BE98.c)
 *     sub_18007C50C @ 0x18007C50C (sub_18007C50C.c)
 *     sub_18007CA8C @ 0x18007CA8C (sub_18007CA8C.c)
 *     sub_18007D0C0 @ 0x18007D0C0 (sub_18007D0C0.c)
 *     sub_180080D3C @ 0x180080D3C (sub_180080D3C.c)
 *     sub_180080E98 @ 0x180080E98 (sub_180080E98.c)
 *     sub_180080F34 @ 0x180080F34 (sub_180080F34.c)
 *     sub_1800812CC @ 0x1800812CC (sub_1800812CC.c)
 */

// Hidden C++ exception states: #wind=26
__int64 __fastcall sub_1800780E0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r15
  __int64 v5; // r13
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  _DWORD *v15; // rsi
  _DWORD *v16; // r12
  __int64 v17; // r13
  __int64 v18; // r15
  __int64 v19; // rbx
  _QWORD *v20; // rax
  _QWORD *v21; // rbx
  __int64 v22; // r14
  char v23; // al
  __int64 *v24; // rax
  _QWORD *v25; // rax
  char v26; // al
  __int64 *v27; // rax
  _QWORD *v28; // rax
  char v29; // al
  __int64 *v30; // rax
  _QWORD *v31; // rax
  char v32; // al
  __int64 *v33; // rax
  _QWORD *v34; // rbx
  _QWORD *v35; // rax
  _QWORD *v36; // r9
  __int64 v37; // rbx
  __int64 *v38; // rax
  _QWORD *v39; // rbx
  _QWORD *v40; // rax
  _QWORD *v41; // r9
  __int64 v42; // rbx
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // r8
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // r8
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rbx
  _QWORD *v64; // rax
  __int64 v65; // rbx
  __int64 *v66; // rax
  __int64 v67; // r9
  _QWORD *v68; // rax
  __int64 *v69; // rax
  __int64 v70; // r8
  __int64 result; // rax
  int v72; // [rsp+20h] [rbp-E0h]
  __int64 v74; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v75; // [rsp+58h] [rbp-A8h]
  __int128 v76; // [rsp+60h] [rbp-A0h]
  __int64 v77; // [rsp+70h] [rbp-90h]
  __int64 v78; // [rsp+78h] [rbp-88h]
  __int64 v79[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v80; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v81; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v82; // [rsp+B0h] [rbp-50h]
  __int64 v83; // [rsp+B8h] [rbp-48h]
  __int64 v84; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v85; // [rsp+D0h] [rbp-30h]
  __int64 v86; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v87; // [rsp+E0h] [rbp-20h]
  __int64 v88; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v89; // [rsp+F0h] [rbp-10h]
  __int64 v90; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v91; // [rsp+100h] [rbp+0h]
  __int64 v92; // [rsp+108h] [rbp+8h] BYREF
  __int64 v93; // [rsp+110h] [rbp+10h]
  __m128i si128; // [rsp+118h] [rbp+18h] BYREF
  int v95; // [rsp+128h] [rbp+28h]
  int v96; // [rsp+12Ch] [rbp+2Ch]
  _QWORD v97[8]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v98[64]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v99[64]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v100[64]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v101[64]; // [rsp+230h] [rbp+130h] BYREF
  _BYTE v102[64]; // [rsp+270h] [rbp+170h] BYREF
  _BYTE v103[64]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v104[64]; // [rsp+2F0h] [rbp+1F0h] BYREF
  _BYTE v105[64]; // [rsp+330h] [rbp+230h] BYREF
  _BYTE v106[64]; // [rsp+370h] [rbp+270h] BYREF
  _BYTE v107[64]; // [rsp+3B0h] [rbp+2B0h] BYREF
  _BYTE v108[64]; // [rsp+3F0h] [rbp+2F0h] BYREF
  _BYTE v109[64]; // [rsp+430h] [rbp+330h] BYREF
  _BYTE v110[64]; // [rsp+470h] [rbp+370h] BYREF
  _BYTE v111[64]; // [rsp+4B0h] [rbp+3B0h] BYREF
  _BYTE v112[64]; // [rsp+4F0h] [rbp+3F0h] BYREF
  _BYTE v113[64]; // [rsp+530h] [rbp+430h] BYREF
  _BYTE v114[64]; // [rsp+570h] [rbp+470h] BYREF
  _BYTE v115[64]; // [rsp+5B0h] [rbp+4B0h] BYREF

  v4 = a2;
  v84 = a2;
  v5 = a1;
  v6 = sub_18004232C(a1 + 8, v79);
  v7 = sub_1800181BC(&v81, (__int64)&unk_1801CCF98);
  v8 = sub_18004DE74(v4, &v86, (__int64)v7, v6);
  v9 = (__int64 *)(v5 + 56);
  sub_180011F5C((_QWORD *)(v5 + 56), v8);
  if ( v87 )
    sub_180010EC8(v87);
  v10 = *v9;
  v11 = sub_180011CC4(&v81, "ImageProcessing");
  sub_180078B44(v10, v11);
  sub_1800187D4((__int64 *)(*v9 + 528), (__int64)a3);
  LODWORD(v80) = sub_18005D05C(*v9, (__int64)&unk_1801CD298);
  v79[0] = (__int64)&v80;
  v79[1] = (__int64)&v80 + 4;
  v80 = sub_18004E1AC(v12, (_DWORD **)v79);
  si128.m128i_i32[0] = sub_18005D05C(*v9, (__int64)&unk_1801CD2B8);
  si128.m128i_i32[1] = sub_18005D05C(*v9, (__int64)&unk_1801CD2D8);
  si128.m128i_i32[2] = sub_18005D05C(*v9, (__int64)&unk_1801CD2F8);
  si128.m128i_i32[3] = sub_18005D05C(*v9, (__int64)&unk_1801CD318);
  v95 = sub_18005D05C(*v9, (__int64)&unk_1801CD338);
  v96 = sub_18005D05C(*v9, (__int64)&unk_1801CD358);
  v79[0] = (__int64)&si128;
  v79[1] = (__int64)v97;
  v14 = sub_18004E1AC(v13, (_DWORD **)v79);
  v15 = (_DWORD *)*a3;
  v16 = (_DWORD *)a3[1];
  if ( (_DWORD *)*a3 != v16 )
  {
    v17 = v80;
    v18 = v14;
    do
    {
      *(_DWORD *)(*v9 + 552) = *v15;
      v19 = *v9;
      v20 = sub_180011CC4(v79, "ImageProcessingCameraEffects");
      sub_18005D540(v19, &v81, (__int64)v20, v17, v72, v18);
      v21 = v81;
      v22 = v82;
      while ( v21 != (_QWORD *)v22 )
      {
        LODWORD(v74) = 0;
        v75 = 33LL;
        v76 = 0LL;
        v77 = 0LL;
        v78 = 0LL;
        sub_1800812CC(*v21, &v74);
        v21 += 2;
      }
      *(_OWORD *)v79 = 0LL;
      v23 = sub_18005D05C(*v9, (__int64)&unk_1801CD278);
      v24 = sub_18005D458(*v9, &v86, 1LL << v23, 0LL, 0);
      sub_180011F5C(v79, v24);
      if ( v87 )
        sub_180010EC8(v87);
      v25 = sub_180011CC4(v97, "ImageProcessingBlur");
      sub_180080E98(v79[0], v25);
      LODWORD(v74) = 0;
      v75 = 33LL;
      v76 = 0LL;
      v77 = 0LL;
      v78 = 0LL;
      sub_1800812CC(v79[0], &v74);
      v26 = sub_18005D05C(*v9, (__int64)&unk_1801CD258);
      v27 = sub_18005D458(*v9, &v88, 1LL << v26, 0LL, 0);
      sub_180011F5C(v79, v27);
      if ( v89 )
        sub_180010EC8(v89);
      v28 = sub_180011CC4(v97, "ImageProcessingBlur");
      sub_180080E98(v79[0], v28);
      LODWORD(v74) = 0;
      v75 = 33LL;
      v76 = 0LL;
      v77 = 0LL;
      v78 = 0LL;
      sub_1800812CC(v79[0], &v74);
      v29 = sub_18005D05C(*v9, (__int64)&unk_1801CD238);
      v30 = sub_18005D458(*v9, &v90, 1LL << v29, 0LL, 0);
      sub_180011F5C(v79, v30);
      if ( v91 )
        sub_180010EC8(v91);
      v31 = sub_180011CC4(v97, "ImageProcessingBlur");
      sub_180080E98(v79[0], v31);
      LODWORD(v74) = 0;
      v75 = 33LL;
      v76 = 0LL;
      v77 = 0LL;
      v78 = 0LL;
      sub_1800812CC(v79[0], &v74);
      v32 = sub_18005D05C(*v9, (__int64)&unk_1801CD218);
      v33 = sub_18005D458(*v9, &v92, 1LL << v32, 0LL, 0);
      sub_180011F5C(v79, v33);
      if ( v93 )
        sub_180010EC8(v93);
      v34 = sub_180011CC4(v97, byte_1800F9DE0);
      v35 = sub_180011CC4(&v74, "ImageProcessingFullscreen");
      v36 = v34;
      v37 = v79[0];
      sub_180080F34(v79[0], v35, 0LL, v36);
      sub_180080D3C(v37, 14, 2, 3, 1);
      LODWORD(v74) = 0;
      v75 = 33LL;
      v76 = 0LL;
      v77 = 0LL;
      v78 = 0LL;
      sub_1800812CC(v37, &v74);
      v38 = sub_18005D458(*v9, &si128, 0LL, 0LL, 0);
      sub_180011F5C(v79, v38);
      if ( si128.m128i_i64[1] )
        sub_180010EC8(si128.m128i_i64[1]);
      v39 = sub_180011CC4(&v74, byte_1800F9DE0);
      v40 = sub_180011CC4(v97, "ImageProcessingFullscreen");
      v41 = v39;
      v42 = v79[0];
      sub_180080F34(v79[0], v40, 0LL, v41);
      sub_180080D3C(v42, 0, 2, 0, 1);
      LODWORD(v74) = 0;
      v75 = 33LL;
      v76 = 0LL;
      v77 = 0LL;
      v78 = 0LL;
      sub_1800812CC(v42, &v74);
      *(_DWORD *)(*v9 + 552) = 0;
      if ( v79[1] )
        sub_180010EC8(v79[1]);
      if ( v81 )
      {
        sub_18002DD68((__int64)v81, v82);
        sub_18000E26C(v81, (v83 - (_QWORD)v81) & 0xFFFFFFFFFFFFFFF0uLL);
      }
      ++v15;
    }
    while ( v15 != v16 );
    v4 = v84;
    v5 = a1;
  }
  sub_18004DE2C(v4, v79, 6u);
  v43 = sub_1800181BC(&v74, (__int64)&unk_1801CCFB8);
  sub_180043A88((__int64)v98, (__int64)v43);
  v44 = sub_1800181BC(v97, (__int64)&unk_1801CCFD8);
  sub_180043A88((__int64)v99, (__int64)v44);
  v45 = sub_1800181BC(&v74, (__int64)&unk_1801CCFF8);
  sub_180043CD0((__int64)v100, (__int64)v45, v46, 1.0);
  sub_18007BDCC(v79[0], v98, 3LL, 0LL);
  sub_18007D0C0(v79[0], &unk_1801CCFD8, 9LL);
  v47 = sub_1800181BC(&v74, (__int64)&unk_1801CD058);
  sub_180043A88((__int64)v101, (__int64)v47);
  v48 = sub_1800181BC(v97, (__int64)&unk_1801CD078);
  sub_180043CD0((__int64)v102, (__int64)v48, v49, 1.0);
  v50 = sub_1800181BC(&v74, (__int64)&unk_1801CD098);
  sub_180043A88((__int64)v103, (__int64)v50);
  v51 = sub_1800181BC(v97, (__int64)&unk_1801CD0B8);
  sub_180043A88((__int64)v104, (__int64)v51);
  v52 = sub_1800181BC(&v74, (__int64)&unk_1801CD0D8);
  sub_180043A88((__int64)v105, (__int64)v52);
  v53 = sub_1800181BC(v97, (__int64)&unk_1801CD0F8);
  sub_180043A88((__int64)v106, (__int64)v53);
  v54 = sub_1800181BC(&v74, (__int64)&unk_1801CD118);
  sub_180043A88((__int64)v107, (__int64)v54);
  si128 = 0LL;
  v55 = sub_1800181BC(v97, (__int64)&unk_1801CD158);
  sub_180043B50((__int64)v108, (__int64)v55);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801916B0);
  v56 = sub_1800181BC(&v74, (__int64)&unk_1801CD178);
  sub_180043AC0((__int64)v109, (__int64)v56);
  si128 = 0LL;
  v57 = sub_1800181BC(v97, (__int64)&unk_1801CD198);
  sub_180043AC0((__int64)v110, (__int64)v57);
  si128 = 0LL;
  v58 = sub_1800181BC(&v74, (__int64)&unk_1801CD1B8);
  sub_180043AC0((__int64)v111, (__int64)v58);
  v59 = sub_1800181BC(v97, (__int64)&unk_1801CD1D8);
  sub_180043A88((__int64)v112, (__int64)v59);
  v60 = sub_1800181BC(&v74, (__int64)&unk_1801CD1F8);
  sub_180043A88((__int64)v113, (__int64)v60);
  v61 = sub_1800181BC(v97, (__int64)&unk_1801CC318);
  sub_180043A88((__int64)v114, (__int64)v61);
  si128 = _mm_load_si128((const __m128i *)&xmmword_180191430);
  v62 = sub_1800181BC(&v74, (__int64)&unk_1801CD038);
  sub_180043B50((__int64)v115, (__int64)v62);
  sub_18007BDCC(v79[0], v101, 15LL, 1LL);
  sub_18007CA8C(v79[0], 16LL);
  sub_18007B9FC(v79[0], &unk_1801CD018, 5LL, *(unsigned int *)(v5 + 112));
  v63 = v79[0];
  v64 = sub_1800181BC(&v74, (__int64)&unk_1801CD138);
  sub_180043A88((__int64)v97, (__int64)v64);
  v65 = (unsigned __int16)sub_18007BE98(v63, v97, 1LL);
  sub_180043DE0((__int64)v97);
  *(_DWORD *)(*(_QWORD *)(v79[0] + 104)
            + 40LL
            * *(unsigned int *)(56LL * *(unsigned __int16 *)(v79[0] + 2 * v65 + 128) + *(_QWORD *)(v79[0] + 56) + 40)
            + 32) = 12;
  sub_18007C50C(v79[0]);
  v66 = sub_180012C40(&si128, v79);
  sub_18005E244(v67, v66);
  sub_18000BFA4((__int64)v101, 64LL, 15LL, (void (__fastcall *)(__int64))sub_180043DE0);
  sub_18000BFA4((__int64)v98, 64LL, 3LL, (void (__fastcall *)(__int64))sub_180043DE0);
  if ( v79[1] )
    sub_180010EC8(v79[1]);
  v68 = sub_1800181BC(&v74, (__int64)&unk_1801CCF58);
  sub_18004E8E8(v4, &v84, (__int64)v68);
  sub_180012C40(v79, (_QWORD *)(v84 + 160));
  v69 = sub_180012C40(&si128, v79);
  sub_18005E244(v70, v69);
  result = sub_18005D8B8(*v9);
  if ( v79[1] )
    result = sub_180010EC8(v79[1]);
  if ( v85 )
    return sub_180010EC8(v85);
  return result;
}
