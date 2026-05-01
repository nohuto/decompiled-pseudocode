/*
 * XREFs of ?CanCastTo@?$ChainInterfaces@UIAllUpViewHost@@UIMultitaskingViewHost@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801C9D2C
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@@Details@23@UIAllUpViewHostInternal@@UITabletModeChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801C9C3C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarker@V-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ChainInterfaces<IAllUpViewHost,IMultitaskingViewHost,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( (*a2 != 949100983
     || a2[1] != *(_DWORD *)&GUID_389221b7_bf28_4d25_9501_b4491d822be1.Data2
     || a2[2] != *(_DWORD *)GUID_389221b7_bf28_4d25_9501_b4491d822be1.Data4
     || a2[3] != *(_DWORD *)&GUID_389221b7_bf28_4d25_9501_b4491d822be1.Data4[4])
    && (*a2 != 1229475324
     || a2[1] != *(_DWORD *)&GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9.Data2
     || a2[2] != *(_DWORD *)GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9.Data4
     || a2[3] != *(_DWORD *)&GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9.Data4[4]) )
  {
    return 2147500034LL;
  }
  *a3 = a1;
  return 0LL;
}
