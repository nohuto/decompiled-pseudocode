/*
 * XREFs of ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1400CCE14
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1400CDEC0 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     SortMonitorsInSpatialOrder @ 0x1400CDC20 (SortMonitorsInSpatialOrder.c)
 *     bSetDevDragWidth @ 0x1400CDE6C (bSetDevDragWidth.c)
 *     Get96DpiMetrics @ 0x140302300 (Get96DpiMetrics.c)
 *     Get96DpiServerInfo @ 0x140302324 (Get96DpiServerInfo.c)
 *     GetSessionDpiServerInfo @ 0x140302648 (GetSessionDpiServerInfo.c)
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
  __int64 SessionDpiServerInfo; // r13
  __int64 v43; // r12
  __int64 v44; // rbp
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rcx
  INT v48; // ebx
  __int64 v49; // rdx
  __int64 v50; // rax
  int v51; // edi
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rcx
  INT v55; // ebx
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  INT v61; // ebx
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  INT v66; // edi
  __int64 v67; // rcx
  INT v68; // ebx
  __int64 v69; // rdx
  __int64 v70; // rax
  INT v71; // ebx
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  INT v75; // ebx
  __int64 v76; // rdx
  __int64 v77; // rax
  int v78; // esi
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rcx
  INT v84; // ebx
  __int64 v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rcx
  INT v90; // ebx
  __int64 v91; // rdx
  __int64 v92; // rax
  INT v93; // ebx
  __int64 v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // rcx
  INT v97; // ebx
  __int64 v98; // rdx
  __int64 v99; // rax
  INT v100; // esi
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rcx
  INT v106; // ebx
  __int64 v107; // rdx
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rcx
  __int64 v112; // rdx
  __int64 v113; // rcx
  int v114; // ebx
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rdx
  __int64 v118; // rcx
  int v119; // ebx
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // rdx
  __int64 v123; // rcx
  int v124; // ebx
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // rdx
  __int64 v128; // rcx
  INT v129; // ebx
  __int64 v130; // rdx
  __int64 v131; // rax
  INT v132; // ebx
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // rcx
  __int64 v136; // rdx
  __int64 v137; // rcx
  INT v138; // ebx
  __int64 v139; // rdx
  __int64 v140; // rax
  INT v141; // ebx
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // rcx
  __int64 v145; // rdx
  __int64 v146; // rcx
  INT v147; // ebx
  __int64 v148; // rdx
  __int64 v149; // rax
  INT v150; // ebx
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // rcx
  __int64 v154; // rdx
  __int64 v155; // rcx
  INT v156; // ebx
  __int64 v157; // rdx
  __int64 v158; // rax
  INT v159; // ebx
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // rcx
  __int64 v163; // rdx
  __int64 v164; // rcx
  INT v165; // ebx
  __int64 v166; // rdx
  __int64 v167; // rax
  INT v168; // ebx
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 v171; // rcx
  __int64 v172; // rdx
  __int64 v173; // rcx
  INT v174; // ebx
  __int64 v175; // rdx
  __int64 v176; // rax
  INT v177; // ebx
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // rcx
  __int64 v181; // rdx
  __int64 v182; // rcx
  INT v183; // ebx
  __int64 v184; // rdx
  __int64 v185; // rax
  INT v186; // ebx
  __int64 v187; // rdx
  __int64 v188; // rcx
  __int64 v189; // rdx
  __int64 v190; // rcx
  __int64 v191; // rax
  INT v192; // ebx
  __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // rcx
  __int64 v196; // rdx
  __int64 v197; // rcx
  __int64 v198; // rdx
  __int64 v199; // rbx
  __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // rcx
  int v203; // edi
  __int64 v204; // rdx
  __int64 v205; // rbx
  __int64 v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // rcx
  int v209; // esi
  __int64 v210; // rdx
  __int64 v211; // rbx
  __int64 v212; // rdx
  __int64 v213; // rcx
  __int64 v214; // rcx
  int v215; // ebp
  __int64 v216; // rdx
  __int64 v217; // rbx
  __int64 v218; // rdx
  __int64 v219; // rcx
  __int64 v220; // rcx
  int v221; // r14d
  __int64 v222; // rdx
  __int64 v223; // rbx
  __int64 v224; // rdx
  __int64 v225; // rcx
  __int64 v226; // rax
  __int64 v227; // rdx
  __int64 v228; // rcx
  __int64 v229; // rax
  __int64 v230; // rdx
  __int64 v231; // rcx
  __int64 v232; // rbx
  __int64 v233; // rdx
  __int64 v234; // rcx
  __int64 v235; // rcx
  __int64 v236; // rdx
  __int64 v237; // rcx
  __int64 v238; // rdx
  __int64 v239; // rcx
  __int64 v240; // rdx
  __int64 v241; // rcx
  __int64 v242; // rdx
  __int64 v243; // rcx
  __int64 v244; // rdx
  __int64 v245; // rcx
  __int64 v246; // rdx
  __int64 v247; // rax
  __int64 v248; // rcx
  INT v249; // ebx
  __int64 v250; // rdx
  __int64 v251; // rax
  __int64 v252; // rcx
  INT v253; // ebx
  __int64 v254; // rdx
  __int64 v255; // rax
  __int64 v256; // rcx
  INT v257; // ebx
  __int64 v258; // rdx
  __int64 v259; // rax

  SetDpiDepSysMet(0LL, *((unsigned int *)a1 + 2));
  SetDpiDepSysMet(1LL, *((unsigned int *)a1 + 2));
  SetDpiDepSysMet(10LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(11LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(3LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(4LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(12LL, *((unsigned int *)a1 + 4));
  SetDpiDepSysMet(13LL, *((unsigned int *)a1 + 5));
  UserSessionState = W32GetUserSessionState(v3, v2);
  SetDpiDepSysMet(2LL, (unsigned int)(*(_DWORD *)(*(_QWORD *)(UserSessionState + 19904) + 2336LL) + 1));
  if ( *(_DWORD *)a1 == 504 )
    SetDpiDepSysMet(29LL, *((unsigned int *)a1 + 125));
  v7 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19904);
  v10 = W32GetUserSessionState(v9, v8);
  v11 = (unsigned int)(*(_DWORD *)(v7 + 2332) - 2);
  v12 = *(int *)(*(_QWORD *)(v10 + 19904) + 2304LL) >> 31;
  LODWORD(v10) = *(_DWORD *)(*(_QWORD *)(v10 + 19904) + 2304LL);
  v13 = v12;
  v14 = __SPAIR64__(v12, v10) % 2;
  LODWORD(v10) = __SPAIR64__(v12, v10) / 2;
  LODWORD(v13) = v14;
  if ( (int)v11 < (int)v10 )
    v15 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v13) + 19904) + 2332LL) - 2;
  else
    v15 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v13) + 19904) + 2304LL) / 2;
  SetDpiDepSysMet(20LL, v15 & 0xFFFFFFFE);
  v18 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 19904);
  v21 = W32GetUserSessionState(v20, v19);
  v22 = (unsigned int)(*(_DWORD *)(v18 + 2336) - 2);
  v23 = *(int *)(*(_QWORD *)(v21 + 19904) + 2308LL) >> 31;
  LODWORD(v21) = *(_DWORD *)(*(_QWORD *)(v21 + 19904) + 2308LL);
  v24 = v23;
  v25 = __SPAIR64__(v23, v21) % 2;
  LODWORD(v21) = __SPAIR64__(v23, v21) / 2;
  LODWORD(v24) = v25;
  if ( (int)v22 < (int)v21 )
    v26 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v22, v24) + 19904) + 2336LL) - 2;
  else
    v26 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v22, v24) + 19904) + 2308LL) / 2;
  SetDpiDepSysMet(21LL, v26 & 0xFFFFFFFE);
  v29 = *(_QWORD *)(W32GetUserSessionState(v28, v27) + 19904);
  if ( *(_DWORD *)(v29 + 2364) < *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v31, v30) + 19904) + 2368LL) )
    v34 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v33, v32) + 19904) + 2364LL);
  else
    v34 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v33, v32) + 19904) + 2368LL);
  SetDpiDepSysMet(20LL, v34);
  SetDpiDepSysMet(21LL, v34);
  SetDpiDepSysMet(23LL, *((unsigned int *)a1 + 29));
  SetDpiDepSysMet(24LL, *((unsigned int *)a1 + 30));
  v37 = W32GetUserSessionState(v36, v35);
  SetDpiDepSysMet(22LL, (unsigned int)(*(_DWORD *)(*(_QWORD *)(v37 + 19904) + 2380LL) + 1));
  SetDpiDepSysMet(25LL, *((unsigned int *)a1 + 54));
  SetDpiDepSysMet(26LL, *((unsigned int *)a1 + 55));
  v40 = W32GetUserSessionState(v39, v38);
  SetDpiDepSysMet(9LL, (unsigned int)(*(_DWORD *)(*(_QWORD *)(v40 + 19904) + 2388LL) + 1));
  v41 = *((_DWORD *)a1 + 1);
  SessionDpiServerInfo = GetSessionDpiServerInfo();
  *(_DWORD *)(SessionDpiServerInfo + 4) = v41;
  SetDpiDepSysMet(14LL, (unsigned int)(v41 + 3));
  SetDpiDepSysMet(15LL, (unsigned int)(v41 + 3));
  v43 = Get96DpiServerInfo();
  v44 = Get96DpiMetrics();
  v47 = *(_QWORD *)(W32GetUserSessionState(v46, v45) + 19904);
  v48 = *(unsigned __int16 *)(v47 + 6998);
  v50 = W32GetUserSessionState(v47, v49);
  v51 = *(_DWORD *)(v43 + 20) + 2;
  if ( EngMulDiv(*(_DWORD *)(*(_QWORD *)(v50 + 19904) + 2336LL), 96, v48) > v51 )
  {
    v54 = *(_QWORD *)(W32GetUserSessionState(v53, v52) + 19904);
    v55 = *(unsigned __int16 *)(v54 + 6998);
    v57 = W32GetUserSessionState(v54, v56);
    v51 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v57 + 19904) + 2336LL), 96, v55);
  }
  v58 = *(_QWORD *)(W32GetUserSessionState(v53, v52) + 19904);
  *(_DWORD *)(v58 + 2456) = v51;
  v60 = *(_QWORD *)(W32GetUserSessionState(v58, v59) + 19904);
  v61 = *(unsigned __int16 *)(v60 + 6998);
  v63 = W32GetUserSessionState(v60, v62);
  v66 = 8;
  if ( EngMulDiv(*(_DWORD *)(*(_QWORD *)(v63 + 19904) + 2332LL), 96, v61) <= 8 )
  {
    v71 = 8;
  }
  else
  {
    v67 = *(_QWORD *)(W32GetUserSessionState(v65, v64) + 19904);
    v68 = *(unsigned __int16 *)(v67 + 6998);
    v70 = W32GetUserSessionState(v67, v69);
    v71 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v70 + 19904) + 2332LL), 96, v68);
  }
  v72 = *(_QWORD *)(W32GetUserSessionState(v65, v64) + 19904);
  *(_DWORD *)(v72 + 2452) = v71;
  v74 = *(_QWORD *)(W32GetUserSessionState(v72, v73) + 19904);
  v75 = *(unsigned __int16 *)(v74 + 6998);
  v77 = W32GetUserSessionState(v74, v76);
  v78 = *(_DWORD *)(v44 + 44) + 2;
  if ( EngMulDiv(*(_DWORD *)(*(_QWORD *)(v77 + 19904) + 2380LL), 96, v75) > v78 )
  {
    v248 = *(_QWORD *)(W32GetUserSessionState(v80, v79) + 19904);
    v249 = *(unsigned __int16 *)(v248 + 6998);
    v251 = W32GetUserSessionState(v248, v250);
    v78 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v251 + 19904) + 2380LL), 96, v249);
  }
  v81 = *(_QWORD *)(W32GetUserSessionState(v80, v79) + 19904);
  *(_DWORD *)(v81 + 2500) = v78;
  v83 = *(_QWORD *)(W32GetUserSessionState(v81, v82) + 19904);
  v84 = *(unsigned __int16 *)(v83 + 6998);
  v86 = W32GetUserSessionState(v83, v85);
  if ( EngMulDiv(*(_DWORD *)(*(_QWORD *)(v86 + 19904) + 2376LL), 96, v84) <= 8 )
  {
    v93 = 8;
  }
  else
  {
    v89 = *(_QWORD *)(W32GetUserSessionState(v88, v87) + 19904);
    v90 = *(unsigned __int16 *)(v89 + 6998);
    v92 = W32GetUserSessionState(v89, v91);
    v93 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v92 + 19904) + 2376LL), 96, v90);
  }
  v94 = *(_QWORD *)(W32GetUserSessionState(v88, v87) + 19904);
  *(_DWORD *)(v94 + 2496) = v93;
  v96 = *(_QWORD *)(W32GetUserSessionState(v94, v95) + 19904);
  v97 = *(unsigned __int16 *)(v96 + 6998);
  v99 = W32GetUserSessionState(v96, v98);
  v100 = *(_DWORD *)(v44 + 28);
  if ( EngMulDiv(*(_DWORD *)(*(_QWORD *)(v99 + 19904) + 2388LL), 96, v97) > v100 )
  {
    v252 = *(_QWORD *)(W32GetUserSessionState(v102, v101) + 19904);
    v253 = *(unsigned __int16 *)(v252 + 6998);
    v255 = W32GetUserSessionState(v252, v254);
    v100 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v255 + 19904) + 2388LL), 96, v253);
  }
  v103 = *(_QWORD *)(W32GetUserSessionState(v102, v101) + 19904);
  *(_DWORD *)(v103 + 2508) = v100;
  v105 = *(_QWORD *)(W32GetUserSessionState(v103, v104) + 19904);
  v106 = *(unsigned __int16 *)(v105 + 6998);
  v108 = W32GetUserSessionState(v105, v107);
  if ( EngMulDiv(*(_DWORD *)(*(_QWORD *)(v108 + 19904) + 2384LL), 96, v106) > 8 )
  {
    v256 = *(_QWORD *)(W32GetUserSessionState(v110, v109) + 19904);
    v257 = *(unsigned __int16 *)(v256 + 6998);
    v259 = W32GetUserSessionState(v256, v258);
    v66 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v259 + 19904) + 2384LL), 96, v257);
  }
  v111 = *(_QWORD *)(W32GetUserSessionState(v110, v109) + 19904);
  *(_DWORD *)(v111 + 2504) = v66;
  v113 = *(_QWORD *)(W32GetUserSessionState(v111, v112) + 19904);
  v114 = *(_DWORD *)(v113 + 2508) + 1;
  v116 = *(_QWORD *)(W32GetUserSessionState(v113, v115) + 19904);
  *(_DWORD *)(v116 + 2440) = v114;
  v118 = *(_QWORD *)(W32GetUserSessionState(v116, v117) + 19904);
  v119 = *(_DWORD *)(v118 + 2456) + 1;
  v121 = *(_QWORD *)(W32GetUserSessionState(v118, v120) + 19904);
  *(_DWORD *)(v121 + 2412) = v119;
  v123 = *(_QWORD *)(W32GetUserSessionState(v121, v122) + 19904);
  v124 = *(_DWORD *)(v123 + 2500) + 1;
  v126 = *(_QWORD *)(W32GetUserSessionState(v123, v125) + 19904);
  *(_DWORD *)(v126 + 2492) = v124;
  v128 = *(_QWORD *)(W32GetUserSessionState(v126, v127) + 19904);
  v129 = *(unsigned __int16 *)(v128 + 6998);
  v131 = W32GetUserSessionState(v128, v130);
  v132 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v131 + 19904) + 2400LL), 96, v129);
  v135 = *(_QWORD *)(W32GetUserSessionState(v134, v133) + 19904);
  *(_DWORD *)(v135 + 2520) = v132;
  v137 = *(_QWORD *)(W32GetUserSessionState(v135, v136) + 19904);
  v138 = *(unsigned __int16 *)(v137 + 6998);
  v140 = W32GetUserSessionState(v137, v139);
  v141 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v140 + 19904) + 2328LL), 96, v138);
  v144 = *(_QWORD *)(W32GetUserSessionState(v143, v142) + 19904);
  *(_DWORD *)(v144 + 2448) = v141;
  v146 = *(_QWORD *)(W32GetUserSessionState(v144, v145) + 19904);
  v147 = *(unsigned __int16 *)(v146 + 6998);
  v149 = W32GetUserSessionState(v146, v148);
  v150 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v149 + 19904) + 2300LL), 96, v147);
  v153 = *(_QWORD *)(W32GetUserSessionState(v152, v151) + 19904);
  *(_DWORD *)(v153 + 2420) = v150;
  v155 = *(_QWORD *)(W32GetUserSessionState(v153, v154) + 19904);
  v156 = *(unsigned __int16 *)(v155 + 6998);
  v158 = W32GetUserSessionState(v155, v157);
  v159 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v158 + 19904) + 2284LL), 96, v156);
  v162 = *(_QWORD *)(W32GetUserSessionState(v161, v160) + 19904);
  *(_DWORD *)(v162 + 2404) = v159;
  v164 = *(_QWORD *)(W32GetUserSessionState(v162, v163) + 19904);
  v165 = *(unsigned __int16 *)(v164 + 6998);
  v167 = W32GetUserSessionState(v164, v166);
  v168 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v167 + 19904) + 2288LL), 96, v165);
  v171 = *(_QWORD *)(W32GetUserSessionState(v170, v169) + 19904);
  *(_DWORD *)(v171 + 2408) = v168;
  v173 = *(_QWORD *)(W32GetUserSessionState(v171, v172) + 19904);
  v174 = *(unsigned __int16 *)(v173 + 6998);
  v176 = W32GetUserSessionState(v173, v175);
  v177 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v176 + 19904) + 2324LL), 96, v174);
  v180 = *(_QWORD *)(W32GetUserSessionState(v179, v178) + 19904);
  *(_DWORD *)(v180 + 2444) = v177;
  v182 = *(_QWORD *)(W32GetUserSessionState(v180, v181) + 19904);
  v183 = *(unsigned __int16 *)(v182 + 6998);
  v185 = W32GetUserSessionState(v182, v184);
  v186 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v185 + 19904) + 2296LL), 96, v183);
  *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v188, v187) + 19904) + 2416LL) = v186;
  v191 = W32GetUserSessionState(v190, v189);
  v192 = EngMulDiv(v41, 96, *(unsigned __int16 *)(*(_QWORD *)(v191 + 19904) + 6998LL));
  *(_DWORD *)(Get96DpiServerInfo() + 4) = v192;
  v192 += 3;
  v195 = *(_QWORD *)(W32GetUserSessionState(v194, v193) + 19904);
  *(_DWORD *)(v195 + 2460) = v192;
  v197 = *(_QWORD *)(W32GetUserSessionState(v195, v196) + 19904);
  *(_DWORD *)(v197 + 2464) = v192;
  v199 = *(_QWORD *)(W32GetUserSessionState(v197, v198) + 19904);
  v202 = *(_QWORD *)(W32GetUserSessionState(v201, v200) + 19904);
  v203 = *(_DWORD *)(v202 + 2400) + *(_DWORD *)(v199 + 2340);
  v205 = *(_QWORD *)(W32GetUserSessionState(v202, v204) + 19904);
  v208 = *(_QWORD *)(W32GetUserSessionState(v207, v206) + 19904);
  v209 = *(_DWORD *)(v208 + 2400) + *(_DWORD *)(v205 + 2344);
  v211 = *(_QWORD *)(W32GetUserSessionState(v208, v210) + 19904);
  v214 = *(_QWORD *)(W32GetUserSessionState(v213, v212) + 19904);
  v215 = *(_DWORD *)(v214 + 2520) + *(_DWORD *)(v211 + 2460);
  v217 = *(_QWORD *)(W32GetUserSessionState(v214, v216) + 19904);
  v220 = *(_QWORD *)(W32GetUserSessionState(v219, v218) + 19904);
  v221 = *(_DWORD *)(v220 + 2520) + *(_DWORD *)(v217 + 2464);
  v223 = *(_QWORD *)(W32GetUserSessionState(v220, v222) + 19904);
  v226 = W32GetUserSessionState(v225, v224);
  SetDpiDepSysMet(
    16LL,
    (unsigned int)(*(_DWORD *)(v223 + 2336)
                 + 3 * *(_DWORD *)(*(_QWORD *)(v226 + 19904) + 2332LL)
                 + 2 * (v203 + 2 * (*(_DWORD *)(SessionDpiServerInfo + 16) + 1))));
  v229 = W32GetUserSessionState(v228, v227);
  SetDpiDepSysMet(17LL, (unsigned int)(*(_DWORD *)(*(_QWORD *)(v229 + 19904) + 2292LL) + 2 * v209));
  v232 = *(_QWORD *)(W32GetUserSessionState(v231, v230) + 19904);
  v235 = (unsigned int)(3 * *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v234, v233) + 19904) + 2452LL));
  v236 = (unsigned int)(v235 + 2 * (v215 + 2 * *(_DWORD *)(v43 + 16) + 2));
  LODWORD(v232) = v236 + *(_DWORD *)(v232 + 2456);
  v237 = *(_QWORD *)(W32GetUserSessionState(v235, v236) + 19904);
  *(_DWORD *)(v237 + 2468) = v232;
  v239 = *(_QWORD *)(W32GetUserSessionState(v237, v238) + 19904);
  LODWORD(v232) = *(_DWORD *)(v239 + 2412) + 2 * v221;
  v241 = *(_QWORD *)(W32GetUserSessionState(v239, v240) + 19904);
  *(_DWORD *)(v241 + 2472) = v232;
  v243 = *(_QWORD *)(W32GetUserSessionState(v241, v242) + 19904);
  LODWORD(v232) = *(_DWORD *)(v243 + 2336) + 6;
  v245 = *(_QWORD *)(W32GetUserSessionState(v243, v244) + 19904);
  *(_DWORD *)(v245 + 2128) = v232;
  LODWORD(v232) = *((_DWORD *)a1 + 1);
  v247 = W32GetUserSessionState(v245, v246);
  bSetDevDragWidth(*(_QWORD *)(*(_QWORD *)(v247 + 56968) + 40LL), (unsigned int)(v232 + 3));
  SortMonitorsInSpatialOrder();
}
