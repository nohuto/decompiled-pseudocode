/*
 * XREFs of ??$MakeAndInitialize@V?$CWeakReference@VMultitaskingViewGestureHandler@@@WeakReference@@V12@AEAPEAVMultitaskingViewGestureHandler@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VMultitaskingViewGestureHandler@@@WeakReference@@AEAPEAVMultitaskingViewGestureHandler@@@Z @ 0x18021A1C0
 * Callers:
 *     ?RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@@Z @ 0x180299B00 (-RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAA@XZ @ 0x18021A250 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@WeakReference@@@WRL@Mi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<WeakReference::CWeakReference<MultitaskingViewGestureHandler>,WeakReference::CWeakReference<MultitaskingViewGestureHandler>,MultitaskingViewGestureHandler * &>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx

  *a1 = 0LL;
  v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( !v4 )
    return 2147942414LL;
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,WeakReference::IWeakReference>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,WeakReference::IWeakReference>(v4);
  *v5 = &WeakReference::CWeakReference<MultitaskingViewGestureHandler>::`vftable';
  v5[2] = *a2;
  ((void (__fastcall *)(_QWORD *))Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IPWSLayoutItemInternal,IPenWorkspaceLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::AddRef)(v5);
  *a1 = v5;
  (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  return 0LL;
}
