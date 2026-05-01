/*
 * XREFs of ?CAltTabViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIApplicationViewCollection@@PEAUITouchGestureSettings@@AEBU_GUID@@PEAPEAX@Z @ 0x18049C120
 * Callers:
 *     ?_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180490E2C (-_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationV.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAltTabViewHost@@@WRL@Microsoft@@IEAAKXZ @ 0x180229EF8 (-InternalRelease@-$ComPtr@VCAltTabViewHost@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UIAltTabViewHostInternal@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UIAltTabViewHostInternal@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18049BA60 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$_ea_18049BA60.c)
 *     ??$MakeAndInitialize@VCAltTabViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIMultitaskingViewGestureState@@AEAPEAUIApplicationViewCollection@@AEAPEAUITouchGestureSettings@@@Details@WRL@Microsoft@@YAJPEAPEAVCAltTabViewHost@@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIMultitaskingViewGestureState@@AEAPEAUIApplicationViewCollection@@AEAPEAUITouchGestureSettings@@@Z @ 0x18049BBB0 (--$MakeAndInitialize@VCAltTabViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewMana.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAltTabViewHost_CreateInstance(
        struct IMultitaskingData *a1,
        struct IMultitaskingViewManagerInternal *a2,
        struct IApplicationViewSwitcher *a3,
        struct IImmersiveAppCrusher *a4,
        struct IMultitaskingViewVisibilityServiceInternal *a5,
        struct IMultitaskingViewGestureState *a6,
        struct IApplicationViewCollection *a7,
        struct ITouchGestureSettings *a8,
        const struct _GUID *a9,
        void **a10)
{
  void **v10; // rdi
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IMultitaskingData *v16; // [rsp+70h] [rbp+20h] BYREF
  struct IMultitaskingViewManagerInternal *v17; // [rsp+78h] [rbp+28h] BYREF
  struct IApplicationViewSwitcher *v18; // [rsp+80h] [rbp+30h] BYREF
  struct IImmersiveAppCrusher *v19; // [rsp+88h] [rbp+38h] BYREF

  v19 = a4;
  v18 = a3;
  v17 = a2;
  v16 = a1;
  v10 = a10;
  *a10 = 0LL;
  a10 = 0LL;
  Microsoft::WRL::ComPtr<CAltTabViewHost>::InternalRelease((volatile int **)&a10);
  v11 = Microsoft::WRL::Details::MakeAndInitialize<CAltTabViewHost,CAltTabViewHost,IMultitaskingData * &,IMultitaskingViewManagerInternal * &,IApplicationViewSwitcher * &,IImmersiveAppCrusher * &,IMultitaskingViewVisibilityServiceInternal * &,IMultitaskingViewGestureState * &,IApplicationViewCollection * &,ITouchGestureSettings * &>(
          (volatile int **)&a10,
          &v16,
          &v17,
          &v18,
          &v19,
          &a5,
          &a6,
          &a7,
          &a8);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 350LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_6;
  }
  v11 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<IAltTabViewHost>,IAltTabViewHostInternal>>(
          (__int64)a10,
          &GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9,
          v10);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 352LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<CAltTabViewHost>::InternalRelease((volatile int **)&a10);
  return v12;
}
