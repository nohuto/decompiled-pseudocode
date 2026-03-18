/*
 * XREFs of W32CalloutDispatchWorker @ 0x1400DB04C
 * Callers:
 *     W32CalloutDispatch @ 0x1400DB030 (W32CalloutDispatch.c)
 * Callees:
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140033190 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140033310 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     IsGreIsCurrentProcessSystemCriticalSupported @ 0x1400842FC (IsGreIsCurrentProcessSystemCriticalSupported.c)
 *     GreIsCurrentProcessSystemCritical @ 0x14008457C (GreIsCurrentProcessSystemCritical.c)
 *     EnterSharedCrit @ 0x14008A250 (EnterSharedCrit.c)
 *     UserGlobalAtomTableCallout @ 0x14009CF40 (UserGlobalAtomTableCallout.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     UserUnsafeIsProcessDwm @ 0x1400CD430 (UserUnsafeIsProcessDwm.c)
 *     ?Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1400E8F8C (-Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z.c)
 *     UserPowerEventCallout @ 0x1400E906C (UserPowerEventCallout.c)
 *     ?OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1400ECC50 (-OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z.c)
 *     CoreMsgObjectCallout @ 0x1400FD334 (CoreMsgObjectCallout.c)
 *     W32pThreadCallout @ 0x140104600 (W32pThreadCallout.c)
 *     ParseWindowStation @ 0x140107AC0 (ParseWindowStation.c)
 *     RIMObjectManagerCallout @ 0x140118F14 (RIMObjectManagerCallout.c)
 *     UserJobCallout @ 0x14012222C (UserJobCallout.c)
 *     ?W32pQuerySubsystemProcess@@YAJPEAU_WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS@@@Z @ 0x14015F620 (-W32pQuerySubsystemProcess@@YAJPEAU_WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS@@@Z.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?vReleaseDwmHitTestWaiters@@YAXXZ @ 0x1401A1E0C (-vReleaseDwmHitTestWaiters@@YAXXZ.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     UserProcessTimerDelayCallout @ 0x1401A750C (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1401A76B0 (UserProcessTimerStatisticsCallout.c)
 *     ?ActivationObjectDelete@@YAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1401A9A98 (-ActivationObjectDelete@@YAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z.c)
 *     ?ActivationObjectOkToClose@@YAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1401A9AE4 (-ActivationObjectOkToClose@@YAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z.c)
 *     ?ActivationObjectOpen@@YAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1401A9B64 (-ActivationObjectOpen@@YAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     UserPowerInfoCallout @ 0x1401B1014 (UserPowerInfoCallout.c)
 *     UserPowerStateCallout @ 0x1401B27F4 (UserPowerStateCallout.c)
 *     IsModerncoreAtomTableSupported @ 0x14023EF58 (IsModerncoreAtomTableSupported.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall W32CalloutDispatchWorker(int a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // edi
  int (*v7)(void); // rax
  int SubsystemProcess; // eax
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  __int64 v12; // rdx
  int (*v13)(void); // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(__int64); // rax
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int (*v20)(void); // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int (*v23)(void); // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int (*v26)(void); // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  int (*v29)(void); // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  void (*v32)(void); // rax
  int (*v33)(void); // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // ebx
  int v37; // ebx
  int v38; // ebx
  int v39; // ebx
  int v40; // ebx
  int v41; // ebx
  int v42; // ebx
  int v43; // ebx
  __int64 v44; // rcx
  int (*v45)(void); // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  int (*v48)(void); // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  int (*v51)(void); // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  int (*v54)(void); // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned int v57; // ebx
  _QWORD *UserSessionState; // rbp
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // r8
  __int64 v70; // rbx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 (*v74)(void); // rax
  int v75; // ebx
  int v76; // ebx
  int v77; // ebx
  _BYTE v78[256]; // [rsp+30h] [rbp-118h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v78);
  v6 = 0;
  if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() < 0
    || !(unsigned int)GreIsCurrentProcessSystemCritical()
    || (unsigned int)a1 < 2 )
  {
    if ( a1 == 1 )
    {
      v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 584LL);
      if ( !v7 || v7() < 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1063LL);
      SubsystemProcess = W32pThreadCallout(*(_QWORD *)(a2 + 16), *(unsigned int *)(a2 + 24));
      goto LABEL_138;
    }
    if ( a1 <= 24 )
    {
      if ( a1 == 24 )
      {
        DxGetProcessInterferenceCount(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
        goto LABEL_139;
      }
      if ( a1 > 11 )
      {
        v36 = a1 - 12;
        if ( !v36 )
        {
          v54 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 824LL);
          if ( !v54 || v54() < 0 )
            goto LABEL_32;
          v16 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v56, v55) + 48) + 832LL);
          goto LABEL_30;
        }
        v37 = v36 - 1;
        if ( !v37 )
        {
          v51 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 976LL);
          if ( !v51 || v51() < 0 )
            goto LABEL_32;
          v16 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v53, v52) + 48) + 984LL);
          goto LABEL_30;
        }
        v38 = v37 - 1;
        if ( !v38 )
        {
          v48 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 992LL);
          if ( !v48 || v48() < 0 )
            goto LABEL_32;
          v16 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v50, v49) + 48) + 1000LL);
          goto LABEL_30;
        }
        v39 = v38 - 1;
        if ( !v39 )
        {
          SubsystemProcess = ParseWindowStation(a2);
          goto LABEL_138;
        }
        v40 = v39 - 1;
        if ( !v40 )
        {
          v45 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 1008LL);
          if ( !v45 || v45() < 0 )
            goto LABEL_32;
          v16 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v47, v46) + 48) + 1016LL);
          goto LABEL_30;
        }
        v41 = v40 - 2;
        if ( !v41 )
        {
          SubsystemProcess = CompositionObject::Open((struct _WIN32_OPENMETHOD_PARAMETERS *)a2);
          goto LABEL_138;
        }
        v42 = v41 - 1;
        if ( !v42 )
        {
          SubsystemProcess = CompositionObject::OkToClose((struct _WIN32_OKAYTOCLOSEMETHOD_PARAMETERS *)a2);
          goto LABEL_138;
        }
        v43 = v42 - 1;
        if ( !v43 )
        {
          SubsystemProcess = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a2 + 24) + 8LL)
                                                                        + 40LL))(
                               *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL),
                               a2);
          goto LABEL_138;
        }
        if ( v43 != 1 )
          goto LABEL_125;
        v44 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL);
        if ( !v44 )
          goto LABEL_139;
        SubsystemProcess = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v44 + 48LL))(v44, a2);
      }
      else
      {
        if ( a1 == 11 )
        {
          v33 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 808LL);
          if ( !v33 || v33() < 0 )
            goto LABEL_32;
          v16 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v35, v34) + 48) + 816LL);
          goto LABEL_30;
        }
        if ( a1 > 6 )
        {
          v17 = a1 - 7;
          if ( !v17 )
          {
            v29 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 24) + 2536LL);
            if ( v29 )
            {
              if ( v29() >= 0 )
              {
                v32 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v31, v30) + 24) + 2544LL);
                if ( v32 )
                  v32();
              }
            }
            goto LABEL_139;
          }
          v18 = v17 - 1;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              if ( v19 != 1 )
                goto LABEL_125;
              v20 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 792LL);
              if ( !v20 || v20() < 0 )
              {
LABEL_32:
                SubsystemProcess = -1073741637;
                goto LABEL_138;
              }
              v16 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v22, v21) + 48) + 800LL);
            }
            else
            {
              v23 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 776LL);
              if ( !v23 || v23() < 0 )
                goto LABEL_32;
              v16 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v25, v24) + 48) + 784LL);
            }
          }
          else
          {
            v26 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 760LL);
            if ( !v26 || v26() < 0 )
              goto LABEL_32;
            v16 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v28, v27) + 48) + 768LL);
          }
LABEL_30:
          if ( v16 )
          {
            SubsystemProcess = v16(a2);
            goto LABEL_138;
          }
          goto LABEL_32;
        }
        if ( a1 != 6 )
        {
          if ( a1 )
          {
            v9 = a1 - 2;
            if ( v9 )
            {
              v10 = v9 - 1;
              if ( !v10 )
              {
                SubsystemProcess = UserPowerEventCallout(a2);
                goto LABEL_138;
              }
              v11 = v10 - 1;
              if ( !v11 )
              {
                SubsystemProcess = UserPowerStateCallout(a2);
                goto LABEL_138;
              }
              if ( v11 == 1 )
              {
                LOBYTE(v4) = *(_BYTE *)(a2 + 20);
                SubsystemProcess = UserPowerInfoCallout(
                                     *(_DWORD *)(a2 + 16),
                                     v4,
                                     *(_DWORD *)(a2 + 24),
                                     *(_QWORD *)(a2 + 32),
                                     *(_DWORD *)(a2 + 40),
                                     *(_QWORD *)(a2 + 48));
                goto LABEL_138;
              }
LABEL_125:
              CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v78);
              return 3221225659LL;
            }
            EnterSharedCrit(1u, 1u);
            *(_QWORD *)(a2 + 16) = UserGlobalAtomTableCallout();
LABEL_25:
            UserSessionSwitchLeaveCritWithNonPaged(0LL, v12);
            goto LABEL_139;
          }
          v13 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 568LL);
          if ( !v13 || v13() < 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1072LL);
          v16 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v15, v14) + 48) + 576LL);
          goto LABEL_30;
        }
        g_UseOldJobLogic = 1;
        if ( (int)IsModerncoreAtomTableSupported() >= 0 )
          goto LABEL_139;
        SubsystemProcess = UserJobCallout(a2);
      }
LABEL_138:
      v6 = SubsystemProcess;
      goto LABEL_139;
    }
    if ( a1 > 35 )
    {
      if ( a1 != 36 )
      {
        if ( a1 != 37 && a1 != 38 && a1 != 39 && a1 != 40 )
        {
          switch ( a1 )
          {
            case ')':
              SubsystemProcess = UserProcessTimerDelayCallout(a2);
              goto LABEL_138;
            case '*':
              SubsystemProcess = UserProcessTimerStatisticsCallout(a2);
              goto LABEL_138;
            case '+':
              DxNotifyProcessFreezeCallout(*(_QWORD *)(a2 + 16));
              goto LABEL_139;
            case ',':
              DxNotifyProcessThawCallout(*(_QWORD *)(a2 + 16));
              goto LABEL_139;
          }
          goto LABEL_125;
        }
        v75 = a1 - 37;
        if ( v75 )
        {
          v76 = v75 - 1;
          if ( v76 )
          {
            v77 = v76 - 1;
            if ( !v77 )
              goto LABEL_139;
            if ( v77 != 1 )
            {
              v6 = -1073741811;
              goto LABEL_139;
            }
            SubsystemProcess = ActivationObjectDelete((struct _WIN32_DELETEMETHOD_PARAMETERS *)a2);
          }
          else
          {
            SubsystemProcess = ActivationObjectOkToClose((struct _WIN32_OKAYTOCLOSEMETHOD_PARAMETERS *)a2);
          }
        }
        else
        {
          SubsystemProcess = ActivationObjectOpen((struct _WIN32_OPENMETHOD_PARAMETERS *)a2);
        }
        goto LABEL_138;
      }
LABEL_97:
      v57 = CoreMsgObjectCallout((unsigned int)a1, a2);
      CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v78);
      return v57;
    }
    if ( a1 == 35 )
      goto LABEL_97;
    if ( a1 <= 30 )
    {
      switch ( a1 )
      {
        case 30:
          goto LABEL_91;
        case 25:
          DxGetGpuUsageStatistics(a2 + 16);
          goto LABEL_139;
        case 26:
          SubsystemProcess = W32pQuerySubsystemProcess((struct _WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS *)a2);
          goto LABEL_138;
      }
      if ( a1 == 27 || (unsigned int)(a1 - 28) <= 1 )
      {
LABEL_91:
        SubsystemProcess = RIMObjectManagerCallout((unsigned int)a1, a2);
        goto LABEL_138;
      }
      goto LABEL_125;
    }
    if ( a1 == 31 )
    {
      v74 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(0LL, v4) + 48) + 2552LL);
      if ( v74 )
      {
        SubsystemProcess = v74();
        goto LABEL_138;
      }
      goto LABEL_32;
    }
    if ( a1 != 32 )
    {
      if ( (unsigned int)(a1 - 33) > 1 )
        goto LABEL_125;
      goto LABEL_97;
    }
    UserSessionState = (_QWORD *)W32GetUserSessionState((unsigned int)(a1 - 32), v4);
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      v60 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
              UserSessionState,
              1LL,
              0LL,
              _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    else
      v60 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0LL);
    v61 = v60;
    UserSessionState[3] = v60;
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v61 )
      {
LABEL_105:
        if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v61) )
        {
          DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
        }
      }
    }
    else if ( v61 )
    {
      *(_BYTE *)(v61 + 1708) = 1;
      goto LABEL_105;
    }
    if ( (unsigned int)UserUnsafeIsProcessDwm(*(_QWORD *)(a2 + 16), v62) )
    {
      if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
      {
        *(_DWORD *)(W32GetUserSessionState(v64, v63) + 18768) = 1;
      }
      else
      {
        if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
        {
          KeEnterCriticalRegion();
          CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
          v68 = W32GetUserSessionState(v67, v66);
          LOBYTE(v69) = 1;
          ExAcquireFastResourceExclusive(*(_QWORD *)(v68 + 16), CurrentThreadWin32Thread + 176, v69);
        }
        vReleaseDwmHitTestWaiters();
        if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
        {
          v70 = PsGetCurrentThreadWin32Thread();
          v73 = W32GetUserSessionState(v72, v71);
          ExReleaseFastResource(*(_QWORD *)(v73 + 16), v70 + 176);
          KeLeaveCriticalRegion();
        }
      }
    }
    goto LABEL_25;
  }
  v6 = -1073740004;
LABEL_139:
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v78);
  return v6;
}
