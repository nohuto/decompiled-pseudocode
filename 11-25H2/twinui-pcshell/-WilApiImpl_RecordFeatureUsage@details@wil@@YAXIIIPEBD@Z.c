/*
 * XREFs of ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180129940
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180015918 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180129B74 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180129BAC (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180129FE8 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     ?EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@AEA_N_J@Z @ 0x1801D6DBC (-EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV-$unique_any_t@V-$unique_storage@U-$resource_.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801D7858 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1801E046C (--0last_error_context@wil@@QEAA@XZ.c)
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x1802C34F0 (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x1802C96B8 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x1802CC684 (-FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1802DDC24 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_.c)
 *     wil_RtlStagingConfig_RecordFeatureUsage @ 0x1802DF240 (wil_RtlStagingConfig_RecordFeatureUsage.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::WilApiImpl_RecordFeatureUsage(wil::details *this, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // esi
  unsigned int v5; // ebx
  PSRWLOCK v6; // rdi
  wil *v7; // rcx
  int v8; // eax
  char Ptr; // bl
  struct _TP_TIMER *ThreadpoolTimer; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (unsigned int)this;
  v5 = a2 & 0x7FFFFFFF;
  if ( !(_DWORD)this && !a3 && !v5 )
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
  if ( !a3 && v5 != 254 )
  {
    wil_RtlStagingConfig_RecordFeatureUsage(this, v5, a2 >> 31);
    return;
  }
  if ( wil::details::g_featureStateManager
    && wil::details::FeatureStateManager::EnsureStateData((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager) )
  {
    v6 = qword_180896130;
    if ( v5 == 254 )
    {
      wil::details_abi::FeatureStateData::RecordUsage(qword_180896130);
LABEL_9:
      if ( !wil::ProcessShutdownInProgress(v7) )
      {
        AcquireSRWLockExclusive(&stru_180896138);
        if ( !byte_180896159 )
        {
          if ( !qword_180896148 )
          {
            wil::last_error_context::last_error_context((wil::last_error_context *)v11);
            ThreadpoolTimer = CreateThreadpoolTimer(
                                _lambda_d51448ba32f8ef42e59400edd4566183_::_lambda_invoker_cdecl_,
                                &wil::details::g_featureStateManager,
                                0LL);
            wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
              (struct _TP_TIMER **)&qword_180896148,
              ThreadpoolTimer);
            wil::last_error_context::~last_error_context((wil::last_error_context *)v11);
          }
          wil::details::EnsureCoalescedTimer_SetTimer(&qword_180896148, &byte_180896159, 300000LL);
        }
        ReleaseSRWLockExclusive(&stru_180896138);
      }
      return;
    }
    if ( v5 <= 0xC7 || v5 - 256 <= 0xFF )
    {
      AcquireSRWLockExclusive(qword_180896130);
      if ( v5 <= 7 && (v8 = 204, _bittest(&v8, v5)) || v5 - 256 <= 0x7F )
      {
        wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,0>::RecordUsage((wil::details_abi::RawUsageIndex *)&v6[1]);
        Ptr = (char)v6[8].Ptr;
      }
      else
      {
        Ptr = wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,2>::RecordUsage(
                &v6[9],
                v5,
                v4,
                a3);
      }
      if ( v6 )
        ReleaseSRWLockExclusive(v6);
      if ( Ptr )
        goto LABEL_9;
    }
  }
}
