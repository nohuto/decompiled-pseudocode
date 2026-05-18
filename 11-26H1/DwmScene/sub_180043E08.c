/*
 * XREFs of sub_180043E08 @ 0x180043E08
 * Callers:
 *     sub_1800777B0 @ 0x1800777B0 (sub_1800777B0.c)
 *     sub_1800793B0 @ 0x1800793B0 (sub_1800793B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_180043A88 @ 0x180043A88 (sub_180043A88.c)
 *     sub_180043CD0 @ 0x180043CD0 (sub_180043CD0.c)
 *     sub_180043DE0 @ 0x180043DE0 (sub_180043DE0.c)
 *     sub_18004DE2C @ 0x18004DE2C (sub_18004DE2C.c)
 *     sub_18005E244 @ 0x18005E244 (sub_18005E244.c)
 *     sub_18007BDCC @ 0x18007BDCC (sub_18007BDCC.c)
 *     sub_18007BE98 @ 0x18007BE98 (sub_18007BE98.c)
 *     sub_18007C50C @ 0x18007C50C (sub_18007C50C.c)
 *     sub_18007CA8C @ 0x18007CA8C (sub_18007CA8C.c)
 *     sub_18007D0C0 @ 0x18007D0C0 (sub_18007D0C0.c)
 */

// Hidden C++ exception states: #wind=46
__int64 __fastcall sub_180043E08(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // rax
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
  __int64 v30; // r8
  _QWORD *v31; // rax
  __int64 v32; // r8
  _QWORD *v33; // rax
  __int64 v34; // r8
  _QWORD *v35; // rax
  __int64 v36; // r8
  __int64 v37; // rbx
  _QWORD *v38; // rax
  __int64 v39; // rbx
  _QWORD *v40; // rax
  __int64 v41; // r13
  __int64 v42; // rbx
  _QWORD *v43; // rax
  __int64 v44; // r12
  __int64 v45; // rbx
  _QWORD *v46; // rax
  __int64 v47; // r15
  __int64 v48; // rbx
  _QWORD *v49; // rax
  __int64 v50; // r14
  __int64 v51; // rbx
  _QWORD *v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rbx
  _QWORD *v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rbx
  _QWORD *v58; // rax
  __int64 v59; // rbx
  __int64 v60; // rdi
  _QWORD *v61; // rax
  __int64 v62; // r8
  __int64 v63; // rsi
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // r8
  __int64 v81; // rbx
  _QWORD *v82; // rax
  __int64 v83; // rbx
  _QWORD *v84; // rax
  __int64 v85; // rbx
  _QWORD *v86; // rax
  __int64 v87; // rbx
  _QWORD *v88; // rax
  __int64 v89; // rbx
  _QWORD *v90; // rax
  __int64 v91; // rbx
  _QWORD *v92; // rax
  __int64 v93; // rbx
  _QWORD *v94; // rax
  _QWORD *v95; // rax
  __int64 v96; // r8
  __int64 v97; // rbx
  _QWORD *v98; // rax
  _QWORD *v99; // rax
  __int64 v100; // r8
  __int64 result; // rax
  __int64 v102; // rcx
  _QWORD v103[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v104; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v105; // [rsp+40h] [rbp-C8h]
  _QWORD v106[4]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int16 v107; // [rsp+68h] [rbp-A0h]
  _QWORD v108[4]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v109[4]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v110[4]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v111[2]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v112; // [rsp+E0h] [rbp-28h]
  __int64 v113; // [rsp+E8h] [rbp-20h]
  _QWORD v114[4]; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v115[4]; // [rsp+110h] [rbp+8h] BYREF
  _QWORD v116[4]; // [rsp+130h] [rbp+28h] BYREF
  _QWORD v117[5]; // [rsp+150h] [rbp+48h] BYREF
  _BYTE v118[64]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v119[64]; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v120[64]; // [rsp+1F8h] [rbp+F0h] BYREF
  _BYTE v121[64]; // [rsp+238h] [rbp+130h] BYREF
  _BYTE v122[64]; // [rsp+278h] [rbp+170h] BYREF
  _BYTE v123[64]; // [rsp+2B8h] [rbp+1B0h] BYREF
  _BYTE v124[64]; // [rsp+2F8h] [rbp+1F0h] BYREF
  _BYTE v125[64]; // [rsp+338h] [rbp+230h] BYREF
  _BYTE v126[64]; // [rsp+378h] [rbp+270h] BYREF
  _BYTE v127[64]; // [rsp+3B8h] [rbp+2B0h] BYREF
  _BYTE v128[64]; // [rsp+3F8h] [rbp+2F0h] BYREF
  _BYTE v129[64]; // [rsp+438h] [rbp+330h] BYREF
  _BYTE v130[64]; // [rsp+478h] [rbp+370h] BYREF
  _BYTE v131[64]; // [rsp+4B8h] [rbp+3B0h] BYREF
  _BYTE v132[64]; // [rsp+4F8h] [rbp+3F0h] BYREF
  _BYTE v133[64]; // [rsp+538h] [rbp+430h] BYREF
  _BYTE v134[64]; // [rsp+578h] [rbp+470h] BYREF
  _BYTE v135[64]; // [rsp+5B8h] [rbp+4B0h] BYREF
  _BYTE v136[64]; // [rsp+5F8h] [rbp+4F0h] BYREF
  _BYTE v137[64]; // [rsp+638h] [rbp+530h] BYREF
  _BYTE v138[64]; // [rsp+678h] [rbp+570h] BYREF
  _BYTE v139[64]; // [rsp+6B8h] [rbp+5B0h] BYREF
  _BYTE v140[64]; // [rsp+6F8h] [rbp+5F0h] BYREF
  _BYTE v141[64]; // [rsp+738h] [rbp+630h] BYREF
  _BYTE v142[64]; // [rsp+778h] [rbp+670h] BYREF
  _BYTE v143[64]; // [rsp+7B8h] [rbp+6B0h] BYREF
  _BYTE v144[64]; // [rsp+7F8h] [rbp+6F0h] BYREF
  _BYTE v145[64]; // [rsp+838h] [rbp+730h] BYREF
  _BYTE v146[64]; // [rsp+878h] [rbp+770h] BYREF
  _BYTE v147[64]; // [rsp+8B8h] [rbp+7B0h] BYREF
  _BYTE v148[64]; // [rsp+8F8h] [rbp+7F0h] BYREF
  _BYTE v149[64]; // [rsp+938h] [rbp+830h] BYREF
  _BYTE v150[64]; // [rsp+978h] [rbp+870h] BYREF
  _BYTE v151[64]; // [rsp+9B8h] [rbp+8B0h] BYREF
  _BYTE v152[64]; // [rsp+9F8h] [rbp+8F0h] BYREF
  _BYTE v153[64]; // [rsp+A38h] [rbp+930h] BYREF
  _BYTE v154[64]; // [rsp+A78h] [rbp+970h] BYREF
  _BYTE v155[64]; // [rsp+AB8h] [rbp+9B0h] BYREF
  _BYTE v156[64]; // [rsp+AF8h] [rbp+9F0h] BYREF
  _BYTE v157[64]; // [rsp+B38h] [rbp+A30h] BYREF
  _BYTE v158[64]; // [rsp+B78h] [rbp+A70h] BYREF
  _BYTE v159[64]; // [rsp+BB8h] [rbp+AB0h] BYREF

  v112 = a2;
  v111[0] = a1;
  v113 = a2;
  sub_18004DE2C(a1, &v104, 6LL);
  v2 = sub_1800181BC(v108, (__int64)&unk_1801CC4D8);
  sub_180043A88((__int64)v126, (__int64)v2);
  v3 = sub_1800181BC(v109, (__int64)&unk_1801CC478);
  sub_180043A88((__int64)v127, (__int64)v3);
  v4 = sub_1800181BC(v108, (__int64)&unk_1801CC4B8);
  sub_180043CD0((__int64)v128, (__int64)v4, v5, 1.0);
  v6 = sub_1800181BC(v109, (__int64)&unk_1801CC498);
  sub_180043A88((__int64)v129, (__int64)v6);
  v7 = sub_1800181BC(v108, (__int64)&unk_1801CC638);
  sub_180043A88((__int64)v130, (__int64)v7);
  v8 = sub_1800181BC(v109, (__int64)&unk_1801CC318);
  sub_180043A88((__int64)v131, (__int64)v8);
  v9 = sub_1800181BC(v108, (__int64)&unk_1801CC338);
  sub_180043A88((__int64)v132, (__int64)v9);
  v10 = sub_1800181BC(v109, (__int64)&unk_1801CC358);
  sub_180043A88((__int64)v133, (__int64)v10);
  v11 = sub_1800181BC(v108, (__int64)&unk_1801CC378);
  sub_180043A88((__int64)v134, (__int64)v11);
  v12 = sub_1800181BC(v109, (__int64)&unk_1801CC398);
  sub_180043A88((__int64)v135, (__int64)v12);
  v13 = sub_1800181BC(v108, (__int64)&unk_1801CC918);
  sub_180043A88((__int64)v136, (__int64)v13);
  v14 = sub_1800181BC(v109, (__int64)&unk_1801CC938);
  sub_180043A88((__int64)v137, (__int64)v14);
  v15 = sub_1800181BC(v108, (__int64)&unk_1801CC958);
  sub_180043A88((__int64)v138, (__int64)v15);
  v16 = sub_1800181BC(v109, (__int64)&unk_1801CC438);
  sub_180043A88((__int64)v139, (__int64)v16);
  v17 = sub_1800181BC(v108, (__int64)&unk_1801CC458);
  sub_180043CD0((__int64)v140, (__int64)v17, v18, 1.0);
  v19 = sub_1800181BC(v109, (__int64)&unk_1801CC4F8);
  sub_180043A88((__int64)v141, (__int64)v19);
  v20 = sub_1800181BC(v108, (__int64)&unk_1801CC518);
  sub_180043A88((__int64)v142, (__int64)v20);
  v21 = sub_1800181BC(v109, (__int64)&unk_1801CC598);
  sub_180043A88((__int64)v143, (__int64)v21);
  v22 = sub_1800181BC(v108, (__int64)&unk_1801CC5B8);
  sub_180043A88((__int64)v144, (__int64)v22);
  v23 = sub_1800181BC(v109, (__int64)&unk_1801CC5D8);
  sub_180043A88((__int64)v145, (__int64)v23);
  v24 = sub_1800181BC(v108, (__int64)&unk_1801CC5F8);
  sub_180043A88((__int64)v146, (__int64)v24);
  v25 = sub_1800181BC(v109, (__int64)&unk_1801CC618);
  sub_180043A88((__int64)v147, (__int64)v25);
  v26 = sub_1800181BC(v108, (__int64)&unk_1801CC538);
  sub_180043A88((__int64)v148, (__int64)v26);
  v27 = sub_1800181BC(v109, (__int64)&unk_1801CC558);
  sub_180043A88((__int64)v149, (__int64)v27);
  v28 = sub_1800181BC(v108, (__int64)&unk_1801CC578);
  sub_180043A88((__int64)v150, (__int64)v28);
  v29 = sub_1800181BC(v109, (__int64)&unk_1801CC3B8);
  sub_180043CD0((__int64)v151, (__int64)v29, v30, 2.0);
  v31 = sub_1800181BC(v108, (__int64)&unk_1801CC3D8);
  sub_180043CD0((__int64)v152, (__int64)v31, v32, 1.0);
  v33 = sub_1800181BC(v109, (__int64)&unk_1801CC3F8);
  sub_180043CD0((__int64)v153, (__int64)v33, v34, 1.0);
  v35 = sub_1800181BC(v108, (__int64)&unk_1801CC418);
  sub_180043CD0((__int64)v154, (__int64)v35, v36, 1.0);
  sub_18007BDCC(v104, v126, 29LL, 1LL);
  v37 = v104;
  v38 = sub_1800181BC(v109, (__int64)&unk_1801CC858);
  sub_180043A88((__int64)v119, (__int64)v38);
  v107 = sub_18007BE98(v37, v119, 1LL);
  sub_180043DE0((__int64)v119);
  v39 = v104;
  v40 = sub_1800181BC(v108, (__int64)&unk_1801CC878);
  sub_180043A88((__int64)v120, (__int64)v40);
  v41 = (unsigned __int16)sub_18007BE98(v39, v120, 1LL);
  sub_180043DE0((__int64)v120);
  v42 = v104;
  v43 = sub_1800181BC(v114, (__int64)&unk_1801CC898);
  sub_180043A88((__int64)v121, (__int64)v43);
  v44 = (unsigned __int16)sub_18007BE98(v42, v121, 1LL);
  sub_180043DE0((__int64)v121);
  v45 = v104;
  v46 = sub_1800181BC(v115, (__int64)&unk_1801CC8B8);
  sub_180043A88((__int64)v122, (__int64)v46);
  v47 = (unsigned __int16)sub_18007BE98(v45, v122, 1LL);
  sub_180043DE0((__int64)v122);
  v48 = v104;
  v49 = sub_1800181BC(v116, (__int64)&unk_1801CC8D8);
  sub_180043A88((__int64)v123, (__int64)v49);
  v50 = (unsigned __int16)sub_18007BE98(v48, v123, 1LL);
  sub_180043DE0((__int64)v123);
  v51 = v104;
  v52 = sub_1800181BC(v117, (__int64)&unk_1801CC8F8);
  sub_180043A88((__int64)v124, (__int64)v52);
  v53 = (unsigned __int16)sub_18007BE98(v51, v124, 1LL);
  sub_180043DE0((__int64)v124);
  v54 = v104;
  v55 = sub_1800181BC(v110, (__int64)&unk_1801CC978);
  sub_180043A88((__int64)v125, (__int64)v55);
  v56 = (unsigned __int16)sub_18007BE98(v54, v125, 1LL);
  sub_180043DE0((__int64)v125);
  v57 = v104;
  v58 = sub_1800181BC(v106, (__int64)&unk_1801CC9B8);
  sub_180043A88((__int64)v118, (__int64)v58);
  v59 = (unsigned __int16)sub_18007BE98(v57, v118, 1LL);
  sub_180043DE0((__int64)v118);
  *(_DWORD *)(*(_QWORD *)(v104 + 104)
            + 40LL
            * *(unsigned int *)(56LL * *(unsigned __int16 *)(v104 + 2LL * v107 + 128) + *(_QWORD *)(v104 + 56) + 40)
            + 32) = 5;
  *(_DWORD *)(*(_QWORD *)(v104 + 104)
            + 40LL * *(unsigned int *)(56LL * *(unsigned __int16 *)(v104 + 2 * v41 + 128) + *(_QWORD *)(v104 + 56) + 40)
            + 32) = 6;
  *(_DWORD *)(*(_QWORD *)(v104 + 104)
            + 40LL * *(unsigned int *)(56LL * *(unsigned __int16 *)(v104 + 2 * v44 + 128) + *(_QWORD *)(v104 + 56) + 40)
            + 32) = 7;
  *(_DWORD *)(*(_QWORD *)(v104 + 104)
            + 40LL * *(unsigned int *)(56LL * *(unsigned __int16 *)(v104 + 2 * v47 + 128) + *(_QWORD *)(v104 + 56) + 40)
            + 32) = 13;
  *(_DWORD *)(*(_QWORD *)(v104 + 104)
            + 40LL * *(unsigned int *)(56LL * *(unsigned __int16 *)(v104 + 2 * v50 + 128) + *(_QWORD *)(v104 + 56) + 40)
            + 32) = 14;
  *(_DWORD *)(*(_QWORD *)(v104 + 104)
            + 40LL * *(unsigned int *)(56LL * *(unsigned __int16 *)(v104 + 2 * v53 + 128) + *(_QWORD *)(v104 + 56) + 40)
            + 32) = 15;
  *(_DWORD *)(*(_QWORD *)(v104 + 104)
            + 40LL * *(unsigned int *)(56LL * *(unsigned __int16 *)(v104 + 2 * v59 + 128) + *(_QWORD *)(v104 + 56) + 40)
            + 32) = 8;
  *(_DWORD *)(*(_QWORD *)(v104 + 104)
            + 40LL * *(unsigned int *)(56LL * *(unsigned __int16 *)(v104 + 2 * v56 + 128) + *(_QWORD *)(v104 + 56) + 40)
            + 32) = 11;
  sub_18007C50C(v104);
  v60 = v112;
  v61 = sub_180012C40(v103, &v104);
  sub_18005E244(v62, v61);
  sub_18000BFA4((__int64)v126, 64LL, 29LL, (void (__fastcall *)(__int64))sub_180043DE0);
  if ( v105 )
    sub_180010EC8(v105);
  v63 = v111[0];
  sub_18004DE2C(v111[0], &v104, 5LL);
  v64 = sub_1800181BC(v106, (__int64)&unk_1801CC658);
  sub_180043A88((__int64)v126, (__int64)v64);
  v65 = sub_1800181BC(v110, (__int64)&unk_1801CC678);
  sub_180043A88((__int64)v127, (__int64)v65);
  v66 = sub_1800181BC(v106, (__int64)&unk_1801CC698);
  sub_180043A88((__int64)v128, (__int64)v66);
  v67 = sub_1800181BC(v110, (__int64)&unk_1801CC6B8);
  sub_180043A88((__int64)v129, (__int64)v67);
  v68 = sub_1800181BC(v106, (__int64)&unk_1801CC6D8);
  sub_180043A88((__int64)v130, (__int64)v68);
  v69 = sub_1800181BC(v110, (__int64)&unk_1801CC6F8);
  sub_180043A88((__int64)v131, (__int64)v69);
  v70 = sub_1800181BC(v106, (__int64)&unk_1801CC718);
  sub_180043A88((__int64)v132, (__int64)v70);
  v71 = sub_1800181BC(v110, (__int64)&unk_1801CC738);
  sub_180043A88((__int64)v133, (__int64)v71);
  v72 = sub_1800181BC(v106, (__int64)&unk_1801CC758);
  sub_180043A88((__int64)v134, (__int64)v72);
  v73 = sub_1800181BC(v110, (__int64)&unk_1801CC818);
  sub_180043A88((__int64)v135, (__int64)v73);
  sub_18007BDCC(v104, v126, 10LL, 1LL);
  sub_18007CA8C(v104, 16LL);
  v74 = sub_1800181BC(v106, (__int64)&unk_1801CC778);
  sub_180043A88((__int64)v155, (__int64)v74);
  v75 = sub_1800181BC(v110, (__int64)&unk_1801CC798);
  sub_180043A88((__int64)v156, (__int64)v75);
  v76 = sub_1800181BC(v106, (__int64)&unk_1801CC7B8);
  sub_180043A88((__int64)v157, (__int64)v76);
  v77 = sub_1800181BC(v110, (__int64)&unk_1801CC7D8);
  sub_180043A88((__int64)v158, (__int64)v77);
  v78 = sub_1800181BC(v106, (__int64)&unk_1801CC7F8);
  sub_180043A88((__int64)v159, (__int64)v78);
  sub_18007BDCC(v104, v155, 5LL, 1LL);
  sub_18007C50C(v104);
  v79 = sub_180012C40(v103, &v104);
  sub_18005E244(v80, v79);
  sub_18000BFA4((__int64)v155, 64LL, 5LL, (void (__fastcall *)(__int64))sub_180043DE0);
  sub_18000BFA4((__int64)v126, 64LL, 10LL, (void (__fastcall *)(__int64))sub_180043DE0);
  if ( v105 )
    sub_180010EC8(v105);
  sub_18004DE2C(v63, &v104, 4LL);
  v81 = v104;
  v82 = sub_1800181BC(v106, (__int64)&unk_1801CC9D8);
  sub_180043A88((__int64)v118, (__int64)v82);
  sub_18007BE98(v81, v118, 1LL);
  sub_180043DE0((__int64)v118);
  v83 = v104;
  v84 = sub_1800181BC(v106, (__int64)&unk_1801CC9F8);
  sub_180043A88((__int64)v118, (__int64)v84);
  sub_18007BE98(v83, v118, 1LL);
  sub_180043DE0((__int64)v118);
  v85 = v104;
  v86 = sub_1800181BC(v106, (__int64)&unk_1801CCA18);
  sub_180043A88((__int64)v118, (__int64)v86);
  sub_18007BE98(v85, v118, 1LL);
  sub_180043DE0((__int64)v118);
  v87 = v104;
  v88 = sub_1800181BC(v106, (__int64)&unk_1801CCA38);
  sub_180043A88((__int64)v118, (__int64)v88);
  sub_18007BE98(v87, v118, 1LL);
  sub_180043DE0((__int64)v118);
  v89 = v104;
  v90 = sub_1800181BC(v106, (__int64)&unk_1801CCA58);
  sub_180043A88((__int64)v118, (__int64)v90);
  sub_18007BE98(v89, v118, 1LL);
  sub_180043DE0((__int64)v118);
  v91 = v104;
  v92 = sub_1800181BC(v106, (__int64)&unk_1801CCA78);
  sub_180043A88((__int64)v118, (__int64)v92);
  sub_18007BE98(v91, v118, 1LL);
  sub_180043DE0((__int64)v118);
  sub_18007D0C0(v104, &unk_1801CCA78, 9LL);
  v93 = v104;
  v94 = sub_1800181BC(v106, (__int64)&unk_1801CCA98);
  sub_180043A88((__int64)v118, (__int64)v94);
  sub_18007BE98(v93, v118, 1LL);
  sub_180043DE0((__int64)v118);
  sub_18007D0C0(v104, &unk_1801CCA98, 10LL);
  sub_18007C50C(v104);
  v95 = sub_180012C40(v111, &v104);
  sub_18005E244(v96, v95);
  if ( v105 )
    sub_180010EC8(v105);
  sub_18004DE2C(v63, &v104, 1LL);
  v97 = v104;
  v98 = sub_1800181BC(v106, (__int64)&unk_1801CC838);
  sub_180043A88((__int64)v118, (__int64)v98);
  sub_18007BE98(v97, v118, 1LL);
  sub_180043DE0((__int64)v118);
  sub_18007C50C(v104);
  v99 = sub_180012C40(v111, &v104);
  result = sub_18005E244(v100, v99);
  if ( v105 )
    result = sub_180010EC8(v105);
  v102 = *(_QWORD *)(v60 + 8);
  if ( v102 )
    return sub_180010EC8(v102);
  return result;
}
