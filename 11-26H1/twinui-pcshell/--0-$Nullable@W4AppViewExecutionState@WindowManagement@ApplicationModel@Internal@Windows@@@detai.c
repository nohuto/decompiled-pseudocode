/*
 * XREFs of ??0?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@QEAA@XZ @ 0x180428878
 * Callers:
 *     ??$MakeAndInitialize@V?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@V12@AEBW4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAV?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@AEBW4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180426DC4 (--$MakeAndInitialize@V-$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Inter.c)
 * Callees:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800AF3B0 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase.c)
 *     ??0?$IReference@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Foundation@Windows@@QEAA@XZ @ 0x18010E4F4 (--0-$IReference@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Fou.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>(
        __int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi

  Windows::Foundation::IReference<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>::IReference<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>((_QWORD *)a1);
  v3 = (_QWORD *)(v2 + 8);
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>(v2 + 8);
  *(_QWORD *)(a1 + 56) = 1LL;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IReference<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>,Microsoft::WRL::FtmBase>::`vftable';
  *v3 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IReference<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)(a1 + 16) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IReference<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>::`vftable';
  *v3 = &details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)(a1 + 16) = &details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_DWORD *)(a1 + 64) = 0;
  return a1;
}
