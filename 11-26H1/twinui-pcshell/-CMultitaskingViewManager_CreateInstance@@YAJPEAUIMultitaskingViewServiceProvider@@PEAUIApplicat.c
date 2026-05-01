/*
 * XREFs of ?CMultitaskingViewManager_CreateInstance@@YAJPEAUIMultitaskingViewServiceProvider@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIApplicationViewSwitcher@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIImmersiveSettingsCache@@PEAUITabletModeViewManager@@PEAUIShellTargetingContractManager@@PEAUISnapServiceProvider@@PEAUISnapAssistSwitchItemRelevanceProvider@@PEAUIApplicationViewIconLoader@@PEAUIInspectable@@PEAUIInspectable@@PEAUIImmersiveMonitorManager@@PEAUITouchGestureSettings@@PEAUIImmersiveShellHookService@@PEAUIWindowTabExtension@Shell@UI@Internal@Windows@@PEAUIRemoteSessionWindowManager@Shell@Internal@Windows@@AEBU_GUID@@PEAPEAX@Z @ 0x1801A2ED8
 * Callers:
 *     ?s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z @ 0x180200240 (-s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCMultitaskingViewManager@@V1@UMultitaskingViewManagerInitializeArgs@1@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewManager@@$$QEAUMultitaskingViewManagerInitializeArgs@3@@Z @ 0x1801A3098 (--$MakeAndInitialize@VCMultitaskingViewManager@@V1@UMultitaskingViewManagerInitializeArgs@1@@Det.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewManager@@UIMultitaskingViewManagerInternal@@UIMultitaskingViewDismissCallback@@UIMultitaskingViewForegroundStaging@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewManager@@UIMultitaskingViewManagerInternal@@UIMultitaskingViewDismissCallback@@UIMultitaskingViewForegroundStaging@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801A3880 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIM_ea_1801A3880.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewManager@@UIMultitaskingViewManagerInternal@@UIMultitaskingViewDismissCallback@@UIMultitaskingViewForegroundStaging@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801C5D80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMu_ea_1801C5D80.c)
 *     ?InternalRelease@?$ComPtr@VCMultitaskingViewManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1802A9D38 (-InternalRelease@-$ComPtr@VCMultitaskingViewManager@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMultitaskingViewManager_CreateInstance(
        struct IMultitaskingViewServiceProvider *a1,
        struct IApplicationViewCollection *a2,
        struct IApplicationViewVisibilityDebouncedNotificationService *a3,
        struct IApplicationViewSwitcher *a4,
        struct IVirtualDesktopManagerInternal *a5,
        struct IVirtualDesktopPinnedApps *a6,
        struct ITabletModeController *a7,
        struct IVirtualDesktopNotificationService *a8,
        struct IImmersiveAppCrusher *a9,
        struct IMultitaskingViewVisibilityServiceInternal *a10,
        struct IMultitaskingViewGestureState *a11,
        struct IImmersiveSettingsCache *a12,
        struct ITabletModeViewManager *a13,
        struct IShellTargetingContractManager *a14,
        struct ISnapServiceProvider *a15,
        struct ISnapAssistSwitchItemRelevanceProvider *a16,
        struct IApplicationViewIconLoader *a17,
        struct IInspectable *a18,
        struct IInspectable *a19,
        struct IImmersiveMonitorManager *a20,
        struct ITouchGestureSettings *a21,
        struct IImmersiveShellHookService *a22,
        struct Windows::Internal::UI::Shell::IWindowTabExtension *a23,
        struct Windows::Internal::Shell::IRemoteSessionWindowManager *a24,
        const struct _GUID *a25,
        void **a26)
{
  void **v26; // rdi
  int v27; // eax
  unsigned int v28; // ebx
  int v29; // eax
  int v31[2]; // [rsp+20h] [rbp-B9h] BYREF
  struct IApplicationViewCollection *v32; // [rsp+28h] [rbp-B1h]
  struct IApplicationViewVisibilityDebouncedNotificationService *v33; // [rsp+30h] [rbp-A9h]
  struct IApplicationViewSwitcher *v34; // [rsp+38h] [rbp-A1h]
  struct IVirtualDesktopManagerInternal *v35; // [rsp+40h] [rbp-99h]
  struct IVirtualDesktopPinnedApps *v36; // [rsp+48h] [rbp-91h]
  struct ITabletModeController *v37; // [rsp+50h] [rbp-89h]
  struct IVirtualDesktopNotificationService *v38; // [rsp+58h] [rbp-81h]
  struct IImmersiveAppCrusher *v39; // [rsp+60h] [rbp-79h]
  struct IMultitaskingViewVisibilityServiceInternal *v40; // [rsp+68h] [rbp-71h]
  struct IMultitaskingViewGestureState *v41; // [rsp+70h] [rbp-69h]
  struct IImmersiveSettingsCache *v42; // [rsp+78h] [rbp-61h]
  struct ITabletModeViewManager *v43; // [rsp+80h] [rbp-59h]
  struct IShellTargetingContractManager *v44; // [rsp+88h] [rbp-51h]
  struct ISnapServiceProvider *v45; // [rsp+90h] [rbp-49h]
  struct ISnapAssistSwitchItemRelevanceProvider *v46; // [rsp+98h] [rbp-41h]
  struct IApplicationViewIconLoader *v47; // [rsp+A0h] [rbp-39h]
  struct IImmersiveMonitorManager *v48; // [rsp+A8h] [rbp-31h]
  struct IInspectable *v49; // [rsp+B0h] [rbp-29h]
  struct IInspectable *v50; // [rsp+B8h] [rbp-21h]
  struct ITouchGestureSettings *v51; // [rsp+C0h] [rbp-19h]
  struct IImmersiveShellHookService *v52; // [rsp+C8h] [rbp-11h]
  struct Windows::Internal::UI::Shell::IWindowTabExtension *v53; // [rsp+D0h] [rbp-9h]
  struct Windows::Internal::Shell::IRemoteSessionWindowManager *v54; // [rsp+D8h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+Fh]

  v26 = a26;
  *a26 = 0LL;
  a26 = 0LL;
  *(_QWORD *)v31 = a1;
  v32 = a2;
  v33 = a3;
  v34 = a4;
  v35 = a5;
  v36 = a6;
  v37 = a7;
  v38 = a8;
  v39 = a9;
  v40 = a10;
  v41 = a11;
  v42 = a12;
  v43 = a13;
  v44 = a14;
  v45 = a15;
  v46 = a16;
  v47 = a17;
  v48 = a20;
  v49 = a18;
  v50 = a19;
  v51 = a21;
  v52 = a22;
  v53 = a23;
  v54 = a24;
  Microsoft::WRL::ComPtr<CMultitaskingViewManager>::InternalRelease(&a26);
  v27 = Microsoft::WRL::Details::MakeAndInitialize<CMultitaskingViewManager,CMultitaskingViewManager,CMultitaskingViewManager::MultitaskingViewManagerInitializeArgs>(
          &a26,
          v31);
  v28 = v27;
  if ( v27 >= 0 )
  {
    v29 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewManager,IMultitaskingViewManagerInternal,IMultitaskingViewDismissCallback,IMultitaskingViewForegroundStaging>>(
            a26,
            &GUID_537b455d_1240_433b_82af_10929138b8be,
            v26);
    v28 = v29;
    if ( v29 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x505,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
        (const char *)(unsigned int)v29);
    if ( a26 )
    {
      a26 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewManager,IMultitaskingViewManagerInternal,IMultitaskingViewDismissCallback,IMultitaskingViewForegroundStaging>::Release();
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x504,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)(unsigned int)v27);
    Microsoft::WRL::ComPtr<CMultitaskingViewManager>::InternalRelease(&a26);
  }
  return v28;
}
