/*
 * XREFs of ?SwitchItemCollection_CreateInstance@@YAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@W4SwitchItemFilterBehavior@@AEBU_GUID@@PEAPEAX@Z @ 0x1804B1214
 * Callers:
 *     ?RuntimeClassInitialize@MultitaskingData@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIVirtualDesktopThumbnailWindowFilter@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveSettingsCache@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@W4SwitchItemFilterBehavior@@@Z @ 0x1804AC9B8 (-RuntimeClassInitialize@MultitaskingData@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationV.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x1801FFE08 (-InternalRelease@-$ComPtr@VSwitchItemCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VObservableObjectArray@@UIApplicationViewChangeListener@@UISwitchItemCollection@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VObservableObjectArray@@UIApplicationViewChangeListener@@UISwitchItemCollection@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1804B06DC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VObservableObject.c)
 *     ??$MakeAndInitialize@VSwitchItemCollection@@V1@AEAPEAUISwitchItemFactory@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAW4SwitchItemFilterBehavior@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemCollection@@AEAPEAUISwitchItemFactory@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAW4SwitchItemFilterBehavior@@@Z @ 0x1804B07C8 (--$MakeAndInitialize@VSwitchItemCollection@@V1@AEAPEAUISwitchItemFactory@@AEAPEAUIApplicationVie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SwitchItemCollection_CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        SwitchItemCollection *a6)
{
  SwitchItemCollection *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v12; // [rsp+50h] [rbp+20h] BYREF
  __int64 v13; // [rsp+58h] [rbp+28h] BYREF
  __int64 v14; // [rsp+60h] [rbp+30h] BYREF
  int v15; // [rsp+68h] [rbp+38h] BYREF

  v15 = a4;
  v14 = a3;
  v13 = a2;
  v12 = a1;
  v6 = a6;
  *(_QWORD *)a6 = 0LL;
  a6 = 0LL;
  Microsoft::WRL::ComPtr<SwitchItemCollection>::InternalRelease((__int64 *)&a6);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<SwitchItemCollection,SwitchItemCollection,ISwitchItemFactory * &,IApplicationViewCollection * &,IApplicationViewVisibilityDebouncedNotificationService * &,enum SwitchItemFilterBehavior &>(
         &a6,
         &v12,
         &v13,
         &v14,
         &v15);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 247LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_6;
  }
  v7 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ObservableObjectArray,IApplicationViewChangeListener,ISwitchItemCollection>>(
         (__int64)a6,
         &GUID_e75e99cc_8d45_406e_9a90_c6f3656ea2fd,
         v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 248LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<SwitchItemCollection>::InternalRelease((__int64 *)&a6);
  return v8;
}
