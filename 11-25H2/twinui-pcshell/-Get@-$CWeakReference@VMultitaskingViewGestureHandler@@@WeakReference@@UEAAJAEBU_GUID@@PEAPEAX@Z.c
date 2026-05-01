/*
 * XREFs of ?Get@?$CWeakReference@VMultitaskingViewGestureHandler@@@WeakReference@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18048A9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewGestureHandler@@UITouchpadGesture@@UITouchSwipe@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewGestureHandler@@UITouchpadGesture@@UITouchSwipe@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800FAF00 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIM_ea_1800FAF00.c)
 */

__int64 __fastcall WeakReference::CWeakReference<MultitaskingViewGestureHandler>::Get(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 )
    return 2147943568LL;
  v5 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewGestureHandler,ITouchpadGesture,ITouchSwipe>>(
         v3,
         a2,
         a3);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\CustomWeakReference.h",
      (const char *)(unsigned int)v5);
  return v6;
}
