/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180116150
 * Callers:
 *     ??0PrivilegedOperationsService@@QEAA@XZ @ 0x1803E98D8 (--0PrivilegedOperationsService@@QEAA@XZ.c)
 * Callees:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18008AAD8 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase.c)
 *     ??0CImmersiveShellComponentWithGITSite@@QEAA@XZ @ 0x1800E3634 (--0CImmersiveShellComponentWithGITSite@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase>(
        _QWORD *a1)
{
  CImmersiveShellComponentWithGITSite::CImmersiveShellComponentWithGITSite((CImmersiveShellComponentWithGITSite *)(a1 + 1));
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>((__int64)(a1 + 14));
  a1[20] = 1LL;
  *a1 = &PrivilegedOperationsService::`vftable'{for `IInspectable'};
  a1[1] = &PrivilegedOperationsService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  a1[6] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase>::`vftable'{for `IImmersiveShellComponent'};
  a1[7] = &PrivilegedOperationsService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  a1[14] = &PrivilegedOperationsService::`vftable'{for `IWeakReferenceSource'};
  a1[15] = &PrivilegedOperationsService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
