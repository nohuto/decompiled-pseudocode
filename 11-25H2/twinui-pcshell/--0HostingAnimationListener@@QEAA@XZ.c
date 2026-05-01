/*
 * XREFs of ??0HostingAnimationListener@@QEAA@XZ @ 0x1801D8CE4
 * Callers:
 *     ??$MakeAndInitialize@VHostingAnimationListener@@V1@PEAVTouchKeyboardExperienceManager@@W4AnimationType@@@Details@WRL@Microsoft@@YAJPEAPEAVHostingAnimationListener@@$$QEAPEAVTouchKeyboardExperienceManager@@$$QEAW4AnimationType@@@Z @ 0x1801D8C3C (--$MakeAndInitialize@VHostingAnimationListener@@V1@PEAVTouchKeyboardExperienceManager@@W4Animati.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801D1238 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewIconLoa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

HostingAnimationListener *__fastcall HostingAnimationListener::HostingAnimationListener(HostingAnimationListener *this)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewIconLoaderNotifications>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewIconLoaderNotifications>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDWMStoryboardListener>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDWMStoryboardListener>::`vftable'{for `IDWMStoryboardListener'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDWMStoryboardListener>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &HostingAnimationListener::`vftable';
  *((_QWORD *)this + 1) = &HostingAnimationListener::`vftable'{for `IDWMStoryboardListener'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDWMStoryboardListener>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  return this;
}
