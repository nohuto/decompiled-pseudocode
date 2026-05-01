/*
 * XREFs of ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180005820
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180005A84 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180006384 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180008660 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@AEA_N_J@Z @ 0x18000E370 (-EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV-$unique_any_t@V-$unique_storage@U-$resource_.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180012700 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800161EC (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_.c)
 *     wil_RtlStagingConfig_RecordFeatureUsage @ 0x180016AC0 (wil_RtlStagingConfig_RecordFeatureUsage.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::WilApiImpl_RecordFeatureUsage(wil::details *this, __int64 a2, unsigned int a3)
{
  unsigned int v4; // esi
  unsigned int v5; // r8d
  __int64 v6; // r8
  unsigned int v7; // ebx
  PSRWLOCK v8; // rdi
  int v9; // eax
  char Ptr; // bl
  DWORD LastError; // ebx
  PTP_TIMER ThreadpoolTimer; // rax

  v4 = (unsigned int)this;
  v5 = a2;
  LODWORD(a2) = a2 & 0x7FFFFFFF;
  v6 = v5 >> 31;
  v7 = a2;
  if ( !(_DWORD)this && !a3 && !(_DWORD)a2 )
  {
    wil::details::FeatureStateManager::FlushUsage((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager);
    return;
  }
  if ( (a2 & 0x40000000) != 0 )
  {
    wil::details::FeatureStateManager::QueueBackgroundSRUMUsageReporting(
      &wil::details::g_featureStateManager,
      (unsigned int)this,
      a2,
      a3);
    return;
  }
  if ( !a3 && (_DWORD)a2 != 254 )
  {
    wil_RtlStagingConfig_RecordFeatureUsage(this, a2, v6);
    return;
  }
  if ( wil::details::g_featureStateManager
    && wil::details::FeatureStateManager::EnsureStateData((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager) )
  {
    v8 = SRWLock;
    if ( v7 == 254 )
    {
      wil::details_abi::FeatureStateData::RecordUsage(SRWLock);
LABEL_14:
      if ( !wil::details::g_processShutdownInProgress
        && (!wil::details::g_pfnDllShutdownInProgress || !(unsigned __int8)wil::details::g_pfnDllShutdownInProgress()) )
      {
        AcquireSRWLockExclusive(&stru_18002D150);
        if ( !byte_18002D171 )
        {
          if ( !qword_18002D160 )
          {
            LastError = GetLastError();
            ThreadpoolTimer = CreateThreadpoolTimer(
                                _lambda_d51448ba32f8ef42e59400edd4566183_::_lambda_invoker_cdecl_,
                                &wil::details::g_featureStateManager,
                                0LL);
            wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
              &qword_18002D160,
              ThreadpoolTimer);
            SetLastError(LastError);
          }
          wil::details::EnsureCoalescedTimer_SetTimer(&qword_18002D160, &byte_18002D171, 300000LL);
        }
        ReleaseSRWLockExclusive(&stru_18002D150);
      }
      return;
    }
    if ( v7 <= 0xC7 || v7 - 256 <= 0xFF )
    {
      AcquireSRWLockExclusive(SRWLock);
      if ( v7 <= 7 && (v9 = 204, _bittest(&v9, v7)) || v7 - 256 <= 0x7F )
      {
        wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,0>::RecordUsage((wil::details_abi::RawUsageIndex *)&v8[1]);
        Ptr = (char)v8[8].Ptr;
      }
      else
      {
        Ptr = wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,2>::RecordUsage(
                &v8[9],
                v7,
                v4,
                a3);
      }
      if ( v8 )
        ReleaseSRWLockExclusive(v8);
      if ( Ptr )
        goto LABEL_14;
    }
  }
}
