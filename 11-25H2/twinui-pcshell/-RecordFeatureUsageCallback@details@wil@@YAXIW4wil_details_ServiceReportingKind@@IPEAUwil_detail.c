/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180072DF0
 * Callers:
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180071FDC (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnD.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementInProc@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180072498 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementInProc@@@.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800727FC (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApp.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180015918 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1800730B8 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@AEA_N_J@Z @ 0x1801D6DBC (-EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV-$unique_any_t@V-$unique_storage@U-$resource_.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1801F5EDC (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     _invalid_parameter_noinfo @ 0x1802D2EE6 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall wil::details::RecordFeatureUsageCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  unsigned int v6; // esi
  unsigned int v7; // r8d
  void (__fastcall *v8)(__int64 *, __int64 (__fastcall *)(void *), __int64); // rax
  _OWORD *v9; // r9
  char *v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  size_t v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  DWORD LastError; // edi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  __int128 v20; // [rsp+20h] [rbp-18h]

  v6 = a1;
  if ( g_wil_details_RecordSRUMFeatureUsage && ((unsigned int)(a2 - 100) <= 0x31 || !(_DWORD)a2) )
    g_wil_details_RecordSRUMFeatureUsage(a1, a2, 1LL);
  if ( *a5
    && !wil::details::g_processShutdownInProgress
    && wil::details::g_enabledStateManager
    && (!wil::details::g_pfnDllShutdownInProgress || !(unsigned __int8)wil::details::g_pfnDllShutdownInProgress()) )
  {
    AcquireSRWLockExclusive(&SRWLock);
    *(_QWORD *)&v20 = v6;
    *((_QWORD *)&v20 + 1) = a4;
    v9 = qword_1808980E0;
    v10 = (char *)qword_1808980E0 - qword_1808980D8 + 16;
    v11 = qword_1808980E8;
    v12 = qword_1808980E8 - qword_1808980D8;
    if ( (unsigned __int64)v10 >= qword_1808980E8 - qword_1808980D8 )
    {
      v14 = 16LL;
      if ( (unsigned __int64)(2 * v12) > 0x10 )
        v14 = 2 * v12;
      if ( !wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)&qword_1808980D8, v14) )
        goto LABEL_25;
      v11 = qword_1808980E8;
      v9 = qword_1808980E0;
    }
    v13 = 0LL;
    if ( (unsigned __int64)v9 < v11 )
      v13 = v11 - (_QWORD)v9;
    if ( v9 )
    {
      if ( v13 >= 0x10 )
      {
        *v9 = v20;
LABEL_24:
        qword_1808980E0 = (char *)qword_1808980E0 + 16;
LABEL_25:
        if ( !byte_1808980C0 )
        {
          if ( !qword_1808980B8 )
          {
            LastError = GetLastError();
            ThreadpoolTimer = CreateThreadpoolTimer(
                                _lambda_0374aa0a5d1201b2358c6bce99369c58_::_lambda_invoker_cdecl_,
                                &wil::details::g_enabledStateManager,
                                0LL);
            wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
              (struct _TP_TIMER **)&qword_1808980B8,
              ThreadpoolTimer);
            SetLastError(LastError);
          }
          wil::details::EnsureCoalescedTimer_SetTimer(&qword_1808980B8, &byte_1808980C0, 300000LL);
        }
        ReleaseSRWLockExclusive(&SRWLock);
        goto LABEL_5;
      }
      memset_0(v9, 0, v13);
      *(_DWORD *)_o__errno(v16, v15, v17) = 34;
    }
    else
    {
      *(_DWORD *)_o__errno(v10, v11, v13) = 22;
    }
    invalid_parameter_noinfo();
    goto LABEL_24;
  }
LABEL_5:
  v7 = a5[1];
  if ( v7 )
    wil::details::WilApi_RecordFeatureUsage((wil::details *)v6, a5[2], v7, a4, (const char *)v20);
  if ( !a5[4] && wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&SRWLock);
    if ( !qword_1808980D0 )
    {
      qword_1808980D0 = 0LL;
      v8 = (void (__fastcall *)(__int64 *, __int64 (__fastcall *)(void *), __int64))g_wil_details_internalSubscribeFeatureStateChangeNotification;
      if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
        || (v8 = (void (__fastcall *)(__int64 *, __int64 (__fastcall *)(void *), __int64))g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
      {
        v8(&qword_1808980D0, _lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_, -1LL);
      }
    }
    ReleaseSRWLockExclusive(&SRWLock);
  }
}
