/*
 * XREFs of ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x180058584
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180055F90 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(RTL_SRWLOCK *this, void (*a2)(void *))
{
  RTL_SRWLOCK *v4; // rbx
  RTL_SRWLOCK *v5; // rcx
  void (__fastcall *v6)(RTL_SRWLOCK *, void (*)(void *), __int64); // rax

  if ( LOBYTE(this->Ptr) )
  {
    v4 = this + 1;
    AcquireSRWLockExclusive(this + 1);
    v5 = this + 5;
    if ( !this[5].Ptr )
    {
      v5->Ptr = 0LL;
      v6 = (void (__fastcall *)(RTL_SRWLOCK *, void (*)(void *), __int64))g_wil_details_internalSubscribeFeatureStateChangeNotification;
      if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
        || (v6 = (void (__fastcall *)(RTL_SRWLOCK *, void (*)(void *), __int64))g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
      {
        v6(v5, a2, -1LL);
      }
    }
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
}
