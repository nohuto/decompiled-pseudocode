/*
 * XREFs of ??0AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ @ 0x1803FB40C
 * Callers:
 *     ??$MakeAndInitialize@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@AEAPEAUITaskDataArbiter@23456@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAPEAUITaskDataArbiter@45678@@Z @ 0x1803FAFAC (--$MakeAndInitialize@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@AEAPEA.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800463AC (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::AppViewListener(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *this)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax

  v2 = (_QWORD *)((char *)this + 40);
  Microsoft::WRL::FtmBase::FtmBase((Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *)((char *)this + 40));
  *((_QWORD *)this + 10) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IApplicationViewChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener,IWindowSnappingEvents,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IApplicationViewChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener,IWindowSnappingEvents,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IApplicationViewChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener,IWindowSnappingEvents,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IApplicationViewChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener,IWindowSnappingEvents,Microsoft::WRL::FtmBase>::`vftable'{for `IApplicationViewChangeListener'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IApplicationViewChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener,IWindowSnappingEvents,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener,IWindowSnappingEvents,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IApplicationViewChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener,IWindowSnappingEvents,Microsoft::WRL::FtmBase>::`vftable'{for `IWindowSnappingEvents'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IApplicationViewChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener,IWindowSnappingEvents,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::`vftable'{for `Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener'};
  *((_QWORD *)this + 1) = &Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IApplicationViewChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener,IWindowSnappingEvents,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::`vftable'{for `IApplicationViewChangeListener'};
  *((_QWORD *)this + 3) = &Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener,IWindowSnappingEvents,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 4) = &Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::`vftable'{for `IWindowSnappingEvents'};
  *v2 = &Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits>(0x58uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 32) = v3;
  *((_QWORD *)this + 34) = 0LL;
  return this;
}
