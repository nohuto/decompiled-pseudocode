/*
 * XREFs of ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x14019A350
 * Callers:
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1401B59A4 (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     FreeQueue @ 0x1400B7FDC (FreeQueue.c)
 *     IsFreeMessageListSupported @ 0x1400B9424 (IsFreeMessageListSupported.c)
 *     FreeMessageList @ 0x1400B94F0 (FreeMessageList.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x140118E28 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x140185044 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?CLEANUP_CRIT_RESOURCE@@YAXAEAPEAU_FAST_ERESOURCE@@@Z @ 0x1401960FC (-CLEANUP_CRIT_RESOURCE@@YAXAEAPEAU_FAST_ERESOURCE@@@Z.c)
 *     IsFreeSMSSupported @ 0x140196970 (IsFreeSMSSupported.c)
 *     ??4?$SGRDPgpRemoteSessionOcclusionEvent@PEAU_KEVENT@@@@QEAAAEAPEAU_KEVENT@@AEBQEAU1@@Z @ 0x140199F1C (--4-$SGRDPgpRemoteSessionOcclusionEvent@PEAU_KEVENT@@@@QEAAAEAPEAU_KEVENT@@AEBQEAU1@@Z.c)
 *     CleanupKeyboardLayouts @ 0x1401B57F0 (CleanupKeyboardLayouts.c)
 *     CSTCleanupStack @ 0x1401C3EE8 (CSTCleanupStack.c)
 *     ??4?$SGRDPgptmrWD@PEAU_KTIMER@@@@QEAAAEAPEAU_KTIMER@@AEBQEAU1@@Z @ 0x1401C4624 (--4-$SGRDPgptmrWD@PEAU_KTIMER@@@@QEAAAEAPEAU_KTIMER@@AEBQEAU1@@Z.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x1401CAC9C (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     Win32JobObject::_anonymous_namespace_::DeleteW32Job @ 0x1401CEFC0 (Win32JobObject--_anonymous_namespace_--DeleteW32Job.c)
 *     FreeTimer @ 0x140249130 (FreeTimer.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall Win32kNtUserCleanupInternal(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx
  int (*v9)(void); // rax
  void (*v10)(void); // rax
  char *v11; // rcx
  int (*v12)(void); // rax
  void (__fastcall *v13)(char ***); // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rcx
  int (*v18)(void); // rax
  void (__fastcall *v19)(char ***); // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  char *v24; // rcx
  __int64 v25; // r8
  int (*v26)(void); // rax
  void (__fastcall *v27)(char ***); // rax
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rbx
  int v32; // r8d
  __int64 v33; // rdi
  int (*v34)(void); // rax
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  __int64 v38; // rax
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  int v47; // edx
  int v48; // ecx
  int v49; // r8d
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  int v54; // edx
  int v55; // ecx
  int v56; // r8d
  int v57; // edx
  int v58; // ecx
  int v59; // r8d
  __int64 v60; // rax
  int v61; // edx
  int v62; // ecx
  int v63; // r8d
  __int64 v64; // rax
  int v65; // edx
  int v66; // ecx
  int v67; // r8d
  __int64 v68; // rax
  int v69; // edx
  int v70; // ecx
  int v71; // r8d
  __int64 v72; // rax
  int v73; // edx
  int v74; // ecx
  int v75; // r8d
  __int64 v76; // rax
  int v77; // edx
  int v78; // ecx
  int v79; // r8d
  __int64 v80; // rbx
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  int v84; // edx
  int v85; // ecx
  int v86; // r8d
  __int64 v87; // rbx
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // r9
  int v91; // edx
  int v92; // ecx
  int v93; // r8d
  __int64 v94; // rbx
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // r9
  int v98; // edx
  int v99; // ecx
  int v100; // r8d
  __int64 v101; // rbx
  __int64 v102; // rdx
  __int64 v103; // r8
  __int64 v104; // r9
  int v105; // edx
  __int64 v106; // rcx
  int v107; // r8d
  __int64 v108; // rbx
  __int64 v109; // rdx
  __int64 v110; // r8
  __int64 v111; // r9
  int v112; // edx
  __int64 v113; // rcx
  int v114; // r8d
  __int64 UserGdiSessionState; // rbx
  __int64 v116; // rdx
  __int64 v117; // r8
  __int64 v118; // r9
  int v119; // edx
  int v120; // ecx
  int v121; // r8d
  __int64 v122; // rbx
  __int64 v123; // rdx
  __int64 v124; // r8
  __int64 v125; // r9
  int v126; // edx
  int v127; // ecx
  int v128; // r8d
  __int64 v129; // rbx
  __int64 v130; // rdx
  __int64 v131; // r8
  __int64 v132; // r9
  int v133; // edx
  int v134; // ecx
  int v135; // r8d
  __int64 v136; // rax
  int v137; // edx
  int v138; // ecx
  int v139; // r8d
  int v140; // edx
  int v141; // ecx
  int v142; // r8d
  __int64 v143; // rax
  int v144; // edx
  int v145; // ecx
  int v146; // r8d
  int v147; // edx
  int v148; // ecx
  int v149; // r8d
  __int64 v150; // rax
  int v151; // edx
  int v152; // ecx
  int v153; // r8d
  int v154; // edx
  int v155; // ecx
  int v156; // r8d
  __int64 v157; // rax
  int v158; // edx
  int v159; // ecx
  int v160; // r8d
  int v161; // edx
  int v162; // ecx
  int v163; // r8d
  __int64 v164; // rdx
  void *v165; // rcx
  __int64 v166; // r8
  char *v167; // rdi
  __int64 v168; // r9
  char *v169; // rbx
  char *v170; // rcx
  char *v171; // rcx
  __int64 v172; // rdx
  __int64 v173; // r8
  __int64 v174; // r9
  __int64 v175; // rbx
  __int64 v176; // rcx
  __int64 v177; // rcx
  _QWORD *v178; // rdi
  __int64 v179; // rax
  void (__fastcall *v180)(_QWORD *, _QWORD); // rax
  int v181; // edx
  __int64 v182; // rcx
  int v183; // r8d
  int (*v184)(void); // rax
  void (__fastcall *v185)(char ***); // rax
  char *v186; // rbx
  __int64 v187; // rax
  int v188; // edx
  __int64 v189; // rcx
  __int64 v190; // rbx
  int v191; // r8d
  int v192; // edx
  int v193; // r8d
  int v194; // edx
  int v195; // ecx
  int v196; // r8d
  char *v197; // rbx
  int v198; // edx
  int v199; // ecx
  int v200; // r8d
  __int64 v201; // rax
  int v202; // edx
  int v203; // ecx
  int v204; // r8d
  int v205; // edx
  int v206; // ecx
  int v207; // r8d
  char *v208; // rbx
  int v209; // edx
  int v210; // ecx
  int v211; // r8d
  __int64 v212; // rax
  int v213; // edx
  int v214; // ecx
  int v215; // r8d
  int v216; // edx
  int v217; // ecx
  int v218; // r8d
  __int64 v219; // rdx
  char *v220; // rcx
  __int64 v221; // r8
  __int64 v222; // r9
  int v223; // edx
  int v224; // ecx
  int v225; // r8d
  __int64 v226; // rax
  __int64 v227; // rdx
  __int64 v228; // r8
  __int64 v229; // r9
  int v230; // edx
  int v231; // ecx
  int v232; // r8d
  int v233; // edx
  int v234; // ecx
  int v235; // r8d
  __int64 v236; // rax
  int v237; // edx
  int v238; // ecx
  int v239; // r8d
  int v240; // edx
  int v241; // ecx
  int v242; // r8d
  __int64 v243; // rax
  __int64 v244; // rdx
  __int64 v245; // r8
  __int64 v246; // r9
  int v247; // edx
  int v248; // ecx
  int v249; // r8d
  int v250; // edx
  int v251; // ecx
  int v252; // r8d
  __int64 v253; // rax
  int v254; // edx
  int v255; // ecx
  int v256; // r8d
  __int64 v257; // rax
  int v258; // edx
  __int64 v259; // rcx
  int v260; // r8d
  __int64 v261; // rax
  int v262; // ecx
  int v263; // r8d
  int v264; // edx
  __int64 v265; // rcx
  int v266; // r8d
  int (*v267)(void); // rax
  void (*v268)(void); // rax
  __int64 v269; // rdx
  __int64 v270; // rbx
  __int64 v271; // r8
  __int64 v272; // r9
  char *v273; // rcx
  char **v274; // [rsp+40h] [rbp+10h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  GreDeleteFastMutex(*(char **)(UserSessionState + 18952), v4, v5, v6);
  *(_QWORD *)(UserSessionState + 18952) = 0LL;
  ZwPowerInformation(PowerInformationLevelMaximum|ProcessorInformation, 0LL, 0, 0LL, 0);
  v8 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v7) + 48);
  v9 = *(int (**)(void))(v8 + 48);
  if ( v9 )
  {
    if ( v9() >= 0 )
    {
      v8 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v8) + 48);
      v10 = *(void (**)(void))(v8 + 56);
      if ( v10 )
        v10();
    }
  }
  v11 = *(char **)(W32GetWin32kBaseApiSetTable(v8) + 48);
  v12 = (int (*)(void))*((_QWORD *)v11 + 8);
  if ( v12 && v12() >= 0 )
  {
    v274 = 0LL;
    v13 = *(void (__fastcall **)(char ***))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v11) + 48) + 72LL);
    if ( v13 )
      v13(&v274);
    v11 = *v274;
    if ( *v274 )
    {
      GreDeleteFastMutex(v11, v14, v15, v16);
      *v274 = 0LL;
    }
  }
  v17 = *(char **)(W32GetWin32kBaseApiSetTable(v11) + 48);
  v18 = (int (*)(void))*((_QWORD *)v17 + 10);
  if ( v18 && v18() >= 0 )
  {
    v274 = 0LL;
    v19 = *(void (__fastcall **)(char ***))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v17) + 48) + 88LL);
    if ( v19 )
      v19(&v274);
    v17 = *v274;
    if ( *v274 )
    {
      GreDeleteFastMutex(v17, v20, v21, v22);
      *v274 = 0LL;
    }
  }
  v24 = *(char **)(W32GetWin32kBaseApiSetTable(v17) + 48);
  v26 = (int (*)(void))*((_QWORD *)v24 + 12);
  if ( v26 && v26() >= 0 )
  {
    v274 = 0LL;
    v27 = *(void (__fastcall **)(char ***))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v24) + 48) + 104LL);
    if ( v27 )
      v27(&v274);
    v24 = *v274;
    if ( *v274 )
    {
      GreDeleteFastMutex(v24, v23, v25, v28);
      *v274 = 0LL;
    }
  }
  v31 = (_QWORD *)(W32GetUserSessionState((_DWORD)v24, v23, v25) + 57536);
  while ( (_QWORD *)*v31 != v31 )
  {
    v33 = *v31 - 72LL;
    v29 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v30) + 48);
    v34 = *(int (**)(void))(v29 + 112);
    if ( v34 && v34() >= 0 )
      FreeTimer(v33);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v30, v29, v32) + 68936) )
  {
    v38 = W32GetUserSessionState(v36, v35, v37);
    KeCancelTimer(*(PKTIMER *)(v38 + 68936));
    v42 = W32GetUserSessionState(v40, v39, v41);
    GreDeleteFastMutex(*(char **)(v42 + 68936), v43, v44, v45);
    v274 = 0LL;
    SGRDPgptmrWD<_KTIMER *>::operator=(v46, &v274);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v36, v35, v37) + 21888) )
  {
    Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline();
    v50 = W32GetUserSessionState(v48, v47, v49);
    GreDeleteFastMutex(*(char **)(v50 + 21888), v51, v52, v53);
  }
  CSTCleanupStack();
  if ( *(_QWORD *)(W32GetUserSessionState(v55, v54, v56) + 18840) )
  {
    v60 = W32GetUserSessionState(v58, v57, v59);
    ExDeleteResourceLite(*(PERESOURCE *)(v60 + 18840));
    v64 = W32GetUserSessionState(v62, v61, v63);
    ExFreePoolWithTag(*(PVOID *)(v64 + 18840), 0);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v58, v57, v59) + 68912) )
  {
    v68 = W32GetUserSessionState(v66, v65, v67);
    ObfDereferenceObject(*(PVOID *)(v68 + 68912));
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v66, v65, v67) + 68904) )
  {
    v72 = W32GetUserSessionState(v70, v69, v71);
    ObfDereferenceObject(*(PVOID *)(v72 + 68904));
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v70, v69, v71) + 68672) )
  {
    v76 = W32GetUserSessionState(v74, v73, v75);
    ObfDereferenceObject(*(PVOID *)(v76 + 68672));
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v74, v73, v75) + 62800) )
  {
    v80 = W32GetUserSessionState(v78, v77, v79);
    GreDeleteFastMutex(*(char **)(v80 + 62800), v81, v82, v83);
    *(_QWORD *)(v80 + 62800) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v78, v77, v79) + 68376) )
  {
    v87 = W32GetUserSessionState(v85, v84, v86);
    GreDeleteFastMutex(*(char **)(v87 + 68376), v88, v89, v90);
    *(_QWORD *)(v87 + 68376) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v85, v84, v86) + 68384) )
  {
    v94 = W32GetUserSessionState(v92, v91, v93);
    GreDeleteFastMutex(*(char **)(v94 + 68384), v95, v96, v97);
    *(_QWORD *)(v94 + 68384) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v92, v91, v93) + 68392) )
  {
    v101 = W32GetUserSessionState(v99, v98, v100);
    GreDeleteFastMutex(*(char **)(v101 + 68392), v102, v103, v104);
    *(_QWORD *)(v101 + 68392) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v99, v98, v100) + 18752) )
  {
    v108 = W32GetUserSessionState(v106, v105, v107);
    GreDeleteFastMutex(*(char **)(v108 + 18752), v109, v110, v111);
    *(_QWORD *)(v108 + 18752) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserGdiSessionState(v106) + 8) )
  {
    UserGdiSessionState = W32GetUserGdiSessionState(v113);
    GreDeleteFastMutex(*(char **)(UserGdiSessionState + 8), v116, v117, v118);
    *(_QWORD *)(UserGdiSessionState + 8) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v113, v112, v114) + 68864) )
  {
    v122 = W32GetUserSessionState(v120, v119, v121);
    GreDeleteFastMutex(*(char **)(v122 + 68864), v123, v124, v125);
    *(_QWORD *)(v122 + 68864) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v120, v119, v121) + 18824) )
  {
    v129 = W32GetUserSessionState(v127, v126, v128);
    GreDeleteFastMutex(*(char **)(v129 + 18824), v130, v131, v132);
    *(_QWORD *)(v129 + 18824) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v127, v126, v128) + 16816) )
  {
    v136 = W32GetUserSessionState(v134, v133, v135);
    ObfDereferenceObject(*(PVOID *)(v136 + 16816));
    *(_QWORD *)(W32GetUserSessionState(v138, v137, v139) + 16816) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v134, v133, v135) + 41416) )
  {
    v143 = W32GetUserSessionState(v141, v140, v142);
    RtlDestroyAtomTable(*(PRTL_ATOM_TABLE *)(v143 + 41416));
    *(_QWORD *)(W32GetUserSessionState(v145, v144, v146) + 41416) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v141, v140, v142) + 41424) )
  {
    v150 = W32GetUserSessionState(v148, v147, v149);
    RtlDestroyAtomTable(*(PRTL_ATOM_TABLE *)(v150 + 41424));
    *(_QWORD *)(W32GetUserSessionState(v152, v151, v153) + 41424) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v148, v147, v149) + 19472) )
  {
    v157 = W32GetUserSessionState(v155, v154, v156);
    ObfDereferenceObject(*(PVOID *)(v157 + 19472));
    *(_QWORD *)(W32GetUserSessionState(v159, v158, v160) + 19472) = 0LL;
  }
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    while ( 1 )
    {
      v165 = *(void **)(W32GetUserSessionState(v162, v161, v163) + 69088);
      if ( !v165 )
        break;
      Win32JobObject::_anonymous_namespace_::DeleteW32Job(v165);
    }
  }
  else if ( *(_QWORD *)(W32GetUserSessionState(v162, v161, v163) + 69088) )
  {
    v167 = *(char **)(W32GetUserSessionState((_DWORD)v165, v164, v166) + 69088);
    while ( v167 )
    {
      v169 = v167;
      v167 = *(char **)v167;
      v170 = (char *)*((_QWORD *)v169 + 8);
      if ( v170 )
      {
        GreDeleteFastMutex(v170, v164, v166, v168);
        *((_QWORD *)v169 + 8) = 0LL;
      }
      v171 = (char *)*((_QWORD *)v169 + 6);
      if ( v171 )
      {
        GreDeleteFastMutex(v171, v164, v166, v168);
        *((_QWORD *)v169 + 6) = 0LL;
      }
      RtlDestroyAtomTable(*((PRTL_ATOM_TABLE *)v169 + 3));
      GreDeleteFastMutex(v169, v172, v173, v174);
    }
  }
  v175 = W32GetUserSessionState((_DWORD)v165, v164, v166) + 69048;
  if ( (int)IsFreeSMSSupported(v176) >= 0 )
  {
    if ( *(_QWORD *)v175 )
    {
      while ( 1 )
      {
        v178 = *(_QWORD **)v175;
        if ( *(_QWORD *)v175 == v175 )
          break;
        if ( v178[1] != v175 || (v179 = *v178, *(_QWORD **)(*v178 + 8LL) != v178) )
          __fastfail(3u);
        *(_QWORD *)v175 = v179;
        *(_QWORD *)(v179 + 8) = v175;
        v180 = *(void (__fastcall **)(_QWORD *, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v177) + 48) + 168LL);
        if ( v180 )
          v180(v178, 0LL);
      }
    }
    *(_QWORD *)(v175 + 8) = v175;
    *(_QWORD *)v175 = v175;
  }
  v182 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v177) + 48);
  v184 = *(int (**)(void))(v182 + 176);
  if ( v184 && v184() >= 0 )
  {
    v274 = 0LL;
    v182 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v182) + 48);
    v185 = *(void (__fastcall **)(char ***))(v182 + 184);
    if ( v185 )
      v185(&v274);
    v186 = *v274;
    if ( *v274 )
    {
      v187 = W32GetUserSessionState(v182, v181, v183);
      NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
        (NSInstrumentation::CLeakTrackingAllocator *)(v187 + 72016),
        v186);
      *v274 = 0LL;
    }
  }
  v190 = W32GetUserSessionState(v182, v181, v183);
  if ( *(_QWORD *)(v190 + 19128) )
  {
    if ( (int)IsFreeMessageListSupported(v189) >= 0 )
      FreeMessageList(*(_QWORD *)(v190 + 19128) + 24LL);
    FreeQueue(*(void **)(v190 + 19128), v192, v193);
    *(_QWORD *)(v190 + 19128) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v189, v188, v191) + 16856) )
  {
    v197 = *(char **)(W32GetUserSessionState(v195, v194, v196) + 16856);
    v201 = W32GetUserSessionState(v199, v198, v200);
    NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
      (NSInstrumentation::CLeakTrackingAllocator *)(v201 + 72016),
      v197);
    *(_QWORD *)(W32GetUserSessionState(v203, v202, v204) + 16856) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v195, v194, v196) + 16864) )
  {
    v208 = *(char **)(W32GetUserSessionState(v206, v205, v207) + 16864);
    v212 = W32GetUserSessionState(v210, v209, v211);
    NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
      (NSInstrumentation::CLeakTrackingAllocator *)(v212 + 72016),
      v208);
    *(_QWORD *)(W32GetUserSessionState(v214, v213, v215) + 16864) = 0LL;
  }
  CleanupKeyboardLayouts();
  v220 = *(char **)(W32GetUserSessionState(v217, v216, v218) + 63280);
  if ( v220 )
    GreDeleteFastMutex(v220, v219, v221, v222);
  if ( *(_QWORD *)(W32GetUserSessionState((_DWORD)v220, v219, v221) + 63528) )
  {
    v226 = W32GetUserSessionState(v224, v223, v225);
    GreDeleteFastMutex(*(char **)(v226 + 63528), v227, v228, v229);
    *(_QWORD *)(W32GetUserSessionState(v231, v230, v232) + 63528) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v224, v223, v225) + 19840) )
  {
    v236 = W32GetUserSessionState(v234, v233, v235);
    ExFreePoolWithTag(*(PVOID *)(v236 + 19840), 0);
    *(_QWORD *)(W32GetUserSessionState(v238, v237, v239) + 19840) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v234, v233, v235) + 512) )
  {
    v243 = W32GetUserSessionState(v241, v240, v242);
    GreDeleteFastMutex(*(char **)(v243 + 512), v244, v245, v246);
    *(_QWORD *)(W32GetUserSessionState(v248, v247, v249) + 512) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v241, v240, v242) + 8) )
  {
    v253 = W32GetUserSessionState(v251, v250, v252);
    CLEANUP_CRIT_RESOURCE((struct _FAST_ERESOURCE **)(v253 + 8));
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v251, v250, v252) + 16) )
  {
    v257 = W32GetUserSessionState(v255, v254, v256);
    CLEANUP_CRIT_RESOURCE((struct _FAST_ERESOURCE **)(v257 + 16));
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v255, v254, v256) + 68432) )
  {
    v261 = W32GetUserSessionState(v259, v258, v260);
    ObfDereferenceObject(*(PVOID *)(v261 + 68432));
    v274 = 0LL;
    SGRDPgpRemoteSessionOcclusionEvent<_KEVENT *>::operator=(v262, (__int64 *)&v274, v263);
  }
  v265 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v259) + 48);
  v267 = *(int (**)(void))(v265 + 456);
  if ( v267 )
  {
    if ( v267() >= 0 )
    {
      v265 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v265) + 48);
      v268 = *(void (**)(void))(v265 + 464);
      if ( v268 )
        v268();
    }
  }
  v270 = W32GetUserSessionState(v265, v264, v266);
  v273 = *(char **)(v270 + 57008);
  if ( v273 )
    GreDeleteFastMutex(v273, v269, v271, v272);
  *(_QWORD *)(v270 + 57008) = 0LL;
}
