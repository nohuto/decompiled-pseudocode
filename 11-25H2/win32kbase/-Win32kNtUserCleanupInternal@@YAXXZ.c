/*
 * XREFs of ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x14016A0DC
 * Callers:
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x140169E70 (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x14006D974 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     FreeMessageList @ 0x140100A30 (FreeMessageList.c)
 *     IsFreeMessageListSupported @ 0x140109270 (IsFreeMessageListSupported.c)
 *     FreeQueue @ 0x14010EDC4 (FreeQueue.c)
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x14013908C (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 *     FreeTimer @ 0x140199750 (FreeTimer.c)
 *     ??4?$SGRDPgpRemoteSessionOcclusionEvent@PEAU_KEVENT@@@@QEAAAEAPEAU_KEVENT@@AEBQEAU1@@Z @ 0x1401A0E60 (--4-$SGRDPgpRemoteSessionOcclusionEvent@PEAU_KEVENT@@@@QEAAAEAPEAU_KEVENT@@AEBQEAU1@@Z.c)
 *     ??4?$SGRDPgptmrWD@PEAU_KTIMER@@@@QEAAAEAPEAU_KTIMER@@AEBQEAU1@@Z @ 0x1401A0ED8 (--4-$SGRDPgptmrWD@PEAU_KTIMER@@@@QEAAAEAPEAU_KTIMER@@AEBQEAU1@@Z.c)
 *     IsFreeSMSSupported @ 0x1401A1110 (IsFreeSMSSupported.c)
 *     Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline @ 0x1401A5360 (Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A53B4 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     Win32JobObject::_anonymous_namespace_::DeleteW32Job @ 0x1401ACEF8 (Win32JobObject--_anonymous_namespace_--DeleteW32Job.c)
 *     ?CLEANUP_CRIT_RESOURCE@@YAXAEAPEAU_FAST_ERESOURCE@@@Z @ 0x1401B30DC (-CLEANUP_CRIT_RESOURCE@@YAXAEAPEAU_FAST_ERESOURCE@@@Z.c)
 *     CleanupKeyboardLayouts @ 0x1402130B4 (CleanupKeyboardLayouts.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall Win32kNtUserCleanupInternal(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int (*v7)(void); // rax
  void (*v8)(void); // rax
  __int64 v9; // rdx
  char *v10; // rcx
  int (*v11)(void); // rax
  void (__fastcall *v12)(char ***); // rax
  __int64 v13; // rdx
  char *v14; // rcx
  int (*v15)(void); // rax
  void (__fastcall *v16)(char ***); // rax
  __int64 v17; // rdx
  char *v18; // rcx
  int (*v19)(void); // rax
  void (__fastcall *v20)(char ***); // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rbx
  __int64 v24; // rdi
  int (*v25)(void); // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  _QWORD *v40; // rbx
  char *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rbx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 UserGdiSessionState; // rbx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rbx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rbx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rdx
  void *v104; // rcx
  char *v105; // rdi
  char *v106; // rbx
  char *v107; // rcx
  char *v108; // rcx
  __int64 v109; // rbx
  __int64 v110; // rdx
  __int64 v111; // rcx
  _QWORD *v112; // rdi
  __int64 v113; // rax
  void (__fastcall *v114)(_QWORD *, _QWORD); // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  int (*v117)(void); // rax
  void (__fastcall *v118)(char ***); // rax
  char *v119; // rbx
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rbx
  __int64 v124; // rdx
  __int64 v125; // rdx
  __int64 v126; // rcx
  char *v127; // rbx
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // rdx
  __int64 v134; // rcx
  char *v135; // rbx
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // rax
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // rdx
  char *v144; // rcx
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // rax
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // rax
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // rax
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // rax
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // rax
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // rax
  __int64 v169; // rcx
  __int64 v170; // rdx
  __int64 v171; // rcx
  int (*v172)(void); // rax
  void (*v173)(void); // rax
  __int64 v174; // rbx
  void *v175; // rcx
  char **v176; // [rsp+50h] [rbp+20h] BYREF
  void *v177; // [rsp+58h] [rbp+28h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  GreDeleteFastMutex(*(char **)(UserSessionState + 18912));
  *(_QWORD *)(UserSessionState + 18912) = 0LL;
  ZwPowerInformation(PowerInformationLevelMaximum|ProcessorInformation, 0LL, 0, 0LL, 0);
  v6 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v4, v3) + 48);
  v7 = *(int (**)(void))(v6 + 48);
  if ( v7 )
  {
    if ( v7() >= 0 )
    {
      v6 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 48);
      v8 = *(void (**)(void))(v6 + 56);
      if ( v8 )
        v8();
    }
  }
  v10 = *(char **)(W32GetWin32kBaseApiSetTable(v6, v5) + 48);
  v11 = (int (*)(void))*((_QWORD *)v10 + 8);
  if ( v11 && v11() >= 0 )
  {
    v176 = 0LL;
    v12 = *(void (__fastcall **)(char ***))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v10, v9) + 48) + 72LL);
    if ( v12 )
      v12(&v176);
    v10 = *v176;
    if ( *v176 )
    {
      GreDeleteFastMutex(v10);
      *v176 = 0LL;
    }
  }
  v14 = *(char **)(W32GetWin32kBaseApiSetTable(v10, v9) + 48);
  v15 = (int (*)(void))*((_QWORD *)v14 + 10);
  if ( v15 && v15() >= 0 )
  {
    v176 = 0LL;
    v16 = *(void (__fastcall **)(char ***))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v14, v13) + 48) + 88LL);
    if ( v16 )
      v16(&v176);
    v14 = *v176;
    if ( *v176 )
    {
      GreDeleteFastMutex(v14);
      *v176 = 0LL;
    }
  }
  v18 = *(char **)(W32GetWin32kBaseApiSetTable(v14, v13) + 48);
  v19 = (int (*)(void))*((_QWORD *)v18 + 12);
  if ( v19 && v19() >= 0 )
  {
    v176 = 0LL;
    v20 = *(void (__fastcall **)(char ***))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v18, v17) + 48) + 104LL);
    if ( v20 )
      v20(&v176);
    v18 = *v176;
    if ( *v176 )
    {
      GreDeleteFastMutex(v18);
      *v176 = 0LL;
    }
  }
  v23 = (_QWORD *)(W32GetUserSessionState(v18, v17) + 57544);
  while ( (_QWORD *)*v23 != v23 )
  {
    v24 = *v23 - 72LL;
    v21 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v22, v21) + 48);
    v25 = *(int (**)(void))(v21 + 112);
    if ( v25 && v25() >= 0 )
      FreeTimer(v24);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v22, v21) + 68944) )
  {
    v28 = W32GetUserSessionState(v27, v26);
    KeCancelTimer(*(PKTIMER *)(v28 + 68944));
    v31 = W32GetUserSessionState(v30, v29);
    GreDeleteFastMutex(*(char **)(v31 + 68944));
    v176 = 0LL;
    SGRDPgptmrWD<_KTIMER *>::operator=(v32, &v176);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v27, v26) + 21856) )
  {
    Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline();
    v37 = W32GetUserSessionState(v36, v35);
    GreDeleteFastMutex(*(char **)(v37 + 21856));
  }
  LODWORD(v176) = 0;
  v177 = 0LL;
  if ( *(_QWORD *)W32GetUserSessionState(v34, v33) )
  {
    while ( 1 )
    {
      if ( !(unsigned int)CSTPop((unsigned int *)&v176, &v177) )
        goto LABEL_43;
      if ( (_DWORD)v176 == 2 || (_DWORD)v176 == 4 )
        break;
      if ( (_DWORD)v176 == 8 )
      {
        v40 = v177;
        if ( *(_QWORD *)v177 )
        {
          GreDeleteFastMutex(*(char **)v177);
          *v40 = 0LL;
        }
LABEL_40:
        v41 = (char *)v40[1];
        if ( v41 )
        {
          GreDeleteFastMutex(v41);
          v40[1] = 0LL;
        }
      }
    }
    v40 = v177;
    goto LABEL_40;
  }
LABEL_43:
  if ( *(_QWORD *)(W32GetUserSessionState(v39, v38) + 18792) )
  {
    v44 = W32GetUserSessionState(v43, v42);
    ExDeleteResourceLite(*(PERESOURCE *)(v44 + 18792));
    v47 = W32GetUserSessionState(v46, v45);
    ExFreePoolWithTag(*(PVOID *)(v47 + 18792), 0);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v43, v42) + 68920) )
  {
    v50 = W32GetUserSessionState(v49, v48);
    ObfDereferenceObject(*(PVOID *)(v50 + 68920));
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v49, v48) + 68912) )
  {
    v53 = W32GetUserSessionState(v52, v51);
    ObfDereferenceObject(*(PVOID *)(v53 + 68912));
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v52, v51) + 68680) )
  {
    v56 = W32GetUserSessionState(v55, v54);
    ObfDereferenceObject(*(PVOID *)(v56 + 68680));
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v55, v54) + 62808) )
  {
    v59 = W32GetUserSessionState(v58, v57);
    GreDeleteFastMutex(*(char **)(v59 + 62808));
    *(_QWORD *)(v59 + 62808) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v58, v57) + 68384) )
  {
    v62 = W32GetUserSessionState(v61, v60);
    GreDeleteFastMutex(*(char **)(v62 + 68384));
    *(_QWORD *)(v62 + 68384) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v61, v60) + 68392) )
  {
    v65 = W32GetUserSessionState(v64, v63);
    GreDeleteFastMutex(*(char **)(v65 + 68392));
    *(_QWORD *)(v65 + 68392) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v64, v63) + 68400) )
  {
    v68 = W32GetUserSessionState(v67, v66);
    GreDeleteFastMutex(*(char **)(v68 + 68400));
    *(_QWORD *)(v68 + 68400) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v67, v66) + 18704) )
  {
    v71 = W32GetUserSessionState(v70, v69);
    GreDeleteFastMutex(*(char **)(v71 + 18704));
    *(_QWORD *)(v71 + 18704) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserGdiSessionState(v70) + 8) )
  {
    UserGdiSessionState = W32GetUserGdiSessionState(v73);
    GreDeleteFastMutex(*(char **)(UserGdiSessionState + 8));
    *(_QWORD *)(UserGdiSessionState + 8) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v73, v72) + 68872) )
  {
    v77 = W32GetUserSessionState(v76, v75);
    GreDeleteFastMutex(*(char **)(v77 + 68872));
    *(_QWORD *)(v77 + 68872) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v76, v75) + 18776) )
  {
    v80 = W32GetUserSessionState(v79, v78);
    GreDeleteFastMutex(*(char **)(v80 + 18776));
    *(_QWORD *)(v80 + 18776) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v79, v78) + 16824) )
  {
    v83 = W32GetUserSessionState(v82, v81);
    ObfDereferenceObject(*(PVOID *)(v83 + 16824));
    *(_QWORD *)(W32GetUserSessionState(v85, v84) + 16824) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v82, v81) + 41376) )
  {
    v88 = W32GetUserSessionState(v87, v86);
    RtlDestroyAtomTable(*(PRTL_ATOM_TABLE *)(v88 + 41376));
    *(_QWORD *)(W32GetUserSessionState(v90, v89) + 41376) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v87, v86) + 41384) )
  {
    v93 = W32GetUserSessionState(v92, v91);
    RtlDestroyAtomTable(*(PRTL_ATOM_TABLE *)(v93 + 41384));
    *(_QWORD *)(W32GetUserSessionState(v95, v94) + 41384) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v92, v91) + 19440) )
  {
    v98 = W32GetUserSessionState(v97, v96);
    ObfDereferenceObject(*(PVOID *)(v98 + 19440));
    *(_QWORD *)(W32GetUserSessionState(v100, v99) + 19440) = 0LL;
  }
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    while ( 1 )
    {
      v104 = *(void **)(W32GetUserSessionState(v102, v101) + 69096);
      if ( !v104 )
        break;
      Win32JobObject::_anonymous_namespace_::DeleteW32Job(v104);
    }
  }
  else if ( *(_QWORD *)(W32GetUserSessionState(v102, v101) + 69096) )
  {
    v105 = *(char **)(W32GetUserSessionState(v104, v103) + 69096);
    while ( v105 )
    {
      v106 = v105;
      v105 = *(char **)v105;
      v107 = (char *)*((_QWORD *)v106 + 7);
      if ( v107 )
      {
        GreDeleteFastMutex(v107);
        *((_QWORD *)v106 + 7) = 0LL;
      }
      v108 = (char *)*((_QWORD *)v106 + 5);
      if ( v108 )
      {
        GreDeleteFastMutex(v108);
        *((_QWORD *)v106 + 5) = 0LL;
      }
      RtlDestroyAtomTable(*((PRTL_ATOM_TABLE *)v106 + 2));
      GreDeleteFastMutex(v106);
    }
  }
  v109 = W32GetUserSessionState(v104, v103) + 69056;
  if ( (int)IsFreeSMSSupported() >= 0 )
  {
    if ( *(_QWORD *)v109 )
    {
      while ( 1 )
      {
        v112 = *(_QWORD **)v109;
        if ( *(_QWORD *)v109 == v109 )
          break;
        if ( v112[1] != v109 || (v113 = *v112, *(_QWORD **)(*v112 + 8LL) != v112) )
          __fastfail(3u);
        *(_QWORD *)v109 = v113;
        *(_QWORD *)(v113 + 8) = v109;
        v110 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v111, v110) + 48);
        v114 = *(void (__fastcall **)(_QWORD *, _QWORD))(v110 + 168);
        if ( v114 )
          v114(v112, 0LL);
      }
    }
    *(_QWORD *)(v109 + 8) = v109;
    *(_QWORD *)v109 = v109;
  }
  v116 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v111, v110) + 48);
  v117 = *(int (**)(void))(v116 + 176);
  if ( v117 && v117() >= 0 )
  {
    v176 = 0LL;
    v116 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v116, v115) + 48);
    v118 = *(void (__fastcall **)(char ***))(v116 + 184);
    if ( v118 )
      v118(&v176);
    v119 = *v176;
    if ( *v176 )
    {
      v120 = W32GetUserSessionState(v116, v115);
      NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
        (NSInstrumentation::CLeakTrackingAllocator *)(v120 + 72032),
        v119);
      *v176 = 0LL;
    }
  }
  v123 = W32GetUserSessionState(v116, v115);
  if ( *(_QWORD *)(v123 + 19088) )
  {
    if ( (int)IsFreeMessageListSupported(v122, v121) >= 0 )
      FreeMessageList(*(_QWORD *)(v123 + 19088) + 24LL, v124);
    FreeQueue(*(char **)(v123 + 19088), v124);
    *(_QWORD *)(v123 + 19088) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v122, v121) + 16864) )
  {
    v127 = *(char **)(W32GetUserSessionState(v126, v125) + 16864);
    v130 = W32GetUserSessionState(v129, v128);
    NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
      (NSInstrumentation::CLeakTrackingAllocator *)(v130 + 72032),
      v127);
    *(_QWORD *)(W32GetUserSessionState(v132, v131) + 16864) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v126, v125) + 16872) )
  {
    v135 = *(char **)(W32GetUserSessionState(v134, v133) + 16872);
    v138 = W32GetUserSessionState(v137, v136);
    NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
      (NSInstrumentation::CLeakTrackingAllocator *)(v138 + 72032),
      v135);
    *(_QWORD *)(W32GetUserSessionState(v140, v139) + 16872) = 0LL;
  }
  CleanupKeyboardLayouts();
  v144 = *(char **)(W32GetUserSessionState(v142, v141) + 63296);
  if ( v144 )
    GreDeleteFastMutex(v144);
  if ( *(_QWORD *)(W32GetUserSessionState(v144, v143) + 63536) )
  {
    v147 = W32GetUserSessionState(v146, v145);
    GreDeleteFastMutex(*(char **)(v147 + 63536));
    *(_QWORD *)(W32GetUserSessionState(v149, v148) + 63536) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v146, v145) + 19808) )
  {
    v152 = W32GetUserSessionState(v151, v150);
    ExFreePoolWithTag(*(PVOID *)(v152 + 19808), 0);
    *(_QWORD *)(W32GetUserSessionState(v154, v153) + 19808) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v151, v150) + 512) )
  {
    v157 = W32GetUserSessionState(v156, v155);
    GreDeleteFastMutex(*(char **)(v157 + 512));
    *(_QWORD *)(W32GetUserSessionState(v159, v158) + 512) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v156, v155) + 8) )
  {
    v162 = W32GetUserSessionState(v161, v160);
    CLEANUP_CRIT_RESOURCE((struct _FAST_ERESOURCE **)(v162 + 8));
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v161, v160) + 16) )
  {
    v165 = W32GetUserSessionState(v164, v163);
    CLEANUP_CRIT_RESOURCE((struct _FAST_ERESOURCE **)(v165 + 16));
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v164, v163) + 68440) )
  {
    v168 = W32GetUserSessionState(v167, v166);
    ObfDereferenceObject(*(PVOID *)(v168 + 68440));
    v176 = 0LL;
    SGRDPgpRemoteSessionOcclusionEvent<_KEVENT *>::operator=(v169, &v176);
  }
  v171 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v167, v166) + 48);
  v172 = *(int (**)(void))(v171 + 456);
  if ( v172 )
  {
    if ( v172() >= 0 )
    {
      v171 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v171, v170) + 48);
      v173 = *(void (**)(void))(v171 + 464);
      if ( v173 )
        v173();
    }
  }
  v174 = W32GetUserSessionState(v171, v170);
  v175 = *(void **)(v174 + 57016);
  if ( v175 )
    ExFreePoolWithTag(v175, 0x44535042u);
  *(_QWORD *)(v174 + 57016) = 0LL;
}
