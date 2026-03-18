/*
 * XREFs of Win32UserInitialize @ 0x1402F23AC
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ @ 0x14007D9B0 (-LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     FastGetProfileDwordEx @ 0x1400E1800 (FastGetProfileDwordEx.c)
 *     ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1400E31A8 (-IsDesktopHeapLoggingOn@@YAHXZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserAddAtomEx @ 0x140120D00 (UserAddAtomEx.c)
 *     IsCurrentSessionHostServiceSession @ 0x140142338 (IsCurrentSessionHostServiceSession.c)
 *     IsIMMEnabledSystem @ 0x140165EB0 (IsIMMEnabledSystem.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     SharedAlloc @ 0x14018F340 (SharedAlloc.c)
 *     ?InitAtoms@GroupedProcessForegroundBoost@@YA_NXZ @ 0x1401C12F0 (-InitAtoms@GroupedProcessForegroundBoost@@YA_NXZ.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x1401CAC9C (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Initialize@UIPrivilegeIsolation@@YAXXZ @ 0x1401CCA0C (-Initialize@UIPrivilegeIsolation@@YAXXZ.c)
 *     ?TraceLegacyState@UIPrivilegeIsolation@@YAXXZ @ 0x1401CCA84 (-TraceLegacyState@UIPrivilegeIsolation@@YAXXZ.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     InitClipFormatExceptionList @ 0x140249168 (InitClipFormatExceptionList.c)
 *     InitClipboardILDef @ 0x14024919C (InitClipboardILDef.c)
 *     IsInitClipFormatExceptionListSupported @ 0x140249248 (IsInitClipFormatExceptionListSupported.c)
 *     IsInitClipboardILDefSupported @ 0x140249280 (IsInitClipboardILDefSupported.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     InitKernelHandleTable @ 0x1402F02B4 (InitKernelHandleTable.c)
 *     InitCreateUserSubsystem @ 0x1402F3C80 (InitCreateUserSubsystem.c)
 *     InitSecurity @ 0x1402F408C (InitSecurity.c)
 *     InitCreateSharedSection @ 0x1402F4E7C (InitCreateSharedSection.c)
 *     InitQEntryLookaside @ 0x1402F5378 (InitQEntryLookaside.c)
 *     HMInitHandleTable @ 0x1402F54F4 (HMInitHandleTable.c)
 *     UserRtlCreateAtomTable @ 0x1402F55E0 (UserRtlCreateAtomTable.c)
 */

__int64 __fastcall Win32UserInitialize(unsigned int a1, __int64 a2, int a3)
{
  int v4; // edx
  char v5; // bl
  bool v6; // di
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rcx
  int (*v11)(void); // rax
  __int64 v12; // rcx
  __int64 (*v13)(void); // rax
  int v14; // esi
  __int64 result; // rax
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(_QWORD); // rax
  int v21; // edx
  int v22; // ecx
  int v23; // edi
  int v24; // r8d
  _QWORD *v25; // rbx
  __int64 v26; // rax
  int v27; // edx
  int v28; // r8d
  __int64 v29; // rdx
  GroupedProcessForegroundBoost *v30; // rcx
  __int64 v31; // r8
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  __int64 v35; // r14
  _OWORD *v36; // rdx
  _OWORD *v37; // rcx
  __int64 v38; // rax
  __int128 v39; // xmm1
  __int64 CurrentProcess; // rbx
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  int inited; // edi
  __int64 v45; // rcx
  int v46; // edx
  __int64 v47; // rcx
  int v48; // r8d
  int (*v49)(void); // rax
  __int64 (*v50)(void); // rax
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rcx
  int v54; // ebx
  int v55; // edx
  int v56; // ecx
  int v57; // r8d
  __int64 v58; // rax
  __int64 v59; // rcx
  __int16 v60; // bx
  int v61; // edx
  int v62; // ecx
  int v63; // r8d
  int v64; // edx
  int v65; // ecx
  int v66; // r8d
  __int16 v67; // bx
  int v68; // edx
  int v69; // ecx
  int v70; // r8d
  int v71; // edx
  int v72; // ecx
  int v73; // r8d
  __int64 v74; // rcx
  int (*v75)(void); // rax
  void (*v76)(void); // rax
  int (*v77)(void); // rax
  __int64 v78; // rcx
  int (*v79)(void); // rax
  PVOID v80; // rbx
  int v81; // edx
  int v82; // ecx
  int v83; // r8d
  __int64 v84; // rbx
  unsigned int i; // r14d
  unsigned int v86; // r15d
  __int64 v87; // r12
  __int64 v88; // rcx
  __int64 v89; // rbx
  int v90; // edx
  int v91; // ecx
  int v92; // r8d
  int v93; // edx
  int v94; // ecx
  int v95; // r8d
  _QWORD *v96; // rcx
  int v97; // edx
  int v98; // r8d
  PVOID v99; // rbx
  int v100; // edx
  int v101; // ecx
  int v102; // r8d
  _QWORD *v103; // rcx
  int v104; // edx
  int v105; // r8d
  int v106; // edx
  _QWORD *v107; // rcx
  int v108; // r8d
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // r8
  __int64 v112; // r9
  int v113; // edx
  int v114; // ecx
  int v115; // r8d
  int v116; // edx
  int v117; // ecx
  int v118; // r8d
  int v119; // edx
  volatile signed __int32 *v120; // rcx
  int v121; // r8d
  int v122; // edx
  int v123; // ecx
  int v124; // r8d
  int v125; // edx
  int v126; // r8d
  int v127; // edx
  volatile signed __int32 *v128; // rcx
  int v129; // r8d
  int v130; // ebx
  int v131; // edx
  int v132; // ecx
  int v133; // r8d
  __int64 v134; // rbx
  int v135; // edx
  int v136; // ecx
  int v137; // r8d
  int v138; // edx
  int v139; // ecx
  int v140; // r8d
  __int64 v141; // rbx
  int v142; // edx
  int v143; // ecx
  int v144; // r8d
  __int64 *v145; // rcx
  __int64 v146; // rcx
  int (*v147)(void); // rax
  void (*v148)(void); // rax
  __int64 v149; // rcx
  int (*v150)(void); // rax
  void (*v151)(void); // rax
  __int64 v152; // rcx
  int (*v153)(void); // rax
  void (*v154)(void); // rax
  int (*v155)(void); // rax
  unsigned int (*v156)(void); // rax
  int (*v157)(void); // rax
  unsigned int (*v158)(void); // rax
  __int64 v159; // rax
  __int64 v160; // rbx
  int v161; // edx
  int v162; // ecx
  int v163; // r8d
  __int64 v164; // rcx
  int v165; // edx
  int v166; // r8d
  __int64 *v167; // rcx
  __int64 v168; // rdx
  int v169; // r8d
  int v170; // ebx
  int v171; // edx
  int v172; // ecx
  int v173; // r8d
  __int64 v174; // rax
  int v175; // edx
  int v176; // ecx
  int v177; // r8d
  int v178; // edx
  int v179; // ecx
  int v180; // r8d
  __int64 v181; // rax
  int v182; // edx
  int v183; // ecx
  int v184; // r8d
  int v185; // ebx
  __int64 v186; // rax
  int v187; // edx
  int v188; // ecx
  int v189; // r8d
  __int64 v190; // rax
  int v191; // edx
  int v192; // ecx
  int v193; // r8d
  __int64 v194; // rax
  int v195; // edx
  int v196; // ecx
  int v197; // r8d
  __int64 v198; // rax
  int v199; // edx
  int v200; // ecx
  int v201; // r8d
  __int64 v202; // rcx
  int v203; // edx
  int v204; // ecx
  int v205; // r8d
  __int64 v206; // rax
  __int64 v207; // rdx
  __int64 v208; // rcx
  _OWORD *v209; // rax
  __int128 v210; // xmm1
  UIPrivilegeIsolation *v211; // rcx
  int v212; // edx
  __int64 v213; // rcx
  int v214; // r8d
  __int64 v215; // rcx
  bool v216; // zf
  __int64 v217; // rcx
  int v218; // edx
  __int64 v219; // rcx
  int v220; // r8d
  int (*v221)(void); // rax
  void (*v222)(void); // rax
  __int64 v223; // rdi
  __int64 v224; // rax
  __int64 v225; // rbx
  __int64 v226; // rcx
  int (*v227)(void); // rax
  __int64 (*v228)(void); // rax
  __int64 v229; // r9
  int (*v230)(void); // rax
  __int64 v231; // rbx
  __int64 v232; // rcx
  unsigned int (__fastcall *v233)(__int64, __int64); // rax
  __int64 v234; // rax
  __int64 v235; // rdx
  __int64 v236; // r8
  __int64 v237; // r9
  int v238; // edx
  int v239; // ecx
  int v240; // r8d
  __int128 v241; // [rsp+40h] [rbp-10h]
  __int128 v242; // [rsp+40h] [rbp-10h]
  __int64 v244; // [rsp+98h] [rbp+48h] BYREF

  LODWORD(v244) = 0;
  v4 = (int)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v5 = 0;
  }
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, (_DWORD)WPP_GLOBAL_Control, a3);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      14,
      26,
      (__int64)&WPP_22204904a72d327c556410354d40f3d0_Traceguids);
  }
  *(_QWORD *)(W32GetUserSessionState(a1, v4, a3) + 62944) = 1LL;
  v11 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v10) + 48) + 2864LL);
  if ( v11 && v11() >= 0 )
  {
    v13 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v12) + 48) + 2872LL);
    if ( v13 )
    {
      v14 = v13();
      if ( v14 >= 0 )
        goto LABEL_12;
    }
    else
    {
      return (unsigned int)-1073741637;
    }
    return (unsigned int)v14;
  }
LABEL_12:
  result = InitCreateSharedSection();
  if ( (int)result >= 0 )
  {
    result = InitKernelHandleTable(v17, v16, v18);
    if ( (int)result >= 0 )
    {
      v20 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v19) + 48) + 192LL);
      if ( !v20 )
        return (unsigned int)-1073741637;
      v23 = v20(a1);
      if ( v23 < 0 )
        return (unsigned int)v23;
      v25 = (_QWORD *)W32GetUserSessionState(v22, v21, v24);
      v26 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
              v25,
              1LL,
              0,
              (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      v25[3] = v26;
      if ( v26 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v26) )
      {
        DestroySharedUserCritDeferredUnlockList((__int64)(v25 + 2465), v27, v28);
        DestroyDeferredUnlockObjectAssignmentList(v25 + 2472);
        DestroyDeferredUnlockObjectAssignmentList(v25 + 2470);
      }
      if ( !(unsigned int)InitSecurity() )
        goto LABEL_121;
      *(_DWORD *)(ExWindowStationObjectType + 108LL) = 256;
      *(_DWORD *)(ExWindowStationObjectType + 104LL) = 0;
      *(_DWORD *)(ExWindowStationObjectType + 92LL) = 983935;
      *(struct _GENERIC_MAPPING *)(ExWindowStationObjectType + 76LL) = WinStaMapping;
      *((_DWORD *)ExDesktopObjectType + 27) = 392;
      *((_DWORD *)ExDesktopObjectType + 26) = 0;
      *((_DWORD *)ExDesktopObjectType + 23) = 983551;
      *(_OWORD *)((char *)ExDesktopObjectType + 76) = DesktopMapping;
      *(_DWORD *)(W32GetUserSessionState((_DWORD)ExDesktopObjectType, v29, v31) + 62776) = 7;
      v35 = W32GetUserSessionState(v33, v32, v34);
      v36 = &unk_140277C10;
      *(_DWORD *)(v35 + 66792) = 589824;
      *(_QWORD *)(v35 + 66796) = 0x1280033E9ELL;
      v37 = (_OWORD *)(v35 + 66808);
      v38 = 3LL;
      do
      {
        *v37 = *v36;
        v37[1] = v36[1];
        v37[2] = v36[2];
        v37[3] = v36[3];
        v37[4] = v36[4];
        v37[5] = v36[5];
        v37[6] = v36[6];
        v37 += 8;
        v39 = v36[7];
        v36 += 8;
        *(v37 - 1) = v39;
        --v38;
      }
      while ( v38 );
      *(_QWORD *)&v241 = 0x2000000LL;
      *((_QWORD *)&v241 + 1) = v35 + 67840;
      *v37 = *v36;
      v37[1] = v36[1];
      v37[2] = v36[2];
      v37[3] = v36[3];
      v37[4] = v36[4];
      *(_OWORD *)(v35 + 68352) = v241;
      *(_OWORD *)(ExCompositionObjectType + 76LL) = RIMRights;
      *(_DWORD *)(ExCompositionObjectType + 108LL) = 24;
      *(_DWORD *)(ExCompositionObjectType + 104LL) = 0;
      *(_DWORD *)(ExCompositionObjectType + 92LL) = 983043;
      *(_BYTE *)(ExRawInputManagerObjectType + 66LL) |= 0x10u;
      *(_DWORD *)(ExRawInputManagerObjectType + 108LL) = 1120;
      *(_DWORD *)(ExRawInputManagerObjectType + 104LL) = 0;
      *(_DWORD *)(ExRawInputManagerObjectType + 92LL) = 983043;
      *(_OWORD *)(ExRawInputManagerObjectType + 76LL) = RIMRights;
      CurrentProcess = PsGetCurrentProcess(ExRawInputManagerObjectType);
      *(_QWORD *)(W32GetUserSessionState(v42, v41, v43) + 68368) = CurrentProcess;
      inited = InitQEntryLookaside();
      v47 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v45) + 48);
      v49 = *(int (**)(void))(v47 + 2880);
      if ( v49 && v49() >= 0 )
      {
        v47 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v47) + 48);
        v50 = *(__int64 (**)(void))(v47 + 2888);
        if ( v50 )
          v51 = v50();
        else
          v51 = -1073741637;
        inited |= v51;
      }
      v52 = W32GetUserSessionState(v47, v46, v48);
      v54 = inited | UserRtlCreateAtomTable(v53, v52 + 41416);
      v58 = W32GetUserSessionState(v56, v55, v57);
      v23 = v54 | UserRtlCreateAtomTable(v59, v58 + 41424);
      if ( v23 < 0 )
        goto LABEL_121;
      v60 = UserAddAtomEx((__int64)L"USER32", 1, 2u);
      *(_WORD *)(W32GetUserSessionState(v62, v61, v63) + 41396) = v60;
      v67 = *(_WORD *)(W32GetUserSessionState(v65, v64, v66) + 41396);
      *(_WORD *)(W32GetUserSessionState(v69, v68, v70) + 41360) = v67;
      if ( !*(_WORD *)(W32GetUserSessionState(v72, v71, v73) + 41360) )
        goto LABEL_121;
      *(_QWORD *)&v242 = 0x2000000LL;
      *((_QWORD *)&v242 + 1) = v35 + 67304;
      *(_OWORD *)(v35 + 67816) = v242;
      if ( !(unsigned int)InitCreateUserSubsystem() )
        goto LABEL_121;
      v74 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v30) + 48);
      v75 = *(int (**)(void))(v74 + 2896);
      if ( v75 )
      {
        if ( v75() >= 0 )
        {
          v74 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v74) + 48);
          v76 = *(void (**)(void))(v74 + 2904);
          if ( v76 )
            v76();
        }
      }
      v77 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v74) + 48) + 16LL);
      if ( v77 )
      {
        if ( v77() >= 0 )
        {
          v30 = *(GroupedProcessForegroundBoost **)(W32GetWin32kBaseApiSetTable(v78) + 48);
          v79 = (int (*)(void))*((_QWORD *)v30 + 3);
          if ( !v79 || v79() < 0 )
            goto LABEL_121;
        }
      }
      v80 = SharedAlloc(0x1DE8uLL, v29, v31);
      *(_QWORD *)(W32GetUserSessionState(v82, v81, v83) + 19904) = v80;
      if ( !v80 )
        goto LABEL_121;
      v84 = 2524LL;
      for ( i = 2; i < 0x12; ++i )
      {
        v86 = 0;
        v87 = v84;
        do
        {
          ++v86;
          v30 = *(GroupedProcessForegroundBoost **)(W32GetUserSessionState((_DWORD)v30, v29, v31) + 19904);
          *(_DWORD *)((char *)v30 + v87) = -1;
          v87 += 4LL;
        }
        while ( v86 < 0x1E );
        v84 += 120LL;
      }
      v88 = *(_QWORD *)(W32GetUserSessionState((_DWORD)v30, v29, v31) + 19904);
      *(_DWORD *)(v88 + 5128) = 8;
      *(_DWORD *)(v88 + 5132) = 16;
      v89 = Win32AllocPoolZInitImpl(256LL, 0xA8uLL, 0x70646B55u);
      *(_QWORD *)(W32GetUserSessionState(v91, v90, v92) + 56968) = v89;
      if ( !*(_QWORD *)(W32GetUserSessionState(v94, v93, v95) + 56968) )
        goto LABEL_121;
      v96 = (_QWORD *)(*(_QWORD *)(W32GetUserSessionState((_DWORD)v30, v29, v31) + 56968) + 24LL);
      v96[1] = v96;
      *v96 = v96;
      v99 = SharedAlloc(0x28uLL, v97, v98);
      v103 = *(_QWORD **)(W32GetUserSessionState(v101, v100, v102) + 56968);
      *v103 = v99;
      v107 = *(_QWORD **)(W32GetUserSessionState((_DWORD)v103, v104, v105) + 56968);
      if ( !*v107 )
      {
        v109 = W32GetUserSessionState((_DWORD)v107, v106, v108);
        GreDeleteFastMutex(*(char **)(v109 + 56968), v110, v111, v112);
        *(_QWORD *)(W32GetUserSessionState(v114, v113, v115) + 56968) = 0LL;
        goto LABEL_121;
      }
      if ( (unsigned int)IsDesktopHeapLoggingOn((int)v107, v106, v108) )
      {
        v120 = *(volatile signed __int32 **)(W32GetUserSessionState(v117, v116, v118) + 19904);
        _InterlockedOr(v120, 0x100u);
      }
      else
      {
        v120 = *(volatile signed __int32 **)(W32GetUserSessionState(v117, v116, v118) + 19904);
        _InterlockedAnd(v120, 0xFFFFFEFF);
      }
      if ( (_BYTE)NlsMbCodePageTag )
        _InterlockedOr(*(volatile signed __int32 **)(W32GetUserSessionState((_DWORD)v120, v119, v121) + 19904), 2u);
      else
        _InterlockedAnd(
          *(volatile signed __int32 **)(W32GetUserSessionState((_DWORD)v120, v119, v121) + 19904),
          0xFFFFFFFD);
      if ( (unsigned int)IsIMMEnabledSystem() )
        _InterlockedOr(*(volatile signed __int32 **)(W32GetUserSessionState(v123, v122, v124) + 19904), 4u);
      else
        _InterlockedAnd(*(volatile signed __int32 **)(W32GetUserSessionState(v123, v122, v124) + 19904), 0xFFFFFFFB);
      if ( NlsAnsiCodePage == 1255 || NlsAnsiCodePage == 1256 )
      {
        v128 = *(volatile signed __int32 **)(W32GetUserSessionState(NlsAnsiCodePage, v125, v126) + 19904);
        _InterlockedOr(v128, 8u);
      }
      else
      {
        v128 = *(volatile signed __int32 **)(W32GetUserSessionState(NlsAnsiCodePage, v125, v126) + 19904);
        _InterlockedAnd(v128, 0xFFFFFFF7);
      }
      v130 = *(_DWORD *)(W32GetUserSessionState((_DWORD)v128, v127, v129) + 62920) << 10;
      *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v132, v131, v133) + 19904) + 924LL) = v130;
      v134 = Win32AllocPoolZInitImpl(256LL, 0xF0uLL, 0x646B7355u);
      *(_QWORD *)(W32GetUserSessionState(v136, v135, v137) + 62912) = v134;
      if ( !*(_QWORD *)(W32GetUserSessionState(v139, v138, v140) + 62912) )
        goto LABEL_121;
      v141 = W32GetUserSessionState((_DWORD)v30, v29, v31) + 62840;
      v145 = *(__int64 **)(W32GetUserSessionState(v143, v142, v144) + 62912);
      *v145 = v141;
      v146 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v145) + 48);
      v147 = *(int (**)(void))(v146 + 2912);
      if ( v147 )
      {
        if ( v147() >= 0 )
        {
          v146 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v146) + 48);
          v148 = *(void (**)(void))(v146 + 2920);
          if ( v148 )
            v148();
        }
      }
      v149 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v146) + 48);
      v150 = *(int (**)(void))(v149 + 2928);
      if ( v150 )
      {
        if ( v150() >= 0 )
        {
          v149 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v149) + 48);
          v151 = *(void (**)(void))(v149 + 2936);
          if ( v151 )
            v151();
        }
      }
      v152 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v149) + 48);
      v153 = *(int (**)(void))(v152 + 2944);
      if ( v153 )
      {
        if ( v153() >= 0 )
        {
          v152 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v152) + 48);
          v154 = *(void (**)(void))(v152 + 2952);
          if ( v154 )
            v154();
        }
      }
      v30 = *(GroupedProcessForegroundBoost **)(W32GetWin32kBaseApiSetTable(v152) + 48);
      v155 = (int (*)(void))*((_QWORD *)v30 + 370);
      if ( v155 )
      {
        if ( v155() >= 0 )
        {
          v30 = *(GroupedProcessForegroundBoost **)(W32GetWin32kBaseApiSetTable(v30) + 48);
          v156 = (unsigned int (*)(void))*((_QWORD *)v30 + 371);
          if ( !v156 || !v156() )
            goto LABEL_121;
        }
      }
      if ( !GroupedProcessForegroundBoost::InitAtoms(v30) )
        goto LABEL_121;
      v30 = *(GroupedProcessForegroundBoost **)(W32GetWin32kBaseApiSetTable(v30) + 48);
      v157 = (int (*)(void))*((_QWORD *)v30 + 372);
      if ( v157 )
      {
        if ( v157() >= 0 )
        {
          v30 = *(GroupedProcessForegroundBoost **)(W32GetWin32kBaseApiSetTable(v30) + 48);
          v158 = (unsigned int (*)(void))*((_QWORD *)v30 + 373);
          if ( !v158 || !v158() )
            goto LABEL_121;
        }
      }
      v159 = W32GetUserSessionState((_DWORD)v30, v29, v31);
      if ( !(unsigned int)HMInitHandleTable(*(_QWORD *)(v159 + 19888)) )
        goto LABEL_121;
      v160 = W32GetUserSessionState((_DWORD)v30, v29, v31);
      v164 = *(_QWORD *)(W32GetUserSessionState(v162, v161, v163) + 19904);
      *(_QWORD *)(v160 + 19912) = v164;
      v167 = *(__int64 **)(W32GetUserSessionState(v164, v165, v166) + 56968);
      v168 = *v167;
      *(_QWORD *)(v160 + 19936) = *v167;
      *(_DWORD *)(v160 + 20480) = *(_DWORD *)(W32GetUserSessionState((_DWORD)v167, v168, v169) + 71160);
      FastGetProfileDwordEx(0LL, 2, L"USERProcessHandleQuota", 10000, 0, &v244, 0LL);
      gUserProcessHandleQuota = v244;
      FastGetProfileDwordEx(0LL, 2, L"USERPostMessageLimit", 10000, 0, &v244, 0LL);
      v170 = v244;
      v174 = W32GetUserSessionState(v172, v171, v173);
      if ( v170 )
        *(_DWORD *)(v174 + 69064) = v170;
      else
        *(_DWORD *)(v174 + 69064) = -1;
      *(_DWORD *)(W32GetUserSessionState(v176, v175, v177) + 63224) = 50;
      v181 = W32GetUserSessionState(v179, v178, v180);
      FastGetProfileDwordEx(0LL, 2, L"USERNestedWindowLimit", *(_DWORD *)(v181 + 63224), 0, &v244, 0LL);
      v185 = v244;
      if ( (unsigned int)(v244 - 35) <= 0x41 )
        *(_DWORD *)(W32GetUserSessionState(v183, v182, v184) + 63224) = v185;
      v186 = W32GetUserSessionState(v183, v182, v184);
      FastGetProfileDwordEx(0LL, 40, L"Installed", 0, 0, (_DWORD *)(*(_QWORD *)(v186 + 19904) + 2240LL), 0LL);
      v190 = W32GetUserSessionState(v188, v187, v189);
      FastGetProfileDwordEx(0LL, 41, L"Installed", 0, 0, (_DWORD *)(*(_QWORD *)(v190 + 19904) + 2244LL), 0LL);
      v194 = W32GetUserSessionState(v192, v191, v193);
      FastGetProfileDwordEx(0LL, 45, L"R2BuildNumber", 0, 0, (_DWORD *)(*(_QWORD *)(v194 + 19904) + 2252LL), 0LL);
      v198 = W32GetUserSessionState(v196, v195, v197);
      FastGetProfileDwordEx(0LL, 46, L"StarterBuildNumber", 0, 0, (_DWORD *)(*(_QWORD *)(v198 + 19904) + 2248LL), 0LL);
      *(_WORD *)(W32GetUserSessionState(v200, v199, v201) + 69040) = 0;
      *(_DWORD *)(W32GetUserGdiSessionState(v202) + 36) = 0;
      v206 = W32GetUserSessionState(v204, v203, v205);
      v207 = 3LL;
      *(_DWORD *)(v206 + 69936) = 150;
      v208 = v206 + 69940;
      v209 = &_tagPNPGLOBALS::aDefaultReportDescriptorInput;
      do
      {
        *(_OWORD *)v208 = *v209;
        *(_OWORD *)(v208 + 16) = v209[1];
        *(_OWORD *)(v208 + 32) = v209[2];
        *(_OWORD *)(v208 + 48) = v209[3];
        *(_OWORD *)(v208 + 64) = v209[4];
        *(_OWORD *)(v208 + 80) = v209[5];
        *(_OWORD *)(v208 + 96) = v209[6];
        v208 += 128LL;
        v210 = v209[7];
        v209 += 8;
        *(_OWORD *)(v208 - 16) = v210;
        --v207;
      }
      while ( v207 );
      *(_OWORD *)v208 = *v209;
      *(_OWORD *)(v208 + 16) = v209[1];
      *(_OWORD *)(v208 + 32) = v209[2];
      *(_OWORD *)(v208 + 48) = v209[3];
      *(_OWORD *)(v208 + 64) = v209[4];
      *(_OWORD *)(v208 + 80) = v209[5];
      *(_OWORD *)(v208 + 96) = v209[6];
      *(_WORD *)(v208 + 112) = *((_WORD *)v209 + 56);
      if ( (unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( a1 )
          UIPrivilegeIsolation::TraceLegacyState(v211);
        if ( (int)IsInitClipFormatExceptionListSupported((__int64)v211) >= 0 )
          InitClipFormatExceptionList(v213);
        v216 = a1 == 0;
      }
      else
      {
        UIPrivilegeIsolation::Initialize(v211);
        if ( !UIPrivilegeIsolation::fEnforceUIPI )
        {
LABEL_105:
          v217 = *(_QWORD *)(W32GetUserSessionState(v213, v212, v214) + 19904);
          *(_DWORD *)(v217 + 2236) &= ~0x20u;
          v219 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v217) + 48);
          v221 = *(int (**)(void))(v219 + 3024);
          if ( v221 )
          {
            if ( v221() >= 0 )
            {
              v219 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v219) + 48);
              v222 = *(void (**)(void))(v219 + 3032);
              if ( v222 )
                v222();
            }
          }
          v223 = W32GetUserSessionState(v219, v218, v220);
          v224 = Win32AllocPoolZInitImpl(256LL, 0x18uLL, 0x44535042u);
          v225 = v224;
          if ( !v224 )
          {
            *(_QWORD *)(v223 + 57008) = 0LL;
            v23 = -1073741801;
            goto LABEL_121;
          }
          *(_QWORD *)v224 = 0LL;
          *(_WORD *)(v224 + 8) = 0;
          *(_QWORD *)(v224 + 16) = -450000000LL;
          DispBroker::DispBrokerClient::LoadRegistrySettings((DispBroker::DispBrokerClient *)v224);
          *(_QWORD *)(v223 + 57008) = v225;
          v23 = 0;
          v30 = *(GroupedProcessForegroundBoost **)(W32GetWin32kBaseApiSetTable(v226) + 48);
          v227 = (int (*)(void))*((_QWORD *)v30 + 55);
          if ( !v227 || v227() < 0 )
            goto LABEL_114;
          v30 = *(GroupedProcessForegroundBoost **)(W32GetWin32kBaseApiSetTable(v30) + 48);
          v228 = (__int64 (*)(void))*((_QWORD *)v30 + 56);
          if ( !v228 )
          {
            v23 = -1073741637;
            goto LABEL_121;
          }
          v23 = v228();
          if ( v23 >= 0 )
          {
LABEL_114:
            v30 = *(GroupedProcessForegroundBoost **)(W32GetWin32kBaseApiSetTable(v30) + 48);
            v230 = (int (*)(void))*((_QWORD *)v30 + 382);
            if ( !v230
              || v230() < 0
              || (v231 = W32GetUserSessionState((_DWORD)v30, v29, v31) + 63240,
                  v31 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v232) + 48),
                  (v233 = *(unsigned int (__fastcall **)(__int64, __int64))(v31 + 3064)) != 0LL)
              && v233(v231, 4LL) )
            {
LABEL_118:
              UserSessionSwitchLeaveCritWithNonPaged((__int64)v30, v29, v31, v229);
              return (unsigned int)v23;
            }
          }
LABEL_121:
          if ( *(_QWORD *)(W32GetUserSessionState((_DWORD)v30, v29, v31) + 62912) )
          {
            v234 = W32GetUserSessionState((_DWORD)v30, v29, v31);
            GreDeleteFastMutex(*(char **)(v234 + 62912), v235, v236, v237);
            *(_QWORD *)(W32GetUserSessionState(v239, v238, v240) + 62912) = 0LL;
          }
          if ( v23 >= 0 )
            v23 = -1073741801;
          goto LABEL_118;
        }
        if ( (int)IsInitClipFormatExceptionListSupported(v213) >= 0 )
          InitClipFormatExceptionList(v215);
        v216 = (unsigned int)IsCurrentSessionHostServiceSession(v215) == 0;
      }
      if ( !v216 && (int)IsInitClipboardILDefSupported(v213) >= 0 )
        InitClipboardILDef(v213);
      goto LABEL_105;
    }
  }
  return result;
}
