/*
 * XREFs of sub_18009CECC @ 0x18009CECC
 * Callers:
 *     sub_180002FA0 @ 0x180002FA0 (sub_180002FA0.c)
 *     sub_180003120 @ 0x180003120 (sub_180003120.c)
 *     sub_180003190 @ 0x180003190 (sub_180003190.c)
 *     sub_180003200 @ 0x180003200 (sub_180003200.c)
 *     sub_180003270 @ 0x180003270 (sub_180003270.c)
 *     sub_1800032E0 @ 0x1800032E0 (sub_1800032E0.c)
 *     sub_180003350 @ 0x180003350 (sub_180003350.c)
 *     sub_1800033C0 @ 0x1800033C0 (sub_1800033C0.c)
 *     sub_180003430 @ 0x180003430 (sub_180003430.c)
 *     sub_1800034A0 @ 0x1800034A0 (sub_1800034A0.c)
 *     sub_180003510 @ 0x180003510 (sub_180003510.c)
 *     sub_180003580 @ 0x180003580 (sub_180003580.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000D4CC @ 0x18000D4CC (sub_18000D4CC.c)
 *     sub_18000D534 @ 0x18000D534 (sub_18000D534.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18001C928 @ 0x18001C928 (sub_18001C928.c)
 *     sub_180075CF8 @ 0x180075CF8 (sub_180075CF8.c)
 *     sub_180075D94 @ 0x180075D94 (sub_180075D94.c)
 *     sub_18009CDE4 @ 0x18009CDE4 (sub_18009CDE4.c)
 */

// Hidden C++ exception states: #wind=108
__int64 sub_18009CECC()
{
  __int64 v0; // rbx
  _QWORD *v1; // rax
  _QWORD *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  _QWORD *v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  _QWORD *v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  _QWORD *v85; // rax
  _QWORD *v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  _QWORD *v89; // rax
  _QWORD *v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  _QWORD *v93; // rax
  _QWORD *v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  _QWORD *v97; // rax
  _QWORD *v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  _QWORD *v101; // rax
  _QWORD *v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  _QWORD *v105; // rax
  _QWORD *v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  _QWORD *v109; // rax
  _QWORD *v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  _QWORD *v113; // rax
  _QWORD *v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  _QWORD *v117; // rax
  _QWORD *v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  _QWORD *v121; // rax
  _QWORD *v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  _QWORD *v125; // rax
  _QWORD *v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  _QWORD *v129; // rax
  _QWORD *v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  _QWORD *v133; // rax
  _QWORD *v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  _QWORD *v137; // rax
  _QWORD *v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  _QWORD *v141; // rax
  _QWORD *v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  __int128 v146; // [rsp+28h] [rbp-89h]
  __int128 v147; // [rsp+28h] [rbp-89h]
  __int128 v148; // [rsp+28h] [rbp-89h]
  __int128 v149; // [rsp+28h] [rbp-89h]
  __int128 v150; // [rsp+28h] [rbp-89h]
  __int128 v151; // [rsp+28h] [rbp-89h]
  __int128 v152; // [rsp+28h] [rbp-89h]
  __int128 v153; // [rsp+28h] [rbp-89h]
  __int128 v154; // [rsp+28h] [rbp-89h]
  __int128 v155; // [rsp+28h] [rbp-89h]
  __int128 v156; // [rsp+28h] [rbp-89h]
  __int128 v157; // [rsp+28h] [rbp-89h]
  __int128 v158; // [rsp+28h] [rbp-89h]
  __int128 v159; // [rsp+28h] [rbp-89h]
  __int128 v160; // [rsp+28h] [rbp-89h]
  __int128 v161; // [rsp+28h] [rbp-89h]
  __int128 v162; // [rsp+28h] [rbp-89h]
  __int128 v163; // [rsp+28h] [rbp-89h]
  __int128 v164; // [rsp+28h] [rbp-89h]
  __int128 v165; // [rsp+28h] [rbp-89h]
  __int128 v166; // [rsp+28h] [rbp-89h]
  __int128 v167; // [rsp+28h] [rbp-89h]
  __int128 v168; // [rsp+28h] [rbp-89h]
  __int128 v169; // [rsp+28h] [rbp-89h]
  __int128 v170; // [rsp+28h] [rbp-89h]
  __int128 v171; // [rsp+28h] [rbp-89h]
  __int128 v172; // [rsp+28h] [rbp-89h]
  __int128 v173; // [rsp+28h] [rbp-89h]
  __int128 v174; // [rsp+28h] [rbp-89h]
  __int128 v175; // [rsp+28h] [rbp-89h]
  __int128 v176; // [rsp+28h] [rbp-89h]
  __int128 v177; // [rsp+28h] [rbp-89h]
  __int128 v178; // [rsp+28h] [rbp-89h]
  __int128 v179; // [rsp+28h] [rbp-89h]
  __int128 v180; // [rsp+28h] [rbp-89h]
  __int128 v181; // [rsp+28h] [rbp-89h]
  __int128 v182; // [rsp+38h] [rbp-79h]
  __int128 v183; // [rsp+58h] [rbp-59h] BYREF
  __int128 v184; // [rsp+68h] [rbp-49h]
  _QWORD v185[4]; // [rsp+78h] [rbp-39h] BYREF
  _BYTE v186[32]; // [rsp+98h] [rbp-19h] BYREF
  _QWORD v187[4]; // [rsp+B8h] [rbp+7h] BYREF

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_1801CDBF0 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDBF0);
    if ( dword_1801CDBF0 == -1 )
    {
      *(_QWORD *)&v146 = &unk_1801139C0;
      *((_QWORD *)&v146 + 1) = &unk_180114100;
      *(_QWORD *)&v182 = 0x100000005LL;
      v1 = sub_18009CDE4();
      v2 = sub_180075CF8(v187, 0LL, (__int64)v1, 6);
      v3 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v2);
      v4 = sub_18001C87C((__int64)v185, v3, (__int64)"/Pixel");
      v183 = v146;
      v184 = v182;
      sub_180075D94(v4, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v187);
      sub_18000D4CC(&dword_1801CDBF0);
    }
  }
  if ( dword_1801CDBF4 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDBF4);
    if ( dword_1801CDBF4 == -1 )
    {
      *(_QWORD *)&v147 = &unk_180113170;
      *((_QWORD *)&v147 + 1) = &unk_1801139B8;
      *(_QWORD *)&v182 = 0x100000005LL;
      v5 = sub_18009CDE4();
      v6 = sub_180075CF8(v185, 1LL, (__int64)v5, 6);
      v7 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v6);
      v8 = sub_18001C87C((__int64)v187, v7, (__int64)"/Pixel");
      v183 = v147;
      v184 = v182;
      sub_180075D94(v8, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDBF4);
    }
  }
  if ( dword_1801CDBF8 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDBF8);
    if ( dword_1801CDBF8 == -1 )
    {
      *(_QWORD *)&v148 = &unk_180114900;
      *((_QWORD *)&v148 + 1) = &unk_1801151B4;
      *(_QWORD *)&v182 = 0x100000005LL;
      v9 = sub_18009CDE4();
      v10 = sub_180075CF8(v185, 2LL, (__int64)v9, 6);
      v11 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v10);
      v12 = sub_18001C87C((__int64)v187, v11, (__int64)"/Pixel");
      v183 = v148;
      v184 = v182;
      sub_180075D94(v12, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDBF8);
    }
  }
  if ( dword_1801CDBFC > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDBFC);
    if ( dword_1801CDBFC == -1 )
    {
      *(_QWORD *)&v149 = &unk_1801151C0;
      *((_QWORD *)&v149 + 1) = &unk_180115B7C;
      *(_QWORD *)&v182 = 0x100000005LL;
      v13 = sub_18009CDE4();
      v14 = sub_180075CF8(v185, 3LL, (__int64)v13, 6);
      v15 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v14);
      v16 = sub_18001C87C((__int64)v187, v15, (__int64)"/Pixel");
      v183 = v149;
      v184 = v182;
      sub_180075D94(v16, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDBFC);
    }
  }
  if ( dword_1801CDC00 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC00);
    if ( dword_1801CDC00 == -1 )
    {
      *(_QWORD *)&v150 = &unk_180114100;
      *((_QWORD *)&v150 + 1) = &unk_1801148FC;
      *(_QWORD *)&v182 = 0x100000005LL;
      v17 = sub_18009CDE4();
      v18 = sub_180075CF8(v185, 4LL, (__int64)v17, 6);
      v19 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v18);
      v20 = sub_18001C87C((__int64)v187, v19, (__int64)"/Pixel");
      v183 = v150;
      v184 = v182;
      sub_180075D94(v20, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC00);
    }
  }
  if ( dword_1801CDC04 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC04);
    if ( dword_1801CDC04 == -1 )
    {
      *(_QWORD *)&v151 = &unk_1801114C0;
      *((_QWORD *)&v151 + 1) = &unk_180111DC4;
      *(_QWORD *)&v182 = 0x100000005LL;
      v21 = sub_18009CDE4();
      v22 = sub_180075CF8(v185, 5LL, (__int64)v21, 6);
      v23 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v22);
      v24 = sub_18001C87C((__int64)v187, v23, (__int64)"/Pixel");
      v183 = v151;
      v184 = v182;
      sub_180075D94(v24, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC04);
    }
  }
  if ( dword_1801CDC08 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC08);
    if ( dword_1801CDC08 == -1 )
    {
      *(_QWORD *)&v152 = &unk_1801100E0;
      *((_QWORD *)&v152 + 1) = &unk_180110A44;
      *(_QWORD *)&v182 = 0x100000005LL;
      v25 = sub_18009CDE4();
      v26 = sub_180075CF8(v185, 6LL, (__int64)v25, 6);
      v27 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v26);
      v28 = sub_18001C87C((__int64)v187, v27, (__int64)"/Pixel");
      v183 = v152;
      v184 = v182;
      sub_180075D94(v28, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC08);
    }
  }
  if ( dword_1801CDC0C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC0C);
    if ( dword_1801CDC0C == -1 )
    {
      *(_QWORD *)&v153 = &unk_180110A50;
      *((_QWORD *)&v153 + 1) = &unk_1801114BC;
      *(_QWORD *)&v182 = 0x100000005LL;
      v29 = sub_18009CDE4();
      v30 = sub_180075CF8(v185, 7LL, (__int64)v29, 6);
      v31 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v30);
      v32 = sub_18001C87C((__int64)v187, v31, (__int64)"/Pixel");
      v183 = v153;
      v184 = v182;
      sub_180075D94(v32, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC0C);
    }
  }
  if ( dword_1801CDC10 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC10);
    if ( dword_1801CDC10 == -1 )
    {
      *(_QWORD *)&v154 = &unk_180112820;
      *((_QWORD *)&v154 + 1) = &unk_180113168;
      *(_QWORD *)&v182 = 0x100000005LL;
      v33 = sub_18009CDE4();
      v34 = sub_180075CF8(v185, 8LL, (__int64)v33, 6);
      v35 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v34);
      v36 = sub_18001C87C((__int64)v187, v35, (__int64)"/Pixel");
      v183 = v154;
      v184 = v182;
      sub_180075D94(v36, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC10);
    }
  }
  if ( dword_1801CDC14 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC14);
    if ( dword_1801CDC14 == -1 )
    {
      *(_QWORD *)&v155 = &unk_180111DD0;
      *((_QWORD *)&v155 + 1) = &unk_180112820;
      *(_QWORD *)&v182 = 0x100000005LL;
      v37 = sub_18009CDE4();
      v38 = sub_180075CF8(v185, 9LL, (__int64)v37, 6);
      v39 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v38);
      v40 = sub_18001C87C((__int64)v187, v39, (__int64)"/Pixel");
      v183 = v155;
      v184 = v182;
      sub_180075D94(v40, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC14);
    }
  }
  if ( dword_1801CDC18 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC18);
    if ( dword_1801CDC18 == -1 )
    {
      *(_QWORD *)&v156 = &unk_18010C7A0;
      *((_QWORD *)&v156 + 1) = &unk_18010D250;
      *(_QWORD *)&v182 = 0x100000005LL;
      v41 = sub_18009CDE4();
      v42 = sub_180075CF8(v185, 10LL, (__int64)v41, 6);
      v43 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v42);
      v44 = sub_18001C87C((__int64)v187, v43, (__int64)"/Pixel");
      v183 = v156;
      v184 = v182;
      sub_180075D94(v44, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC18);
    }
  }
  if ( dword_1801CDC1C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC1C);
    if ( dword_1801CDC1C == -1 )
    {
      *(_QWORD *)&v157 = &unk_18010D250;
      *((_QWORD *)&v157 + 1) = &unk_18010DE08;
      *(_QWORD *)&v182 = 0x100000005LL;
      v45 = sub_18009CDE4();
      v46 = sub_180075CF8(v185, 11LL, (__int64)v45, 6);
      v47 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v46);
      v48 = sub_18001C87C((__int64)v187, v47, (__int64)"/Pixel");
      v183 = v157;
      v184 = v182;
      sub_180075D94(v48, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC1C);
    }
  }
  if ( dword_1801CDC20 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC20);
    if ( dword_1801CDC20 == -1 )
    {
      *(_QWORD *)&v158 = &unk_18010BDA0;
      *((_QWORD *)&v158 + 1) = &unk_18010C798;
      *(_QWORD *)&v182 = 0x100000005LL;
      v49 = sub_18009CDE4();
      v50 = sub_180075CF8(v185, 12LL, (__int64)v49, 6);
      v51 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v50);
      v52 = sub_18001C87C((__int64)v187, v51, (__int64)"/Pixel");
      v183 = v158;
      v184 = v182;
      sub_180075D94(v52, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC20);
    }
  }
  if ( dword_1801CDC24 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC24);
    if ( dword_1801CDC24 == -1 )
    {
      *(_QWORD *)&v159 = &unk_18010F5E0;
      *((_QWORD *)&v159 + 1) = &unk_1801100E0;
      *(_QWORD *)&v182 = 0x100000005LL;
      v53 = sub_18009CDE4();
      v54 = sub_180075CF8(v185, 13LL, (__int64)v53, 6);
      v55 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v54);
      v56 = sub_18001C87C((__int64)v187, v55, (__int64)"/Pixel");
      v183 = v159;
      v184 = v182;
      sub_180075D94(v56, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC24);
    }
  }
  if ( dword_1801CDC28 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC28);
    if ( dword_1801CDC28 == -1 )
    {
      *(_QWORD *)&v160 = &unk_18010DE10;
      *((_QWORD *)&v160 + 1) = &unk_18010E970;
      *(_QWORD *)&v182 = 0x100000005LL;
      v57 = sub_18009CDE4();
      v58 = sub_180075CF8(v185, 14LL, (__int64)v57, 6);
      v59 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v58);
      v60 = sub_18001C87C((__int64)v187, v59, (__int64)"/Pixel");
      v183 = v160;
      v184 = v182;
      sub_180075D94(v60, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC28);
    }
  }
  if ( dword_1801CDC2C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC2C);
    if ( dword_1801CDC2C == -1 )
    {
      *(_QWORD *)&v161 = &unk_18010E970;
      *((_QWORD *)&v161 + 1) = &unk_18010F5D8;
      *(_QWORD *)&v182 = 0x100000005LL;
      v61 = sub_18009CDE4();
      v62 = sub_180075CF8(v185, 15LL, (__int64)v61, 6);
      v63 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v62);
      v64 = sub_18001C87C((__int64)v187, v63, (__int64)"/Pixel");
      v183 = v161;
      v184 = v182;
      sub_180075D94(v64, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC2C);
    }
  }
  if ( dword_1801CDC30 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC30);
    if ( dword_1801CDC30 == -1 )
    {
      *(_QWORD *)&v162 = &unk_18010B060;
      *((_QWORD *)&v162 + 1) = &unk_18010B24C;
      *(_QWORD *)&v182 = 0x100000005LL;
      v65 = sub_18009CDE4();
      v66 = sub_180075CF8(v185, 16LL, (__int64)v65, 6);
      v67 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v66);
      v68 = sub_18001C87C((__int64)v187, v67, (__int64)"/Pixel");
      v183 = v162;
      v184 = v182;
      sub_180075D94(v68, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC30);
    }
  }
  if ( dword_1801CDC34 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC34);
    if ( dword_1801CDC34 == -1 )
    {
      *(_QWORD *)&v163 = &unk_1801094D0;
      *((_QWORD *)&v163 + 1) = &unk_18010B060;
      *(_QWORD *)&v182 = 0x100000005LL;
      v69 = sub_18009CDE4();
      v70 = sub_180075CF8(v185, 32LL, (__int64)v69, 6);
      v71 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v70);
      v72 = sub_18001C87C((__int64)v187, v71, (__int64)"/Pixel");
      v183 = v163;
      v184 = v182;
      sub_180075D94(v72, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC34);
    }
  }
  if ( dword_1801CDC38 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC38);
    if ( dword_1801CDC38 == -1 )
    {
      *(_QWORD *)&v164 = &unk_18010B250;
      *((_QWORD *)&v164 + 1) = &unk_18010B980;
      *(_QWORD *)&v182 = 0x100000001LL;
      v73 = sub_18009CDE4();
      v74 = sub_180075CF8(v185, 0LL, (__int64)v73, 6);
      v75 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v74);
      v76 = sub_18001C87C((__int64)v187, v75, (__int64)"/Vertex");
      v183 = v164;
      v184 = v182;
      sub_180075D94(v76, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC38);
    }
  }
  if ( dword_1801CDC3C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC3C);
    if ( dword_1801CDC3C == -1 )
    {
      *(_QWORD *)&v165 = &unk_18010B250;
      *((_QWORD *)&v165 + 1) = &unk_18010B980;
      *(_QWORD *)&v182 = 0x100000001LL;
      v77 = sub_18009CDE4();
      v78 = sub_180075CF8(v185, 1LL, (__int64)v77, 6);
      v79 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v78);
      v80 = sub_18001C87C((__int64)v187, v79, (__int64)"/Vertex");
      v183 = v165;
      v184 = v182;
      sub_180075D94(v80, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC3C);
    }
  }
  if ( dword_1801CDC40 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC40);
    if ( dword_1801CDC40 == -1 )
    {
      *(_QWORD *)&v166 = &unk_18010B250;
      *((_QWORD *)&v166 + 1) = &unk_18010B980;
      *(_QWORD *)&v182 = 0x100000001LL;
      v81 = sub_18009CDE4();
      v82 = sub_180075CF8(v185, 2LL, (__int64)v81, 6);
      v83 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v82);
      v84 = sub_18001C87C((__int64)v187, v83, (__int64)"/Vertex");
      v183 = v166;
      v184 = v182;
      sub_180075D94(v84, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC40);
    }
  }
  if ( dword_1801CDC44 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC44);
    if ( dword_1801CDC44 == -1 )
    {
      *(_QWORD *)&v167 = &unk_18010B250;
      *((_QWORD *)&v167 + 1) = &unk_18010B980;
      *(_QWORD *)&v182 = 0x100000001LL;
      v85 = sub_18009CDE4();
      v86 = sub_180075CF8(v185, 3LL, (__int64)v85, 6);
      v87 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v86);
      v88 = sub_18001C87C((__int64)v187, v87, (__int64)"/Vertex");
      v183 = v167;
      v184 = v182;
      sub_180075D94(v88, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC44);
    }
  }
  if ( dword_1801CDC48 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC48);
    if ( dword_1801CDC48 == -1 )
    {
      *(_QWORD *)&v168 = &unk_18010B250;
      *((_QWORD *)&v168 + 1) = &unk_18010B980;
      *(_QWORD *)&v182 = 0x100000001LL;
      v89 = sub_18009CDE4();
      v90 = sub_180075CF8(v185, 4LL, (__int64)v89, 6);
      v91 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v90);
      v92 = sub_18001C87C((__int64)v187, v91, (__int64)"/Vertex");
      v183 = v168;
      v184 = v182;
      sub_180075D94(v92, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC48);
    }
  }
  if ( dword_1801CDC4C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC4C);
    if ( dword_1801CDC4C == -1 )
    {
      *(_QWORD *)&v169 = &unk_18010B250;
      *((_QWORD *)&v169 + 1) = &unk_18010B980;
      *(_QWORD *)&v182 = 0x100000001LL;
      v93 = sub_18009CDE4();
      v94 = sub_180075CF8(v185, 5LL, (__int64)v93, 6);
      v95 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v94);
      v96 = sub_18001C87C((__int64)v187, v95, (__int64)"/Vertex");
      v183 = v169;
      v184 = v182;
      sub_180075D94(v96, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC4C);
    }
  }
  if ( dword_1801CDC50 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC50);
    if ( dword_1801CDC50 == -1 )
    {
      *(_QWORD *)&v170 = &unk_18010B250;
      *((_QWORD *)&v170 + 1) = &unk_18010B980;
      *(_QWORD *)&v182 = 0x100000001LL;
      v97 = sub_18009CDE4();
      v98 = sub_180075CF8(v185, 6LL, (__int64)v97, 6);
      v99 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v98);
      v100 = sub_18001C87C((__int64)v187, v99, (__int64)"/Vertex");
      v183 = v170;
      v184 = v182;
      sub_180075D94(v100, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC50);
    }
  }
  if ( dword_1801CDC54 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC54);
    if ( dword_1801CDC54 == -1 )
    {
      *(_QWORD *)&v171 = &unk_18010B250;
      *((_QWORD *)&v171 + 1) = &unk_18010B980;
      *(_QWORD *)&v182 = 0x100000001LL;
      v101 = sub_18009CDE4();
      v102 = sub_180075CF8(v185, 7LL, (__int64)v101, 6);
      v103 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v102);
      v104 = sub_18001C87C((__int64)v187, v103, (__int64)"/Vertex");
      v183 = v171;
      v184 = v182;
      sub_180075D94(v104, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC54);
    }
  }
  if ( dword_1801CDC58 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC58);
    if ( dword_1801CDC58 == -1 )
    {
      *(_QWORD *)&v172 = &unk_18010B250;
      *((_QWORD *)&v172 + 1) = &unk_18010B980;
      *(_QWORD *)&v182 = 0x100000001LL;
      v105 = sub_18009CDE4();
      v106 = sub_180075CF8(v185, 8LL, (__int64)v105, 6);
      v107 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v106);
      v108 = sub_18001C87C((__int64)v187, v107, (__int64)"/Vertex");
      v183 = v172;
      v184 = v182;
      sub_180075D94(v108, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC58);
    }
  }
  if ( dword_1801CDC5C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC5C);
    if ( dword_1801CDC5C == -1 )
    {
      *(_QWORD *)&v173 = &unk_18010B250;
      *((_QWORD *)&v173 + 1) = &unk_18010B980;
      *(_QWORD *)&v182 = 0x100000001LL;
      v109 = sub_18009CDE4();
      v110 = sub_180075CF8(v185, 9LL, (__int64)v109, 6);
      v111 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v110);
      v112 = sub_18001C87C((__int64)v187, v111, (__int64)"/Vertex");
      v183 = v173;
      v184 = v182;
      sub_180075D94(v112, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC5C);
    }
  }
  if ( dword_1801CDC60 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC60);
    if ( dword_1801CDC60 == -1 )
    {
      *(_QWORD *)&v174 = &unk_18010B250;
      *((_QWORD *)&v174 + 1) = &unk_18010B980;
      *(_QWORD *)&v182 = 0x100000001LL;
      v113 = sub_18009CDE4();
      v114 = sub_180075CF8(v185, 10LL, (__int64)v113, 6);
      v115 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v114);
      v116 = sub_18001C87C((__int64)v187, v115, (__int64)"/Vertex");
      v183 = v174;
      v184 = v182;
      sub_180075D94(v116, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC60);
    }
  }
  if ( dword_1801CDC64 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC64);
    if ( dword_1801CDC64 == -1 )
    {
      *(_QWORD *)&v175 = &unk_18010B250;
      *((_QWORD *)&v175 + 1) = &unk_18010B980;
      *(_QWORD *)&v182 = 0x100000001LL;
      v117 = sub_18009CDE4();
      v118 = sub_180075CF8(v185, 11LL, (__int64)v117, 6);
      v119 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v118);
      v120 = sub_18001C87C((__int64)v187, v119, (__int64)"/Vertex");
      v183 = v175;
      v184 = v182;
      sub_180075D94(v120, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC64);
    }
  }
  if ( dword_1801CDC68 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC68);
    if ( dword_1801CDC68 == -1 )
    {
      *(_QWORD *)&v176 = &unk_18010B250;
      *((_QWORD *)&v176 + 1) = &unk_18010B980;
      *(_QWORD *)&v182 = 0x100000001LL;
      v121 = sub_18009CDE4();
      v122 = sub_180075CF8(v185, 12LL, (__int64)v121, 6);
      v123 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v122);
      v124 = sub_18001C87C((__int64)v187, v123, (__int64)"/Vertex");
      v183 = v176;
      v184 = v182;
      sub_180075D94(v124, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC68);
    }
  }
  if ( dword_1801CDC6C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC6C);
    if ( dword_1801CDC6C == -1 )
    {
      *(_QWORD *)&v177 = &unk_18010B250;
      *((_QWORD *)&v177 + 1) = &unk_18010B980;
      *(_QWORD *)&v182 = 0x100000001LL;
      v125 = sub_18009CDE4();
      v126 = sub_180075CF8(v185, 13LL, (__int64)v125, 6);
      v127 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v126);
      v128 = sub_18001C87C((__int64)v187, v127, (__int64)"/Vertex");
      v183 = v177;
      v184 = v182;
      sub_180075D94(v128, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC6C);
    }
  }
  if ( dword_1801CDC70 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC70);
    if ( dword_1801CDC70 == -1 )
    {
      *(_QWORD *)&v178 = &unk_18010B250;
      *((_QWORD *)&v178 + 1) = &unk_18010B980;
      *(_QWORD *)&v182 = 0x100000001LL;
      v129 = sub_18009CDE4();
      v130 = sub_180075CF8(v185, 14LL, (__int64)v129, 6);
      v131 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v130);
      v132 = sub_18001C87C((__int64)v187, v131, (__int64)"/Vertex");
      v183 = v178;
      v184 = v182;
      sub_180075D94(v132, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC70);
    }
  }
  if ( dword_1801CDC74 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC74);
    if ( dword_1801CDC74 == -1 )
    {
      *(_QWORD *)&v179 = &unk_18010B250;
      *((_QWORD *)&v179 + 1) = &unk_18010B980;
      *(_QWORD *)&v182 = 0x100000001LL;
      v133 = sub_18009CDE4();
      v134 = sub_180075CF8(v185, 15LL, (__int64)v133, 6);
      v135 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v134);
      v136 = sub_18001C87C((__int64)v187, v135, (__int64)"/Vertex");
      v183 = v179;
      v184 = v182;
      sub_180075D94(v136, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC74);
    }
  }
  if ( dword_1801CDC78 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC78);
    if ( dword_1801CDC78 == -1 )
    {
      *(_QWORD *)&v180 = &unk_18010B980;
      *((_QWORD *)&v180 + 1) = &unk_18010BD98;
      *(_QWORD *)&v182 = 0x100000001LL;
      v137 = sub_18009CDE4();
      v138 = sub_180075CF8(v185, 16LL, (__int64)v137, 6);
      v139 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v138);
      v140 = sub_18001C87C((__int64)v187, v139, (__int64)"/Vertex");
      v183 = v180;
      v184 = v182;
      sub_180075D94(v140, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC78);
    }
  }
  if ( dword_1801CDC7C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDC7C);
    if ( dword_1801CDC7C == -1 )
    {
      *(_QWORD *)&v181 = &unk_18010B250;
      *((_QWORD *)&v181 + 1) = &unk_18010B980;
      *(_QWORD *)&v182 = 0x100000001LL;
      v141 = sub_18009CDE4();
      v142 = sub_180075CF8(v185, 32LL, (__int64)v141, 6);
      v143 = sub_18001C928((__int64)v186, (__int64)"BackgroundUnlit/ShaderModel40/", v142);
      v144 = sub_18001C87C((__int64)v187, v143, (__int64)"/Vertex");
      v183 = v181;
      v184 = v182;
      sub_180075D94(v144, (__int64)&v183);
      sub_1800129D0((__int64)v186);
      sub_1800129D0((__int64)v185);
      sub_18000D4CC(&dword_1801CDC7C);
    }
  }
  return 0LL;
}
