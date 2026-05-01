/*
 * XREFs of ?StopXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18035562C
 * Callers:
 *     ?UnsubscribeFromServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180236BA0 (-UnsubscribeFromServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1?CM_Unregister_Notification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHCMNOTIFICATION__@@@Z @ 0x180200E2C (-reset@-$unique_storage@U-$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1-CM_Unregister_N.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$_Destroy_range@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@YAXPEAUGamepadButtonCollectionTracker@@QEAU1@AEAV?$allocator@UGamepadButtonCollectionTracker@@@0@@Z @ 0x18033D35C (--$_Destroy_range@V-$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@YAXPEAUGamepadButton.c)
 *     ?StopGameInputWatcher@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1803552C8 (-StopGameInputWatcher@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 *     ?StopXInputWatcher@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180355574 (-StopXInputWatcher@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@details@wil@@QEAA_NXZ @ 0x180358B40 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprove_ea_180358B40.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GamingOverlayExperienceManager::StopXusbDeviceMonitoring(GamingOverlayExperienceManager *this)
{
  GamepadButtonCollectionTracker *v2; // rdx
  GamepadButtonCollectionTracker *v3; // rcx
  RTL_SRWLOCK *v4; // [rsp+28h] [rbp-20h] BYREF
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0LL;
  wil::AcquireSRWLockExclusive(&v5, (RTL_SRWLOCK *)this + 28);
  wil::details::unique_storage<wil::details::resource_policy<HCMNOTIFICATION__ *,unsigned long (*)(HCMNOTIFICATION__ *),&unsigned long CM_Unregister_Notification(HCMNOTIFICATION__ *),wistd::integral_constant<unsigned __int64,0>,HCMNOTIFICATION__ *,HCMNOTIFICATION__ *,0,std::nullptr_t>>::reset(
    (__int64 *)this + 30,
    0LL);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetImpl'::`2'::impl) )
  {
    GamingOverlayExperienceManager::StopXInputWatcher((__int64)this);
    v4 = 0LL;
    wil::AcquireSRWLockExclusive(&v4, (RTL_SRWLOCK *)this + 44);
    v2 = (GamepadButtonCollectionTracker *)*((_QWORD *)this + 46);
    v3 = (GamepadButtonCollectionTracker *)*((_QWORD *)this + 45);
    if ( v3 != v2 )
    {
      std::_Destroy_range<std::allocator<GamepadButtonCollectionTracker>>(v3, v2);
      *((_QWORD *)this + 46) = *((_QWORD *)this + 45);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v4);
  }
  else
  {
    GamingOverlayExperienceManager::StopGameInputWatcher((__int64)this);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
}
