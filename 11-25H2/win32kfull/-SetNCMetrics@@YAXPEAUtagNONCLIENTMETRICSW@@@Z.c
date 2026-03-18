/*
 * XREFs of ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x140149BCC
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x140149304 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     SortMonitorsInSpatialOrder @ 0x14014A9F0 (SortMonitorsInSpatialOrder.c)
 *     bSetDevDragWidth @ 0x14014AA24 (bSetDevDragWidth.c)
 */

void __fastcall SetNCMetrics(struct tagNONCLIENTMETRICSW *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rt2
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // edx
  __int64 v24; // rdx
  __int64 v25; // rt2
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned int v34; // ebx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  INT v41; // r14d
  __int64 v42; // rcx
  __int64 SessionDpiServerInfo; // r13
  __int64 v44; // rbp
  __int64 v45; // r12
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rcx
  INT v49; // ebx
  __int64 v50; // rdx
  __int64 v51; // rax
  int v52; // edi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rcx
  INT v56; // ebx
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  INT v62; // ebx
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  INT v67; // edi
  __int64 v68; // rcx
  INT v69; // ebx
  __int64 v70; // rdx
  __int64 v71; // rax
  INT v72; // ebx
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  INT v76; // ebx
  __int64 v77; // rdx
  __int64 v78; // rax
  int v79; // esi
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  INT v85; // ebx
  __int64 v86; // rdx
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rcx
  INT v91; // ebx
  __int64 v92; // rdx
  __int64 v93; // rax
  INT v94; // ebx
  __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rcx
  INT v98; // ebx
  __int64 v99; // rdx
  __int64 v100; // rax
  INT v101; // esi
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rcx
  __int64 v105; // rdx
  __int64 v106; // rcx
  INT v107; // ebx
  __int64 v108; // rdx
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rcx
  int v115; // ebx
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // rdx
  __int64 v119; // rcx
  int v120; // ebx
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rdx
  __int64 v124; // rcx
  int v125; // ebx
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // rdx
  __int64 v129; // rcx
  INT v130; // ebx
  __int64 v131; // rdx
  __int64 v132; // rax
  INT v133; // ebx
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // rcx
  __int64 v137; // rdx
  __int64 v138; // rcx
  INT v139; // ebx
  __int64 v140; // rdx
  __int64 v141; // rax
  INT v142; // ebx
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // rcx
  __int64 v146; // rdx
  __int64 v147; // rcx
  INT v148; // ebx
  __int64 v149; // rdx
  __int64 v150; // rax
  INT v151; // ebx
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // rcx
  __int64 v155; // rdx
  __int64 v156; // rcx
  INT v157; // ebx
  __int64 v158; // rdx
  __int64 v159; // rax
  INT v160; // ebx
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // rcx
  __int64 v164; // rdx
  __int64 v165; // rcx
  INT v166; // ebx
  __int64 v167; // rdx
  __int64 v168; // rax
  INT v169; // ebx
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // rcx
  __int64 v173; // rdx
  __int64 v174; // rcx
  INT v175; // ebx
  __int64 v176; // rdx
  __int64 v177; // rax
  INT v178; // ebx
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // rcx
  __int64 v182; // rdx
  __int64 v183; // rcx
  INT v184; // ebx
  __int64 v185; // rdx
  __int64 v186; // rax
  INT v187; // ebx
  __int64 v188; // rdx
  __int64 v189; // rcx
  __int64 v190; // rdx
  __int64 v191; // rcx
  __int64 v192; // rax
  INT v193; // ebx
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // rcx
  __int64 v197; // rdx
  __int64 v198; // rcx
  __int64 v199; // rdx
  __int64 v200; // rbx
  __int64 v201; // rdx
  __int64 v202; // rcx
  __int64 v203; // rcx
  int v204; // edi
  __int64 v205; // rdx
  __int64 v206; // rbx
  __int64 v207; // rdx
  __int64 v208; // rcx
  __int64 v209; // rcx
  int v210; // esi
  __int64 v211; // rdx
  __int64 v212; // rbx
  __int64 v213; // rdx
  __int64 v214; // rcx
  __int64 v215; // rcx
  int v216; // ebp
  __int64 v217; // rdx
  __int64 v218; // rbx
  __int64 v219; // rdx
  __int64 v220; // rcx
  __int64 v221; // rcx
  int v222; // r14d
  __int64 v223; // rdx
  __int64 v224; // rbx
  __int64 v225; // rdx
  __int64 v226; // rcx
  __int64 v227; // rax
  __int64 v228; // rdx
  __int64 v229; // rcx
  __int64 v230; // rax
  __int64 v231; // rdx
  __int64 v232; // rcx
  __int64 v233; // rdi
  __int64 v234; // rdx
  __int64 v235; // rcx
  __int64 v236; // rax
  __int64 v237; // rdx
  __int64 v238; // rcx
  __int64 v239; // rcx
  __int64 v240; // rdx
  __int64 v241; // rcx
  __int64 v242; // rdx
  __int64 v243; // rcx
  __int64 v244; // rdx
  __int64 v245; // rcx
  __int64 v246; // rdx
  __int64 v247; // rcx
  __int64 v248; // rdx
  __int64 v249; // rax
  __int64 v250; // rcx
  INT v251; // ebx
  __int64 v252; // rdx
  __int64 v253; // rax
  __int64 v254; // rcx
  INT v255; // ebx
  __int64 v256; // rdx
  __int64 v257; // rax
  __int64 v258; // rcx
  INT v259; // ebx
  __int64 v260; // rdx
  __int64 v261; // rax

  SetDpiDepSysMet(0LL, *((unsigned int *)a1 + 2));
  SetDpiDepSysMet(1LL, *((unsigned int *)a1 + 2));
  SetDpiDepSysMet(10LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(11LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(3LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(4LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(12LL, *((unsigned int *)a1 + 4));
  SetDpiDepSysMet(13LL, *((unsigned int *)a1 + 5));
  UserSessionState = W32GetUserSessionState(v3, v2);
  SetDpiDepSysMet(2LL, (unsigned int)(*(_DWORD *)(*(_QWORD *)(UserSessionState + 19872) + 2336LL) + 1));
  if ( *(_DWORD *)a1 == 504 )
    SetDpiDepSysMet(29LL, *((unsigned int *)a1 + 125));
  v7 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19872);
  v10 = W32GetUserSessionState(v9, v8);
  v11 = (unsigned int)(*(_DWORD *)(v7 + 2332) - 2);
  v12 = *(int *)(*(_QWORD *)(v10 + 19872) + 2304LL) >> 31;
  LODWORD(v10) = *(_DWORD *)(*(_QWORD *)(v10 + 19872) + 2304LL);
  v13 = v12;
  v14 = __SPAIR64__(v12, v10) % 2;
  LODWORD(v10) = __SPAIR64__(v12, v10) / 2;
  LODWORD(v13) = v14;
  if ( (int)v11 < (int)v10 )
    v15 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v13) + 19872) + 2332LL) - 2;
  else
    v15 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v13) + 19872) + 2304LL) / 2;
  SetDpiDepSysMet(20LL, v15 & 0xFFFFFFFE);
  v18 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 19872);
  v21 = W32GetUserSessionState(v20, v19);
  v22 = (unsigned int)(*(_DWORD *)(v18 + 2336) - 2);
  v23 = *(int *)(*(_QWORD *)(v21 + 19872) + 2308LL) >> 31;
  LODWORD(v21) = *(_DWORD *)(*(_QWORD *)(v21 + 19872) + 2308LL);
  v24 = v23;
  v25 = __SPAIR64__(v23, v21) % 2;
  LODWORD(v21) = __SPAIR64__(v23, v21) / 2;
  LODWORD(v24) = v25;
  if ( (int)v22 < (int)v21 )
    v26 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v22, v24) + 19872) + 2336LL) - 2;
  else
    v26 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v22, v24) + 19872) + 2308LL) / 2;
  SetDpiDepSysMet(21LL, v26 & 0xFFFFFFFE);
  v29 = *(_QWORD *)(W32GetUserSessionState(v28, v27) + 19872);
  v33 = *(_QWORD *)(W32GetUserSessionState(v31, v30) + 19872);
  if ( *(_DWORD *)(v29 + 2364) < *(_DWORD *)(v33 + 2368) )
    v34 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v33, v32) + 19872) + 2364LL);
  else
    v34 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v33, v32) + 19872) + 2368LL);
  SetDpiDepSysMet(20LL, v34);
  SetDpiDepSysMet(21LL, v34);
  SetDpiDepSysMet(23LL, *((unsigned int *)a1 + 29));
  SetDpiDepSysMet(24LL, *((unsigned int *)a1 + 30));
  v37 = W32GetUserSessionState(v36, v35);
  SetDpiDepSysMet(22LL, (unsigned int)(*(_DWORD *)(*(_QWORD *)(v37 + 19872) + 2380LL) + 1));
  SetDpiDepSysMet(25LL, *((unsigned int *)a1 + 54));
  SetDpiDepSysMet(26LL, *((unsigned int *)a1 + 55));
  v40 = W32GetUserSessionState(v39, v38);
  SetDpiDepSysMet(9LL, (unsigned int)(*(_DWORD *)(*(_QWORD *)(v40 + 19872) + 2388LL) + 1));
  v41 = *((_DWORD *)a1 + 1);
  SessionDpiServerInfo = GetSessionDpiServerInfo(v42);
  *(_DWORD *)(SessionDpiServerInfo + 4) = v41;
  SetDpiDepSysMet(14LL, (unsigned int)(v41 + 3));
  SetDpiDepSysMet(15LL, (unsigned int)(v41 + 3));
  v44 = Get96DpiMetrics();
  v45 = Get96DpiServerInfo();
  v48 = *(_QWORD *)(W32GetUserSessionState(v47, v46) + 19872);
  v49 = *(unsigned __int16 *)(v48 + 6998);
  v51 = W32GetUserSessionState(v48, v50);
  v52 = *(_DWORD *)(v45 + 20) + 2;
  if ( EngMulDiv(*(_DWORD *)(*(_QWORD *)(v51 + 19872) + 2336LL), 96, v49) > v52 )
  {
    v55 = *(_QWORD *)(W32GetUserSessionState(v54, v53) + 19872);
    v56 = *(unsigned __int16 *)(v55 + 6998);
    v58 = W32GetUserSessionState(v55, v57);
    v52 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v58 + 19872) + 2336LL), 96, v56);
  }
  v59 = *(_QWORD *)(W32GetUserSessionState(v54, v53) + 19872);
  *(_DWORD *)(v59 + 2456) = v52;
  v61 = *(_QWORD *)(W32GetUserSessionState(v59, v60) + 19872);
  v62 = *(unsigned __int16 *)(v61 + 6998);
  v64 = W32GetUserSessionState(v61, v63);
  v67 = 8;
  if ( EngMulDiv(*(_DWORD *)(*(_QWORD *)(v64 + 19872) + 2332LL), 96, v62) <= 8 )
  {
    v72 = 8;
  }
  else
  {
    v68 = *(_QWORD *)(W32GetUserSessionState(v66, v65) + 19872);
    v69 = *(unsigned __int16 *)(v68 + 6998);
    v71 = W32GetUserSessionState(v68, v70);
    v72 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v71 + 19872) + 2332LL), 96, v69);
  }
  v73 = *(_QWORD *)(W32GetUserSessionState(v66, v65) + 19872);
  *(_DWORD *)(v73 + 2452) = v72;
  v75 = *(_QWORD *)(W32GetUserSessionState(v73, v74) + 19872);
  v76 = *(unsigned __int16 *)(v75 + 6998);
  v78 = W32GetUserSessionState(v75, v77);
  v79 = *(_DWORD *)(v44 + 44) + 2;
  if ( EngMulDiv(*(_DWORD *)(*(_QWORD *)(v78 + 19872) + 2380LL), 96, v76) > v79 )
  {
    v254 = *(_QWORD *)(W32GetUserSessionState(v81, v80) + 19872);
    v255 = *(unsigned __int16 *)(v254 + 6998);
    v257 = W32GetUserSessionState(v254, v256);
    v79 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v257 + 19872) + 2380LL), 96, v255);
  }
  v82 = *(_QWORD *)(W32GetUserSessionState(v81, v80) + 19872);
  *(_DWORD *)(v82 + 2500) = v79;
  v84 = *(_QWORD *)(W32GetUserSessionState(v82, v83) + 19872);
  v85 = *(unsigned __int16 *)(v84 + 6998);
  v87 = W32GetUserSessionState(v84, v86);
  if ( EngMulDiv(*(_DWORD *)(*(_QWORD *)(v87 + 19872) + 2376LL), 96, v85) <= 8 )
  {
    v94 = 8;
  }
  else
  {
    v90 = *(_QWORD *)(W32GetUserSessionState(v89, v88) + 19872);
    v91 = *(unsigned __int16 *)(v90 + 6998);
    v93 = W32GetUserSessionState(v90, v92);
    v94 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v93 + 19872) + 2376LL), 96, v91);
  }
  v95 = *(_QWORD *)(W32GetUserSessionState(v89, v88) + 19872);
  *(_DWORD *)(v95 + 2496) = v94;
  v97 = *(_QWORD *)(W32GetUserSessionState(v95, v96) + 19872);
  v98 = *(unsigned __int16 *)(v97 + 6998);
  v100 = W32GetUserSessionState(v97, v99);
  v101 = *(_DWORD *)(v44 + 28);
  if ( EngMulDiv(*(_DWORD *)(*(_QWORD *)(v100 + 19872) + 2388LL), 96, v98) > v101 )
  {
    v250 = *(_QWORD *)(W32GetUserSessionState(v103, v102) + 19872);
    v251 = *(unsigned __int16 *)(v250 + 6998);
    v253 = W32GetUserSessionState(v250, v252);
    v101 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v253 + 19872) + 2388LL), 96, v251);
  }
  v104 = *(_QWORD *)(W32GetUserSessionState(v103, v102) + 19872);
  *(_DWORD *)(v104 + 2508) = v101;
  v106 = *(_QWORD *)(W32GetUserSessionState(v104, v105) + 19872);
  v107 = *(unsigned __int16 *)(v106 + 6998);
  v109 = W32GetUserSessionState(v106, v108);
  if ( EngMulDiv(*(_DWORD *)(*(_QWORD *)(v109 + 19872) + 2384LL), 96, v107) > 8 )
  {
    v258 = *(_QWORD *)(W32GetUserSessionState(v111, v110) + 19872);
    v259 = *(unsigned __int16 *)(v258 + 6998);
    v261 = W32GetUserSessionState(v258, v260);
    v67 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v261 + 19872) + 2384LL), 96, v259);
  }
  v112 = *(_QWORD *)(W32GetUserSessionState(v111, v110) + 19872);
  *(_DWORD *)(v112 + 2504) = v67;
  v114 = *(_QWORD *)(W32GetUserSessionState(v112, v113) + 19872);
  v115 = *(_DWORD *)(v114 + 2508) + 1;
  v117 = *(_QWORD *)(W32GetUserSessionState(v114, v116) + 19872);
  *(_DWORD *)(v117 + 2440) = v115;
  v119 = *(_QWORD *)(W32GetUserSessionState(v117, v118) + 19872);
  v120 = *(_DWORD *)(v119 + 2456) + 1;
  v122 = *(_QWORD *)(W32GetUserSessionState(v119, v121) + 19872);
  *(_DWORD *)(v122 + 2412) = v120;
  v124 = *(_QWORD *)(W32GetUserSessionState(v122, v123) + 19872);
  v125 = *(_DWORD *)(v124 + 2500) + 1;
  v127 = *(_QWORD *)(W32GetUserSessionState(v124, v126) + 19872);
  *(_DWORD *)(v127 + 2492) = v125;
  v129 = *(_QWORD *)(W32GetUserSessionState(v127, v128) + 19872);
  v130 = *(unsigned __int16 *)(v129 + 6998);
  v132 = W32GetUserSessionState(v129, v131);
  v133 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v132 + 19872) + 2400LL), 96, v130);
  v136 = *(_QWORD *)(W32GetUserSessionState(v135, v134) + 19872);
  *(_DWORD *)(v136 + 2520) = v133;
  v138 = *(_QWORD *)(W32GetUserSessionState(v136, v137) + 19872);
  v139 = *(unsigned __int16 *)(v138 + 6998);
  v141 = W32GetUserSessionState(v138, v140);
  v142 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v141 + 19872) + 2328LL), 96, v139);
  v145 = *(_QWORD *)(W32GetUserSessionState(v144, v143) + 19872);
  *(_DWORD *)(v145 + 2448) = v142;
  v147 = *(_QWORD *)(W32GetUserSessionState(v145, v146) + 19872);
  v148 = *(unsigned __int16 *)(v147 + 6998);
  v150 = W32GetUserSessionState(v147, v149);
  v151 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v150 + 19872) + 2300LL), 96, v148);
  v154 = *(_QWORD *)(W32GetUserSessionState(v153, v152) + 19872);
  *(_DWORD *)(v154 + 2420) = v151;
  v156 = *(_QWORD *)(W32GetUserSessionState(v154, v155) + 19872);
  v157 = *(unsigned __int16 *)(v156 + 6998);
  v159 = W32GetUserSessionState(v156, v158);
  v160 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v159 + 19872) + 2284LL), 96, v157);
  v163 = *(_QWORD *)(W32GetUserSessionState(v162, v161) + 19872);
  *(_DWORD *)(v163 + 2404) = v160;
  v165 = *(_QWORD *)(W32GetUserSessionState(v163, v164) + 19872);
  v166 = *(unsigned __int16 *)(v165 + 6998);
  v168 = W32GetUserSessionState(v165, v167);
  v169 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v168 + 19872) + 2288LL), 96, v166);
  v172 = *(_QWORD *)(W32GetUserSessionState(v171, v170) + 19872);
  *(_DWORD *)(v172 + 2408) = v169;
  v174 = *(_QWORD *)(W32GetUserSessionState(v172, v173) + 19872);
  v175 = *(unsigned __int16 *)(v174 + 6998);
  v177 = W32GetUserSessionState(v174, v176);
  v178 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v177 + 19872) + 2324LL), 96, v175);
  v181 = *(_QWORD *)(W32GetUserSessionState(v180, v179) + 19872);
  *(_DWORD *)(v181 + 2444) = v178;
  v183 = *(_QWORD *)(W32GetUserSessionState(v181, v182) + 19872);
  v184 = *(unsigned __int16 *)(v183 + 6998);
  v186 = W32GetUserSessionState(v183, v185);
  v187 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v186 + 19872) + 2296LL), 96, v184);
  *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v189, v188) + 19872) + 2416LL) = v187;
  v192 = W32GetUserSessionState(v191, v190);
  v193 = EngMulDiv(v41, 96, *(unsigned __int16 *)(*(_QWORD *)(v192 + 19872) + 6998LL));
  *(_DWORD *)(Get96DpiServerInfo() + 4) = v193;
  v193 += 3;
  v196 = *(_QWORD *)(W32GetUserSessionState(v195, v194) + 19872);
  *(_DWORD *)(v196 + 2460) = v193;
  v198 = *(_QWORD *)(W32GetUserSessionState(v196, v197) + 19872);
  *(_DWORD *)(v198 + 2464) = v193;
  v200 = *(_QWORD *)(W32GetUserSessionState(v198, v199) + 19872);
  v203 = *(_QWORD *)(W32GetUserSessionState(v202, v201) + 19872);
  v204 = *(_DWORD *)(v200 + 2340) + *(_DWORD *)(v203 + 2400);
  v206 = *(_QWORD *)(W32GetUserSessionState(v203, v205) + 19872);
  v209 = *(_QWORD *)(W32GetUserSessionState(v208, v207) + 19872);
  v210 = *(_DWORD *)(v206 + 2344) + *(_DWORD *)(v209 + 2400);
  v212 = *(_QWORD *)(W32GetUserSessionState(v209, v211) + 19872);
  v215 = *(_QWORD *)(W32GetUserSessionState(v214, v213) + 19872);
  v216 = *(_DWORD *)(v212 + 2460) + *(_DWORD *)(v215 + 2520);
  v218 = *(_QWORD *)(W32GetUserSessionState(v215, v217) + 19872);
  v221 = *(_QWORD *)(W32GetUserSessionState(v220, v219) + 19872);
  v222 = *(_DWORD *)(v218 + 2464) + *(_DWORD *)(v221 + 2520);
  v224 = *(_QWORD *)(W32GetUserSessionState(v221, v223) + 19872);
  v227 = W32GetUserSessionState(v226, v225);
  SetDpiDepSysMet(
    16LL,
    (unsigned int)(*(_DWORD *)(v224 + 2336)
                 + 3 * *(_DWORD *)(*(_QWORD *)(v227 + 19872) + 2332LL)
                 + 2 * (v204 + 2 * (*(_DWORD *)(SessionDpiServerInfo + 16) + 1))));
  v230 = W32GetUserSessionState(v229, v228);
  SetDpiDepSysMet(17LL, (unsigned int)(*(_DWORD *)(*(_QWORD *)(v230 + 19872) + 2292LL) + 2 * v210));
  v233 = *(_QWORD *)(W32GetUserSessionState(v232, v231) + 19872);
  v236 = W32GetUserSessionState(v235, v234);
  v237 = (unsigned int)(v216 + 2 * *(_DWORD *)(v45 + 16) + 2);
  v238 = (unsigned int)(3 * *(_DWORD *)(*(_QWORD *)(v236 + 19872) + 2452LL));
  LODWORD(v224) = *(_DWORD *)(v233 + 2456) + v238 + 2 * v237;
  v239 = *(_QWORD *)(W32GetUserSessionState(v238, v237) + 19872);
  *(_DWORD *)(v239 + 2468) = v224;
  v241 = *(_QWORD *)(W32GetUserSessionState(v239, v240) + 19872);
  LODWORD(v224) = *(_DWORD *)(v241 + 2412) + 2 * v222;
  v243 = *(_QWORD *)(W32GetUserSessionState(v241, v242) + 19872);
  *(_DWORD *)(v243 + 2472) = v224;
  v245 = *(_QWORD *)(W32GetUserSessionState(v243, v244) + 19872);
  LODWORD(v224) = *(_DWORD *)(v245 + 2336) + 6;
  v247 = *(_QWORD *)(W32GetUserSessionState(v245, v246) + 19872);
  *(_DWORD *)(v247 + 2128) = v224;
  LODWORD(v224) = *((_DWORD *)a1 + 1);
  v249 = W32GetUserSessionState(v247, v248);
  bSetDevDragWidth(*(_QWORD *)(*(_QWORD *)(v249 + 56968) + 48LL), (unsigned int)(v224 + 3));
  SortMonitorsInSpatialOrder();
}
