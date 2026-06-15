/*
 * XREFs of ??1CExclusiveModeListener@@UEAA@XZ @ 0x180150A70
 * Callers:
 *     ??_GCExclusiveModeListener@@UEAAPEAXI@Z @ 0x180140870 (--_GCExclusiveModeListener@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800CC874 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ @ 0x180128860 (--1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ.c)
 *     ??1?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180140740 (--1-$_Tree@V-$_Tmap_traits@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator@U-$pair@$$CBU_GU.c)
 *     ?Shutdown@CExclusiveModeListener@@AEAAXXZ @ 0x180151ED8 (-Shutdown@CExclusiveModeListener@@AEAAXXZ.c)
 */

void __fastcall CExclusiveModeListener::~CExclusiveModeListener(struct _RTL_CRITICAL_SECTION *this)
{
  struct wil::details::wnf_subscription_state_base *v2; // rdx
  wil::details *v3; // rcx
  wil::details *DebugInfo; // rcx

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CExclusiveModeListener::`vftable'{for `IInspectable'};
  *(_QWORD *)&this->LockCount = &CExclusiveModeListener::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IMixedRealitySpatialAudioFormatPolicyChange,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  this->OwningThread = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMixedRealitySpatialAudioFormatPolicyChange,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  this->LockSemaphore = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMixedRealitySpatialAudioFormatPolicyChange,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  CExclusiveModeListener::Shutdown((CExclusiveModeListener *)this);
  v3 = *(wil::details **)&this[9].LockCount;
  if ( v3 )
    wil::details::delete_wnf_subscription_state(v3, v2);
  DebugInfo = (wil::details *)this[9].DebugInfo;
  if ( DebugInfo )
    wil::details::delete_wnf_subscription_state(DebugInfo, v2);
  CSpatialAudioResourceManagerTraceLogger::~CSpatialAudioResourceManagerTraceLogger((CSpatialAudioResourceManagerTraceLogger *)&this[4].LockSemaphore);
  std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::~_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>((void **)&this[4].DebugInfo);
  DeleteCriticalSection(this + 2);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&this[1].SpinCount);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMixedRealitySpatialAudioFormatPolicyChange,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMixedRealitySpatialAudioFormatPolicyChange,Microsoft::WRL::FtmBase>((__int64)this);
}
