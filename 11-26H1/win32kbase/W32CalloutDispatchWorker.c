/*
 * XREFs of W32CalloutDispatchWorker @ 0x140120DDC
 * Callers:
 *     W32CalloutDispatch @ 0x140120DC0 (W32CalloutDispatch.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140059BB8 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400910B4 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     IsGreIsCurrentProcessSystemCriticalSupported @ 0x14009124C (IsGreIsCurrentProcessSystemCriticalSupported.c)
 *     GreIsCurrentProcessSystemCritical @ 0x140091444 (GreIsCurrentProcessSystemCritical.c)
 *     UserUnsafeIsProcessDwm @ 0x1400D7D90 (UserUnsafeIsProcessDwm.c)
 *     CoreMsgObjectCallout @ 0x1400D83A0 (CoreMsgObjectCallout.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserPowerStateCallout @ 0x1401118A8 (UserPowerStateCallout.c)
 *     UserPowerEventCallout @ 0x140111CEC (UserPowerEventCallout.c)
 *     RIMObjectManagerCallout @ 0x140130A5C (RIMObjectManagerCallout.c)
 *     ?Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x140133DE8 (-Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z.c)
 *     ?OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x140134E54 (-OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z.c)
 *     W32pThreadCallout @ 0x14014268C (W32pThreadCallout.c)
 *     ParseWindowStation @ 0x1401435D0 (ParseWindowStation.c)
 *     UserJobCallout @ 0x14015E1E8 (UserJobCallout.c)
 *     ?W32pQuerySubsystemProcess@@YAJPEAU_WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS@@@Z @ 0x1401A3414 (-W32pQuerySubsystemProcess@@YAJPEAU_WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS@@@Z.c)
 *     UserPowerInfoCallout @ 0x1401A8D3C (UserPowerInfoCallout.c)
 *     UserGlobalAtomTableCallout @ 0x1401AAD60 (UserGlobalAtomTableCallout.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?vReleaseDwmHitTestWaiters@@YAXXZ @ 0x1401C5BEC (-vReleaseDwmHitTestWaiters@@YAXXZ.c)
 *     UserProcessTimerDelayCallout @ 0x1401CAD8C (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1401CAEB4 (UserProcessTimerStatisticsCallout.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall W32CalloutDispatchWorker(signed int a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edi
  int (*v10)(void); // rax
  int SubsystemProcess; // eax
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int (*v19)(void); // rax
  __int64 v20; // rcx
  __int64 (__fastcall *v21)(__int64); // rax
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int (*v25)(void); // rax
  __int64 v26; // rcx
  void (*v27)(void); // rax
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  int v31; // ebx
  int v32; // ebx
  int v33; // ebx
  int v34; // ebx
  int v35; // ebx
  __int64 v36; // rcx
  unsigned int v37; // ebx
  _QWORD *UserSessionState; // rbx
  __int64 v40; // rax
  int v41; // edx
  int v42; // r8d
  __int64 CurrentProcessWin32Process; // rax
  int v44; // edx
  int v45; // ecx
  int v46; // r8d
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 CurrentThreadWin32Thread; // rbx
  int v50; // edx
  int v51; // ecx
  int v52; // r8d
  __int64 v53; // rax
  __int64 v54; // r8
  __int64 v55; // rbx
  int v56; // edx
  int v57; // ecx
  int v58; // r8d
  __int64 v59; // rax
  __int64 (*v60)(void); // rax
  _BYTE v61[256]; // [rsp+30h] [rbp-108h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v61);
  v9 = 0;
  if ( (int)IsGreIsCurrentProcessSystemCriticalSupported(v4) < 0
    || !(unsigned int)GreIsCurrentProcessSystemCritical(v6)
    || !a1 )
  {
    if ( a1 == 1 )
    {
LABEL_7:
      v10 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48) + 576LL);
      if ( !v10 || v10() < 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1055LL);
      SubsystemProcess = W32pThreadCallout(*(_QWORD *)(a2 + 16), *(unsigned int *)(a2 + 24));
      goto LABEL_112;
    }
    if ( a1 <= 24 )
    {
      if ( a1 == 24 )
      {
        DxGetProcessInterferenceCount(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
        goto LABEL_113;
      }
      if ( a1 > 11 )
      {
        v28 = a1 - 12;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( v29 )
          {
            v30 = v29 - 1;
            if ( v30 )
            {
              v31 = v30 - 1;
              if ( !v31 )
              {
                SubsystemProcess = ParseWindowStation(a2);
                goto LABEL_112;
              }
              v32 = v31 - 1;
              if ( v32 )
              {
                v33 = v32 - 2;
                if ( !v33 )
                {
                  SubsystemProcess = CompositionObject::Open((struct _WIN32_OPENMETHOD_PARAMETERS *)a2);
                  goto LABEL_112;
                }
                v34 = v33 - 1;
                if ( !v34 )
                {
                  SubsystemProcess = CompositionObject::OkToClose((struct _WIN32_OKAYTOCLOSEMETHOD_PARAMETERS *)a2);
                  goto LABEL_112;
                }
                v35 = v34 - 1;
                if ( !v35 )
                {
                  SubsystemProcess = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a2 + 24)
                                                                                              + 8LL)
                                                                                + 40LL))(
                                       *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL),
                                       a2);
                  goto LABEL_112;
                }
                if ( v35 == 1 )
                {
                  v36 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL);
                  if ( !v36 )
                    goto LABEL_113;
                  SubsystemProcess = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v36 + 48LL))(v36, a2);
LABEL_112:
                  v9 = SubsystemProcess;
                  goto LABEL_113;
                }
LABEL_107:
                CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v61);
                return 3221225659LL;
              }
              v21 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48) + 824LL);
            }
            else
            {
              v21 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48) + 816LL);
            }
          }
          else
          {
            v21 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48) + 808LL);
          }
        }
        else
        {
          v21 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48) + 744LL);
        }
      }
      else if ( a1 == 11 )
      {
        v21 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48) + 736LL);
      }
      else if ( a1 > 6 )
      {
        v22 = a1 - 7;
        if ( !v22 )
        {
          v25 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 24) + 2560LL);
          if ( v25 )
          {
            if ( v25() >= 0 )
            {
              v27 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v26) + 24) + 2568LL);
              if ( v27 )
                v27();
            }
          }
          goto LABEL_113;
        }
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            if ( v24 != 1 )
              goto LABEL_107;
            v21 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48) + 728LL);
          }
          else
          {
            v21 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48) + 720LL);
          }
        }
        else
        {
          v21 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48) + 712LL);
        }
      }
      else
      {
        if ( a1 == 6 )
        {
          SubsystemProcess = UserJobCallout(a2);
          goto LABEL_112;
        }
        if ( a1 )
        {
          v12 = a1 - 2;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( !v13 )
            {
              SubsystemProcess = UserPowerEventCallout(a2, v5, v7);
              goto LABEL_112;
            }
            v14 = v13 - 1;
            if ( !v14 )
            {
              SubsystemProcess = UserPowerStateCallout(a2, v5, v7);
              goto LABEL_112;
            }
            if ( v14 == 1 )
            {
              LOBYTE(v5) = *(_BYTE *)(a2 + 20);
              SubsystemProcess = UserPowerInfoCallout(
                                   *(_DWORD *)(a2 + 16),
                                   v5,
                                   *(_DWORD *)(a2 + 24),
                                   *(_QWORD *)(a2 + 32),
                                   *(_DWORD *)(a2 + 40),
                                   *(_QWORD *)(a2 + 48));
              goto LABEL_112;
            }
            goto LABEL_107;
          }
          EnterSharedCrit(1LL, 1LL, v7, v8);
          *(_QWORD *)(a2 + 16) = UserGlobalAtomTableCallout();
LABEL_26:
          UserSessionSwitchLeaveCritWithNonPaged(v16, v15, v17, v18);
          goto LABEL_113;
        }
        v19 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48) + 560LL);
        if ( !v19 || v19() < 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1064LL);
        v21 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v20) + 48) + 568LL);
      }
      if ( v21 )
      {
        SubsystemProcess = v21(a2);
        goto LABEL_112;
      }
LABEL_33:
      SubsystemProcess = -1073741637;
      goto LABEL_112;
    }
    if ( a1 > 35 )
    {
      if ( a1 != 36 )
      {
        switch ( a1 )
        {
          case '%':
          case '&':
          case '\'':
          case '(':
            KeBugCheckEx(0x164u, 0x12uLL, 0LL, 0LL, 0LL);
          case ')':
            SubsystemProcess = UserProcessTimerDelayCallout(a2);
            goto LABEL_112;
          case '*':
            SubsystemProcess = UserProcessTimerStatisticsCallout(a2);
            goto LABEL_112;
          case '+':
            DxNotifyProcessFreezeCallout(*(_QWORD *)(a2 + 16));
            goto LABEL_113;
          case ',':
            DxNotifyProcessThawCallout(*(_QWORD *)(a2 + 16));
            goto LABEL_113;
        }
        goto LABEL_107;
      }
    }
    else if ( a1 != 35 )
    {
      if ( a1 <= 30 )
      {
        switch ( a1 )
        {
          case 30:
            goto LABEL_75;
          case 25:
            DxGetGpuUsageStatistics(a2 + 16);
            goto LABEL_113;
          case 26:
            SubsystemProcess = W32pQuerySubsystemProcess((struct _WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS *)a2);
            goto LABEL_112;
        }
        if ( a1 == 27 || (unsigned int)(a1 - 28) <= 1 )
        {
LABEL_75:
          SubsystemProcess = RIMObjectManagerCallout((unsigned int)a1, a2);
          goto LABEL_112;
        }
        goto LABEL_107;
      }
      if ( a1 == 31 )
      {
        v60 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(0LL) + 48) + 2192LL);
        if ( v60 )
        {
          SubsystemProcess = v60();
          goto LABEL_112;
        }
        goto LABEL_33;
      }
      if ( a1 == 32 )
      {
        UserSessionState = (_QWORD *)W32GetUserSessionState(0, v5, v7);
        v40 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                UserSessionState,
                1LL,
                0LL,
                _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
        UserSessionState[3] = v40;
        if ( v40 )
        {
          if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v40 + 520), 0, 0) & 0x1000000) != 0
            && *(char *)(v40 + 1360) >= 0 )
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v40);
            if ( CurrentProcessWin32Process )
            {
              if ( *(_QWORD *)CurrentProcessWin32Process && *(_BYTE *)(CurrentProcessWin32Process + 1200) == 1 )
              {
                DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v41, v42);
                DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
                DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
              }
            }
          }
        }
        if ( (unsigned int)UserUnsafeIsProcessDwm(*(_QWORD *)(a2 + 16), v41, v42) )
        {
          if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
          {
            *(_DWORD *)(W32GetUserSessionState(v45, v44, v46) + 18816) = 1;
          }
          else
          {
            if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
            {
              KeEnterCriticalRegion();
              CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v48, v47);
              v53 = W32GetUserSessionState(v51, v50, v52);
              LOBYTE(v54) = 1;
              ExAcquireFastResourceExclusive(*(_QWORD *)(v53 + 16), CurrentThreadWin32Thread + 176, v54);
            }
            vReleaseDwmHitTestWaiters();
            if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
            {
              v55 = PsGetCurrentThreadWin32Thread(v16, v15);
              v59 = W32GetUserSessionState(v57, v56, v58);
              ExReleaseFastResource(*(_QWORD *)(v59 + 16), v55 + 176);
              KeLeaveCriticalRegion();
            }
          }
        }
        goto LABEL_26;
      }
      if ( (unsigned int)(a1 - 33) > 1 )
        goto LABEL_107;
    }
    v37 = CoreMsgObjectCallout(a1, a2);
    CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v61);
    return v37;
  }
  if ( a1 == 1 )
    goto LABEL_7;
  v9 = -1073740004;
LABEL_113:
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v61);
  return v9;
}
