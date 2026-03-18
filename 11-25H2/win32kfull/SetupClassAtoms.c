/*
 * XREFs of SetupClassAtoms @ 0x1401F1AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateMarginPropAtom@WindowMargins@@YA_NPEBG@Z @ 0x14026850C (-CreateMarginPropAtom@WindowMargins@@YA_NPEBG@Z.c)
 *     ??4?$SGATOMTABLEgatomInterceptWindowData@G@@QEAAAEBGAEBG@Z @ 0x1402833A4 (--4-$SGATOMTABLEgatomInterceptWindowData@G@@QEAAAEBGAEBG@Z.c)
 *     ??B?$SGATOMTABLEgatomInterceptWindowData@G@@QEBAGXZ @ 0x1402833DC (--B-$SGATOMTABLEgatomInterceptWindowData@G@@QEBAGXZ.c)
 *     ?SetInterceptDataPropAtom@WindowActions@@YAXG@Z @ 0x1402CCBA4 (-SetInterceptDataPropAtom@WindowActions@@YAXG@Z.c)
 */

__int64 SetupClassAtoms()
{
  wchar_t **v0; // rsi
  int v1; // ebp
  __int64 v2; // rdi
  __int64 v3; // r14
  __int16 v4; // bx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int16 v9; // ax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rcx
  const unsigned __int16 *v83; // rdx
  WindowMargins *v84; // rcx
  int v85; // ebx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rcx
  int v90; // ebx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rcx
  int v95; // ebx
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rcx
  __int64 v103; // rdx
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int16 v140; // r13
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int16 v145; // r12
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int16 v150; // r15
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // r14
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int16 v160; // bp
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int16 v169; // si
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // rcx
  __int16 v175; // di
  unsigned __int16 v176; // ax
  unsigned __int16 v177; // dx
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 UserSessionState; // rax
  bool v183; // zf
  __int16 v185; // [rsp+20h] [rbp-88h]
  __int16 v186; // [rsp+22h] [rbp-86h]
  __int16 v187; // [rsp+24h] [rbp-84h]
  __int16 v188; // [rsp+26h] [rbp-82h]
  __int16 v189; // [rsp+28h] [rbp-80h]
  __int16 v190; // [rsp+2Ah] [rbp-7Eh]
  __int16 v191; // [rsp+2Ch] [rbp-7Ch]
  __int16 v192; // [rsp+2Eh] [rbp-7Ah]
  __int16 v193; // [rsp+30h] [rbp-78h]
  __int16 v194; // [rsp+32h] [rbp-76h] BYREF
  __int16 v195; // [rsp+34h] [rbp-74h]
  __int16 v196; // [rsp+36h] [rbp-72h]
  __int16 v197; // [rsp+38h] [rbp-70h]
  __int16 v198; // [rsp+3Ah] [rbp-6Eh]
  __int16 v199; // [rsp+3Ch] [rbp-6Ch]
  __int16 v200; // [rsp+3Eh] [rbp-6Ah]
  __int16 v201; // [rsp+40h] [rbp-68h]
  __int16 v202; // [rsp+42h] [rbp-66h]
  __int16 v203; // [rsp+44h] [rbp-64h]
  __int16 v204; // [rsp+46h] [rbp-62h]
  int v205; // [rsp+48h] [rbp-60h]
  int v206; // [rsp+4Ch] [rbp-5Ch]
  int v207; // [rsp+50h] [rbp-58h]
  int v208; // [rsp+54h] [rbp-54h]
  int v209; // [rsp+58h] [rbp-50h]
  bool MarginPropAtom; // [rsp+B0h] [rbp+8h]
  __int16 v211; // [rsp+B8h] [rbp+10h]
  __int16 v212; // [rsp+C0h] [rbp+18h]
  __int16 v213; // [rsp+C8h] [rbp+20h]

  v0 = off_14034C700;
  v1 = 1;
  v2 = 868LL;
  v3 = 17LL;
  do
  {
    v4 = UserAddAtomEx(*v0, 1LL, 2LL);
    v7 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19872);
    *(_WORD *)(v2 + v7) = v4;
    ++v0;
    v9 = *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v8) + 19872) + v2);
    v2 += 2LL;
    v11 = v1 & (unsigned int)-(v9 != 0);
    v1 &= -(v9 != 0);
    --v3;
  }
  while ( v3 );
  v208 = v11;
  v12 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19872);
  *(_WORD *)(v12 + 904) = -32766;
  v14 = *(_QWORD *)(W32GetUserSessionState(v12, v13) + 19872);
  *(_WORD *)(v14 + 910) = -32764;
  v16 = *(_QWORD *)(W32GetUserSessionState(v14, v15) + 19872);
  *(_WORD *)(v16 + 912) = -32762;
  v18 = *(_QWORD *)(W32GetUserSessionState(v16, v17) + 19872);
  *(_WORD *)(v18 + 902) = -32767;
  v20 = *(_QWORD *)(W32GetUserSessionState(v18, v19) + 19872);
  *(_WORD *)(v20 + 908) = -32765;
  *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v20, v21) + 19872) + 906LL) = 0x8000;
  v22 = (unsigned __int16)UserAddAtomEx(L"SHELLHOOK", 1LL, 2LL);
  v25 = *(_QWORD *)(W32GetUserSessionState(v24, v23) + 19872);
  *(_DWORD *)(v25 + 928) = v22;
  v207 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v25, v26) + 19872) + 928LL);
  LOWORD(v22) = UserAddAtomEx(L"SysFrostedWindow", 1LL, 2LL);
  v29 = *(_QWORD *)(W32GetUserSessionState(v28, v27) + 19872);
  *(_WORD *)(v29 + 1378) = v22;
  v211 = *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v29, v30) + 19872) + 1378LL);
  LOWORD(v22) = UserAddAtomEx(L"SysCP", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v32, v31) + 41334) = v22;
  v195 = *(_WORD *)(W32GetUserSessionState(v34, v33) + 41334);
  LOWORD(v22) = UserAddAtomEx(L"SysDT", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v36, v35) + 41336) = v22;
  v212 = *(_WORD *)(W32GetUserSessionState(v38, v37) + 41336);
  LOWORD(v22) = UserAddAtomEx(L"SysQOS", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v40, v39) + 41338) = v22;
  v196 = *(_WORD *)(W32GetUserSessionState(v42, v41) + 41338);
  LOWORD(v22) = UserAddAtomEx(L"SysDDEI", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v44, v43) + 41340) = v22;
  v213 = *(_WORD *)(W32GetUserSessionState(v46, v45) + 41340);
  LOWORD(v22) = UserAddAtomEx(L"SysWNDO", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v48, v47) + 41342) = v22;
  v197 = *(_WORD *)(W32GetUserSessionState(v50, v49) + 41342);
  LOWORD(v22) = UserAddAtomEx(L"SysIMEL", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v52, v51) + 41344) = v22;
  v185 = *(_WORD *)(W32GetUserSessionState(v54, v53) + 41344);
  LOWORD(v22) = UserAddAtomEx(L"SysLayer", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v56, v55) + 41358) = v22;
  v198 = *(_WORD *)(W32GetUserSessionState(v58, v57) + 41358);
  LOWORD(v22) = UserAddAtomEx(L"SysDispAffinity", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v60, v59) + 41360) = v22;
  v186 = *(_WORD *)(W32GetUserSessionState(v62, v61) + 41360);
  LOWORD(v22) = UserAddAtomEx(L"SysSwapChain", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v64, v63) + 42258) = v22;
  v199 = *(_WORD *)(W32GetUserSessionState(v66, v65) + 42258);
  LOWORD(v22) = UserAddAtomEx(L"SysDCompHwndTargets", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v68, v67) + 42242) = v22;
  v187 = *(_WORD *)(W32GetUserSessionState(v70, v69) + 42242);
  LOWORD(v22) = UserAddAtomEx(L"SysVisRgnTracker", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v72, v71) + 42260) = v22;
  v200 = *(_WORD *)(W32GetUserSessionState(v74, v73) + 42260);
  LOWORD(v22) = UserAddAtomEx(L"SysDCompHwndBitmap", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v76, v75) + 42246) = v22;
  v188 = *(_WORD *)(W32GetUserSessionState(v78, v77) + 42246);
  LOWORD(v22) = UserAddAtomEx(szCOMPOSITIONINPUTQUEUE_NAME, 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v80, v79) + 42256) = v22;
  v189 = *(_WORD *)(W32GetUserSessionState(v82, v81) + 42256);
  MarginPropAtom = WindowMargins::CreateMarginPropAtom(v84, v83);
  v85 = (unsigned __int16)UserAddAtomEx(L"ACTIVATESHELLWINDOW", 1LL, 2LL);
  *(_DWORD *)(W32GetUserSessionState(v87, v86) + 63304) = v85;
  v205 = *(_DWORD *)(W32GetUserSessionState(v89, v88) + 63304);
  v90 = (unsigned __int16)UserAddAtomEx(L"OTHERWINDOWCREATED", 1LL, 2LL);
  *(_DWORD *)(W32GetUserSessionState(v92, v91) + 63408) = v90;
  v209 = *(_DWORD *)(W32GetUserSessionState(v94, v93) + 63408);
  v95 = (unsigned __int16)UserAddAtomEx(L"OTHERWINDOWDESTROYED", 1LL, 2LL);
  *(_DWORD *)(W32GetUserSessionState(v97, v96) + 63412) = v95;
  v206 = *(_DWORD *)(W32GetUserSessionState(v99, v98) + 63412);
  LOWORD(v95) = UserAddAtomEx(L"Message", 1LL, 2LL);
  v102 = *(_QWORD *)(W32GetUserSessionState(v101, v100) + 19872);
  *(_WORD *)(v102 + 916) = v95;
  *(_WORD *)(W32GetUserSessionState(v102, v103) + 41328) = v95;
  v201 = *(_WORD *)(W32GetUserSessionState(v105, v104) + 41328);
  LOWORD(v95) = UserAddAtomEx(L"SysShadow", 1LL, 2LL);
  v108 = *(_QWORD *)(W32GetUserSessionState(v107, v106) + 19872);
  *(_WORD *)(v108 + 914) = v95;
  *(_WORD *)(W32GetUserSessionState(v108, v109) + 41326) = v95;
  v190 = *(_WORD *)(W32GetUserSessionState(v111, v110) + 41326);
  LOWORD(v95) = UserAddAtomEx(L"OleMainThreadWndClass", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v113, v112) + 41330) = v95;
  v202 = *(_WORD *)(W32GetUserSessionState(v115, v114) + 41330);
  LOWORD(v95) = UserAddAtomEx(L"FlashWState", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v117, v116) + 41332) = v95;
  v191 = *(_WORD *)(W32GetUserSessionState(v119, v118) + 41332);
  LOWORD(v95) = UserAddAtomEx(L"SysTouchFlags", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v121, v120) + 41346) = v95;
  v203 = *(_WORD *)(W32GetUserSessionState(v123, v122) + 41346);
  LOWORD(v95) = UserAddAtomEx(L"MicrosoftWindowsTargetingWindow", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v125, v124) + 41348) = v95;
  v192 = *(_WORD *)(W32GetUserSessionState(v127, v126) + 41348);
  LOWORD(v95) = UserAddAtom(L"SysFeedbackSettings", 1LL);
  *(_WORD *)(W32GetUserSessionState(v129, v128) + 41350) = v95;
  v204 = *(_WORD *)(W32GetUserSessionState(v131, v130) + 41350);
  LOWORD(v95) = UserAddAtomEx(L"ShutdownBlockingReason", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v133, v132) + 41352) = v95;
  v193 = *(_WORD *)(W32GetUserSessionState(v135, v134) + 41352);
  LOWORD(v95) = UserAddAtomEx(L"BrokeredForeground", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v137, v136) + 41354) = v95;
  v140 = *(_WORD *)(W32GetUserSessionState(v139, v138) + 41354);
  LOWORD(v95) = UserAddAtomEx(szMIPFLAGS, 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v142, v141) + 41324) = v95;
  v145 = *(_WORD *)(W32GetUserSessionState(v144, v143) + 41324);
  LOWORD(v95) = UserAddAtomEx(L"CoreWindowProp", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v147, v146) + 42254) = v95;
  v150 = *(_WORD *)(W32GetUserSessionState(v149, v148) + 42254);
  LOWORD(v95) = UserAddAtomEx(L"MonitorInheritance", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v152, v151) + 41362) = v95;
  v155 = *(unsigned __int16 *)(W32GetUserSessionState(v154, v153) + 41362);
  LOWORD(v95) = UserAddAtomEx(L"DesktopRecalcInfo", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v157, v156) + 41364) = v95;
  v160 = *(_WORD *)(W32GetUserSessionState(v159, v158) + 41364);
  LOWORD(v95) = *(_WORD *)(W32GetUserSessionState(v162, v161) + 41364);
  *(_WORD *)(W32GetUserSessionState(v164, v163) + 42250) = v95;
  LOWORD(v95) = UserAddAtomEx(L"DwmWindowNotifyBatch", 1LL, 2LL);
  *(_WORD *)(W32GetUserSessionState(v166, v165) + 41366) = v95;
  v169 = *(_WORD *)(W32GetUserSessionState(v168, v167) + 41366);
  LOWORD(v95) = *(_WORD *)(W32GetUserSessionState(v171, v170) + 41366);
  *(_WORD *)(W32GetUserSessionState(v173, v172) + 42262) = v95;
  v194 = UserAddAtomEx(L"InterceptWindowData", 1LL, 2LL);
  SGATOMTABLEgatomInterceptWindowData<unsigned short>::operator=(v174, &v194);
  v175 = SGATOMTABLEgatomInterceptWindowData<unsigned short>::operator unsigned short();
  v176 = SGATOMTABLEgatomInterceptWindowData<unsigned short>::operator unsigned short();
  WindowActions::SetInterceptDataPropAtom((WindowActions *)v176, v177);
  LOWORD(v95) = *(_WORD *)(W32GetUserSessionState(v179, v178) + 41366);
  UserSessionState = W32GetUserSessionState(v181, v180);
  v183 = v207 == 0;
  *(_WORD *)(UserSessionState + 41322) = v95;
  return (v175 != 0) & (unsigned __int8)(v169 != 0
                                      && v160 != 0
                                      && (_WORD)v155 != 0
                                      && v150 != 0
                                      && v145 != 0
                                      && v140 != 0
                                      && v193 != 0
                                      && v204 != 0
                                      && v192 != 0
                                      && v203 != 0
                                      && v191 != 0
                                      && v202 != 0
                                      && v190 != 0
                                      && v201 != 0
                                      && v206 != 0
                                      && v209 != 0
                                      && v205 != 0
                                      && v189 != 0
                                      && MarginPropAtom
                                      && v188 != 0
                                      && v200 != 0
                                      && v187 != 0
                                      && v199 != 0
                                      && v186 != 0
                                      && v198 != 0
                                      && v185 != 0
                                      && v197 != 0
                                      && v213 != 0
                                      && v196 != 0
                                      && v212 != 0
                                      && v195 != 0
                                      && v211 != 0
                                      && v208 & !v183);
}
