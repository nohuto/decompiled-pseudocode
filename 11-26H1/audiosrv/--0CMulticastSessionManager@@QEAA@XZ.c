/*
 * XREFs of ??0CMulticastSessionManager@@QEAA@XZ @ 0x180107108
 * Callers:
 *     ??$MakeAndInitialize@VCMulticastSessionManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCMulticastSessionManager@@@Z @ 0x180106E08 (--$MakeAndInitialize@VCMulticastSessionManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCMultica.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
CMulticastSessionManager *__fastcall CMulticastSessionManager::CMulticastSessionManager(CMulticastSessionManager *this)
{
  *((_DWORD *)this + 5) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMulticastSessionManager,IMulticastManagerNotificationClient>::`vftable'{for `IMulticastSessionManager'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMulticastSessionManager,IMulticastManagerNotificationClient>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMulticastManagerNotificationClient>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CMulticastSessionManager::`vftable'{for `IMulticastSessionManager'};
  *((_QWORD *)this + 1) = &CMulticastSessionManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMulticastManagerNotificationClient>'};
  *((_QWORD *)this + 3) = 0LL;
  return this;
}
