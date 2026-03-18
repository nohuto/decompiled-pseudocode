/*
 * XREFs of ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140169710
 * Callers:
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140033190 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140033310 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1COPM@@QEAA@XZ @ 0x14006D858 (--1COPM@@QEAA@XZ.c)
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x14006D974 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?IsSessionGlobalsAreaAllocated@Base@Gre@@YA_NXZ @ 0x14006DB80 (-IsSessionGlobalsAreaAllocated@Base@Gre@@YA_NXZ.c)
 *     MultiUserNtGreCleanup @ 0x14006DBA4 (MultiUserNtGreCleanup.c)
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x140083440 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 *     InputUnInitialize @ 0x1400CED9C (InputUnInitialize.c)
 *     CoreMsgUninitialize @ 0x1400FC8A0 (CoreMsgUninitialize.c)
 *     ?UninitializeUserTypeIsolation@@YAXXZ @ 0x14011A8D8 (-UninitializeUserTypeIsolation@@YAXXZ.c)
 *     ?DestroyHandleTableObjects@@YAXXZ @ 0x14013ADE0 (-DestroyHandleTableObjects@@YAXXZ.c)
 *     ??_GCSynchronizationManager@DirectComposition@@IEAAPEAXI@Z @ 0x140144BD4 (--_GCSynchronizationManager@DirectComposition@@IEAAPEAXI@Z.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x14014CA8C (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     ?CleanupDomainLocks@@YAXXZ @ 0x14014CBD0 (-CleanupDomainLocks@@YAXXZ.c)
 *     ?UninitializeWin32SiloGlobals@@YAXXZ @ 0x1401578CC (-UninitializeWin32SiloGlobals@@YAXXZ.c)
 *     ?FreeWin32KSyscallFilter@@YAXXZ @ 0x140158F5C (-FreeWin32KSyscallFilter@@YAXXZ.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x140169E70 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     ?UninitializeWin32PoolTracking@@YAXXZ @ 0x14019A604 (-UninitializeWin32PoolTracking@@YAXXZ.c)
 *     FreePerSessionWin32kCall @ 0x1401A0478 (FreePerSessionWin32kCall.c)
 *     FreeWin32kApiSetTable @ 0x1401A0514 (FreeWin32kApiSetTable.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x1401A7290 (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline @ 0x1401A8878 (Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CloseCoreMsgPort@CoreMessagingKPort@@AEAAXXZ @ 0x1401AABC4 (-CloseCoreMsgPort@CoreMessagingKPort@@AEAAXXZ.c)
 *     ?UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x1401AC1CC (-UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ.c)
 *     ?UninitializeBaseWppLog@@YAXXZ @ 0x1401AF930 (-UninitializeBaseWppLog@@YAXXZ.c)
 *     ??_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z @ 0x1401B7704 (--_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z.c)
 *     RIMUnInitialize @ 0x1401D6C30 (RIMUnInitialize.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1402263CC (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     EditionUninitializeWppLogging @ 0x14023EBE4 (EditionUninitializeWppLogging.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall Win32KBaseDriverUnload(struct _DRIVER_OBJECT *a1, __int64 a2)
{
  char v2; // bl
  bool v3; // di
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int (*v11)(void); // rax
  void (*v12)(void); // rax
  int (*v13)(void); // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  void (*v16)(void); // rax
  unsigned int v17; // edx
  __int64 DCompSessionState; // rbx
  void *v19; // rcx
  struct _ERESOURCE *v20; // rcx
  __int64 v21; // rdx
  DirectComposition::CSynchronizationManager *v22; // rcx
  Gre::Base *v23; // rcx
  int (*v24)(void); // rax
  __int64 v25; // rdx
  void (*v26)(void); // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  OPM *v30; // rbx
  void *v31; // rdx
  Gre::Base *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  _QWORD *v37; // rcx
  __int64 v38; // rcx
  char *v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  char *v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  char *v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  int (*v91)(void); // rax
  __int64 v92; // rbx
  __int64 v93; // rdx
  __int64 v94; // rcx
  void (__fastcall *v95)(__int64); // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rbx
  char *v99; // rdi
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rdx
  CAsyncKeyEventMonitor *v104; // rcx
  int (*v105)(void); // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  void (*v108)(void); // rax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // rax
  char *v113; // rbx
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rbx
  char *v124; // rcx
  __int64 v125; // rcx
  PDRIVER_OBJECT v126; // rbx
  __int64 SessionState; // rax
  __int64 v128; // rcx
  __int64 v129; // rax
  _BYTE v130[256]; // [rsp+40h] [rbp-108h] BYREF

  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || (v2 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v2 = 0;
  }
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      14,
      11,
      (__int64)&WPP_fa6b8f79bf1f3a7ddecd36172dbcfaf7_Traceguids);
  }
  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v130);
  v10 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v8, v7) + 48);
  v11 = *(int (**)(void))(v10 + 4296);
  if ( v11 )
  {
    if ( v11() >= 0 )
    {
      v10 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v10, v9) + 48);
      v12 = *(void (**)(void))(v10 + 4304);
      if ( v12 )
        v12();
    }
  }
  v13 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v10, v9) + 48) + 248LL);
  if ( v13 )
  {
    if ( v13() >= 0 )
    {
      v16 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v15, v14) + 48) + 256LL);
      if ( v16 )
        v16();
    }
  }
  DCompSessionState = W32GetDCompSessionState();
  v19 = *(void **)(DCompSessionState + 16);
  if ( v19 )
    DirectComposition::CConnection::`scalar deleting destructor'(v19, v17);
  v20 = *(struct _ERESOURCE **)(DCompSessionState + 32);
  if ( v20 )
  {
    ExDeleteResourceLite(v20);
    GreDeleteFastMutex(*(char **)(DCompSessionState + 32));
    *(_QWORD *)(DCompSessionState + 32) = 0LL;
  }
  v22 = *(DirectComposition::CSynchronizationManager **)(W32GetDCompSessionState() + 24);
  if ( v22 )
    DirectComposition::CSynchronizationManager::`scalar deleting destructor'(v22);
  v23 = *(Gre::Base **)(W32GetWin32kBaseApiSetTable(v22, v21) + 48);
  v24 = (int (*)(void))*((_QWORD *)v23 + 35);
  if ( v24 )
  {
    if ( v24() >= 0 )
    {
      v23 = *(Gre::Base **)(W32GetWin32kBaseApiSetTable(v23, v25) + 48);
      v26 = (void (*)(void))*((_QWORD *)v23 + 36);
      if ( v26 )
        v26();
    }
  }
  if ( Gre::Base::IsSessionGlobalsAreaAllocated(v23) )
  {
    v29 = *(_QWORD *)(W32GetSessionState(v28) + 88);
    v30 = *(OPM **)(v29 + 3648);
    if ( v30 )
    {
      COPM::~COPM(*(COPM **)(v29 + 3648));
      OPM::OPMFreeMemory(v30, v31);
    }
    *(_QWORD *)(v29 + 3648) = 0LL;
  }
  HYDRA_HINT(128LL, v27);
  MultiUserNtGreCleanup(v32);
  HYDRA_HINT(256LL, v33);
  W32UnregisterSessionProcess();
  if ( *(_QWORD *)(W32GetUserSessionState(v35, v34) + 56968) )
  {
    v37 = (_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v37, v36) + 56968) + 24LL);
    if ( (_QWORD *)*v37 != v37 )
    {
      v38 = *(_QWORD *)(W32GetUserSessionState(v37, v36) + 56968);
      v39 = *(char **)(v38 + 24);
      v41 = *(_QWORD *)(W32GetUserSessionState(v38, v40) + 56968) + 24LL;
      if ( v39 != (char *)v41 )
      {
        do
        {
          v43 = *(char **)v39;
          GreDeleteFastMutex(v39);
          v39 = v43;
          v42 = *(_QWORD *)(W32GetUserSessionState(v45, v44) + 56968) + 24LL;
        }
        while ( v43 != (char *)v42 );
      }
      v37 = (_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v42, v41) + 56968) + 24LL);
      v37[1] = v37;
      *v37 = v37;
    }
  }
  InputUnInitialize((__int64)v37, v36);
  Win32kNtUserCleanup();
  DestroyHandleTableObjects(v47, v46);
  CleanupDomainLocks(v49, v48);
  EnterLeaveCritMitRitHandOffHazard::UnInitialize();
  HYDRA_HINT(512LL, v50);
  if ( *(_QWORD *)(W32GetUserSessionState(v52, v51) + 42584) )
  {
    v55 = *(char **)(W32GetUserSessionState(v54, v53) + 42584);
    v58 = W32GetUserSessionState(v57, v56);
    NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
      (NSInstrumentation::CLeakTrackingAllocator *)(v58 + 72032),
      v55);
  }
  UninitializeUserTypeIsolation(v54, v53);
  if ( *(_QWORD *)(W32GetUserSessionState(v60, v59) + 71288) )
  {
    v63 = W32GetUserSessionState(v62, v61);
    ObfDereferenceObject(*(PVOID *)(v63 + 71288));
    *(_QWORD *)(W32GetUserSessionState(v65, v64) + 71288) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v62, v61) + 19840) )
  {
    *(_QWORD *)(W32GetUserSessionState(v67, v66) + 19872) = 0LL;
    if ( *(_QWORD *)(W32GetUserSessionState(v69, v68) + 19856) )
    {
      v72 = W32GetUserSessionState(v71, v70);
      RtlDestroyHeap(*(PVOID *)(v72 + 19864));
      v75 = W32GetUserSessionState(v74, v73);
      MmUnmapViewInSessionSpace(*(PVOID *)(v75 + 19856));
    }
    v76 = W32GetUserSessionState(v71, v70);
    ObfDereferenceObject(*(PVOID *)(v76 + 19840));
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v67, v66) + 56968) )
  {
    v79 = W32GetUserSessionState(v78, v77);
    GreDeleteFastMutex(*(char **)(v79 + 56968));
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v78, v77) + 62920) )
  {
    v82 = W32GetUserSessionState(v81, v80);
    GreDeleteFastMutex(*(char **)(v82 + 62920));
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v81, v80) + 19848) )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v84, v83) + 19832) )
    {
      v87 = W32GetUserSessionState(v86, v85);
      MmUnmapViewInSessionSpace(*(PVOID *)(v87 + 19832));
    }
    v88 = W32GetUserSessionState(v86, v85);
    ObfDereferenceObject(*(PVOID *)(v88 + 19848));
  }
  v90 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v84, v83) + 48);
  v91 = *(int (**)(void))(v90 + 296);
  if ( v91 )
  {
    if ( v91() >= 0 )
    {
      v92 = W32GetUserSessionState(v90, v89);
      v89 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v94, v93) + 48);
      v95 = *(void (__fastcall **)(__int64))(v89 + 304);
      if ( v95 )
        v95(v92 + 66040);
    }
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v90, v89) + 69864) )
  {
    v98 = W32GetUserSessionState(v97, v96);
    v99 = *(char **)(v98 + 19344);
    if ( v99 )
    {
      v100 = W32GetUserSessionState(v97, v96);
      NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
        (NSInstrumentation::CLeakTrackingAllocator *)(v100 + 72032),
        v99);
      *(_QWORD *)(v98 + 19344) = 0LL;
    }
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v97, v96) + 14496) )
  {
    v104 = *(CAsyncKeyEventMonitor **)(W32GetUserSessionState(v102, v101) + 14496);
    if ( v104 )
      CAsyncKeyEventMonitor::`scalar deleting destructor'(v104, v103);
    *(_QWORD *)(W32GetUserSessionState(v104, v103) + 14496) = 0LL;
  }
  v105 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v102, v101) + 48) + 312LL);
  if ( v105 )
  {
    if ( v105() >= 0 )
    {
      v108 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v107, v106) + 48) + 320LL);
      if ( v108 )
        v108();
    }
  }
  if ( (unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline() )
  {
    v112 = W32GetUserSessionState(v110, v109);
    v113 = *(char **)(v112 + 72184);
    if ( v113 )
    {
      CoreMessagingKPort::CloseCoreMsgPort(*(CoreMessagingKPort **)(v112 + 72184));
      GreDeleteFastMutex(v113);
    }
  }
  CoreMsgUninitialize(v110, v109, v111);
  RIMUnInitialize();
  if ( *(_QWORD *)(W32GetUserSessionState(v115, v114) + 42536) )
  {
    v118 = W32GetUserSessionState(v117, v116);
    ExFreePoolWithTag(*(PVOID *)(v118 + 42536), 0);
    *(_QWORD *)(W32GetUserSessionState(v120, v119) + 42536) = 0LL;
  }
  FreeWin32KSyscallFilter(v117, v116);
  if ( (unsigned int)Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline() )
  {
    v123 = W32GetUserSessionState(v122, v121);
    v124 = *(char **)(v123 + 41304);
    if ( v124 )
      GreDeleteFastMutex(v124);
    *(_QWORD *)(v123 + 41304) = 0LL;
  }
  UninitializeWin32PoolTracking();
  UninitializeWin32SiloGlobals();
  v126 = gpWin32kDriverObject;
  if ( gpWin32kDriverObject )
  {
    UninitializeBaseWppLog();
    EditionUninitializeWppLogging(v126);
  }
  SessionState = W32GetSessionState(v125);
  FreePerSessionWin32kCall(SessionState + 152);
  v129 = W32GetSessionState(v128);
  FreeWin32kApiSetTable(v129 + 152);
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v130);
}
