/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UIXamlAltTabViewHostInternal@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B42A8
 * Callers:
 *     ??0XamlAltTabViewHost@@QEAA@XZ @ 0x1800B41CC (--0XamlAltTabViewHost@@QEAA@XZ.c)
 * Callees:
 *     ??0?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@QEAA@XZ @ 0x1801E796C (--0-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<IAltTabViewHost>,IXamlAltTabViewHostInternal>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<IAltTabViewHost>,IXamlAltTabViewHostInternal>(
        __int64 a1)
{
  CMultitaskingViewHostBase<IAltTabViewHost>::CMultitaskingViewHostBase<IAltTabViewHost>();
  *(_DWORD *)(a1 + 132) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<IAltTabViewHost>,IXamlAltTabViewHostInternal>::`vftable'{for `Microsoft::WRL::ChainInterfaces<IAltTabViewHost,IMultitaskingViewHost,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<IAltTabViewHost>,IXamlAltTabViewHostInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification>'};
  *(_QWORD *)(a1 + 120) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<IAltTabViewHost>,IXamlAltTabViewHostInternal>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
