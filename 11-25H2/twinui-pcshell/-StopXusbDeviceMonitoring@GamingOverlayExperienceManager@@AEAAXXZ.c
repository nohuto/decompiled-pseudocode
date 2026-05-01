/*
 * XREFs of ?StopXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAXXZ @ 0x1803507BC
 * Callers:
 *     ?UnsubscribeFromServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180245C20 (-UnsubscribeFromServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHINSTANCE__@@@Z @ 0x1800C0454 (-reset@-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1?CM_Unregister_Notification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHCMNOTIFICATION__@@@Z @ 0x18020F008 (-reset@-$unique_storage@U-$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1-CM_Unregister_N.c)
 *     ?InternalRelease@?$ComPtr@UIGameInput@@@WRL@Microsoft@@IEAAKXZ @ 0x18029E6C0 (-InternalRelease@-$ComPtr@UIGameInput@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$_Destroy_range@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@YAXPEAUGamepadButtonCollectionTracker@@QEAU1@AEAV?$allocator@UGamepadButtonCollectionTracker@@@0@@Z @ 0x18033D624 (--$_Destroy_range@V-$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@YAXPEAUGamepadButton.c)
 *     ?StopShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1803506B8 (-StopShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@details@wil@@QEAA_NXZ @ 0x180352AF8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@detai.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GamingOverlayExperienceManager::StopXusbDeviceMonitoring(GamingOverlayExperienceManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  GamepadButtonCollectionTracker *v4; // rcx
  GamepadButtonCollectionTracker *v5; // rdx
  RTL_SRWLOCK *v6; // [rsp+20h] [rbp-28h] BYREF
  RTL_SRWLOCK *v7; // [rsp+28h] [rbp-20h] BYREF

  v7 = 0LL;
  wil::AcquireSRWLockExclusive(&v7, (RTL_SRWLOCK *)this + 28);
  wil::details::unique_storage<wil::details::resource_policy<HCMNOTIFICATION__ *,unsigned long (*)(HCMNOTIFICATION__ *),&unsigned long CM_Unregister_Notification(HCMNOTIFICATION__ *),wistd::integral_constant<unsigned __int64,0>,HCMNOTIFICATION__ *,HCMNOTIFICATION__ *,0,std::nullptr_t>>::reset(
    (__int64 *)this + 30,
    0LL);
  v2 = *((_QWORD *)this + 31);
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 32);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v2 + 104LL))(v2, v3, -1LL);
      *((_QWORD *)this + 32) = 0LL;
      if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetImpl'::`2'::impl) )
        GamingOverlayExperienceManager::StopShortPressTimer((__int64)this);
    }
  }
  Microsoft::WRL::ComPtr<IGameInput>::InternalRelease((__int64 *)this + 31);
  *((_QWORD *)this + 34) = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::reset(
    (HMODULE *)this + 33,
    0LL);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetImpl'::`2'::impl) )
  {
    v6 = 0LL;
    wil::AcquireSRWLockExclusive(&v6, (RTL_SRWLOCK *)this + 39);
    v4 = (GamepadButtonCollectionTracker *)*((_QWORD *)this + 40);
    v5 = (GamepadButtonCollectionTracker *)*((_QWORD *)this + 41);
    if ( v4 != v5 )
    {
      std::_Destroy_range<std::allocator<GamepadButtonCollectionTracker>>(v4, v5);
      *((_QWORD *)this + 41) = *((_QWORD *)this + 40);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v6);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
}
