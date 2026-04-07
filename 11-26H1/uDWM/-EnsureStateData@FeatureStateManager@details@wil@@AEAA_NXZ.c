/*
 * XREFs of ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18008C548
 * Callers:
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x18005AF7C (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x18005C1A8 (-SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRI.c)
 *     ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x180091178 (-FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180066D48 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?GetShared@?$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAVFeatureStateData@23@XZ @ 0x18006DE18 (-GetShared@-$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAVFe.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x180079770 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x18008D29C (--0last_error_context@wil@@QEAA@XZ.c)
 */

bool __fastcall wil::details::FeatureStateManager::EnsureStateData(wil::details::FeatureStateManager *this)
{
  __int64 Shared; // rsi
  bool v3; // zf
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF
  char v6; // [rsp+38h] [rbp+10h] BYREF

  if ( !*((_QWORD *)this + 3) )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v6);
    if ( *((_QWORD *)this + 3) )
      Shared = 0LL;
    else
      Shared = wil::details_abi::ProcessLocalStorage<wil::details_abi::FeatureStateData>::GetShared((__int64 *)this + 1);
    AcquireSRWLockExclusive((PSRWLOCK)this + 4);
    v3 = *((_QWORD *)this + 3) == 0LL;
    v5 = (RTL_SRWLOCK *)((char *)this + 32);
    if ( v3 )
      *((_QWORD *)this + 3) = Shared;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v5);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v6);
  }
  return *((_QWORD *)this + 3) != 0LL;
}
