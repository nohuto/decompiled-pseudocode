/*
 * XREFs of sub_1800908AC @ 0x1800908AC
 * Callers:
 *     sub_180076C20 @ 0x180076C20 (sub_180076C20.c)
 *     sub_180079330 @ 0x180079330 (sub_180079330.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_180042444 @ 0x180042444 (sub_180042444.c)
 *     sub_18004C0E0 @ 0x18004C0E0 (sub_18004C0E0.c)
 *     sub_18004E254 @ 0x18004E254 (sub_18004E254.c)
 *     sub_18005BBE8 @ 0x18005BBE8 (sub_18005BBE8.c)
 *     sub_18005D458 @ 0x18005D458 (sub_18005D458.c)
 *     sub_1800608B8 @ 0x1800608B8 (sub_1800608B8.c)
 *     sub_180080CFC @ 0x180080CFC (sub_180080CFC.c)
 *     sub_180080D3C @ 0x180080D3C (sub_180080D3C.c)
 *     sub_180081260 @ 0x180081260 (sub_180081260.c)
 *     sub_1800812CC @ 0x1800812CC (sub_1800812CC.c)
 *     sub_180081920 @ 0x180081920 (sub_180081920.c)
 */

// Hidden C++ exception states: #wind=57
__int64 __fastcall sub_1800908AC(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 v6; // r8
  __int64 v7; // rax
  int v8; // ecx
  int v9; // r13d
  __int64 *v10; // r12
  __int64 v11; // r14
  __int64 *v12; // rax
  __int64 v13; // r15
  __int64 v14; // rbx
  _QWORD *v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 *v19; // rax
  __int64 *v20; // rax
  __int64 *v21; // rax
  __int64 *v22; // rax
  __int64 *v23; // rax
  __int64 *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rbx
  __int64 *v27; // rax
  __int64 *v28; // rax
  __int64 *v29; // rax
  __int64 *v30; // rax
  __int64 *v31; // rax
  __int64 *v32; // rax
  __int64 *v33; // rax
  __m128i v35; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v36; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h]
  __int64 v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h]
  __int64 v42; // [rsp+80h] [rbp-80h]
  __int64 v43; // [rsp+88h] [rbp-78h]
  __int64 v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  __int64 v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  __int64 v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  __int64 v50; // [rsp+C0h] [rbp-40h]
  __int64 v51; // [rsp+C8h] [rbp-38h]
  __int64 *i; // [rsp+D0h] [rbp-30h]
  void *v53[2]; // [rsp+D8h] [rbp-28h] BYREF
  void *v54[2]; // [rsp+E8h] [rbp-18h] BYREF
  void *v55[2]; // [rsp+F8h] [rbp-8h] BYREF
  void *v56[2]; // [rsp+108h] [rbp+8h] BYREF
  void *v57[2]; // [rsp+118h] [rbp+18h] BYREF
  void *v58[2]; // [rsp+128h] [rbp+28h] BYREF
  void *v59[2]; // [rsp+138h] [rbp+38h] BYREF
  void *v60[2]; // [rsp+148h] [rbp+48h] BYREF
  void *v61[2]; // [rsp+158h] [rbp+58h] BYREF
  void *v62[2]; // [rsp+168h] [rbp+68h] BYREF
  void *v63[2]; // [rsp+178h] [rbp+78h] BYREF
  void *v64[2]; // [rsp+188h] [rbp+88h] BYREF
  void *v65[2]; // [rsp+198h] [rbp+98h] BYREF
  void *v66[2]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v67; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v68; // [rsp+1C0h] [rbp+C0h]
  __int64 v69; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v70; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v71; // [rsp+1E0h] [rbp+E0h]
  __int64 v72; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v73; // [rsp+1F0h] [rbp+F0h]
  __int64 v74; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v75; // [rsp+200h] [rbp+100h]
  __int64 v76; // [rsp+208h] [rbp+108h] BYREF
  __int64 v77; // [rsp+210h] [rbp+110h]
  __int64 v78; // [rsp+218h] [rbp+118h] BYREF
  __int64 v79; // [rsp+220h] [rbp+120h]
  __int64 v80; // [rsp+228h] [rbp+128h] BYREF
  __int64 v81; // [rsp+230h] [rbp+130h]
  __int64 v82; // [rsp+238h] [rbp+138h] BYREF
  __int64 v83; // [rsp+240h] [rbp+140h]
  __int64 v84; // [rsp+248h] [rbp+148h] BYREF
  __int64 v85; // [rsp+250h] [rbp+150h]
  __int64 v86; // [rsp+258h] [rbp+158h] BYREF
  __int64 v87; // [rsp+260h] [rbp+160h]
  __int64 v88; // [rsp+268h] [rbp+168h] BYREF
  __int64 v89; // [rsp+270h] [rbp+170h]
  __int64 v90; // [rsp+278h] [rbp+178h] BYREF
  __int64 v91; // [rsp+280h] [rbp+180h]
  __int64 v92; // [rsp+288h] [rbp+188h] BYREF
  __int64 v93; // [rsp+290h] [rbp+190h]
  __int64 v94; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v95; // [rsp+2A8h] [rbp+1A8h]
  __int128 v96; // [rsp+2B0h] [rbp+1B0h]
  __int64 v97; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int64 v98; // [rsp+2C8h] [rbp+1C8h]
  _QWORD v99[4]; // [rsp+2E0h] [rbp+1E0h] BYREF
  __int64 v100; // [rsp+300h] [rbp+200h] BYREF
  __int64 v101; // [rsp+308h] [rbp+208h]
  _QWORD v102[4]; // [rsp+320h] [rbp+220h] BYREF
  _QWORD v103[3]; // [rsp+340h] [rbp+240h] BYREF
  char v104; // [rsp+358h] [rbp+258h]
  _OWORD v105[2]; // [rsp+35Ch] [rbp+25Ch] BYREF
  int v106; // [rsp+37Ch] [rbp+27Ch]
  _QWORD v107[4]; // [rsp+380h] [rbp+280h] BYREF
  _QWORD v108[4]; // [rsp+3A0h] [rbp+2A0h] BYREF
  __int64 v109; // [rsp+3C0h] [rbp+2C0h] BYREF
  __int64 v110; // [rsp+3C8h] [rbp+2C8h]
  __int64 v111; // [rsp+3E0h] [rbp+2E0h] BYREF

  sub_1800181BC(&v100, (__int64)&unk_1801CCE58);
  v35.m128i_i64[0] = (__int64)&v100;
  v35.m128i_i64[1] = (__int64)v102;
  sub_1800608B8((__int64 *)v66, &v35);
  sub_18000BFA4((__int64)&v100, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_18005BBE8(v35.m128i_i64, v66);
  v38 = sub_18004E254(a2, (void **)&v35);
  sub_1800181BC(&v109, (__int64)&unk_1801CCF18);
  v35.m128i_i64[0] = (__int64)&v109;
  v35.m128i_i64[1] = (__int64)&v111;
  sub_1800608B8((__int64 *)v65, &v35);
  sub_18000BFA4((__int64)&v109, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_18005BBE8(v35.m128i_i64, v65);
  v51 = sub_18004E254(a2, (void **)&v35);
  sub_1800181BC(&v94, (__int64)&unk_1801CCF18);
  sub_1800181BC(&v97, (__int64)&unk_1801CCE58);
  v35.m128i_i64[0] = (__int64)&v94;
  v35.m128i_i64[1] = (__int64)v99;
  sub_1800608B8((__int64 *)v64, &v35);
  sub_18000BFA4((__int64)&v94, 32LL, 2LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_18005BBE8(v35.m128i_i64, v64);
  v44 = sub_18004E254(a2, (void **)&v35);
  sub_1800181BC(&v100, (__int64)&unk_1801CCF18);
  sub_1800181BC(v102, (__int64)&unk_1801CCDD8);
  v35.m128i_i64[0] = (__int64)&v100;
  v35.m128i_i64[1] = (__int64)v103;
  sub_1800608B8((__int64 *)v63, &v35);
  sub_18000BFA4((__int64)&v100, 32LL, 2LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_18005BBE8(v35.m128i_i64, v63);
  v47 = sub_18004E254(a2, (void **)&v35);
  sub_1800181BC(&v94, (__int64)&unk_1801CCF18);
  sub_1800181BC(&v97, (__int64)&unk_1801CCDF8);
  v35.m128i_i64[0] = (__int64)&v94;
  v35.m128i_i64[1] = (__int64)v99;
  sub_1800608B8((__int64 *)v62, &v35);
  sub_18000BFA4((__int64)&v94, 32LL, 2LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_18005BBE8(v35.m128i_i64, v62);
  v48 = sub_18004E254(a2, (void **)&v35);
  sub_1800181BC(&v100, (__int64)&unk_1801CCDD8);
  v35.m128i_i64[0] = (__int64)&v100;
  v35.m128i_i64[1] = (__int64)v102;
  sub_1800608B8((__int64 *)v61, &v35);
  sub_18000BFA4((__int64)&v100, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_18005BBE8(v35.m128i_i64, v61);
  v49 = sub_18004E254(a2, (void **)&v35);
  sub_1800181BC(&v94, (__int64)&unk_1801CCDD8);
  sub_1800181BC(&v97, (__int64)&unk_1801CCE58);
  v35.m128i_i64[0] = (__int64)&v94;
  v35.m128i_i64[1] = (__int64)v99;
  sub_1800608B8((__int64 *)v60, &v35);
  sub_18000BFA4((__int64)&v94, 32LL, 2LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_18005BBE8(v35.m128i_i64, v60);
  v42 = sub_18004E254(a2, (void **)&v35);
  sub_1800181BC(&v100, (__int64)&unk_1801CCDF8);
  v35.m128i_i64[0] = (__int64)&v100;
  v35.m128i_i64[1] = (__int64)v102;
  sub_1800608B8((__int64 *)v59, &v35);
  sub_18000BFA4((__int64)&v100, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_18005BBE8(v35.m128i_i64, v59);
  v50 = sub_18004E254(a2, (void **)&v35);
  sub_1800181BC(&v94, (__int64)&unk_1801CCDF8);
  sub_1800181BC(&v97, (__int64)&unk_1801CCDD8);
  v35.m128i_i64[0] = (__int64)&v94;
  v35.m128i_i64[1] = (__int64)v99;
  sub_1800608B8((__int64 *)v58, &v35);
  sub_18000BFA4((__int64)&v94, 32LL, 2LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_18005BBE8(v35.m128i_i64, v58);
  v46 = sub_18004E254(a2, (void **)&v35);
  sub_1800181BC(v103, (__int64)&unk_1801CCDF8);
  sub_1800181BC((_OWORD *)((char *)v105 + 4), (__int64)&unk_1801CCDD8);
  sub_1800181BC(v107, (__int64)&unk_1801CCE78);
  v35.m128i_i64[0] = (__int64)v103;
  v35.m128i_i64[1] = (__int64)v108;
  sub_1800608B8((__int64 *)v57, &v35);
  sub_18000BFA4((__int64)v103, 32LL, 3LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_18005BBE8(v35.m128i_i64, v57);
  v45 = sub_18004E254(a2, (void **)&v35);
  sub_1800181BC(&v94, (__int64)&unk_1801CCE58);
  sub_1800181BC(&v97, (__int64)&unk_1801CCDF8);
  sub_1800181BC(v99, (__int64)&unk_1801CCDD8);
  v35.m128i_i64[0] = (__int64)&v94;
  v35.m128i_i64[1] = (__int64)&v100;
  sub_1800608B8((__int64 *)v56, &v35);
  sub_18000BFA4((__int64)&v94, 32LL, 3LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_18005BBE8(v35.m128i_i64, v56);
  v41 = sub_18004E254(a2, (void **)&v35);
  sub_1800181BC(v103, (__int64)&unk_1801CCE58);
  sub_1800181BC((_OWORD *)((char *)v105 + 4), (__int64)&unk_1801CCDF8);
  sub_1800181BC(v107, (__int64)&unk_1801CCDD8);
  sub_1800181BC(v108, (__int64)&unk_1801CCE78);
  v35.m128i_i64[0] = (__int64)v103;
  v35.m128i_i64[1] = (__int64)&v109;
  sub_1800608B8((__int64 *)v55, &v35);
  sub_18000BFA4((__int64)v103, 32LL, 4LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_18005BBE8(v35.m128i_i64, v55);
  v40 = sub_18004E254(a2, (void **)&v35);
  sub_1800181BC(&v94, (__int64)&unk_1801CCDF8);
  sub_1800181BC(&v97, (__int64)&unk_1801CCE58);
  v35.m128i_i64[0] = (__int64)&v94;
  v35.m128i_i64[1] = (__int64)v99;
  sub_1800608B8((__int64 *)v54, &v35);
  sub_18000BFA4((__int64)&v94, 32LL, 2LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_18005BBE8(v35.m128i_i64, v54);
  v43 = sub_18004E254(a2, (void **)&v35);
  sub_1800181BC(&v100, (__int64)&unk_1801CCED8);
  v35.m128i_i64[0] = (__int64)&v100;
  v35.m128i_i64[1] = (__int64)v102;
  sub_1800608B8((__int64 *)v53, &v35);
  sub_18000BFA4((__int64)&v100, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_18005BBE8(v35.m128i_i64, v53);
  v6 = sub_18004E254(a2, (void **)&v35);
  v37 = v6;
  v7 = *(_QWORD *)(a2 + 18688);
  v39 = v7;
  v8 = 23;
  if ( *(int *)(a1 + 104) < 40960 )
    v8 = 0;
  v9 = 0;
  if ( (*(_BYTE *)(v7 + 560) & 2) == 0 )
    v9 = v8;
  v36 = 0LL;
  v10 = *a3;
  for ( i = a3[1]; v10 != i; v6 = v37 )
  {
    v11 = *v10;
    v12 = sub_18005D458(*(_QWORD *)(a1 + 56), &v67, *v10 | v6, 0LL, 0);
    sub_180011F5C(&v36, v12);
    if ( v68 )
      sub_180010EC8(v68);
    v13 = v38 | v11;
    v14 = v36;
    sub_180081260((_QWORD *)v36, v38 | v11);
    LODWORD(v94) = 0;
    v95 = *(_QWORD *)(a1 + 112);
    v96 = 0LL;
    v97 = 0LL;
    v98 = 0LL;
    sub_1800812CC(v14, (__int64)&v94);
    v103[1] = 0LL;
    v103[2] = 0LL;
    v104 = 0;
    memset(v105, 0, sizeof(v105));
    v106 = 65793;
    LOBYTE(v107[0]) = 1;
    HIDWORD(v107[0]) = 3;
    v103[0] = 0x200000001LL;
    sub_180042444(v39, v35.m128i_i64);
    sub_180081920(v35.m128i_i64[0], (__int64)v103, 0LL);
    v15 = sub_180012C40(&v69, &v35);
    sub_180080CFC(v14, v15);
    if ( v35.m128i_i64[1] )
      sub_180010EC8(v35.m128i_i64[1]);
    v16 = sub_18005D458(*(_QWORD *)(a1 + 56), &v70, v40 | v11, 0LL, 0);
    sub_180011F5C(&v36, v16);
    if ( v71 )
      sub_180010EC8(v71);
    v17 = v41 | v11;
    v18 = v36;
    sub_180081260((_QWORD *)v36, v41 | v11);
    LODWORD(v94) = 0;
    v95 = *(_QWORD *)(a1 + 112);
    v96 = 0LL;
    v97 = 0LL;
    v98 = 0LL;
    sub_1800812CC(v18, (__int64)&v94);
    sub_180080D3C(v18, 1, 2, 1, 1);
    v19 = sub_18005D458(*(_QWORD *)(a1 + 56), &v72, v17, 0LL, 1);
    sub_180011F5C(&v36, v19);
    if ( v73 )
      sub_180010EC8(v73);
    LODWORD(v94) = 0;
    v95 = *(_QWORD *)(a1 + 112);
    v96 = 0LL;
    v97 = 0LL;
    v98 = 0LL;
    sub_1800812CC(v36, (__int64)&v94);
    sub_180080D3C(v36, 23, 2, 3, 1);
    v20 = sub_18005D458(*(_QWORD *)(a1 + 56), &v74, v42 | v11, 0LL, 1);
    sub_180011F5C(&v36, v20);
    if ( v75 )
      sub_180010EC8(v75);
    LODWORD(v94) = 0;
    v95 = *(_QWORD *)(a1 + 112);
    v96 = 0LL;
    v97 = 0LL;
    v98 = 0LL;
    sub_1800812CC(v36, (__int64)&v94);
    sub_180080D3C(v36, v9, 2, 3, 1);
    v21 = sub_18005D458(*(_QWORD *)(a1 + 56), &v76, v43 | v11, 0LL, 1);
    sub_180011F5C(&v36, v21);
    if ( v77 )
      sub_180010EC8(v77);
    LODWORD(v94) = 0;
    v95 = *(_QWORD *)(a1 + 112);
    v96 = 0LL;
    v97 = 0LL;
    v98 = 0LL;
    sub_1800812CC(v36, (__int64)&v94);
    sub_180080D3C(v36, 1, 2, 1, 1);
    v22 = sub_18005D458(*(_QWORD *)(a1 + 56), &v78, v44 | v11, 0LL, 1);
    sub_180011F5C(&v36, v22);
    if ( v79 )
      sub_180010EC8(v79);
    LODWORD(v94) = 0;
    v95 = *(_QWORD *)(a1 + 112);
    v96 = 0LL;
    v97 = 0LL;
    v98 = 0LL;
    sub_1800812CC(v36, (__int64)&v94);
    sub_180080D3C(v36, 0, 2, 3, 15);
    v23 = sub_18005D458(*(_QWORD *)(a1 + 56), &v80, v13, 0LL, 1);
    sub_180011F5C(&v36, v23);
    if ( v81 )
      sub_180010EC8(v81);
    LODWORD(v94) = 0;
    v95 = *(_QWORD *)(a1 + 112);
    v96 = 0LL;
    v97 = 0LL;
    v98 = 0LL;
    sub_1800812CC(v36, (__int64)&v94);
    sub_180080D3C(v36, 0, 2, 3, 1);
    v24 = sub_18005D458(*(_QWORD *)(a1 + 56), &v82, v45 | v11, 0LL, 0);
    sub_180011F5C(&v36, v24);
    if ( v83 )
      sub_180010EC8(v83);
    v25 = v46 | v11;
    v26 = v36;
    sub_180081260((_QWORD *)v36, v46 | v11);
    LODWORD(v94) = 0;
    v95 = *(_QWORD *)(a1 + 112);
    v96 = 0LL;
    v97 = 0LL;
    v98 = 0LL;
    sub_1800812CC(v26, (__int64)&v94);
    sub_180080D3C(v26, 1, 2, 1, 15);
    v27 = sub_18005D458(*(_QWORD *)(a1 + 56), &v84, v25, 0LL, 1);
    sub_180011F5C(&v36, v27);
    if ( v85 )
      sub_180010EC8(v85);
    LODWORD(v94) = 0;
    v95 = *(_QWORD *)(a1 + 112);
    v96 = 0LL;
    v97 = 0LL;
    v98 = 0LL;
    sub_1800812CC(v36, (__int64)&v94);
    sub_180080D3C(v36, 23, 2, 3, 15);
    v28 = sub_18005D458(*(_QWORD *)(a1 + 56), &v86, v47 | v11, 0LL, 1);
    sub_180011F5C(&v36, v28);
    if ( v87 )
      sub_180010EC8(v87);
    LODWORD(v94) = 0;
    v95 = *(_QWORD *)(a1 + 112);
    v96 = 0LL;
    v97 = 0LL;
    v98 = 0LL;
    sub_1800812CC(v36, (__int64)&v94);
    sub_180080D3C(v36, 23, 2, 3, 15);
    v29 = sub_18005D458(*(_QWORD *)(a1 + 56), &v88, v48 | v11, 0LL, 1);
    sub_180011F5C(&v36, v29);
    if ( v89 )
      sub_180010EC8(v89);
    LODWORD(v94) = 0;
    v95 = *(_QWORD *)(a1 + 112);
    v96 = 0LL;
    v97 = 0LL;
    v98 = 0LL;
    sub_1800812CC(v36, (__int64)&v94);
    sub_180080D3C(v36, 1, 2, 1, 15);
    v30 = sub_18005D458(*(_QWORD *)(a1 + 56), &v90, v49 | v11, 0LL, 1);
    sub_180011F5C(&v36, v30);
    if ( v91 )
      sub_180010EC8(v91);
    LODWORD(v94) = 0;
    v95 = *(_QWORD *)(a1 + 112);
    v96 = 0LL;
    v97 = 0LL;
    v98 = 0LL;
    sub_1800812CC(v36, (__int64)&v94);
    sub_180080D3C(v36, v9, 2, 3, 15);
    v31 = sub_18005D458(*(_QWORD *)(a1 + 56), &v92, v50 | v11, 0LL, 1);
    sub_180011F5C(&v36, v31);
    if ( v93 )
      sub_180010EC8(v93);
    LODWORD(v94) = 0;
    v95 = *(_QWORD *)(a1 + 112);
    v96 = 0LL;
    v97 = 0LL;
    v98 = 0LL;
    sub_1800812CC(v36, (__int64)&v94);
    sub_180080D3C(v36, 1, 2, 1, 15);
    v32 = sub_18005D458(*(_QWORD *)(a1 + 56), &v109, v51 | v11, 0LL, 1);
    sub_180011F5C(&v36, v32);
    if ( v110 )
      sub_180010EC8(v110);
    LODWORD(v94) = 0;
    v95 = *(_QWORD *)(a1 + 112);
    v96 = 0LL;
    v97 = 0LL;
    v98 = 0LL;
    sub_1800812CC(v36, (__int64)&v94);
    sub_180080D3C(v36, 0, 2, 3, 15);
    v33 = sub_18005D458(*(_QWORD *)(a1 + 56), &v100, v11, 0LL, 1);
    sub_180011F5C(&v36, v33);
    if ( v101 )
      sub_180010EC8(v101);
    LODWORD(v94) = 0;
    v95 = *(_QWORD *)(a1 + 112);
    v96 = 0LL;
    v97 = 0LL;
    v98 = 0LL;
    sub_1800812CC(v36, (__int64)&v94);
    sub_180080D3C(v36, 0, 2, 3, 15);
    ++v10;
  }
  if ( *((_QWORD *)&v36 + 1) )
    sub_180010EC8(*((__int64 *)&v36 + 1));
  sub_18004C0E0(v53, (__int64)v53);
  sub_18004C0E0(v54, (__int64)v54);
  sub_18004C0E0(v55, (__int64)v55);
  sub_18004C0E0(v56, (__int64)v56);
  sub_18004C0E0(v57, (__int64)v57);
  sub_18004C0E0(v58, (__int64)v58);
  sub_18004C0E0(v59, (__int64)v59);
  sub_18004C0E0(v60, (__int64)v60);
  sub_18004C0E0(v61, (__int64)v61);
  sub_18004C0E0(v62, (__int64)v62);
  sub_18004C0E0(v63, (__int64)v63);
  sub_18004C0E0(v64, (__int64)v64);
  sub_18004C0E0(v65, (__int64)v65);
  return sub_18004C0E0(v66, (__int64)v66);
}
