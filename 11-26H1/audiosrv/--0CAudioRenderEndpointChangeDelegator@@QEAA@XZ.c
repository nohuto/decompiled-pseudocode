/*
 * XREFs of ??0CAudioRenderEndpointChangeDelegator@@QEAA@XZ @ 0x1800C40B0
 * Callers:
 *     ??$MakeAndInitialize@VCAudioRenderEndpointChangeDelegator@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCAudioRenderEndpointChangeDelegator@@@Z @ 0x1800C2D98 (--$MakeAndInitialize@VCAudioRenderEndpointChangeDelegator@@V1@$$V@Details@WRL@Microsoft@@YAJPEAP.c)
 * Callees:
 *     ??0?$forward_list@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18001E360 (--0-$forward_list@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDevicePr.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001E374 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Details@WRL@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CAudioRenderEndpointChangeDelegator *__fastcall CAudioRenderEndpointChangeDelegator::CAudioRenderEndpointChangeDelegator(
        CAudioRenderEndpointChangeDelegator *this)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUnknown>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUnknown>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioRenderEndpointChangeDelegator>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioRenderEndpointChangeDelegator>::`vftable'{for `IAudioRenderEndpointChangeDelegator'};
  *((_QWORD *)this + 2) = &CAudioRenderEndpointChangeDelegator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CAudioRenderEndpointChangeDelegator::`vftable';
  *((_QWORD *)this + 1) = &CAudioRenderEndpointChangeDelegator::`vftable'{for `IAudioRenderEndpointChangeDelegator'};
  *((_QWORD *)this + 2) = &CAudioRenderEndpointChangeDelegator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 1, 0, 0);
  std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>((_QWORD *)this + 10);
  *((_QWORD *)this + 11) = 0LL;
  return this;
}
