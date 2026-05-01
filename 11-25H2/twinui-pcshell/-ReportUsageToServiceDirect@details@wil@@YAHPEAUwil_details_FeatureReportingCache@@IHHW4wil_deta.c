/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x1800713A0
 * Callers:
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800BCE18 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuit.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@wil@@QEAAX_NW4Variant_AutoGamePowerProfile@@W4VariantReportingKind@3@_K@Z @ 0x1801CC1C0 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@wil.c)
 *     ?ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HEIW4wil_VariantReportingKind@@_K@Z @ 0x18021D6A0 (-ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATU.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180015918 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1800730B8 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@AEA_N_J@Z @ 0x1801D6DBC (-EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV-$unique_any_t@V-$unique_storage@U-$resource_.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1801F5EDC (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x180287020 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _invalid_parameter_noinfo @ 0x1802D2EE6 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        unsigned __int8 a8)
{
  __int64 v12; // rax
  unsigned int v13; // r9d
  __m128i v14; // xmm1
  unsigned int v15; // r8d
  void (__fastcall *v17)(__int64 *, __int64 (__fastcall *)(void *), __int64); // rax
  _OWORD *v18; // r9
  char *v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // r8
  size_t v22; // r8
  unsigned __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  DWORD LastError; // ebx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int v29; // edx
  const char *v30; // [rsp+20h] [rbp-68h]
  __int128 v31; // [rsp+30h] [rbp-58h]
  __m128i v32; // [rsp+40h] [rbp-48h]
  __int64 v33; // [rsp+60h] [rbp-28h]
  _BYTE v34[24]; // [rsp+68h] [rbp-20h] BYREF

  v12 = wil_details_FeatureReporting_RecordUsageInCache(v34, a1, a5, a6);
  v14 = *(__m128i *)v12;
  v32 = *(__m128i *)v12;
  v33 = *(_QWORD *)(v12 + 16);
  if ( g_wil_details_RecordSRUMFeatureUsage && (a5 - 100 <= 0x31 || !a5) )
  {
    g_wil_details_RecordSRUMFeatureUsage(a2, a5, 1LL);
    v14 = v32;
  }
  if ( _mm_cvtsi128_si32(v14) && !wil::details::g_processShutdownInProgress && wil::details::g_enabledStateManager )
  {
    if ( wil::details::g_pfnDllShutdownInProgress && (unsigned __int8)wil::details::g_pfnDllShutdownInProgress() )
    {
LABEL_30:
      v14 = v32;
      goto LABEL_5;
    }
    AcquireSRWLockExclusive(&SRWLock);
    *(_QWORD *)&v31 = a2;
    *((_QWORD *)&v31 + 1) = a1;
    v18 = qword_1808980E0;
    v19 = (char *)qword_1808980E0 - qword_1808980D8 + 16;
    v20 = qword_1808980E8;
    v21 = qword_1808980E8 - qword_1808980D8;
    if ( (unsigned __int64)v19 >= qword_1808980E8 - qword_1808980D8 )
    {
      v23 = 16LL;
      if ( (unsigned __int64)(2 * v21) > 0x10 )
        v23 = 2 * v21;
      if ( !wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)&qword_1808980D8, v23) )
        goto LABEL_28;
      v20 = qword_1808980E8;
      v18 = qword_1808980E0;
    }
    v22 = 0LL;
    if ( (unsigned __int64)v18 < v20 )
      v22 = v20 - (_QWORD)v18;
    if ( v18 )
    {
      if ( v22 >= 0x10 )
      {
        *v18 = v31;
LABEL_27:
        qword_1808980E0 = (char *)qword_1808980E0 + 16;
LABEL_28:
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
        goto LABEL_30;
      }
      memset_0(v18, 0, v22);
      *(_DWORD *)_o__errno(v25, v24, v26) = 34;
    }
    else
    {
      *(_DWORD *)_o__errno(v19, v20, v22) = 22;
    }
    invalid_parameter_noinfo();
    goto LABEL_27;
  }
LABEL_5:
  v15 = _mm_cvtsi128_si32(_mm_srli_si128(v14, 4));
  if ( v15 )
    wil::details::WilApi_RecordFeatureUsage(
      (wil::details *)a2,
      _mm_cvtsi128_si32(_mm_srli_si128(v14, 8)),
      v15,
      v13,
      v30);
  if ( !(_DWORD)v33 && wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&SRWLock);
    if ( !qword_1808980D0 )
    {
      qword_1808980D0 = 0LL;
      v17 = (void (__fastcall *)(__int64 *, __int64 (__fastcall *)(void *), __int64))g_wil_details_internalSubscribeFeatureStateChangeNotification;
      if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
        || (v17 = (void (__fastcall *)(__int64 *, __int64 (__fastcall *)(void *), __int64))g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
      {
        v17(&qword_1808980D0, _lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_, -1LL);
      }
    }
    ReleaseSRWLockExclusive(&SRWLock);
  }
  if ( a3 )
  {
    v29 = a5 | 0x80000000;
    if ( !a4 )
      v29 = a5;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)a2, v29, 0, v13, v30);
  }
  if ( (_DWORD)v33 )
    return 0LL;
  if ( g_wil_details_realtimeFeatureUsageHook )
    g_wil_details_realtimeFeatureUsageHook(a2, a5, a8);
  return 1LL;
}
