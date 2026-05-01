/*
 * XREFs of ??0SwitchItemCollection@@QEAA@XZ @ 0x1804B091C
 * Callers:
 *     ??$MakeAndInitialize@VSwitchItemCollection@@V1@AEAPEAUISwitchItemFactory@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAW4SwitchItemFilterBehavior@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemCollection@@AEAPEAUISwitchItemFactory@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAW4SwitchItemFilterBehavior@@@Z @ 0x1804B07C8 (--$MakeAndInitialize@VSwitchItemCollection@@V1@AEAPEAUISwitchItemFactory@@AEAPEAUIApplicationVie.c)
 * Callees:
 *     ??0ObservableObjectArray@@QEAA@XZ @ 0x1804B08CC (--0ObservableObjectArray@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
SwitchItemCollection *__fastcall SwitchItemCollection::SwitchItemCollection(SwitchItemCollection *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 8);
  ObservableObjectArray::ObservableObjectArray((SwitchItemCollection *)((char *)this + 8));
  *((_QWORD *)this + 23) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ObservableObjectArray,IApplicationViewChangeListener,ISwitchItemCollection>::`vftable';
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ObservableObjectArray,IApplicationViewChangeListener,ISwitchItemCollection>::`vftable'{for `Microsoft::WRL::Details::Selector<ObservableObjectArray,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<ObservableObjectArray>,IWeakReferenceSource,IApplicationViewChangeListener,ISwitchItemCollection>>'};
  *((_QWORD *)this + 19) = &SwitchItemCollection::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IApplicationViewChangeListener,ISwitchItemCollection>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<ObservableObjectArray>,IWeakReferenceSource,IApplicationViewChangeListener,ISwitchItemCollection>>'};
  *((_QWORD *)this + 20) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ObservableObjectArray,IApplicationViewChangeListener,ISwitchItemCollection>::`vftable'{for `IApplicationViewChangeListener'};
  *((_QWORD *)this + 21) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ObservableObjectArray,IApplicationViewChangeListener,ISwitchItemCollection>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISwitchItemCollection>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &SwitchItemCollection::`vftable';
  *v2 = &SwitchItemCollection::`vftable'{for `Microsoft::WRL::Details::Selector<ObservableObjectArray,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<ObservableObjectArray>,IWeakReferenceSource,IApplicationViewChangeListener,ISwitchItemCollection>>'};
  *((_QWORD *)this + 19) = &SwitchItemCollection::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IApplicationViewChangeListener,ISwitchItemCollection>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<ObservableObjectArray>,IWeakReferenceSource,IApplicationViewChangeListener,ISwitchItemCollection>>'};
  *((_QWORD *)this + 20) = &SwitchItemCollection::`vftable'{for `IApplicationViewChangeListener'};
  *((_QWORD *)this + 21) = &SwitchItemCollection::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISwitchItemCollection>'};
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 55) = 1;
  return this;
}
