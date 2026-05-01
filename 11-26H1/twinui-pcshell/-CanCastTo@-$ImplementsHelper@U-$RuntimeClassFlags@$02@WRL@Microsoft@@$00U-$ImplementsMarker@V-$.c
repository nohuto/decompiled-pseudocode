/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@@Details@23@UIWeakReferenceSource@@UIXamlSnapAssistViewHostInternal@@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@ABI@@U7@UIImmersiveMonitorNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801BA664
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIXamlSnapAssistViewHostInternal@@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@ABI@@U5@UIImmersiveMonitorNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIXamlSnapAssistViewHostInternal@@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@ABI@@U5@UIImmersiveMonitorNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801BA5AC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V-$CMultitaskingV.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewHostBase<ISnapAssistViewHost>>,IWeakReferenceSource,IXamlSnapAssistViewHostInternal,ABI::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost,IXamlSnapAssistViewHostInternal,IImmersiveMonitorNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v3; // eax

  if ( *a2 == -1237536422 )
  {
    if ( a2[1] != *(_DWORD *)&GUID_b63cb15a_d1aa_4a39_bc06_78e9843bf5c4.Data2
      || a2[2] != *(_DWORD *)GUID_b63cb15a_d1aa_4a39_bc06_78e9843bf5c4.Data4 )
    {
      goto LABEL_16;
    }
    v3 = *(_DWORD *)&GUID_b63cb15a_d1aa_4a39_bc06_78e9843bf5c4.Data4[4];
  }
  else
  {
    if ( *a2 != 1229475324 )
    {
      if ( *a2 == -1811144131
        && a2[1] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
        && a2[2] == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
        && a2[3] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4] )
      {
        *a3 = a1 + 8;
        return 0LL;
      }
      goto LABEL_16;
    }
    if ( a2[1] != *(_DWORD *)&GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9.Data2
      || a2[2] != *(_DWORD *)GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9.Data4 )
    {
      goto LABEL_16;
    }
    v3 = *(_DWORD *)&GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9.Data4[4];
  }
  if ( a2[3] == v3 )
  {
LABEL_6:
    *a3 = a1;
    return 0LL;
  }
LABEL_16:
  a1 += 120LL;
  if ( *a2 == 56
    && a2[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_6;
  }
  a1 += 8LL;
  if ( *a2 == -1625120087
    && a2[1] == *(_DWORD *)&GUID_9f22a2a9_1952_42fd_a19b_00b160880172.Data2
    && a2[2] == *(_DWORD *)GUID_9f22a2a9_1952_42fd_a19b_00b160880172.Data4
    && a2[3] == *(_DWORD *)&GUID_9f22a2a9_1952_42fd_a19b_00b160880172.Data4[4] )
  {
    goto LABEL_6;
  }
  a1 += 8LL;
  if ( *a2 == -821392213
    && a2[1] == *(_DWORD *)&GUID_cf0a8cab_9359_588d_bce9_a6a309d93f02.Data2
    && a2[2] == *(_DWORD *)GUID_cf0a8cab_9359_588d_bce9_a6a309d93f02.Data4
    && a2[3] == *(_DWORD *)&GUID_cf0a8cab_9359_588d_bce9_a6a309d93f02.Data4[4] )
  {
    goto LABEL_6;
  }
  return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IXamlSnapAssistViewHostInternal,IImmersiveMonitorNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::CanCastTo(a1 + 8);
}
