/*
 * XREFs of ?BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x1801C9118
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180254FE0 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180015918 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x180015980 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ?StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x1801C9424 (-StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 *     ?IsEnabled@StartWindowTelemetry@@SA_NE_K@Z @ 0x1801C9528 (-IsEnabled@StartWindowTelemetry@@SA_NE_K@Z.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802CFC70 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _lambda_a83783e59b865ed65da27ee19c57306c_::operator_void_(__cdecl_)(_TP_CALLBACK_INSTANCE___void____TP_TIMER__) @ 0x180453EF0 (_lambda_a83783e59b865ed65da27ee19c57306c_--operator_void_(__cdecl_)(_TP_CALLBACK_INSTANCE___void.c)
 *     _lambda_ab40e8b3b3327d7f61694ede3d1edceb_::operator_void_(__cdecl_)(_TP_CALLBACK_INSTANCE___void____TP_TIMER__) @ 0x180453F00 (_lambda_ab40e8b3b3327d7f61694ede3d1edceb_--operator_void_(__cdecl_)(_TP_CALLBACK_INSTANCE___void.c)
 *     _lambda_c23ab6b36b36b14039e20549c439c5db_::operator_void_(__cdecl_)(_TP_CALLBACK_INSTANCE___void____TP_TIMER__) @ 0x180453F10 (_lambda_c23ab6b36b36b14039e20549c439c5db_--operator_void_(__cdecl_)(_TP_CALLBACK_INSTANCE___void.c)
 *     _lambda_e9910e39be40877a27e35d4105464f4d_::operator_void_(__cdecl_)(_TP_CALLBACK_INSTANCE___void____TP_TIMER__) @ 0x180453F20 (_lambda_e9910e39be40877a27e35d4105464f4d_--operator_void_(__cdecl_)(_TP_CALLBACK_INSTANCE___void.c)
 */

void __fastcall XamlLauncherState::BeginStartTelemetryTimeout(struct _TP_TIMER **pv)
{
  struct _TP_TIMER **v2; // rbx
  void (__stdcall *v3)(PTP_CALLBACK_INSTANCE, PVOID, PTP_TIMER); // rax
  struct _TP_TIMER *v4; // rax
  const char *v5; // r9
  struct _TP_TIMER *v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int8 v8; // cl
  void (__stdcall *v9)(PTP_CALLBACK_INSTANCE, PVOID, PTP_TIMER); // rax
  PTP_TIMER v10; // rax
  const char *v11; // r9
  struct _TP_TIMER *v12; // rbp
  struct _TP_TIMER *v13; // rsi
  DWORD v14; // ebx
  struct _TP_TIMER *v15; // rcx
  void (__stdcall *v16)(PTP_CALLBACK_INSTANCE, PVOID, PTP_TIMER); // rax
  PTP_TIMER v17; // rax
  const char *v18; // r9
  struct _TP_TIMER *v19; // rbp
  struct _TP_TIMER *v20; // rsi
  struct _TP_TIMER *v21; // rcx
  void (__stdcall *v22)(PTP_CALLBACK_INSTANCE, PVOID, PTP_TIMER); // rax
  PTP_TIMER ThreadpoolTimer; // rax
  const char *v24; // r9
  struct _TP_TIMER *v25; // rbp
  struct _TP_TIMER *v26; // rsi
  struct _TP_TIMER *v27; // rcx
  DWORD v28; // ebx
  DWORD LastError; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  if ( !pv[126] )
  {
    v22 = (void (__stdcall *)(PTP_CALLBACK_INSTANCE, PVOID, PTP_TIMER))lambda_e9910e39be40877a27e35d4105464f4d_::operator_void____cdecl____TP_CALLBACK_INSTANCE___void____TP_TIMER___();
    ThreadpoolTimer = CreateThreadpoolTimer(v22, pv, 0LL);
    v25 = pv[126];
    v26 = ThreadpoolTimer;
    if ( v25 )
    {
      LastError = GetLastError();
      wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v25);
      SetLastError(LastError);
    }
    pv[126] = v26;
    if ( !v26 )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        (void *)0x5DB,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        v24);
    v27 = pv[126];
    if ( v27 )
    {
      pftDueTime = (struct _FILETIME)-20000000LL;
      SetThreadpoolTimer(v27, &pftDueTime, 0, 0x3E8u);
    }
  }
  v2 = pv + 127;
  if ( !pv[127] )
  {
    v3 = (void (__stdcall *)(PTP_CALLBACK_INSTANCE, PVOID, PTP_TIMER))lambda_ab40e8b3b3327d7f61694ede3d1edceb_::operator_void____cdecl____TP_CALLBACK_INSTANCE___void____TP_TIMER___();
    v4 = CreateThreadpoolTimer(v3, pv, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      pv + 127,
      v4);
    if ( !*v2 )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        (void *)0x5F9,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        v5);
    v6 = *v2;
    if ( *v2 )
    {
      pftDueTime = (struct _FILETIME)(-10000000LL * *((unsigned int *)pv + 17));
      SetThreadpoolTimer(v6, &pftDueTime, 0, 0x3E8u);
      if ( StartWindowTelemetry::IsEnabled(v8, v7) )
        XamlLauncherState::StartTrackingCpuUsageOfCriticalProcesses((XamlLauncherState *)pv);
    }
  }
  if ( !pv[128] )
  {
    v16 = (void (__stdcall *)(PTP_CALLBACK_INSTANCE, PVOID, PTP_TIMER))lambda_a83783e59b865ed65da27ee19c57306c_::operator_void____cdecl____TP_CALLBACK_INSTANCE___void____TP_TIMER___();
    v17 = CreateThreadpoolTimer(v16, pv, 0LL);
    v19 = pv[128];
    v20 = v17;
    if ( v19 )
    {
      v28 = GetLastError();
      wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v19);
      SetLastError(v28);
    }
    pv[128] = v20;
    if ( !v20 )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        (void *)0x614,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        v18);
    v21 = pv[128];
    if ( v21 )
    {
      pftDueTime = (struct _FILETIME)-100000000LL;
      SetThreadpoolTimer(v21, &pftDueTime, 0, 0x3E8u);
    }
  }
  if ( !pv[129] )
  {
    v9 = (void (__stdcall *)(PTP_CALLBACK_INSTANCE, PVOID, PTP_TIMER))lambda_c23ab6b36b36b14039e20549c439c5db_::operator_void____cdecl____TP_CALLBACK_INSTANCE___void____TP_TIMER___();
    v10 = CreateThreadpoolTimer(v9, pv, 0LL);
    v12 = pv[129];
    v13 = v10;
    if ( v12 )
    {
      v14 = GetLastError();
      wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v12);
      SetLastError(v14);
    }
    pv[129] = v13;
    if ( !v13 )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        (void *)0x63B,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        v11);
    v15 = pv[129];
    if ( v15 )
    {
      pftDueTime = (struct _FILETIME)-300000000LL;
      SetThreadpoolTimer(v15, &pftDueTime, 0, 0x3E8u);
    }
  }
}
