/*
 * XREFs of ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x180060138
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800352AC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180039850 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHand.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_FixZBandChangeRaceCondition@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18005F628 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_FixZBandChangeRaceConditi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005FC84 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180073188 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementIDKOnDesk.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180015918 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1800730B8 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@AEA_N_J@Z @ 0x1801D6DBC (-EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV-$unique_any_t@V-$unique_storage@U-$resource_.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801D7858 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1801E046C (--0last_error_context@wil@@QEAA@XZ.c)
 *     _invalid_parameter_noinfo @ 0x1802D2EE6 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        char *pv,
        unsigned int a2,
        struct wil_details_FeatureReportingCache *a3)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  _OWORD *v8; // rcx
  size_t v9; // r8
  unsigned __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _TP_TIMER *ThreadpoolTimer; // rax
  __int128 v15; // [rsp+20h] [rbp-18h]
  char v16; // [rsp+40h] [rbp+8h] BYREF

  if ( wil::details::g_processShutdownInProgress
    || !*pv
    || wil::details::g_pfnDllShutdownInProgress && (unsigned __int8)wil::details::g_pfnDllShutdownInProgress() )
  {
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)pv + 1);
  *(_QWORD *)&v15 = a2;
  *((_QWORD *)&v15 + 1) = a3;
  v7 = *((_QWORD *)pv + 8) - *((_QWORD *)pv + 6);
  if ( *((_QWORD *)pv + 7) - *((_QWORD *)pv + 6) + 16LL < v7 )
    goto LABEL_6;
  v10 = 16LL;
  if ( 2 * v7 > 0x10 )
    v10 = 2 * v7;
  if ( wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)(pv + 48), v10) )
  {
LABEL_6:
    v8 = (_OWORD *)*((_QWORD *)pv + 7);
    v9 = (*((_QWORD *)pv + 8) - (_QWORD)v8) & -(__int64)((unsigned __int64)v8 < *((_QWORD *)pv + 8));
    if ( v8 )
    {
      if ( v9 >= 0x10 )
      {
        *v8 = v15;
LABEL_9:
        *((_QWORD *)pv + 7) += 16LL;
        goto LABEL_10;
      }
      memset_0(v8, 0, v9);
      *(_DWORD *)_o__errno(v12, v11, v13) = 34;
    }
    else
    {
      *(_DWORD *)_o__errno(0LL, v6, v9) = 22;
    }
    invalid_parameter_noinfo();
    goto LABEL_9;
  }
LABEL_10:
  if ( !pv[24] )
  {
    if ( !*((_QWORD *)pv + 2) )
    {
      wil::last_error_context::last_error_context((wil::last_error_context *)&v16);
      ThreadpoolTimer = CreateThreadpoolTimer(
                          _lambda_0374aa0a5d1201b2358c6bce99369c58_::_lambda_invoker_cdecl_,
                          pv,
                          0LL);
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
        (struct _TP_TIMER **)pv + 2,
        ThreadpoolTimer);
      wil::last_error_context::~last_error_context((wil::last_error_context *)&v16);
    }
    wil::details::EnsureCoalescedTimer_SetTimer(pv + 16, pv + 24, 300000LL);
  }
  if ( pv != (char *)-8LL )
    ReleaseSRWLockExclusive((PSRWLOCK)pv + 1);
}
