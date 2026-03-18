/*
 * XREFs of ?bInitPlgDDA@rotate@@YAHPEAU_PLGDDA@1@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1400EBACC
 * Callers:
 *     EngPlgBlt @ 0x1400EA130 (EngPlgBlt.c)
 * Callees:
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1400EBA90 (-bSubOverflow@@YAHJJ@Z.c)
 *     ?bMulOverflow@@YAH_J0@Z @ 0x1400ED09C (-bMulOverflow@@YAH_J0@Z.c)
 *     ?bAddOverflow@@YAH_J0@Z @ 0x1400ED128 (-bAddOverflow@@YAH_J0@Z.c)
 *     ?bSubOverflow@@YAH_J0@Z @ 0x1400ED174 (-bSubOverflow@@YAH_J0@Z.c)
 *     rotate::ROT_DIV @ 0x1400ED1C0 (rotate--ROT_DIV.c)
 *     rotate::bScalePlgDDALToPlgDDA @ 0x1400ED1EC (rotate--bScalePlgDDALToPlgDDA.c)
 *     rotate::QDIV @ 0x140258ED4 (rotate--QDIV.c)
 */

__int64 __fastcall rotate::bInitPlgDDA(rotate *this, struct rotate::_PLGDDA *a2, struct _RECTL *a3, struct _RECTL *a4)
{
  __int64 result; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r11
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // r14
  LONG left; // r15d
  int v14; // r13d
  int v15; // r10d
  int v16; // eax
  LONG top; // r12d
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  LONG bottom; // esi
  int v23; // eax
  __int64 v24; // rdx
  unsigned int v25; // ecx
  int v26; // r8d
  int v27; // r8d
  int v28; // r8d
  int v29; // edx
  int v30; // r8d
  __int64 v31; // r10
  __int64 v32; // r13
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r12
  __int64 v38; // r11
  __int64 v39; // rsi
  __int64 v40; // r15
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // r12
  __int64 v49; // r14
  __int64 v50; // rsi
  __int64 v51; // r11
  __int64 v52; // r12
  __int64 v53; // r15
  __int64 v54; // r10
  __int64 v55; // r9
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // r9
  __int64 v61; // r9
  __int64 v62; // r9
  unsigned __int64 *v63; // r8
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rcx
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rdx
  __int64 v70; // rax
  unsigned __int64 v71; // rax
  __int64 v72; // r8
  __int64 v73; // rcx
  unsigned __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rdx
  unsigned __int64 v79; // rcx
  __int64 v80; // rcx
  unsigned __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // r9
  __int64 v86; // rdx
  __int64 v87; // r9
  __int128 *v88; // rcx
  __int128 v89; // xmm0
  __int64 v90; // xmm1_8
  __int64 v91; // r8
  __int64 v92; // r9
  __int128 *v93; // rcx
  __int128 v94; // xmm0
  __int64 v95; // xmm1_8
  __int64 v96; // r11
  __int64 v97; // r9
  __int64 v98; // rdx
  __int64 v99; // r9
  unsigned int v100; // r9d
  __int64 v101; // r10
  __int64 v102; // r11
  __int64 v103; // rcx
  __int64 v104; // r9
  __int64 v105; // r10
  __int64 v106; // r11
  __int64 v107; // r13
  __int64 v108; // r10
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // r9
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r10
  __int64 v116; // r11
  __int64 v117; // r9
  __int64 v118; // rax
  __int64 v119; // rdx
  __int64 v120; // r10
  __int64 v121; // r9
  __int64 v122; // r10
  __int64 v123; // r13
  __int64 v124; // rcx
  __int64 v125; // r15
  __int64 v126; // r9
  __int64 v127; // rdx
  __int64 v128; // r9
  unsigned int v129; // r10d
  __int64 v130; // rdx
  __int64 v131; // r10
  __int64 v132; // r9
  __int64 v133; // r10
  __int64 v134; // r9
  __int64 v135; // r10
  __int64 v136; // r11
  __int64 v137; // r9
  __int64 v138; // r10
  __int64 v139; // rdx
  __int64 v140; // r9
  __int64 v141; // r10
  __int64 v142; // r9
  __int64 v143; // r10
  __int64 v144; // rdx
  __int64 v145; // r9
  __int64 v146; // r9
  __int64 v147; // rdx
  __int64 v148; // r9
  __int64 v149; // r10
  __int64 v150; // r9
  __int64 v151; // r10
  __int64 v152; // rdx
  __int64 v153; // r9
  __int64 v154; // r9
  __int64 v155; // r10
  __int64 v156; // r11
  __int64 v157; // r10
  __int64 v158; // r10
  __int64 v159; // r11
  __int64 v160; // r9
  __int64 v161; // r10
  __int64 v162; // r10
  __int64 v163; // r9
  __int64 v164; // r10
  __int64 v165; // r9
  __int64 v166; // r10
  __int64 v167; // r11
  __int64 v168; // r10
  __int64 v169; // r10
  __int64 v170; // r11
  __int64 v171; // r9
  __int64 v172; // r10
  __int64 v173; // r9
  __int64 v174; // r9
  __int64 v175; // r10
  __int64 v176; // r9
  __int64 v177; // rdx
  __int64 v178; // r9
  __int64 v179; // r9
  __int64 v180; // r10
  __int64 v181; // r15
  __int64 v182; // r9
  __int64 v183; // rdx
  __int64 v184; // r9
  __int64 v185; // r11
  __int64 v186; // rax
  __int64 v187; // r9
  __int64 v188; // r11
  __int64 v189; // rcx
  __int64 v190; // rdx
  __int64 v191; // r9
  __int64 v192; // rax
  __int64 v193; // r9
  __int64 v194; // rcx
  __int64 v195; // rdx
  __int64 v196; // r9
  __int64 v197; // r9
  __int64 v198; // r10
  __int64 v199; // rdx
  unsigned __int64 v200; // rcx
  unsigned __int64 *v201; // r8
  unsigned __int64 v202; // r9
  unsigned __int64 v203; // rdx
  __int64 v204; // rax
  unsigned __int64 v205; // rcx
  __int64 v206; // rdx
  __int64 v207; // r9
  __int64 v208; // r10
  __int64 v209; // r9
  __int64 v210; // r10
  __int64 v211; // rdx
  __int64 v212; // r9
  __int64 v213; // rdx
  __int64 v214; // r9
  __int64 v215; // r10
  unsigned __int64 v216; // r8
  unsigned __int64 v217; // rcx
  unsigned __int64 *v218; // r9
  unsigned __int64 v219; // rdx
  __int64 v220; // rax
  unsigned __int64 v221; // r8
  __int64 v222; // r11
  __int64 v223; // r10
  __int64 v224; // r10
  __int64 v225; // r11
  __int64 v226; // r9
  __int64 v227; // r10
  __int64 v228; // r10
  __int64 v229; // r9
  __int64 v230; // r10
  __int64 v231; // r9
  __int64 v232; // r10
  __int64 v233; // r11
  unsigned __int64 v234; // r8
  unsigned __int64 v235; // rcx
  unsigned __int64 *v236; // r9
  unsigned __int64 v237; // rdx
  __int64 v238; // r10
  unsigned __int64 v239; // r8
  __int64 v240; // r9
  __int64 v241; // r9
  __int64 v242; // r11
  __int64 v243; // r11
  __int64 v244; // r9
  __int64 v245; // r9
  __int64 v246; // r11
  __int64 v247; // r13
  __int64 v248; // r9
  __int64 v249; // r11
  unsigned __int64 v250; // rcx
  unsigned __int64 v251; // r11
  unsigned __int64 *v252; // r8
  unsigned __int64 v253; // rdx
  __int64 v254; // r10
  __int64 v255; // xmm1_8
  __int128 v256; // xmm0
  __int64 v257; // xmm1_8
  __int128 v258; // xmm0
  __int64 v259; // xmm1_8
  __int128 v260; // xmm0
  __int64 v261; // xmm1_8
  __int128 v262; // xmm0
  __int64 v263; // xmm1_8
  __int128 v264; // xmm0
  __int64 v265; // xmm1_8
  rotate *v266; // rdx
  char v267; // [rsp+20h] [rbp-B9h]
  char v268; // [rsp+20h] [rbp-B9h]
  char v269; // [rsp+20h] [rbp-B9h]
  char v270; // [rsp+20h] [rbp-B9h]
  int v272; // [rsp+28h] [rbp-B1h]
  __int64 v273; // [rsp+28h] [rbp-B1h]
  __int64 v274; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v275; // [rsp+38h] [rbp-A1h]
  __int64 v276; // [rsp+40h] [rbp-99h]
  __int64 v277; // [rsp+48h] [rbp-91h]
  __int64 v278; // [rsp+50h] [rbp-89h] BYREF
  __int64 v279[2]; // [rsp+58h] [rbp-81h] BYREF
  __int64 v280; // [rsp+68h] [rbp-71h]
  __int64 v281; // [rsp+70h] [rbp-69h]
  __int64 v282; // [rsp+78h] [rbp-61h]
  __int64 v283; // [rsp+80h] [rbp-59h]
  __int64 v284; // [rsp+88h] [rbp-51h]
  __int64 v285; // [rsp+90h] [rbp-49h]
  __int64 v286; // [rsp+98h] [rbp-41h]
  __int64 v287; // [rsp+A0h] [rbp-39h]
  _QWORD v288[3]; // [rsp+A8h] [rbp-31h]
  int v289; // [rsp+C0h] [rbp-19h]
  int v290; // [rsp+C4h] [rbp-15h]
  __int64 v291; // [rsp+C8h] [rbp-11h]
  __int64 v292; // [rsp+D0h] [rbp-9h]
  __int64 v293; // [rsp+D8h] [rbp-1h]
  rotate *v294; // [rsp+E0h] [rbp+7h]
  __int128 v295; // [rsp+E8h] [rbp+Fh] BYREF

  v294 = this;
  result = Win32AllocPoolZInit(792LL, 1633969223LL);
  v7 = 0LL;
  v8 = result;
  if ( result )
  {
    v9 = *(_QWORD *)&a4->left;
    v10 = *(_QWORD *)&a4->right;
    v11 = *(_QWORD *)&a4->left;
    v12 = *(_QWORD *)&a4[1].left;
    left = a3->left;
    v288[0] = v9;
    v14 = v10 + v12 - v9;
    v288[1] = v10;
    v288[2] = v12;
    v15 = HIDWORD(v10) + HIDWORD(v12) - HIDWORD(v11);
    v289 = v14;
    v290 = v15;
    *(_OWORD *)v279 = 0LL;
    v295 = 0LL;
    if ( left || a3->top )
    {
      LODWORD(v280) = *(_DWORD *)a2;
      LOBYTE(v16) = bSubOverflow(v280, left);
      if ( v16 )
        goto LABEL_252;
      top = a3->top;
      LODWORD(v281) = *((_DWORD *)a2 + 1);
      LOBYTE(v18) = bSubOverflow(v281, top);
      if ( v18 )
        goto LABEL_252;
      LODWORD(v276) = *((_DWORD *)a2 + 2);
      LOBYTE(v19) = bSubOverflow(v276, left);
      if ( v19 )
        goto LABEL_252;
      v272 = *((_DWORD *)a2 + 3);
      LOBYTE(v20) = bSubOverflow(v272, top);
      if ( v20 )
        goto LABEL_252;
      LODWORD(v275) = a3->right;
      LOBYTE(v21) = bSubOverflow(v275, left);
      if ( v21 )
        goto LABEL_252;
      bottom = a3->bottom;
      LOBYTE(v23) = bSubOverflow(bottom, top);
      if ( v23 )
        goto LABEL_252;
      LODWORD(v279[0]) = v280 - left;
      HIDWORD(v279[0]) = v281 - top;
      LODWORD(v279[1]) = v276 - left;
      HIDWORD(v279[1]) = v272 - top;
      a2 = (struct rotate::_PLGDDA *)v279;
      DWORD2(v295) = v275 - left;
      HIDWORD(v295) = bottom - top;
      a3 = (struct _RECTL *)&v295;
    }
    v24 = (SHIDWORD(v10) <= v15) ^ (unsigned int)(SHIDWORD(v10) > SHIDWORD(v9));
    v25 = 0;
    v26 = (SHIDWORD(v10) <= v15) ^ (SHIDWORD(v10) > SHIDWORD(v9));
    if ( SHIDWORD(v288[v24]) > SHIDWORD(v288[(unsigned int)v24 ^ 3LL]) )
      v26 ^= 3u;
    v293 = 1LL;
    if ( !v26 )
    {
      if ( SHIDWORD(v10) >= SHIDWORD(v12) && (SHIDWORD(v10) > SHIDWORD(v12) || (int)v10 >= (int)v12) )
      {
        v25 = 1;
        goto LABEL_42;
      }
      v25 = 0;
      goto LABEL_40;
    }
    v27 = v26 - 1;
    if ( v27 )
    {
      v28 = v27 - 1;
      if ( v28 )
      {
        if ( v28 == 1 )
        {
          if ( SHIDWORD(v10) < SHIDWORD(v12) || SHIDWORD(v10) <= SHIDWORD(v12) && (int)v10 < (int)v12 )
          {
            v25 = 6;
LABEL_42:
            v29 = a3->bottom - a3->top;
            v30 = a3->right - a3->left;
            goto LABEL_43;
          }
          v25 = 7;
        }
LABEL_40:
        v29 = a3->right - a3->left;
        v30 = a3->bottom - a3->top;
LABEL_43:
        v31 = v30;
        v32 = v29;
        if ( !v29 )
          goto LABEL_252;
        if ( !v30 )
          goto LABEL_252;
        v33 = v25;
        v34 = *(int *)a2;
        v35 = *((int *)a2 + 1);
        v36 = 3 * v33;
        v37 = dword_1403717C4[6 * v33];
        v38 = dword_1403717CC[6 * v33];
        v33 *= 2LL;
        v39 = dword_1403717D0[2 * v36];
        v40 = dword_1403717C0[2 * v36];
        v41 = (v32 - 1) * dword_1403717C8[2 * v36];
        v278 = v38;
        v285 = v39;
        v280 = v37;
        v281 = v40;
        v276 = v40 * v34 + v37 * v35 + v41;
        v42 = dword_140371880[2 * v33];
        v43 = v39 * v35 + (v31 - 1) * dword_1403717D4[2 * v36];
        v44 = dword_140371884[2 * v33];
        v291 = v38 * v34 + v43;
        v45 = SLODWORD(v288[v42]);
        v46 = SHIDWORD(v288[v42]);
        v47 = dword_140371888[2 * v33];
        v48 = SLODWORD(v288[v44]);
        v49 = SHIDWORD(v288[v44]) - v46;
        v292 = v45;
        v50 = SLODWORD(v288[v47]) - v45;
        v51 = SHIDWORD(v288[v47]) - v46;
        v287 = v46;
        v52 = v48 - v45;
        if ( v52 )
        {
          if ( (unsigned int)bMulOverflow(v31, v52) )
            goto LABEL_252;
        }
        if ( v49 && (unsigned int)bMulOverflow(v31, v49) )
          goto LABEL_252;
        if ( v50 && (unsigned int)bMulOverflow(v32, v50) )
          goto LABEL_252;
        if ( v51 && (unsigned int)bMulOverflow(v32, v51) )
          goto LABEL_252;
        v53 = v31 * v49;
        v273 = v31 * v52;
        v286 = v32 * v50;
        v275 = v32 * v51;
        if ( !(v32 * v51) || (unsigned int)bMulOverflow(v32, v31) || v287 >= 0 && 0x7FFFFFFFFFFFFFFFLL - v287 < 16 )
          goto LABEL_252;
        v274 = v287 + 16;
        if ( (unsigned int)bMulOverflow(v54 * v32, v287 + 16) )
          goto LABEL_252;
        v274 *= v55;
        if ( (unsigned int)bMulOverflow(v276, v53) )
          goto LABEL_252;
        if ( (unsigned int)bAddOverflow(v274, v56 * v53) )
          goto LABEL_252;
        v277 = v57 + v274;
        if ( (unsigned int)bMulOverflow(v291, v275) )
          goto LABEL_252;
        if ( (unsigned int)bAddOverflow(v277, v58 * v275) )
          goto LABEL_252;
        v277 += v59;
        if ( (unsigned int)bSubOverflow(v277, 1LL) )
          goto LABEL_252;
        if ( (unsigned int)bMulOverflow(v60, 16LL) )
          goto LABEL_252;
        v62 = 16 * v61;
        if ( !v62 )
          goto LABEL_252;
        v63 = (unsigned __int64 *)(v8 + 8);
        v64 = v53 / v62 - 1;
        if ( v53 % v62 >= 0 )
          v64 = v53 / v62;
        v65 = v53 % v62 + v62;
        if ( v53 % v62 >= 0 )
          v65 = v53 % v62;
        v283 = v64;
        v274 = v65;
        v66 = v275 % v62 + v62;
        if ( v275 % v62 >= 0 )
          v66 = v275 % v62;
        v279[0] = v66;
        v67 = v275 / v62 - 1;
        if ( v275 % v62 >= 0 )
          v67 = v275 / v62;
        v282 = v67;
        v68 = v277 - 1;
        if ( v277 - 1 >= 0 )
        {
          v267 = 0;
        }
        else
        {
          v267 = 1;
          v68 = 1 - v277;
        }
        v284 = v68 / v62;
        *v63 = v68 / v62;
        v69 = v68 % v62;
        if ( v267 )
        {
          v70 = -v284;
          *v63 = -v284;
          if ( v69 )
          {
            *v63 = v70 - 1;
            v71 = v62 - v69;
          }
          else
          {
            v71 = 0LL;
          }
        }
        else
        {
          v71 = v68 % v62;
        }
        *(_QWORD *)(v8 + 16) = v71;
        v72 = v283;
        v73 = v274;
        *(_OWORD *)(v8 + 24) = *(_OWORD *)(v8 + 8);
        v74 = *(_QWORD *)(v8 + 32) + v73;
        v75 = v72 + *(_QWORD *)(v8 + 24);
        *(_QWORD *)(v8 + 24) = v75;
        *(_QWORD *)(v8 + 32) = v74;
        if ( v74 >= v62 )
        {
          *(_QWORD *)(v8 + 24) = v75 + 1;
          *(_QWORD *)(v8 + 32) = v74 - v62;
        }
        v76 = v282;
        v77 = v279[0];
        *(_OWORD *)(v8 + 40) = *(_OWORD *)(v8 + 8);
        v78 = *(_QWORD *)(v8 + 40) + v76;
        v79 = *(_QWORD *)(v8 + 48) + v77;
        *(_QWORD *)(v8 + 40) = v78;
        *(_QWORD *)(v8 + 48) = v79;
        if ( v79 >= v62 )
        {
          *(_QWORD *)(v8 + 40) = v78 + 1;
          *(_QWORD *)(v8 + 48) = v79 - v62;
        }
        v80 = v274;
        *(_OWORD *)(v8 + 56) = *(_OWORD *)(v8 + 40);
        v81 = *(_QWORD *)(v8 + 64) + v80;
        v82 = v72 + *(_QWORD *)(v8 + 56);
        *(_QWORD *)(v8 + 56) = v82;
        *(_QWORD *)(v8 + 64) = v81;
        if ( v81 >= v62 )
        {
          *(_QWORD *)(v8 + 56) = v82 + 1;
          *(_QWORD *)(v8 + 64) = v81 - v62;
        }
        if ( (unsigned int)bMulOverflow(v281, v53) )
          goto LABEL_252;
        if ( (unsigned int)bMulOverflow(v278, v275) )
          goto LABEL_252;
        v279[0] = v83 * v275;
        v282 = v281 * v53;
        if ( (unsigned int)bAddOverflow(v281 * v53, v83 * v275) )
          goto LABEL_252;
        if ( (unsigned int)bMulOverflow(v280, v53) )
          goto LABEL_252;
        if ( (unsigned int)bMulOverflow(v285, v275) )
          goto LABEL_252;
        v284 = v84 * v275;
        v283 = v280 * v53;
        if ( (unsigned int)bAddOverflow(v280 * v53, v84 * v275) )
          goto LABEL_252;
        rotate::ROT_DIV(v8 + 264, v279[0] + v282, v85);
        v86 = v284 + v283;
        *(_QWORD *)(v8 + 280) = v87;
        v89 = *v88;
        v90 = *((_QWORD *)v88 + 2);
        *(_OWORD *)(v8 + 288) = *v88;
        *(_OWORD *)(v8 + 312) = v89;
        *(_OWORD *)(v8 + 336) = v89;
        *(_QWORD *)(v8 + 304) = v90;
        *(_QWORD *)(v8 + 328) = v90;
        *(_QWORD *)(v8 + 352) = v90;
        rotate::ROT_DIV(v8 + 360, v86, v91);
        *(_QWORD *)(v8 + 376) = v92;
        v94 = *v93;
        v95 = *((_QWORD *)v93 + 2);
        *(_OWORD *)(v8 + 384) = *v93;
        *(_OWORD *)(v8 + 408) = v94;
        *(_OWORD *)(v8 + 432) = v94;
        *(_QWORD *)(v8 + 400) = v95;
        *(_QWORD *)(v8 + 424) = v95;
        *(_QWORD *)(v8 + 448) = v95;
        if ( (unsigned int)bMulOverflow(v52, v96) )
          goto LABEL_252;
        if ( (unsigned int)bMulOverflow(v49, v50) )
          goto LABEL_252;
        if ( (unsigned int)bSubOverflow(v97, v49 * v50) )
          goto LABEL_252;
        v283 = v99 - v98;
        if ( (unsigned int)bMulOverflow(v32, 16LL) )
          goto LABEL_252;
        if ( (unsigned int)bMulOverflow(v101, v100) )
          goto LABEL_252;
        if ( (unsigned int)bMulOverflow(v281, v49) )
          goto LABEL_252;
        if ( (unsigned int)bMulOverflow(v278, v102) )
          goto LABEL_252;
        v107 = 16 * v32;
        if ( !v107 )
          goto LABEL_252;
        v108 = 16 * v105;
        if ( !v108 )
          goto LABEL_252;
        v109 = v104 * v49 / v107;
        v110 = v104 * v49 % v107;
        v111 = v109 - 1;
        if ( v110 >= 0 )
          v111 = v109;
        v284 = v111;
        v112 = v103 * v106 / v108;
        v113 = v103 * v106 % v108;
        v114 = v112 - 1;
        if ( v113 >= 0 )
          v114 = v112;
        v277 = v114;
        if ( (unsigned int)bAddOverflow(v111, v114) )
          goto LABEL_252;
        v117 = v280 * v49 / v107 - 1;
        if ( v280 * v49 % v107 >= 0 )
          v117 = v280 * v49 / v107;
        v118 = v285 * v116 / v115;
        v119 = v285 * v116 % v115;
        v120 = v118 - 1;
        if ( v119 >= 0 )
          v120 = v118;
        if ( (unsigned int)bAddOverflow(v117, v120) )
          goto LABEL_252;
        v123 = v122 + v121;
        if ( v53 )
        {
          if ( (unsigned int)bMulOverflow(*(_QWORD *)(v8 + 8), 16LL) )
            goto LABEL_252;
          if ( (unsigned int)bSubOverflow(16 * v126, v287) )
            goto LABEL_252;
          if ( (unsigned int)bMulOverflow(v273, v128 - v127) )
            goto LABEL_252;
          if ( (unsigned int)bAddOverflow(v292, v129) )
            goto LABEL_252;
          if ( (unsigned int)bMulOverflow(v53, v130 + v131) )
            goto LABEL_252;
          if ( (unsigned int)bAddOverflow(v132, v53 * v133) )
            goto LABEL_252;
          v137 = v135 + v134;
          v138 = v291;
          if ( v291 )
          {
            if ( (unsigned int)bMulOverflow(v291, v52 * v136) )
              goto LABEL_252;
          }
          if ( (unsigned int)bSubOverflow(v137, v138 * v52 * v136) )
            goto LABEL_252;
          v142 = v140 - v139;
          if ( v141 )
          {
            if ( (unsigned int)bMulOverflow(v50, v49) || (unsigned int)bMulOverflow(v143, v49 * v50) )
              goto LABEL_252;
          }
          if ( (unsigned int)bAddOverflow(v142, v141 * v49 * v50) )
            goto LABEL_252;
          v279[0] = v144 + v145;
          if ( (unsigned int)bSubOverflow(v144 + v145, 1LL) )
            goto LABEL_252;
          v274 = v146 - 1;
          if ( (unsigned int)bMulOverflow(16LL, v53) )
            goto LABEL_252;
          *(_QWORD *)(v8 + 664) = 16 * v53;
          *(_QWORD *)(v8 + 472) = 16 * v53;
          *(_QWORD *)(v8 + 568) = 16 * v53;
          if ( !(16 * v53) )
            goto LABEL_252;
          rotate::QDIV(v8 + 72, &v274);
          if ( (unsigned int)bMulOverflow(16LL, v273) )
            goto LABEL_252;
          if ( (unsigned int)bSubOverflow(*(_QWORD *)(v8 + 40), *(_QWORD *)(v8 + 8)) )
            goto LABEL_252;
          v282 = 16 * v149;
          if ( (unsigned int)bMulOverflow(16 * v149, v148 - v147) )
            goto LABEL_252;
          if ( (unsigned int)bSubOverflow(16 * v151 * v150, v283) )
            goto LABEL_252;
          if ( (unsigned int)bAddOverflow(v279[0] - 1, v153 - v152) )
            goto LABEL_252;
          v274 = v154 + v155;
          rotate::QDIV(v8 + 120, &v274);
          rotate::ROT_DIV(v8 + 648, v282, *(_QWORD *)(v8 + 664));
          v157 = v278;
          if ( v156 )
          {
            if ( (unsigned int)bMulOverflow(v278, v52) || (unsigned int)bMulOverflow(v158 * v52, v159) )
              goto LABEL_252;
          }
          v160 = v157 * v52 * v156;
          if ( v49 )
          {
            if ( (unsigned int)bMulOverflow(v157, v50) || (unsigned int)bMulOverflow(v161 * v50, v49) )
              goto LABEL_252;
          }
          if ( (unsigned int)bSubOverflow(v160, v157 * v49 * v50) )
            goto LABEL_252;
          if ( (unsigned int)bMulOverflow(16LL, v284 + v277) )
            goto LABEL_252;
          if ( (unsigned int)bMulOverflow(16 * v162, v273) )
            goto LABEL_252;
          if ( (unsigned int)bSubOverflow(16 * v273 * v164, v163) )
            goto LABEL_252;
          v278 = v166 - v165;
          rotate::QDIV(v8 + 456, &v278);
          v168 = v285;
          if ( v167 )
          {
            if ( (unsigned int)bMulOverflow(v285, v52) || (unsigned int)bMulOverflow(v169 * v52, v170) )
              goto LABEL_252;
          }
          v171 = v168 * v52 * v167;
          if ( v49 )
          {
            if ( (unsigned int)bMulOverflow(v168, v50) || (unsigned int)bMulOverflow(v172 * v50, v49) )
              goto LABEL_252;
          }
          if ( (unsigned int)bSubOverflow(v171, v168 * v49 * v50)
            || (unsigned int)bMulOverflow(16LL, v123)
            || (unsigned int)bMulOverflow(16 * v123, v273)
            || (unsigned int)bSubOverflow(16 * v273 * v123, v173) )
          {
            goto LABEL_252;
          }
          v278 = v175 - v174;
          rotate::QDIV(v8 + 552, &v278);
          rotate::ROT_DIV(v8 + 744, 16 * v273, 16 * v53);
          v125 = 16 * v53;
        }
        else
        {
          v124 = v8 + 744;
          *(_QWORD *)(v8 + 648) = 0LL;
          *(_QWORD *)(v8 + 744) = 0LL;
          v125 = 0LL;
          *(_QWORD *)(v8 + 656) = 0LL;
          *(_QWORD *)(v8 + 664) = 0LL;
          *(_QWORD *)(v8 + 456) = 0LL;
          *(_QWORD *)(v8 + 464) = 0LL;
          *(_QWORD *)(v8 + 472) = 0LL;
          *(_QWORD *)(v8 + 552) = 0LL;
          *(_QWORD *)(v8 + 560) = 0LL;
          *(_QWORD *)(v8 + 568) = 0LL;
          *(_QWORD *)(v8 + 72) = 0LL;
          *(_QWORD *)(v8 + 80) = 0LL;
          *(_QWORD *)(v8 + 120) = 0LL;
          *(_QWORD *)(v8 + 128) = 0LL;
          *(_QWORD *)(v8 + 752) = 0LL;
        }
        *(_QWORD *)(v124 + 16) = v125;
        v176 = *(_QWORD *)(v8 + 8);
        if ( v176 )
        {
          if ( v176 >= 0 )
          {
            if ( v176 > 0x7FFFFFFFFFFFFFFLL )
              goto LABEL_252;
          }
          else if ( v176 < (__int64)0xF800000000000000uLL )
          {
            goto LABEL_252;
          }
        }
        if ( (unsigned int)bSubOverflow(16 * v176, v287) )
          goto LABEL_252;
        if ( (unsigned int)bMulOverflow(v286, v178 - v177) )
          goto LABEL_252;
        v279[0] = v179 * v180;
        if ( v292 >= 0 && 0x7FFFFFFFFFFFFFFFLL - v292 < 16 )
          goto LABEL_252;
        v181 = v275;
        if ( (unsigned int)bMulOverflow(v275, v292 + 16) || (unsigned int)bAddOverflow(v279[0], v182 * v181) )
          goto LABEL_252;
        v186 = v276;
        v187 = v183 + v184;
        if ( v276 )
        {
          if ( (unsigned int)bMulOverflow(v52, v185) || (unsigned int)bMulOverflow(v276, v52 * v188) )
            goto LABEL_252;
          v186 = v189;
        }
        if ( !(unsigned int)bAddOverflow(v187, v186 * v52 * v185) )
        {
          v192 = v276;
          v193 = v190 + v191;
          if ( v276 )
          {
            if ( (unsigned int)bMulOverflow(v50, v49) || (unsigned int)bMulOverflow(v276, v49 * v50) )
              goto LABEL_252;
            v192 = v194;
          }
          if ( !(unsigned int)bSubOverflow(v193, v192 * v49 * v50) && !(unsigned int)bSubOverflow(v196 - v195, 1LL) )
          {
            v199 = v197 - 1;
            v282 = v197 - 1;
            if ( v181 >= 0 )
            {
              if ( v181 > 0x7FFFFFFFFFFFFFFLL )
                goto LABEL_252;
            }
            else if ( v181 < (__int64)0xF800000000000000uLL )
            {
              goto LABEL_252;
            }
            v200 = 16 * v181;
            *(_QWORD *)(v8 + 688) = 16 * v181;
            *(_QWORD *)(v8 + 496) = 16 * v181;
            *(_QWORD *)(v8 + 592) = 16 * v181;
            if ( 16 * v181 )
            {
              v201 = (unsigned __int64 *)(v8 + 88);
              v202 = v197 - 1;
              if ( v199 >= 0 )
              {
                v268 = 0;
              }
              else
              {
                v268 = 1;
                v202 = -v199;
              }
              v279[0] = v202 / v200;
              *v201 = v202 / v200;
              v203 = v202 % v200;
              if ( v268 )
              {
                v204 = -v279[0];
                *v201 = -v279[0];
                if ( v203 )
                {
                  *v201 = v204 - 1;
                  v205 = v200 - v203;
                }
                else
                {
                  v205 = 0LL;
                }
              }
              else
              {
                v205 = v202 % v200;
              }
              *(_QWORD *)(v8 + 96) = v205;
              if ( v198 )
              {
                if ( v198 >= 0 )
                {
                  if ( v198 > 0x7FFFFFFFFFFFFFFLL )
                    goto LABEL_252;
                }
                else if ( v198 < (__int64)0xF800000000000000uLL )
                {
                  goto LABEL_252;
                }
              }
              if ( (unsigned int)bSubOverflow(*(_QWORD *)(v8 + 24), *(_QWORD *)(v8 + 8))
                || (unsigned int)bMulOverflow(16 * v208, v207 - v206)
                || (unsigned int)bAddOverflow(16 * v210 * v209, v283)
                || (unsigned int)bAddOverflow(v282, v212 + v211) )
              {
                goto LABEL_252;
              }
              v216 = *(_QWORD *)(v8 + 688);
              v217 = v214 + v213;
              v218 = (unsigned __int64 *)(v8 + 104);
              if ( (v217 & 0x8000000000000000uLL) == 0LL )
              {
                v269 = 0;
              }
              else
              {
                v269 = 1;
                v217 = -(__int64)v217;
              }
              v279[0] = v217 / v216;
              *v218 = v217 / v216;
              v219 = v217 % v216;
              if ( v269 )
              {
                v220 = -v279[0];
                *v218 = -v279[0];
                if ( v219 )
                {
                  *v218 = v220 - 1;
                  v221 = v216 - v219;
                }
                else
                {
                  v221 = 0LL;
                }
              }
              else
              {
                v221 = v217 % v216;
              }
              *(_QWORD *)(v8 + 112) = v221;
              rotate::ROT_DIV(v8 + 672, 16 * v215, *(_QWORD *)(v8 + 688));
              v223 = v281;
              if ( v222 )
              {
                if ( (unsigned int)bMulOverflow(v281, v52) || (unsigned int)bMulOverflow(v224 * v52, v225) )
                  goto LABEL_252;
              }
              v226 = v223 * v52 * v222;
              if ( v49 )
              {
                if ( (unsigned int)bMulOverflow(v223, v50) || (unsigned int)bMulOverflow(v227 * v50, v49) )
                  goto LABEL_252;
              }
              if ( (unsigned int)bSubOverflow(v226, v223 * v49 * v50) )
                goto LABEL_252;
              v228 = v284 + v277;
              if ( v284 + v277 )
              {
                if ( v228 >= 0 )
                {
                  if ( v228 > 0x7FFFFFFFFFFFFFFLL )
                    goto LABEL_252;
                }
                else if ( v228 < (__int64)0xF800000000000000uLL )
                {
                  goto LABEL_252;
                }
              }
              if ( (unsigned int)bMulOverflow(16 * v228, v286) || (unsigned int)bAddOverflow(16 * v286 * v230, v229) )
                goto LABEL_252;
              v234 = *(_QWORD *)(v8 + 496);
              v235 = v232 + v231;
              v236 = (unsigned __int64 *)(v8 + 480);
              if ( (v235 & 0x8000000000000000uLL) == 0LL )
              {
                v270 = 0;
              }
              else
              {
                v270 = 1;
                v235 = -(__int64)v235;
              }
              *v236 = v235 / v234;
              v237 = v235 % v234;
              if ( v270 )
              {
                v238 = -(__int64)(v235 / v234);
                *v236 = v238;
                if ( v237 )
                {
                  v239 = v234 - v237;
                  *v236 = v238 - 1;
                }
                else
                {
                  v239 = 0LL;
                }
              }
              else
              {
                v239 = v235 % v234;
              }
              *(_QWORD *)(v8 + 488) = v239;
              v240 = v280;
              if ( v233 )
              {
                if ( (unsigned int)bMulOverflow(v280, v52) || (unsigned int)bMulOverflow(v241 * v52, v242) )
                  goto LABEL_252;
              }
              v243 = v240 * v52 * v233;
              if ( v49 )
              {
                if ( (unsigned int)bMulOverflow(v240, v50) || (unsigned int)bMulOverflow(v244 * v50, v49) )
                  goto LABEL_252;
              }
              if ( (unsigned int)bSubOverflow(v243, v240 * v49 * v50) )
                goto LABEL_252;
              if ( !v123 )
                goto LABEL_242;
              if ( v123 < 0 )
              {
                if ( v123 < (__int64)0xF800000000000000uLL )
                  goto LABEL_252;
LABEL_242:
                if ( !(unsigned int)bMulOverflow(16 * v123, v286) )
                {
                  v247 = 16 * v245 * v123;
                  if ( !(unsigned int)bAddOverflow(v247, v246) )
                  {
                    v250 = v249 + v247;
                    v251 = *(_QWORD *)(v8 + 592);
                    v252 = (unsigned __int64 *)(v8 + 576);
                    if ( (v250 & 0x8000000000000000uLL) == 0LL )
                      LOBYTE(v293) = 0;
                    else
                      v250 = -(__int64)v250;
                    *v252 = v250 / v251;
                    v253 = v250 % v251;
                    if ( (_BYTE)v293 )
                    {
                      v254 = -(__int64)(v250 / v251);
                      *v252 = v254;
                      if ( v253 )
                      {
                        *v252 = v254 - 1;
                        v7 = v251 - v253;
                      }
                    }
                    else
                    {
                      v7 = v250 % v251;
                    }
                    *(_QWORD *)(v8 + 584) = v7;
                    v255 = *(_QWORD *)(v8 + 688);
                    *(_OWORD *)(v8 + 696) = *(_OWORD *)(v8 + 672);
                    v256 = *(_OWORD *)(v8 + 480);
                    *(_QWORD *)(v8 + 712) = v255;
                    v257 = *(_QWORD *)(v8 + 496);
                    *(_OWORD *)(v8 + 504) = v256;
                    v258 = *(_OWORD *)(v8 + 576);
                    *(_QWORD *)(v8 + 520) = v257;
                    v259 = *(_QWORD *)(v8 + 592);
                    *(_OWORD *)(v8 + 600) = v258;
                    v260 = *(_OWORD *)(v8 + 648);
                    *(_QWORD *)(v8 + 616) = v259;
                    v261 = *(_QWORD *)(v8 + 664);
                    *(_OWORD *)(v8 + 720) = v260;
                    v262 = *(_OWORD *)(v8 + 456);
                    *(_QWORD *)(v8 + 736) = v261;
                    v263 = *(_QWORD *)(v8 + 472);
                    *(_OWORD *)(v8 + 528) = v262;
                    v264 = *(_OWORD *)(v8 + 552);
                    *(_QWORD *)(v8 + 544) = v263;
                    v265 = *(_QWORD *)(v8 + 568);
                    *(_OWORD *)(v8 + 624) = v264;
                    *(_QWORD *)(v8 + 640) = v265;
                    rotate::ROT_DIV(v8 + 768, 16 * v248, 16 * v181);
                    v266 = v294;
                    *(_QWORD *)(v8 + 784) = 16 * v181;
                    LODWORD(v7) = rotate::bScalePlgDDALToPlgDDA(v8, v266);
                  }
                }
                goto LABEL_252;
              }
              if ( v123 <= 0x7FFFFFFFFFFFFFFLL )
                goto LABEL_242;
            }
          }
        }
LABEL_252:
        Win32FreePool((void *)v8);
        return (unsigned int)v7;
      }
      if ( SHIDWORD(v9) < v15 )
        goto LABEL_23;
      if ( SHIDWORD(v9) > v15 )
      {
        v25 = 5;
        goto LABEL_40;
      }
      if ( (int)v9 < v14 )
      {
LABEL_23:
        v25 = 4;
        goto LABEL_42;
      }
      v25 = 5;
    }
    else
    {
      if ( SHIDWORD(v9) < v15 )
        goto LABEL_29;
      if ( SHIDWORD(v9) > v15 )
      {
        v25 = 3;
        goto LABEL_42;
      }
      if ( (int)v9 < v14 )
      {
LABEL_29:
        v25 = 2;
        goto LABEL_40;
      }
      v25 = 3;
    }
    if ( v25 == 3 )
      goto LABEL_42;
    goto LABEL_40;
  }
  return result;
}
