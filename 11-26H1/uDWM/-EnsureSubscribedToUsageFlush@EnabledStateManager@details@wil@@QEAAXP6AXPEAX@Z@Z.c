/*
 * XREFs of ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x180078314
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility_2@@@details@wil@@QEAA_NXZ @ 0x1800390FC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibili.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800399C0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(RTL_SRWLOCK *this, void (*a2)(void *))
{
  RTL_SRWLOCK *v3; // rdi
  RTL_SRWLOCK *v4; // rcx
  void (__fastcall *v5)(RTL_SRWLOCK *, __int64 (__fastcall *)(), __int64); // rax

  if ( LOBYTE(this->Ptr) )
  {
    v3 = this + 1;
    AcquireSRWLockExclusive(this + 1);
    v4 = this + 5;
    if ( !this[5].Ptr )
    {
      v4->Ptr = 0LL;
      v5 = (void (__fastcall *)(RTL_SRWLOCK *, __int64 (__fastcall *)(), __int64))g_wil_details_internalSubscribeFeatureStateChangeNotification;
      if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
        || (v5 = (void (__fastcall *)(RTL_SRWLOCK *, __int64 (__fastcall *)(), __int64))g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
      {
        v5(v4, `wil::details::RecordFeatureUsageCallback'::`17'::_lambda_1_::_lambda_invoker_cdecl_, -1LL);
      }
    }
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
  }
}
