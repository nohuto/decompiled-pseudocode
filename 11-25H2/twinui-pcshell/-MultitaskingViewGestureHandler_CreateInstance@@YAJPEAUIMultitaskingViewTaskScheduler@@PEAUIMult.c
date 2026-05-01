/*
 * XREFs of ?MultitaskingViewGestureHandler_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@AEBU_GUID@@PEAPEAX@Z @ 0x1800FA708
 * Callers:
 *     ?_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1800F9DAC (-_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VMultitaskingViewGestureHandler@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIMultitaskingViewVisibilityService@@@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingViewGestureHandler@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x1800FA7AC (--$MakeAndInitialize@VMultitaskingViewGestureHandler@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewGestureHandler@@UITouchpadGesture@@UITouchSwipe@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewGestureHandler@@UITouchpadGesture@@UITouchSwipe@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800FAF00 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIM_ea_1800FAF00.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewGestureHandler@@UITouchpadGesture@@UITouchSwipe@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801C8B90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMu_ea_1801C8B90.c)
 *     ?InternalRelease@?$ComPtr@VMultitaskingViewGestureHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x1802BE238 (-InternalRelease@-$ComPtr@VMultitaskingViewGestureHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MultitaskingViewGestureHandler_CreateInstance(
        struct IMultitaskingViewTaskScheduler *a1,
        struct IMultitaskingViewVisibilityService *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IMultitaskingViewTaskScheduler *v9; // [rsp+40h] [rbp+20h] BYREF
  struct IMultitaskingViewVisibilityService *v10; // [rsp+48h] [rbp+28h] BYREF
  __int64 v11; // [rsp+50h] [rbp+30h] BYREF

  v10 = a2;
  v9 = a1;
  *a4 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<MultitaskingViewGestureHandler>::InternalRelease(&v11);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<MultitaskingViewGestureHandler,MultitaskingViewGestureHandler,IMultitaskingViewTaskScheduler * &,IMultitaskingViewVisibilityService * &>(
         &v11,
         &v9,
         &v10);
  if ( v5 >= 0 )
  {
    v5 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewGestureHandler,ITouchpadGesture,ITouchSwipe>>(
           v11,
           &GUID_de8d7855_1edf_411b_99bf_0226775c0b72,
           a4);
    if ( v5 >= 0 )
      goto LABEL_6;
    v6 = 1136LL;
  }
  else
  {
    v6 = 1135LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
    (const char *)(unsigned int)v5);
LABEL_6:
  if ( v11 )
  {
    v11 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewGestureHandler,ITouchpadGesture,ITouchSwipe>::Release();
  }
  return (unsigned int)v5;
}
