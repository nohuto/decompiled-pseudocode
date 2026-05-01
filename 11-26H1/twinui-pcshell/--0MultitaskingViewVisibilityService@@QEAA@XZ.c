/*
 * XREFs of ??0MultitaskingViewVisibilityService@@QEAA@XZ @ 0x180498934
 * Callers:
 *     ??$MakeAndInitialize@VMultitaskingViewVisibilityService@@UIMultitaskingViewVisibilityService@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x1802BC624 (--$MakeAndInitialize@VMultitaskingViewVisibilityService@@UIMultitaskingViewVisibilityService@@$$.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800463AC (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CGITRegistrationList@@QEAA@XZ @ 0x1800D7384 (--0CGITRegistrationList@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
MultitaskingViewVisibilityService *__fastcall MultitaskingViewVisibilityService::MultitaskingViewVisibilityService(
        MultitaskingViewVisibilityService *this)
{
  _QWORD *v2; // rdi
  __int64 v3; // rcx

  v2 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((MultitaskingViewVisibilityService *)((char *)this + 16));
  *((_DWORD *)this + 13) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMultitaskingViewVisibilityService,IMultitaskingViewVisibilityServiceInternal,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMultitaskingViewVisibilityService,IMultitaskingViewVisibilityServiceInternal,Microsoft::WRL::FtmBase>::`vftable'{for `IMultitaskingViewVisibilityServiceInternal'};
  *v2 = &MultitaskingViewVisibilityService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &MultitaskingViewVisibilityService::`vftable';
  *((_QWORD *)this + 1) = &MultitaskingViewVisibilityService::`vftable'{for `IMultitaskingViewVisibilityServiceInternal'};
  *v2 = &MultitaskingViewVisibilityService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  InitializeSRWLock((PSRWLOCK)this + 7);
  *((_DWORD *)this + 16) = 0;
  CGITRegistrationList::CGITRegistrationList((MultitaskingViewVisibilityService *)((char *)this + 72));
  *((_DWORD *)this + 30) = SHTaskPoolGetUniqueContext(v3);
  return this;
}
