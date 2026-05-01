/*
 * XREFs of ??0?$RuntimeClass@VViewEventArgsBase@@UIViewPropertyChangedArgs@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800EF374
 * Callers:
 *     ??0ViewEventArgsForPropertyChanged@@QEAA@XZ @ 0x1800EF290 (--0ViewEventArgsForPropertyChanged@@QEAA@XZ.c)
 * Callees:
 *     ??0ViewEventArgsBase@@QEAA@XZ @ 0x1800EF844 (--0ViewEventArgsBase@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

ViewEventArgsBase *__fastcall Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs>::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs>(
        ViewEventArgsBase *a1)
{
  ViewEventArgsBase::ViewEventArgsBase(a1);
  *((_QWORD *)a1 + 11) = 1LL;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs>::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
  *((_QWORD *)a1 + 1) = &ViewEventArgsForPropertyChanged::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)a1 + 8) = &ViewEventArgsForPropertyChanged::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)a1 + 9) = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
