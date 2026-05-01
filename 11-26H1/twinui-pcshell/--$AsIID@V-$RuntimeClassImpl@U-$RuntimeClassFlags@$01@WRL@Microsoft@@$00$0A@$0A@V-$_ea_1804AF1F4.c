/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UIExternalDragHost@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UIExternalDragHost@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1804AF1F4
 * Callers:
 *     ?CPPIAllUpViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1804AF63C (-CPPIAllUpViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInterna.c)
 *     ?Get@?$CWeakReference@VCPPIAllUpViewHost@@@WeakReference@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804AF8A0 (-Get@-$CWeakReference@VCPPIAllUpViewHost@@@WeakReference@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UIExternalDragHost@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804AF930 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1804AF930.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180057770 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801BFECC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveMonitorNotif.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIExternalDragHost@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804AEED0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIExternalDragHost@@@De.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<IPPIAllUpViewHost>,IExternalDragHost>>(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  const struct _GUID *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // r10
  int CanCastTo; // ebx
  const struct _GUID *v11; // rdx
  __int64 v12; // r9

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    if ( InlineIsEqualGUID(v3, &GUID_0cbeff0b_7751_4b77_8907_debf5cc3df7a)
      || InlineIsEqualGUID(v6, &GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9) )
    {
      *v7 = v8;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification>::CanCastTo(
                    v8 + 8,
                    v9,
                    v7);
      if ( CanCastTo == -2147467262 )
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IExternalDragHost>::CanCastTo(
                      v12 + 120,
                      v11);
      if ( CanCastTo < 0 )
        return (unsigned int)CanCastTo;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
    return (unsigned int)CanCastTo;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
