/*
 * XREFs of ??0ContentDeliveryManagerConfigurationStatics@ContentManagement@@QEAA@XZ @ 0x1800426E8
 * Callers:
 *     ??$MakeAndInitialize@VContentDeliveryManagerConfigurationStatics@ContentManagement@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVContentDeliveryManagerConfigurationStatics@ContentManagement@@@Z @ 0x180041F70 (--$MakeAndInitialize@VContentDeliveryManagerConfigurationStatics@ContentManagement@@V12@$$V@Deta.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180028DDC (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
ContentManagement::ContentDeliveryManagerConfigurationStatics *__fastcall ContentManagement::ContentDeliveryManagerConfigurationStatics::ContentDeliveryManagerConfigurationStatics(
        ContentManagement::ContentDeliveryManagerConfigurationStatics *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((ContentManagement::ContentDeliveryManagerConfigurationStatics *)((char *)this + 8));
  *((_DWORD *)this + 17) = 1;
  *(_QWORD *)this = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::IContentDeliveryManagerConfiguration>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable';
  *v2 = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::IContentDeliveryManagerConfiguration>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,ContentManagement::IContentDeliveryManagerConfiguration>>'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::IContentDeliveryManagerConfiguration>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,ContentManagement::IContentDeliveryManagerConfiguration>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,ContentManagement::IContentDeliveryManagerConfiguration>>'};
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 4;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &ContentManagement::ContentDeliveryManagerConfigurationStatics::`vftable';
  *v2 = &ContentManagement::ContentDeliveryManagerConfigurationStatics::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,ContentManagement::IContentDeliveryManagerConfiguration>>'};
  *((_QWORD *)this + 5) = &ContentManagement::ContentDeliveryManagerConfigurationStatics::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,ContentManagement::IContentDeliveryManagerConfiguration>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,ContentManagement::IContentDeliveryManagerConfiguration>>'};
  return this;
}
