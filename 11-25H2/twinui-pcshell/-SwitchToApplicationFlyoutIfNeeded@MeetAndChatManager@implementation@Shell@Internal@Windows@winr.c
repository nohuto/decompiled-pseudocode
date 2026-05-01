/*
 * XREFs of ?SwitchToApplicationFlyoutIfNeeded@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1805D3324
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x1805D1010 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_1805D1010.c)
 * Callees:
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180028EF8 (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??$CannotSwitchToAppFlyout@AEA_NAEA_NAEAI@MeetAndChatTelemetry@@SAXAEA_N0AEAI@Z @ 0x1805CD78C (--$CannotSwitchToAppFlyout@AEA_NAEA_NAEAI@MeetAndChatTelemetry@@SAXAEA_N0AEAI@Z.c)
 *     ?ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellViewRequestedEventArgs@3UI@WindowsUdk@6@W4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1805D24AC (-ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellVi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::SwitchToApplicationFlyoutIfNeeded(
        RTL_SRWLOCK *this)
{
  std::_Ref_count_base *v2; // rbx
  char v4; // al
  std::_Ref_count_base *v5[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v6; // [rsp+50h] [rbp+20h] BYREF
  char v7; // [rsp+58h] [rbp+28h] BYREF
  int v8; // [rsp+60h] [rbp+30h]

  *(_OWORD *)v5 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)&v6, this + 14);
  std::shared_ptr<FlyoutView>::operator=(v5, &this[24].Ptr);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&v6);
  v2 = v5[0];
  if ( v5[0] )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(std::_Ref_count_base *))v5[0])(v5[0])
      && (*(unsigned int (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)v2 + 24LL))(v2) )
    {
      v6 = 0LL;
      winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::ShowMACFlyout(this, &v6, 0);
      if ( v5[1] )
        std::_Ref_count_base::_Decref(v5[1]);
      return 1;
    }
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  v7 = v4;
  LOBYTE(v6) = 0;
  v8 = 0;
  if ( v4 )
  {
    LOBYTE(v6) = (**(__int64 (__fastcall ***)(std::_Ref_count_base *))v2)(v2);
    v8 = (*(__int64 (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)v2 + 24LL))(v2);
  }
  MeetAndChatTelemetry::CannotSwitchToAppFlyout<bool &,bool &,unsigned int &>((__int64)&v7);
  if ( v5[1] )
    std::_Ref_count_base::_Decref(v5[1]);
  return 0;
}
