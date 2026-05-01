/*
 * XREFs of ??0AppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ @ 0x1803EBB38
 * Callers:
 *     ??$MakeAndInitialize@VAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x1803EAEDC (--$MakeAndInitialize@VAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18003C9F0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory::AppViewListenerFactory(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory *)((char *)this + 8));
  *((_DWORD *)this + 17) = 1;
  *(_QWORD *)this = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListenerFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable';
  *v2 = &Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListenerFactory>>'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListenerFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListenerFactory>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListenerFactory>>'};
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 4;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory::`vftable';
  *v2 = &Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListenerFactory>>'};
  *((_QWORD *)this + 5) = &Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListenerFactory>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListenerFactory>>'};
  return this;
}
