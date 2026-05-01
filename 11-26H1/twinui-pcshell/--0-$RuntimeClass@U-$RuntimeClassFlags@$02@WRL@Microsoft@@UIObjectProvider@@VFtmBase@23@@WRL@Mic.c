/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIObjectProvider@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800AF338
 * Callers:
 *     ??$MakeOrThrow@VApplicationViewWrapper@@AEAPEAUIApplicationView@@@wil@@YA?AV?$ComPtr@VApplicationViewWrapper@@@WRL@Microsoft@@AEAPEAUIApplicationView@@@Z @ 0x1800AF254 (--$MakeOrThrow@VApplicationViewWrapper@@AEAPEAUIApplicationView@@@wil@@YA-AV-$ComPtr@VApplicatio.c)
 * Callees:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800AF3B0 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IObjectProvider,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IObjectProvider,Microsoft::WRL::FtmBase>(
        _QWORD *a1)
{
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>(a1 + 2);
  a1[8] = 1LL;
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IObjectProvider,Microsoft::WRL::FtmBase>::`vftable'{for `IInspectable'};
  a1[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IObjectProvider,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IObjectProvider,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  a1[2] = &ApplicationViewWrapper::`vftable'{for `IWeakReferenceSource'};
  a1[3] = &ApplicationViewWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
