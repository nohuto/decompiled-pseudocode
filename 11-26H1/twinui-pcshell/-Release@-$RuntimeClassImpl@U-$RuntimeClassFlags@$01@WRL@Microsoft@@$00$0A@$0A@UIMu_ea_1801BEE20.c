/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewGestureHandler@@UITouchpadGesture@@UITouchSwipe@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801BEE20
 * Callers:
 *     ?MultitaskingViewGestureHandler_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@AEBU_GUID@@PEAPEAX@Z @ 0x1801353C0 (-MultitaskingViewGestureHandler_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMult.c)
 *     ??$MakeAndInitialize@VMultitaskingViewGestureHandler@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIMultitaskingViewVisibilityService@@@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingViewGestureHandler@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x180135ED8 (--$MakeAndInitialize@VMultitaskingViewGestureHandler@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@.c)
 *     ?InternalRelease@?$ComPtr@VMultitaskingViewGestureHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x1802B4934 (-InternalRelease@-$ComPtr@VMultitaskingViewGestureHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewGestureHandler@@UITouchpadGesture@@UITouchSwipe@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18049CD70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMu_ea_18049CD70.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewGestureHandler@@UITouchpadGesture@@UITouchSwipe@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x18049CD80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMu_ea_18049CD80.c)
 *     ?unconditional_release_ref@?$com_ptr@VMultitaskingViewGestureHandler@@@winrt@@AEAAXXZ @ 0x18049E124 (-unconditional_release_ref@-$com_ptr@VMultitaskingViewGestureHandler@@@winrt@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewGestureHandler,ITouchpadGesture,ITouchSwipe>::Release(
        volatile signed __int32 *a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  unsigned int v3; // ebx

  v1 = 0x7FFFFFFFLL;
  do
    v2 = *((unsigned int *)a1 + 7);
  while ( (_DWORD)v2 != 0x7FFFFFFF && (_DWORD)v2 != _InterlockedCompareExchange(a1 + 7, v2 - 1, v2) );
  v3 = v2 - 1;
  if ( (_DWORD)v2 == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, __int64))(*(_QWORD *)a1 + 88LL))(
        a1,
        1LL,
        v2,
        0x7FFFFFFFLL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, _QWORD, __int64, __int64))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(
        Microsoft::WRL::Details::ModuleBase::module_,
        *(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_,
        v2,
        v1);
  }
  return v3;
}
