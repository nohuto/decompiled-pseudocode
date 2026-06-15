/*
 * XREFs of ??1AudioEffectsWatcher@@UEAA@XZ @ 0x1800BED74
 * Callers:
 *     ??_GAudioEffectsWatcher@@UEAAPEAXI@Z @ 0x1800BEFD0 (--_GAudioEffectsWatcher@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180044FE4 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?reset@?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@std@@QEAAXPEAU_WaitTask@@@Z @ 0x1800462F4 (-reset@-$unique_ptr@U_WaitTask@@U-$default_delete@U_WaitTask@@@std@@@std@@QEAAXPEAU_WaitTask@@@Z.c)
 *     ??R?$default_delete@U_WaitTask@@@std@@QEBAXPEAU_WaitTask@@@Z @ 0x18004670C (--R-$default_delete@U_WaitTask@@@std@@QEBAXPEAU_WaitTask@@@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800B2014 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall AudioEffectsWatcher::~AudioEffectsWatcher(AudioEffectsWatcher *this)
{
  PTP_WAIT **v2; // rdi
  __int64 v3; // rcx

  *(_QWORD *)this = &AudioEffectsWatcher::`vftable';
  *((_QWORD *)this + 1) = &AudioEffectsWatcher::`vftable'{for `IAudioEffectsWatcher'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioEffectsWatcher>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  v2 = (PTP_WAIT **)((char *)this + 160);
  std::unique_ptr<_WaitTask>::reset((_WaitTask **)this + 20, 0LL);
  if ( *((_QWORD *)this + 10) )
    ((void (__fastcall *)(struct IMMDeviceEnumerator *))g_DeviceEnumerator->lpVtbl->UnregisterEndpointNotificationCallback)(g_DeviceEnumerator);
  if ( *((_BYTE *)this + 88) )
    NtDeleteWnfStateName((char *)this + 92);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)this + 21,
    0LL);
  if ( *v2 )
    std::default_delete<_WaitTask>::operator()(v3, *v2);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ((void **)this + 19);
  `eh vector destructor iterator'((char *)this + 104, 16LL, 3LL, (void (__fastcall *)(char *))ApoData::~ApoData);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 10);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)this + 7);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioModeEffectsWatcher>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioModeEffectsWatcher>((__int64)this);
}
