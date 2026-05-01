/*
 * XREFs of ??0CMultitaskingViewFrameElement@@QEAA@XZ @ 0x1804B76B4
 * Callers:
 *     ??$MakeAndInitialize@VCMultitaskingViewFrameElement@@UIMultitaskingViewElement@@AEBUFrameMetrics@@AEAPEAUHWND__@@AEBVAsyncFrameEvents@@AEAPEAUISwitchThumbnailFactory@@AEAPEAU2@AEAPEAU2@AEAPEAU2@AEAPEAUIAnimationCoordinator@@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@AEBUFrameMetrics@@AEAPEAUHWND__@@AEBVAsyncFrameEvents@@AEAPEAUISwitchThumbnailFactory@@AEAPEAU3@55AEAPEAUIAnimationCoordinator@@@Z @ 0x1804B7578 (--$MakeAndInitialize@VCMultitaskingViewFrameElement@@UIMultitaskingViewElement@@AEBUFrameMetrics.c)
 * Callees:
 *     ??0CMultitaskingViewElementBase@@QEAA@XZ @ 0x1804A3D78 (--0CMultitaskingViewElementBase@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
CMultitaskingViewFrameElement *__fastcall CMultitaskingViewFrameElement::CMultitaskingViewFrameElement(
        CMultitaskingViewFrameElement *this)
{
  __int64 v2; // rcx

  CMultitaskingViewElementBase::CMultitaskingViewElementBase(this);
  *(_DWORD *)(v2 + 252) = 1;
  *(_QWORD *)v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewElementBase,IMultitaskingViewElementRoot,IFrameElement,IInputEaterElementNotifications,IMultitaskingViewDragProvider,ILightDismissElementHost>::`vftable'{for `Microsoft::WRL::Details::Selector<CMultitaskingViewElementBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewElementBase>,IMultitaskingViewElementRoot,IFrameElement,IInputEaterElementNotifications,IMultitaskingViewDragProvider,ILightDismissElementHost>>'};
  *(_QWORD *)(v2 + 208) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewElementBase,IMultitaskingViewElementRoot,IFrameElement,IInputEaterElementNotifications,IMultitaskingViewDragProvider,ILightDismissElementHost>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewElementRoot,IFrameElement,IInputEaterElementNotifications,IMultitaskingViewDragProvider,ILightDismissElementHost>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewElementBase>,IMultitaskingViewElementRoot,IFrameElement,IInputEaterElementNotifications,IMultitaskingViewDragProvider,ILightDismissElementHost>>'};
  *(_QWORD *)(v2 + 216) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewElementBase,IMultitaskingViewElementRoot,IFrameElement,IInputEaterElementNotifications,IMultitaskingViewDragProvider,ILightDismissElementHost>::`vftable'{for `IFrameElement'};
  *(_QWORD *)(v2 + 224) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewElementBase,IMultitaskingViewElementRoot,IFrameElement,IInputEaterElementNotifications,IMultitaskingViewDragProvider,ILightDismissElementHost>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputEaterElementNotifications,IMultitaskingViewDragProvider,ILightDismissElementHost>'};
  *(_QWORD *)(v2 + 232) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewElementBase,IMultitaskingViewElementRoot,IFrameElement,IInputEaterElementNotifications,IMultitaskingViewDragProvider,ILightDismissElementHost>::`vftable'{for `IMultitaskingViewDragProvider'};
  *(_QWORD *)(v2 + 240) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewElementBase,IMultitaskingViewElementRoot,IFrameElement,IInputEaterElementNotifications,IMultitaskingViewDragProvider,ILightDismissElementHost>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ILightDismissElementHost>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CMultitaskingViewFrameElement::`vftable'{for `Microsoft::WRL::Details::Selector<CMultitaskingViewElementBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewElementBase>,IMultitaskingViewElementRoot,IFrameElement,IInputEaterElementNotifications,IMultitaskingViewDragProvider,ILightDismissElementHost>>'};
  *((_QWORD *)this + 26) = &CMultitaskingViewFrameElement::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewElementRoot,IFrameElement,IInputEaterElementNotifications,IMultitaskingViewDragProvider,ILightDismissElementHost>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewElementBase>,IMultitaskingViewElementRoot,IFrameElement,IInputEaterElementNotifications,IMultitaskingViewDragProvider,ILightDismissElementHost>>'};
  *((_QWORD *)this + 27) = &CMultitaskingViewFrameElement::`vftable'{for `IFrameElement'};
  *((_QWORD *)this + 28) = &CMultitaskingViewFrameElement::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputEaterElementNotifications,IMultitaskingViewDragProvider,ILightDismissElementHost>'};
  *((_QWORD *)this + 29) = &CMultitaskingViewFrameElement::`vftable'{for `IMultitaskingViewDragProvider'};
  *((_QWORD *)this + 30) = &CMultitaskingViewFrameElement::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ILightDismissElementHost>'};
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_DWORD *)this + 120) = 0;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  return this;
}
