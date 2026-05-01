/*
 * XREFs of ??0SnapServiceProvider@@QEAA@XZ @ 0x18021D150
 * Callers:
 *     ??$MakeAndInitialize@VSnapServiceProvider@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSnapServiceProvider@@@Z @ 0x18021D0C4 (--$MakeAndInitialize@VSnapServiceProvider@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSnapServicePr.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISnapServiceProviderInternal@@UISnapServiceProvider@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1802A8F94 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISnapServiceProviderIn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

SnapServiceProvider *__fastcall SnapServiceProvider::SnapServiceProvider(SnapServiceProvider *this)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISnapServiceProviderInternal,ISnapServiceProvider>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISnapServiceProviderInternal,ISnapServiceProvider>();
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISnapServiceProviderInternal,ISnapServiceProvider>::`vftable'{for `ISnapServiceProviderInternal'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISnapServiceProviderInternal,ISnapServiceProvider>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ISnapServiceProvider>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &SnapServiceProvider::`vftable'{for `ISnapServiceProviderInternal'};
  *((_QWORD *)this + 1) = &SnapServiceProvider::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ISnapServiceProvider>'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  return this;
}
