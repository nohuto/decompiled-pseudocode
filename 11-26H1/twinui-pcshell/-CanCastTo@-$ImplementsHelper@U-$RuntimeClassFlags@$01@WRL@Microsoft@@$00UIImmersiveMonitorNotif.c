/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801BFECC
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@V?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@@Details@23@UIWeakReferenceSource@@UIVirtualDesktopSwitcherViewHostInternal@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802AD8B8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$Impleme_ea_1802AD8B8.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UIAltTabViewHostInternal@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UIAltTabViewHostInternal@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1804ACC98 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$_ea_1804ACC98.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UIExternalDragHost@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UIExternalDragHost@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1804AF1F4 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$_ea_1804AF1F4.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@@Details@23@UIAllUpViewHostInternal@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1806A0DCC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_1806A0DCC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 != -1811144131
    || a2[1] != *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
    || a2[2] != *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
    || a2[3] != *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4] )
  {
    return 2147500034LL;
  }
  *a3 = a1;
  return 0LL;
}
