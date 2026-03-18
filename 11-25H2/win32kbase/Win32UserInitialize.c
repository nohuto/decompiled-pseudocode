/*
 * XREFs of Win32UserInitialize @ 0x1402EB804
 * Callers:
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     IsIMMEnabledSystem @ 0x140082BC0 (IsIMMEnabledSystem.c)
 *     FastGetProfileDwordEx @ 0x1400A97B0 (FastGetProfileDwordEx.c)
 *     ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1400AB0B4 (-IsDesktopHeapLoggingOn@@YAHXZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     UserAddAtomEx @ 0x1400D8E20 (UserAddAtomEx.c)
 *     IsCurrentSessionHostServiceSession @ 0x1401014D8 (IsCurrentSessionHostServiceSession.c)
 *     SharedAlloc @ 0x140152440 (SharedAlloc.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ??0DispBrokerClient@DispBroker@@QEAA@XZ @ 0x14019BAA4 (--0DispBrokerClient@DispBroker@@QEAA@XZ.c)
 *     ?InitAtoms@GroupedProcessForegroundBoost@@YA_NXZ @ 0x14019FDD8 (-InitAtoms@GroupedProcessForegroundBoost@@YA_NXZ.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline @ 0x1401A5360 (Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Initialize@UIPrivilegeIsolation@@YAXXZ @ 0x1401A8BF0 (-Initialize@UIPrivilegeIsolation@@YAXXZ.c)
 *     ?TraceLegacyState@UIPrivilegeIsolation@@YAXXZ @ 0x1401A8C5C (-TraceLegacyState@UIPrivilegeIsolation@@YAXXZ.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     InitClipFormatExceptionList @ 0x14023ED38 (InitClipFormatExceptionList.c)
 *     InitClipboardILDef @ 0x14023ED6C (InitClipboardILDef.c)
 *     IsInitClipFormatExceptionListSupported @ 0x14023EEE8 (IsInitClipFormatExceptionListSupported.c)
 *     IsInitClipboardILDefSupported @ 0x14023EF20 (IsInitClipboardILDefSupported.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     InitKernelHandleTable @ 0x1402E82B0 (InitKernelHandleTable.c)
 *     HMInitHandleTable @ 0x1402E83C8 (HMInitHandleTable.c)
 *     InitSecurity @ 0x1402E97F0 (InitSecurity.c)
 *     InitCreateUserSubsystem @ 0x1402EA574 (InitCreateUserSubsystem.c)
 *     InitCreateSharedSection @ 0x1402EA988 (InitCreateSharedSection.c)
 *     InitQEntryLookaside @ 0x1402EAE48 (InitQEntryLookaside.c)
 *     UserRtlCreateAtomTable @ 0x1402EB01C (UserRtlCreateAtomTable.c)
 */

__int64 __fastcall Win32UserInitialize(__int64 a1)
{
  unsigned int v1; // r13d
  void *v2; // rdx
  char v3; // bl
  bool v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int (*v10)(void); // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 (*v13)(void); // rax
  int v14; // esi
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(_QWORD); // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // r14
  __int64 v24; // rax
  __int64 v25; // rbx
  int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // rdx
  GroupedProcessForegroundBoost *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r14
  _OWORD *v33; // rdx
  _OWORD *v34; // rcx
  __int64 v35; // rax
  __int128 v36; // xmm1
  __int64 CurrentProcess; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  int inited; // edi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  int (*v47)(void); // rax
  __int64 (*v48)(void); // rax
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rcx
  int v52; // edi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int16 v57; // bx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int16 v62; // bx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  int (*v69)(void); // rax
  void (*v70)(void); // rax
  int (*v71)(void); // rax
  __int64 v72; // rcx
  int (*v73)(void); // rax
  PVOID v74; // rbx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rbx
  unsigned int i; // r14d
  unsigned int v79; // r15d
  __int64 v80; // r12
  __int64 v81; // rcx
  __int64 v82; // rbx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rcx
  _QWORD *v87; // rcx
  __int64 v88; // rdx
  PVOID v89; // rbx
  __int64 v90; // rdx
  __int64 v91; // rcx
  _QWORD *v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rdx
  _QWORD *v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rdx
  volatile signed __int32 *v102; // rcx
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rdx
  volatile signed __int32 *v106; // rcx
  int v107; // ebx
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // rbx
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // rbx
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 *v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // rdx
  __int64 v121; // rcx
  int (*v122)(void); // rax
  void (*v123)(void); // rax
  __int64 v124; // rdx
  __int64 v125; // rcx
  int (*v126)(void); // rax
  void (*v127)(void); // rax
  __int64 v128; // rdx
  __int64 v129; // rcx
  int (*v130)(void); // rax
  void (*v131)(void); // rax
  int (*v132)(void); // rax
  __int64 v133; // rdx
  unsigned int (*v134)(void); // rax
  int (*v135)(void); // rax
  unsigned int (*v136)(void); // rax
  __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rbx
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // rcx
  __int64 v143; // rdx
  __int64 *v144; // rcx
  __int64 v145; // rdx
  int v146; // ebx
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // rax
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // rax
  __int64 v155; // rdx
  __int64 v156; // rcx
  int v157; // ebx
  __int64 v158; // rax
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // rax
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // rax
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // rax
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // rcx
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // rax
  __int64 v174; // rdx
  __int64 v175; // rcx
  _OWORD *v176; // rax
  __int128 v177; // xmm1
  __int64 v178; // rdx
  UIPrivilegeIsolation *v179; // rcx
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // rdx
  __int64 v183; // rcx
  bool v184; // zf
  __int64 v185; // rcx
  __int64 v186; // rdx
  __int64 v187; // rdx
  __int64 v188; // rcx
  int (*v189)(void); // rax
  void (*v190)(void); // rax
  __int64 v191; // rbx
  DispBroker::DispBrokerClient *Pool2; // rax
  DispBroker::DispBrokerClient *v193; // rax
  int (*v194)(void); // rax
  __int64 (*v195)(void); // rax
  int (*v196)(void); // rax
  __int64 v197; // rcx
  __int64 v198; // rbx
  __int64 v199; // rdx
  __int64 v200; // rcx
  unsigned int (__fastcall *v201)(__int64, __int64); // rax
  __int64 v202; // rcx
  __int64 v203; // rax
  __int64 v204; // rdx
  __int64 v205; // rcx
  __int128 v206; // [rsp+40h] [rbp-20h]
  __int128 v207; // [rsp+50h] [rbp-10h]
  int v208; // [rsp+A0h] [rbp+40h]
  __int64 v209; // [rsp+A8h] [rbp+48h] BYREF

  v208 = a1;
  v1 = a1;
  LODWORD(v209) = 0;
  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || (v3 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v3 = 0;
  }
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, WPP_GLOBAL_Control);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      14,
      26,
      (__int64)&WPP_487a223bc39130559c367c5765389d92_Traceguids);
  }
  *(_QWORD *)(W32GetUserSessionState(a1, v2) + 62952) = 1LL;
  v10 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v9, v8) + 48) + 3264LL);
  if ( v10 && v10() >= 0 )
  {
    v13 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v12, v11) + 48) + 3272LL);
    if ( !v13 )
      return (unsigned int)-1073741637;
    v14 = v13();
    if ( v14 < 0 )
      return (unsigned int)v14;
  }
  result = InitCreateSharedSection();
  if ( (int)result >= 0 )
  {
    result = InitKernelHandleTable(v17, v16);
    if ( (int)result >= 0 )
    {
      v20 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v19, v18) + 48) + 192LL);
      if ( v20 )
      {
        v14 = v20(v1);
        if ( v14 >= 0 )
        {
          v23 = (_QWORD *)W32GetUserSessionState(v22, v21);
          if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
            v24 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
                    v23,
                    1,
                    0,
                    (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
          else
            v24 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v23, 0);
          v25 = v24;
          v23[3] = v24;
          v26 = v14;
          if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( !v25 )
              goto LABEL_25;
          }
          else
          {
            if ( !v25 )
              goto LABEL_25;
            *(_BYTE *)(v25 + 1708) = 1;
          }
          if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v25) )
          {
            DestroySharedUserCritDeferredUnlockList((__int64)(v23 + 2461), v27);
            DestroyDeferredUnlockObjectAssignmentList(v23 + 2468);
            DestroyDeferredUnlockObjectAssignmentList(v23 + 2466);
          }
LABEL_25:
          if ( !(unsigned int)InitSecurity() )
            goto LABEL_127;
          *(_DWORD *)(ExWindowStationObjectType + 108LL) = 272;
          *(_DWORD *)(ExWindowStationObjectType + 104LL) = 0;
          *(_DWORD *)(ExWindowStationObjectType + 92LL) = 983935;
          *(struct _GENERIC_MAPPING *)(ExWindowStationObjectType + 76LL) = WinStaMapping;
          *((_DWORD *)ExDesktopObjectType + 27) = 392;
          *((_DWORD *)ExDesktopObjectType + 26) = 0;
          *((_DWORD *)ExDesktopObjectType + 23) = 983551;
          *(_OWORD *)((char *)ExDesktopObjectType + 76) = DesktopMapping;
          *(_DWORD *)(W32GetUserSessionState(ExDesktopObjectType, v28) + 62784) = 7;
          v32 = W32GetUserSessionState(v31, v30);
          v33 = &unk_14026F1C0;
          *(_DWORD *)(v32 + 66800) = 589824;
          *(_QWORD *)(v32 + 66804) = 0x1280033E9ELL;
          v34 = (_OWORD *)(v32 + 66816);
          v35 = 3LL;
          do
          {
            *v34 = *v33;
            v34[1] = v33[1];
            v34[2] = v33[2];
            v34[3] = v33[3];
            v34[4] = v33[4];
            v34[5] = v33[5];
            v34[6] = v33[6];
            v34 += 8;
            v36 = v33[7];
            v33 += 8;
            *(v34 - 1) = v36;
            --v35;
          }
          while ( v35 );
          *(_QWORD *)&v206 = 0x2000000LL;
          *((_QWORD *)&v206 + 1) = v32 + 67848;
          *v34 = *v33;
          v34[1] = v33[1];
          v34[2] = v33[2];
          v34[3] = v33[3];
          v34[4] = v33[4];
          *(_OWORD *)(v32 + 68360) = v206;
          *(_OWORD *)(ExCompositionObjectType + 76LL) = RIMRights;
          *(_DWORD *)(ExCompositionObjectType + 108LL) = 24;
          *(_DWORD *)(ExCompositionObjectType + 104LL) = 0;
          *(_DWORD *)(ExCompositionObjectType + 92LL) = 983043;
          *(_BYTE *)(ExRawInputManagerObjectType + 66LL) |= 0x10u;
          *(_DWORD *)(ExRawInputManagerObjectType + 108LL) = 1120;
          *(_DWORD *)(ExRawInputManagerObjectType + 104LL) = 0;
          *(_DWORD *)(ExRawInputManagerObjectType + 92LL) = 983043;
          *(_OWORD *)(ExRawInputManagerObjectType + 76LL) = RIMRights;
          CurrentProcess = PsGetCurrentProcess(ExRawInputManagerObjectType, 983043LL);
          *(_QWORD *)(W32GetUserSessionState(v39, v38) + 68376) = CurrentProcess;
          inited = InitQEntryLookaside(v41, v40);
          v46 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v44, v43) + 48);
          v47 = *(int (**)(void))(v46 + 3280);
          if ( v47 && v47() >= 0 )
          {
            v46 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v46, v45) + 48);
            v48 = *(__int64 (**)(void))(v46 + 3288);
            if ( v48 )
              v49 = v48();
            else
              v49 = -1073741637;
            inited |= v49;
          }
          v50 = W32GetUserSessionState(v46, v45);
          v52 = UserRtlCreateAtomTable(v51, (_QWORD *)(v50 + 41376)) | inited;
          v55 = W32GetUserSessionState(v54, v53);
          v26 = UserRtlCreateAtomTable(v56, (_QWORD *)(v55 + 41384)) | v52;
          if ( v26 < 0 )
            goto LABEL_127;
          v57 = UserAddAtomEx((__int64)L"USER32", 1LL, 2u);
          *(_WORD *)(W32GetUserSessionState(v59, v58) + 41356) = v57;
          v62 = *(_WORD *)(W32GetUserSessionState(v61, v60) + 41356);
          *(_WORD *)(W32GetUserSessionState(v64, v63) + 41320) = v62;
          if ( !*(_WORD *)(W32GetUserSessionState(v66, v65) + 41320) )
            goto LABEL_127;
          *(_QWORD *)&v207 = 0x2000000LL;
          *((_QWORD *)&v207 + 1) = v32 + 67312;
          *(_OWORD *)(v32 + 67824) = v207;
          if ( !(unsigned int)InitCreateUserSubsystem((__int64)v29, v28) )
            goto LABEL_127;
          v68 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v29, v28) + 48);
          v69 = *(int (**)(void))(v68 + 3296);
          if ( v69 )
          {
            if ( v69() >= 0 )
            {
              v68 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v68, v67) + 48);
              v70 = *(void (**)(void))(v68 + 3304);
              if ( v70 )
                v70();
            }
          }
          v71 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v68, v67) + 48) + 16LL);
          if ( v71 )
          {
            if ( v71() >= 0 )
            {
              v29 = *(GroupedProcessForegroundBoost **)(W32GetWin32kBaseApiSetTable(v72, v28) + 48);
              v73 = (int (*)(void))*((_QWORD *)v29 + 3);
              if ( !v73 || v73() < 0 )
                goto LABEL_127;
            }
          }
          v74 = SharedAlloc(0x1DE8uLL, v28);
          *(_QWORD *)(W32GetUserSessionState(v76, v75) + 19872) = v74;
          if ( !v74 )
            goto LABEL_127;
          v77 = 2524LL;
          for ( i = 2; i < 0x12; ++i )
          {
            v79 = 0;
            v80 = v77;
            do
            {
              ++v79;
              v29 = *(GroupedProcessForegroundBoost **)(W32GetUserSessionState(v29, v28) + 19872);
              *(_DWORD *)((char *)v29 + v80) = -1;
              v80 += 4LL;
            }
            while ( v79 < 0x1E );
            v77 += 120LL;
          }
          v81 = *(_QWORD *)(W32GetUserSessionState(v29, v28) + 19872);
          *(_DWORD *)(v81 + 5128) = 8;
          *(_DWORD *)(v81 + 5132) = 16;
          v82 = Win32AllocPoolZInitImpl(256LL, 0xB0uLL, 0x70646B55u);
          *(_QWORD *)(W32GetUserSessionState(v84, v83) + 56968) = v82;
          if ( !*(_QWORD *)(W32GetUserSessionState(v86, v85) + 56968) )
            goto LABEL_127;
          v87 = (_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v29, v28) + 56968) + 24LL);
          v87[1] = v87;
          *v87 = v87;
          v89 = SharedAlloc(0x28uLL, v88);
          v92 = *(_QWORD **)(W32GetUserSessionState(v91, v90) + 56968);
          *v92 = v89;
          v95 = *(_QWORD **)(W32GetUserSessionState(v92, v93) + 56968);
          if ( !*v95 )
          {
            v96 = W32GetUserSessionState(v95, v94);
            GreDeleteFastMutex(*(char **)(v96 + 56968));
            *(_QWORD *)(W32GetUserSessionState(v98, v97) + 56968) = 0LL;
            goto LABEL_127;
          }
          if ( (unsigned int)IsDesktopHeapLoggingOn((__int64)v95, v94) )
          {
            v102 = *(volatile signed __int32 **)(W32GetUserSessionState(v100, v99) + 19872);
            _InterlockedOr(v102, 0x100u);
          }
          else
          {
            v102 = *(volatile signed __int32 **)(W32GetUserSessionState(v100, v99) + 19872);
            _InterlockedAnd(v102, 0xFFFFFEFF);
          }
          if ( (_BYTE)NlsMbCodePageTag )
            _InterlockedOr(*(volatile signed __int32 **)(W32GetUserSessionState(v102, v101) + 19872), 2u);
          else
            _InterlockedAnd(*(volatile signed __int32 **)(W32GetUserSessionState(v102, v101) + 19872), 0xFFFFFFFD);
          if ( (unsigned int)IsIMMEnabledSystem() )
            _InterlockedOr(*(volatile signed __int32 **)(W32GetUserSessionState(v104, v103) + 19872), 4u);
          else
            _InterlockedAnd(*(volatile signed __int32 **)(W32GetUserSessionState(v104, v103) + 19872), 0xFFFFFFFB);
          v106 = *(volatile signed __int32 **)(W32GetUserSessionState(
                                                 (unsigned __int16)(NlsAnsiCodePage - 1255),
                                                 1255LL)
                                             + 19872);
          if ( (unsigned __int16)(NlsAnsiCodePage - 1255) <= 1u )
            _InterlockedOr(v106, 8u);
          else
            _InterlockedAnd(v106, 0xFFFFFFF7);
          v107 = *(_DWORD *)(W32GetUserSessionState(v106, v105) + 62928) << 10;
          *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v109, v108) + 19872) + 924LL) = v107;
          v110 = Win32AllocPoolZInitImpl(256LL, 0xF0uLL, 0x646B7355u);
          *(_QWORD *)(W32GetUserSessionState(v112, v111) + 62920) = v110;
          if ( !*(_QWORD *)(W32GetUserSessionState(v114, v113) + 62920) )
            goto LABEL_127;
          v115 = W32GetUserSessionState(v29, v28) + 62848;
          v118 = *(__int64 **)(W32GetUserSessionState(v117, v116) + 62920);
          *v118 = v115;
          v121 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v118, v119) + 48);
          v122 = *(int (**)(void))(v121 + 3312);
          if ( v122 )
          {
            if ( v122() >= 0 )
            {
              v121 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v121, v120) + 48);
              v123 = *(void (**)(void))(v121 + 3320);
              if ( v123 )
                v123();
            }
          }
          v125 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v121, v120) + 48);
          v126 = *(int (**)(void))(v125 + 3328);
          if ( v126 )
          {
            if ( v126() >= 0 )
            {
              v125 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v125, v124) + 48);
              v127 = *(void (**)(void))(v125 + 3336);
              if ( v127 )
                v127();
            }
          }
          v129 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v125, v124) + 48);
          v130 = *(int (**)(void))(v129 + 3344);
          if ( v130 )
          {
            if ( v130() >= 0 )
            {
              v129 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v129, v128) + 48);
              v131 = *(void (**)(void))(v129 + 3352);
              if ( v131 )
                v131();
            }
          }
          v29 = *(GroupedProcessForegroundBoost **)(W32GetWin32kBaseApiSetTable(v129, v128) + 48);
          v132 = (int (*)(void))*((_QWORD *)v29 + 420);
          if ( v132 )
          {
            if ( v132() >= 0 )
            {
              v29 = *(GroupedProcessForegroundBoost **)(W32GetWin32kBaseApiSetTable(v29, v133) + 48);
              v134 = (unsigned int (*)(void))*((_QWORD *)v29 + 421);
              if ( !v134 || !v134() )
                goto LABEL_127;
            }
          }
          if ( !GroupedProcessForegroundBoost::InitAtoms(v29) )
            goto LABEL_127;
          v29 = *(GroupedProcessForegroundBoost **)(W32GetWin32kBaseApiSetTable(v29, v28) + 48);
          v135 = (int (*)(void))*((_QWORD *)v29 + 422);
          if ( v135 )
          {
            if ( v135() >= 0 )
            {
              v29 = *(GroupedProcessForegroundBoost **)(W32GetWin32kBaseApiSetTable(v29, v28) + 48);
              v136 = (unsigned int (*)(void))*((_QWORD *)v29 + 423);
              if ( !v136 || !v136() )
                goto LABEL_127;
            }
          }
          v137 = W32GetUserSessionState(v29, v28);
          if ( !(unsigned int)HMInitHandleTable(*(_QWORD *)(v137 + 19856), v138) )
            goto LABEL_127;
          v139 = W32GetUserSessionState(v29, v28);
          v142 = *(_QWORD *)(W32GetUserSessionState(v141, v140) + 19872);
          *(_QWORD *)(v139 + 19880) = v142;
          v144 = *(__int64 **)(W32GetUserSessionState(v142, v143) + 56968);
          v145 = *v144;
          *(_QWORD *)(v139 + 19904) = *v144;
          *(_DWORD *)(v139 + 20448) = *(_DWORD *)(W32GetUserSessionState(v144, v145) + 71176);
          FastGetProfileDwordEx(0LL, 2LL, L"USERProcessHandleQuota", 10000, 0, &v209, 0LL);
          gUserProcessHandleQuota = v209;
          FastGetProfileDwordEx(0LL, 2LL, L"USERPostMessageLimit", 10000, 0, &v209, 0LL);
          v146 = v209;
          v149 = W32GetUserSessionState(v148, v147);
          if ( v146 )
            *(_DWORD *)(v149 + 69072) = v146;
          else
            *(_DWORD *)(v149 + 69072) = -1;
          *(_DWORD *)(W32GetUserSessionState(v151, v150) + 63232) = 50;
          v154 = W32GetUserSessionState(v153, v152);
          FastGetProfileDwordEx(0LL, 2LL, L"USERNestedWindowLimit", *(_DWORD *)(v154 + 63232), 0, &v209, 0LL);
          v157 = v209;
          if ( (unsigned int)(v209 - 35) <= 0x41 )
            *(_DWORD *)(W32GetUserSessionState(v156, v155) + 63232) = v157;
          v158 = W32GetUserSessionState(v156, v155);
          FastGetProfileDwordEx(0LL, 40LL, L"Installed", 0, 0, (_DWORD *)(*(_QWORD *)(v158 + 19872) + 2240LL), 0LL);
          v161 = W32GetUserSessionState(v160, v159);
          FastGetProfileDwordEx(0LL, 41LL, L"Installed", 0, 0, (_DWORD *)(*(_QWORD *)(v161 + 19872) + 2244LL), 0LL);
          v164 = W32GetUserSessionState(v163, v162);
          FastGetProfileDwordEx(0LL, 45LL, L"R2BuildNumber", 0, 0, (_DWORD *)(*(_QWORD *)(v164 + 19872) + 2252LL), 0LL);
          v167 = W32GetUserSessionState(v166, v165);
          FastGetProfileDwordEx(
            0LL,
            46LL,
            L"StarterBuildNumber",
            0,
            0,
            (_DWORD *)(*(_QWORD *)(v167 + 19872) + 2248LL),
            0LL);
          *(_WORD *)(W32GetUserSessionState(v169, v168) + 69048) = 0;
          *(_DWORD *)(W32GetUserGdiSessionState(v170) + 36) = 0;
          v173 = W32GetUserSessionState(v172, v171);
          v174 = 3LL;
          *(_DWORD *)(v173 + 69944) = 150;
          v175 = v173 + 69948;
          v176 = &_tagPNPGLOBALS::aDefaultReportDescriptorInput;
          do
          {
            *(_OWORD *)v175 = *v176;
            *(_OWORD *)(v175 + 16) = v176[1];
            *(_OWORD *)(v175 + 32) = v176[2];
            *(_OWORD *)(v175 + 48) = v176[3];
            *(_OWORD *)(v175 + 64) = v176[4];
            *(_OWORD *)(v175 + 80) = v176[5];
            *(_OWORD *)(v175 + 96) = v176[6];
            v175 += 128LL;
            v177 = v176[7];
            v176 += 8;
            *(_OWORD *)(v175 - 16) = v177;
            --v174;
          }
          while ( v174 );
          *(_OWORD *)v175 = *v176;
          *(_OWORD *)(v175 + 16) = v176[1];
          *(_OWORD *)(v175 + 32) = v176[2];
          *(_OWORD *)(v175 + 48) = v176[3];
          *(_OWORD *)(v175 + 64) = v176[4];
          *(_OWORD *)(v175 + 80) = v176[5];
          *(_OWORD *)(v175 + 96) = v176[6];
          *(_WORD *)(v175 + 112) = *((_WORD *)v176 + 56);
          if ( (unsigned int)Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( v208 )
              UIPrivilegeIsolation::TraceLegacyState(v179);
            if ( (int)IsInitClipFormatExceptionListSupported((__int64)v179, v178) >= 0 )
              InitClipFormatExceptionList(v181, v180);
            v184 = v208 == 0;
          }
          else
          {
            UIPrivilegeIsolation::Initialize(v179);
            if ( !UIPrivilegeIsolation::fEnforceUIPI )
              goto LABEL_108;
            if ( (int)IsInitClipFormatExceptionListSupported(v181, v180) >= 0 )
              InitClipFormatExceptionList(v183, v182);
            v184 = (unsigned int)IsCurrentSessionHostServiceSession() == 0;
          }
          if ( !v184 && (int)IsInitClipboardILDefSupported(v181, v180) >= 0 )
            InitClipboardILDef(v181, v180);
LABEL_108:
          v185 = *(_QWORD *)(W32GetUserSessionState(v181, v180) + 19872);
          *(_DWORD *)(v185 + 2236) &= ~0x20u;
          v188 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v185, v186) + 48);
          v189 = *(int (**)(void))(v188 + 3424);
          if ( v189 )
          {
            if ( v189() >= 0 )
            {
              v188 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v188, v187) + 48);
              v190 = *(void (**)(void))(v188 + 3432);
              if ( v190 )
                v190();
            }
          }
          v191 = W32GetUserSessionState(v188, v187);
          Pool2 = (DispBroker::DispBrokerClient *)ExAllocatePool2(256LL, 24LL, 1146310722LL);
          if ( Pool2 )
          {
            v193 = DispBroker::DispBrokerClient::DispBrokerClient(Pool2);
            *(_QWORD *)(v191 + 57016) = v193;
            if ( v193 )
            {
              v26 = 0;
              v29 = *(GroupedProcessForegroundBoost **)(W32GetWin32kBaseApiSetTable(v29, v28) + 48);
              v194 = (int (*)(void))*((_QWORD *)v29 + 55);
              if ( !v194 || v194() < 0 )
                goto LABEL_118;
              v29 = *(GroupedProcessForegroundBoost **)(W32GetWin32kBaseApiSetTable(v29, v28) + 48);
              v195 = (__int64 (*)(void))*((_QWORD *)v29 + 56);
              if ( !v195 )
              {
                v26 = -1073741637;
                goto LABEL_127;
              }
              v26 = v195();
              if ( v26 >= 0 )
              {
LABEL_118:
                v196 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v29, v28) + 48) + 3456LL);
                if ( !v196
                  || v196() < 0
                  || (v198 = W32GetUserSessionState(v197, v28) + 63256,
                      (v201 = *(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                              v200,
                                                                                              v199)
                                                                                          + 48)
                                                                              + 3464LL)) != 0LL)
                  && v201(v198, 4LL) )
                {
                  if ( v208 )
                    g_UseOldJobLogic = 0;
                  goto LABEL_131;
                }
              }
LABEL_127:
              if ( *(_QWORD *)(W32GetUserSessionState(v29, v28) + 62920) )
              {
                v203 = W32GetUserSessionState(v202, v28);
                GreDeleteFastMutex(*(char **)(v203 + 62920));
                *(_QWORD *)(W32GetUserSessionState(v205, v204) + 62920) = 0LL;
              }
              if ( v26 >= 0 )
                v26 = -1073741801;
LABEL_131:
              UserSessionSwitchLeaveCritWithNonPaged(0LL, v28);
              return (unsigned int)v26;
            }
          }
          else
          {
            *(_QWORD *)(v191 + 57016) = 0LL;
          }
          v26 = -1073741801;
          goto LABEL_127;
        }
        return (unsigned int)v14;
      }
      return (unsigned int)-1073741637;
    }
  }
  return result;
}
