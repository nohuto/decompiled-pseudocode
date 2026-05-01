/*
 * XREFs of ??0SwitchItemThumbnailElement@@QEAA@XZ @ 0x1804ADAEC
 * Callers:
 *     ??$MakeAndInitialize@VSwitchItemThumbnailElement@@UIMultitaskingViewElement@@AEBUThumbnailSizeMetrics@@AEBQEAUISwitchThumbnailFactory@@AEBQEAUISwitchItem@@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@AEBUThumbnailSizeMetrics@@AEBQEAUISwitchThumbnailFactory@@AEBQEAUISwitchItem@@@Z @ 0x1804AD77C (--$MakeAndInitialize@VSwitchItemThumbnailElement@@UIMultitaskingViewElement@@AEBUThumbnailSizeMe.c)
 * Callees:
 *     ??0CShrinkButtonElement@@QEAA@XZ @ 0x1804AB030 (--0CShrinkButtonElement@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

SwitchItemThumbnailElement *__fastcall SwitchItemThumbnailElement::SwitchItemThumbnailElement(
        SwitchItemThumbnailElement *this)
{
  __int64 v2; // rcx

  CShrinkButtonElement::CShrinkButtonElement(this);
  *(_DWORD *)(v2 + 292) = 1;
  *(_QWORD *)v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CShrinkButtonElement,IMultitaskingViewDragSource,ISwitchItemThumbnailElement>::`vftable';
  *(_QWORD *)(v2 + 272) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CShrinkButtonElement,IMultitaskingViewDragSource,ISwitchItemThumbnailElement>::`vftable'{for `IMultitaskingViewDragSource'};
  *(_QWORD *)(v2 + 280) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CShrinkButtonElement,IMultitaskingViewDragSource,ISwitchItemThumbnailElement>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ISwitchItemThumbnailElement>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &SwitchItemThumbnailElement::`vftable';
  *((_QWORD *)this + 34) = &SwitchItemThumbnailElement::`vftable'{for `IMultitaskingViewDragSource'};
  *((_QWORD *)this + 35) = &SwitchItemThumbnailElement::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ISwitchItemThumbnailElement>'};
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_DWORD *)this + 154) = 0;
  return this;
}
