/*
 * XREFs of ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1401D6EE0
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?IsSessionGlobalsAreaAllocated@Base@Gre@@YA_NXZ @ 0x140008500 (-IsSessionGlobalsAreaAllocated@Base@Gre@@YA_NXZ.c)
 *     ??1COPM@@QEAA@XZ @ 0x14000879C (--1COPM@@QEAA@XZ.c)
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x14000A430 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140059BB8 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400910B4 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1400A3000 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     CoreMsgUninitialize @ 0x1400DAAB4 (CoreMsgUninitialize.c)
 *     InputUnInitialize @ 0x140117884 (InputUnInitialize.c)
 *     ??_GCSynchronizationManager@DirectComposition@@IEAAPEAXI@Z @ 0x140134D34 (--_GCSynchronizationManager@DirectComposition@@IEAAPEAXI@Z.c)
 *     ?UninitializeBaseWppLog@@YAXXZ @ 0x140142280 (-UninitializeBaseWppLog@@YAXXZ.c)
 *     ?DestroyHandleTableObjects@@YAXXZ @ 0x1401745F4 (-DestroyHandleTableObjects@@YAXXZ.c)
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x140185044 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?CleanupDomainLocks@@YAXXZ @ 0x14018AA70 (-CleanupDomainLocks@@YAXXZ.c)
 *     FreePerSessionWin32kCall @ 0x1401921D8 (FreePerSessionWin32kCall.c)
 *     ?UninitializeWin32SiloGlobals@@YAXXZ @ 0x140195AD8 (-UninitializeWin32SiloGlobals@@YAXXZ.c)
 *     ?FreeWin32KSyscallFilter@@YAXXZ @ 0x1401984DC (-FreeWin32KSyscallFilter@@YAXXZ.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x14019B32C (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UninitializeWin32PoolTracking@@YAXXZ @ 0x1401B3888 (-UninitializeWin32PoolTracking@@YAXXZ.c)
 *     ?Destroy@UserTypeIsolationAllocators@@QEAAXXZ @ 0x1401B3E38 (-Destroy@UserTypeIsolationAllocators@@QEAAXXZ.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1401B59A4 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     MultiUserNtGreCleanup @ 0x1401C0C3C (MultiUserNtGreCleanup.c)
 *     FreeWin32kApiSetTable @ 0x1401C36A0 (FreeWin32kApiSetTable.c)
 *     RIMUnInitialize @ 0x1401C3BE0 (RIMUnInitialize.c)
 *     ?UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x1401C4F24 (-UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ.c)
 *     ??1CQoSReport@@QEAA@XZ @ 0x1401CBBA0 (--1CQoSReport@@QEAA@XZ.c)
 *     ?CloseCoreMsgPort@CoreMessagingKPort@@AEAAXXZ @ 0x1401CD96C (-CloseCoreMsgPort@CoreMessagingKPort@@AEAAXXZ.c)
 *     ??_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z @ 0x1401DA920 (--_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z.c)
 *     EditionUninitializeWppLogging @ 0x1402490F0 (EditionUninitializeWppLogging.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall Win32KBaseDriverUnload(struct _DRIVER_OBJECT *a1, int a2, int a3)
{
  char v3; // bl
  bool v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int (*v10)(void); // rax
  void (*v11)(void); // rax
  __int64 v12; // rcx
  int (*v13)(void); // rax
  void (*v14)(void); // rax
  __int64 DCompSessionState; // rbx
  DirectComposition::CConnection *v16; // rcx
  struct _ERESOURCE *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  DirectComposition::CSynchronizationManager *v21; // rcx
  Gre::Base *v22; // rcx
  int (*v23)(void); // rax
  void (*v24)(void); // rax
  int v25; // edx
  __int64 v26; // rcx
  int v27; // r8d
  __int64 v28; // rdi
  OPM *v29; // rbx
  void *v30; // rdx
  __int64 v31; // rax
  Gre::Base *v32; // rcx
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  __int64 v36; // rax
  int v37; // edx
  int v38; // ecx
  int v39; // r8d
  int v40; // edx
  _QWORD *v41; // rcx
  int v42; // r8d
  __int64 v43; // rcx
  char *v44; // rdi
  int v45; // edx
  int v46; // r8d
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  char *v51; // rbx
  int v52; // edx
  int v53; // ecx
  int v54; // r8d
  int v55; // edx
  __int64 v56; // rcx
  int v57; // r8d
  int v58; // edx
  int v59; // ecx
  int v60; // r8d
  int v61; // edx
  int v62; // ecx
  int v63; // r8d
  int v64; // edx
  int v65; // ecx
  int v66; // r8d
  __int64 v67; // rax
  int v68; // edx
  int v69; // ecx
  int v70; // r8d
  int v71; // edx
  int v72; // ecx
  int v73; // r8d
  char *v74; // rbx
  int v75; // edx
  int v76; // ecx
  int v77; // r8d
  __int64 v78; // rax
  int v79; // edx
  int v80; // ecx
  int v81; // r8d
  __int64 v82; // rax
  int v83; // edx
  int v84; // ecx
  int v85; // r8d
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // r9
  int v90; // edx
  int v91; // ecx
  int v92; // r8d
  int v93; // edx
  int v94; // ecx
  int v95; // r8d
  __int64 v96; // rax
  int v97; // edx
  int v98; // ecx
  int v99; // r8d
  int v100; // edx
  int v101; // ecx
  int v102; // r8d
  int v103; // edx
  int v104; // ecx
  int v105; // r8d
  int v106; // edx
  int v107; // ecx
  int v108; // r8d
  __int64 v109; // rax
  int v110; // edx
  int v111; // ecx
  int v112; // r8d
  __int64 v113; // rax
  __int64 v114; // rax
  int v115; // edx
  int v116; // ecx
  int v117; // r8d
  __int64 v118; // rax
  __int64 v119; // rdx
  __int64 v120; // r8
  __int64 v121; // r9
  int v122; // edx
  int v123; // ecx
  int v124; // r8d
  __int64 v125; // rax
  __int64 v126; // rdx
  __int64 v127; // r8
  __int64 v128; // r9
  int v129; // edx
  __int64 v130; // rcx
  int v131; // r8d
  int v132; // edx
  int v133; // ecx
  int v134; // r8d
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rcx
  int v139; // r8d
  int (*v140)(void); // rax
  __int64 v141; // rbx
  __int64 v142; // rcx
  void (__fastcall *v143)(__int64); // rax
  int v144; // edx
  int v145; // ecx
  int v146; // r8d
  __int64 v147; // rbx
  char *v148; // rdi
  __int64 v149; // rax
  int v150; // edx
  __int64 v151; // rcx
  int v152; // r8d
  unsigned int v153; // edx
  CAsyncKeyEventMonitor *v154; // rcx
  int v155; // r8d
  int (*v156)(void); // rax
  __int64 v157; // rcx
  void (*v158)(void); // rax
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // r8
  __int64 v162; // rax
  char *v163; // rbx
  __int64 v164; // rdx
  __int64 v165; // r8
  __int64 v166; // r9
  int v167; // edx
  int v168; // ecx
  int v169; // r8d
  int v170; // edx
  int v171; // ecx
  int v172; // r8d
  int v173; // edx
  int v174; // ecx
  int v175; // r8d
  __int64 v176; // rax
  int v177; // edx
  int v178; // ecx
  int v179; // r8d
  int v180; // edx
  int v181; // ecx
  int v182; // r8d
  __int64 v183; // rax
  int v184; // edx
  int v185; // ecx
  int v186; // r8d
  __int64 v187; // rdi
  char *v188; // rbx
  __int64 v189; // rdx
  __int64 v190; // r8
  __int64 v191; // r9
  int v192; // edx
  __int64 v193; // rcx
  int v194; // r8d
  PDRIVER_OBJECT v195; // rbx
  __int64 SessionState; // rax
  __int64 v197; // rcx
  __int64 v198; // rax
  _BYTE v199[256]; // [rsp+40h] [rbp-108h] BYREF

  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || (v3 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v3 = 0;
  }
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      14,
      11,
      (__int64)&WPP_1694f8648fb7338eb8af492443ee6fcc_Traceguids);
  }
  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v199);
  v9 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v8) + 48);
  v10 = *(int (**)(void))(v9 + 3848);
  if ( v10 )
  {
    if ( v10() >= 0 )
    {
      v9 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v9) + 48);
      v11 = *(void (**)(void))(v9 + 3856);
      if ( v11 )
        v11();
    }
  }
  v12 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v9) + 48);
  v13 = *(int (**)(void))(v12 + 248);
  if ( v13 )
  {
    if ( v13() >= 0 )
    {
      v12 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v12) + 48);
      v14 = *(void (**)(void))(v12 + 256);
      if ( v14 )
        v14();
    }
  }
  DCompSessionState = W32GetDCompSessionState(v12);
  v16 = *(DirectComposition::CConnection **)(DCompSessionState + 16);
  if ( v16 )
    DirectComposition::CConnection::`scalar deleting destructor'(v16);
  v17 = *(struct _ERESOURCE **)(DCompSessionState + 32);
  if ( v17 )
  {
    ExDeleteResourceLite(v17);
    GreDeleteFastMutex(*(char **)(DCompSessionState + 32), v18, v19, v20);
    *(_QWORD *)(DCompSessionState + 32) = 0LL;
  }
  v21 = *(DirectComposition::CSynchronizationManager **)(W32GetDCompSessionState(v17) + 24);
  if ( v21 )
    DirectComposition::CSynchronizationManager::`scalar deleting destructor'(v21);
  v22 = *(Gre::Base **)(W32GetWin32kBaseApiSetTable(v21) + 48);
  v23 = (int (*)(void))*((_QWORD *)v22 + 35);
  if ( v23 )
  {
    if ( v23() >= 0 )
    {
      v22 = *(Gre::Base **)(W32GetWin32kBaseApiSetTable(v22) + 48);
      v24 = (void (*)(void))*((_QWORD *)v22 + 36);
      if ( v24 )
        v24();
    }
  }
  if ( Gre::Base::IsSessionGlobalsAreaAllocated(v22) )
  {
    v28 = *(_QWORD *)(W32GetSessionState(v26) + 88);
    v29 = *(OPM **)(v28 + 3728);
    if ( v29 )
    {
      COPM::~COPM(*(OPM ***)(v28 + 3728));
      OPM::OPMFreeMemory(v29, v30);
    }
    *(_QWORD *)(v28 + 3728) = 0LL;
  }
  v31 = W32GetUserSessionState(v26, v25, v27);
  *(_DWORD *)(v31 + 68928) |= 0x80u;
  MultiUserNtGreCleanup(v32);
  v36 = W32GetUserSessionState(v34, v33, v35);
  *(_DWORD *)(v36 + 68928) |= 0x100u;
  W32UnregisterSessionProcess();
  if ( *(_QWORD *)(W32GetUserSessionState(v38, v37, v39) + 56968) )
  {
    v41 = (_QWORD *)(*(_QWORD *)(W32GetUserSessionState((_DWORD)v41, v40, v42) + 56968) + 24LL);
    if ( (_QWORD *)*v41 != v41 )
    {
      v43 = *(_QWORD *)(W32GetUserSessionState((_DWORD)v41, v40, v42) + 56968);
      v44 = *(char **)(v43 + 24);
      v47 = *(_QWORD *)(W32GetUserSessionState(v43, v45, v46) + 56968) + 24LL;
      if ( v44 != (char *)v47 )
      {
        do
        {
          v51 = *(char **)v44;
          GreDeleteFastMutex(v44, v47, v49, v50);
          v44 = v51;
          v48 = *(_QWORD *)(W32GetUserSessionState(v53, v52, v54) + 56968) + 24LL;
        }
        while ( v51 != (char *)v48 );
      }
      v41 = (_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v48, v47, v49) + 56968) + 24LL);
      v41[1] = v41;
      *v41 = v41;
    }
  }
  InputUnInitialize((int)v41, v40, v42);
  Win32kNtUserCleanup(v56, v55, v57);
  DestroyHandleTableObjects(v59, v58, v60);
  CleanupDomainLocks(v62, v61, v63);
  EnterLeaveCritMitRitHandOffHazard::UnInitialize();
  v67 = W32GetUserSessionState(v65, v64, v66);
  *(_DWORD *)(v67 + 68928) |= 0x200u;
  if ( *(_QWORD *)(W32GetUserSessionState(v69, v68, v70) + 42608) )
  {
    v74 = *(char **)(W32GetUserSessionState(v72, v71, v73) + 42608);
    v78 = W32GetUserSessionState(v76, v75, v77);
    NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
      (NSInstrumentation::CLeakTrackingAllocator *)(v78 + 72016),
      v74);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v72, v71, v73) + 19832) )
  {
    v82 = W32GetUserSessionState(v80, v79, v81);
    UserTypeIsolationAllocators::Destroy(*(UserTypeIsolationAllocators **)(v82 + 19832));
    v86 = W32GetUserSessionState(v84, v83, v85);
    GreDeleteFastMutex(*(char **)(v86 + 19832), v87, v88, v89);
    *(_QWORD *)(W32GetUserSessionState(v91, v90, v92) + 19832) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v80, v79, v81) + 71272) )
  {
    v96 = W32GetUserSessionState(v94, v93, v95);
    ObfDereferenceObject(*(PVOID *)(v96 + 71272));
    *(_QWORD *)(W32GetUserSessionState(v98, v97, v99) + 71272) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v94, v93, v95) + 19872) )
  {
    *(_QWORD *)(W32GetUserSessionState(v101, v100, v102) + 19904) = 0LL;
    if ( *(_QWORD *)(W32GetUserSessionState(v104, v103, v105) + 19888) )
    {
      v109 = W32GetUserSessionState(v107, v106, v108);
      RtlDestroyHeap(*(PVOID *)(v109 + 19896));
      v113 = W32GetUserSessionState(v111, v110, v112);
      MmUnmapViewInSessionSpace(*(PVOID *)(v113 + 19888));
    }
    v114 = W32GetUserSessionState(v107, v106, v108);
    ObfDereferenceObject(*(PVOID *)(v114 + 19872));
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v101, v100, v102) + 56968) )
  {
    v118 = W32GetUserSessionState(v116, v115, v117);
    GreDeleteFastMutex(*(char **)(v118 + 56968), v119, v120, v121);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v116, v115, v117) + 62912) )
  {
    v125 = W32GetUserSessionState(v123, v122, v124);
    GreDeleteFastMutex(*(char **)(v125 + 62912), v126, v127, v128);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v123, v122, v124) + 19880) )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v130, v129, v131) + 19864) )
    {
      v135 = W32GetUserSessionState(v133, v132, v134);
      MmUnmapViewInSessionSpace(*(PVOID *)(v135 + 19864));
    }
    v136 = W32GetUserSessionState(v133, v132, v134);
    ObfDereferenceObject(*(PVOID *)(v136 + 19880));
  }
  v138 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v130) + 48);
  v140 = *(int (**)(void))(v138 + 296);
  if ( v140 )
  {
    if ( v140() >= 0 )
    {
      v141 = W32GetUserSessionState(v138, v137, v139) + 66032;
      v137 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v142) + 48);
      v143 = *(void (__fastcall **)(__int64))(v137 + 304);
      if ( v143 )
        v143(v141);
    }
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v138, v137, v139) + 69856) )
  {
    v147 = W32GetUserSessionState(v145, v144, v146);
    v148 = *(char **)(v147 + 19376);
    if ( v148 )
    {
      v149 = W32GetUserSessionState(v145, v144, v146);
      NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
        (NSInstrumentation::CLeakTrackingAllocator *)(v149 + 72016),
        v148);
      *(_QWORD *)(v147 + 19376) = 0LL;
    }
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v145, v144, v146) + 14488) )
  {
    v154 = *(CAsyncKeyEventMonitor **)(W32GetUserSessionState(v151, v150, v152) + 14488);
    if ( v154 )
      CAsyncKeyEventMonitor::`scalar deleting destructor'(v154, v153);
    *(_QWORD *)(W32GetUserSessionState((_DWORD)v154, v153, v155) + 14488) = 0LL;
  }
  v156 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v151) + 48) + 312LL);
  if ( v156 )
  {
    if ( v156() >= 0 )
    {
      v158 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v157) + 48) + 320LL);
      if ( v158 )
        v158();
    }
  }
  if ( (unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline() )
  {
    v162 = W32GetUserSessionState(v160, v159, v161);
    v163 = *(char **)(v162 + 72168);
    if ( v163 )
    {
      CoreMessagingKPort::CloseCoreMsgPort(*(HANDLE **)(v162 + 72168));
      GreDeleteFastMutex(v163, v164, v165, v166);
    }
  }
  CoreMsgUninitialize(v160, v159, v161);
  RIMUnInitialize(v168, v167, v169);
  if ( *(_QWORD *)(W32GetUserSessionState(v171, v170, v172) + 42560) )
  {
    v176 = W32GetUserSessionState(v174, v173, v175);
    ExFreePoolWithTag(*(PVOID *)(v176 + 42560), 0);
    *(_QWORD *)(W32GetUserSessionState(v178, v177, v179) + 42560) = 0LL;
  }
  FreeWin32KSyscallFilter(v174, v173, v175);
  v183 = W32GetUserSessionState(v181, v180, v182);
  v187 = v183;
  v188 = *(char **)(v183 + 41344);
  if ( v188 )
  {
    CQoSReport::~CQoSReport(*(CQoSReport ***)(v183 + 41344));
    GreDeleteFastMutex(v188, v189, v190, v191);
  }
  *(_QWORD *)(v187 + 41344) = 0LL;
  UninitializeWin32PoolTracking(v185, v184, v186);
  UninitializeWin32SiloGlobals();
  v195 = gpWin32kDriverObject;
  if ( gpWin32kDriverObject )
  {
    UninitializeBaseWppLog(v193, v192, v194);
    EditionUninitializeWppLogging(v195);
  }
  SessionState = W32GetSessionState(v193);
  FreePerSessionWin32kCall((__int64 *)(SessionState + 152));
  v198 = W32GetSessionState(v197);
  FreeWin32kApiSetTable((PVOID **)(v198 + 152));
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v199);
}
