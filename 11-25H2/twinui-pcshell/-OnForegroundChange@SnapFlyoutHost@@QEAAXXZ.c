/*
 * XREFs of ?OnForegroundChange@SnapFlyoutHost@@QEAAXXZ @ 0x180590660
 * Callers:
 *     ?OnShellHookMessage@CShellSnapComponent@@UEAAJ_K_J@Z @ 0x180027D00 (-OnShellHookMessage@CShellSnapComponent@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$TryGetVisibleFlyoutInstance@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801EE850 (--$TryGetVisibleFlyoutInstance@V-$unique_any_t@V-$unique_storage@U-$resource_policy_ea_1801EE850.c)
 *     ?InternalShutdownAsync@SnapFlyoutHost@@AEAA?AUfire_and_forget@winrt@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801FF8BC (-InternalShutdownAsync@SnapFlyoutHost@@AEAA-AUfire_and_forget@winrt@@AEBV-$unique_any_t@V-$uniqu.c)
 *     ?SnapFlyout_OnForegroundChange@SnapFlyoutTelemetry@@SAXXZ @ 0x180590EC8 (-SnapFlyout_OnForegroundChange@SnapFlyoutTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SnapFlyoutHost::OnForegroundChange(RTL_SRWLOCK *this)
{
  __int64 v2; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v3; // [rsp+28h] [rbp-10h]
  char v4; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v5; // [rsp+48h] [rbp+10h] BYREF

  SnapFlyoutTelemetry::SnapFlyout_OnForegroundChange();
  wil::AcquireSRWLockExclusive(&v5, this + 22);
  SnapFlyoutHost::TryGetVisibleFlyoutInstance<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>>(
    (__int64)this,
    &v2);
  if ( v2 && !*(_BYTE *)(*(_QWORD *)(v2 + 8) + 338LL) )
    SnapFlyoutHost::InternalShutdownAsync((__int64)this, (__int64)&v4, (__int64)&v5);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
}
