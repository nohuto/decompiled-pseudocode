/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIMultitaskingViewGestureHandler@@UITouchpadGesture@@UITouchSwipe@@@WRL@Microsoft@@QEAA@XZ @ 0x1802B1B44
 * Callers:
 *     ??0MultitaskingViewGestureHandler@@QEAA@XZ @ 0x180135F9C (--0MultitaskingViewGestureHandler@@QEAA@XZ.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIDragProvider@@UIAppResizeAcc@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1802B1B9C (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawEleme_ea_1802B1B9C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMultitaskingViewGestureHandler,ITouchpadGesture,ITouchSwipe>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMultitaskingViewGestureHandler,ITouchpadGesture,ITouchSwipe>(
        _QWORD *a1)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IDragProvider,IAppResizeAcc>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IDragProvider,IAppResizeAcc>();
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMultitaskingViewGestureHandler,ITouchpadGesture,ITouchSwipe>::`vftable';
  a1[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMultitaskingViewGestureHandler,ITouchpadGesture,ITouchSwipe>::`vftable'{for `ITouchpadGesture'};
  a1[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMultitaskingViewGestureHandler,ITouchpadGesture,ITouchSwipe>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITouchSwipe>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
