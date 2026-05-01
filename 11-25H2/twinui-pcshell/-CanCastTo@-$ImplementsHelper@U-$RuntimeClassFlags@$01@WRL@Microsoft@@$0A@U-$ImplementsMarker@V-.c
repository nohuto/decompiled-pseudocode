/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@@Details@23@UIAllUpViewHostInternal@@UITabletModeChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801C9C3C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UIAllUpViewHostInternal@@UITabletModeChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801C9BC0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801C9BC0.c)
 * Callees:
 *     ?CanCastTo@?$ChainInterfaces@UIAllUpViewHost@@UIMultitaskingViewHost@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801C9D2C (-CanCastTo@-$ChainInterfaces@UIAllUpViewHost@@UIMultitaskingViewHost@@VNil@Details@WRL@Microsoft.c)
 */

__int64 Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewHostBase<IAllUpViewHost>>,IAllUpViewHostInternal,ITabletModeChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::CanCastTo()
{
  int CanCastTo; // eax
  _DWORD *v1; // rdx
  __int64 v2; // rcx
  _QWORD *v3; // r8
  unsigned int v4; // r9d
  __int64 v5; // rcx

  CanCastTo = Microsoft::WRL::ChainInterfaces<IAllUpViewHost,IMultitaskingViewHost,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo();
  v4 = 0;
  if ( CanCastTo >= 0 )
  {
    return (unsigned int)CanCastTo;
  }
  else if ( *v1 == -1811144131
         && v1[1] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
         && v1[2] == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
         && v1[3] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4] )
  {
    *v3 = v2 + 8;
  }
  else
  {
    v5 = v2 + 120;
    if ( *v1 == 618013551
      && v1[1] == *(_DWORD *)&GUID_24d6236f_83b7_4abc_b7a9_082c901b9839.Data2
      && v1[2] == *(_DWORD *)GUID_24d6236f_83b7_4abc_b7a9_082c901b9839.Data4
      && v1[3] == *(_DWORD *)&GUID_24d6236f_83b7_4abc_b7a9_082c901b9839.Data4[4]
      || (v5 += 8LL, *v1 == -2030348378)
      && v1[1] == *(_DWORD *)&GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data2
      && v1[2] == *(_DWORD *)GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data4
      && v1[3] == *(_DWORD *)&GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data4[4]
      || (v5 += 8LL, *v1 == -1176114867)
      && v1[1] == *(_DWORD *)&GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade.Data2
      && v1[2] == *(_DWORD *)GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade.Data4
      && v1[3] == *(_DWORD *)&GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade.Data4[4] )
    {
      *v3 = v5;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
  }
  return v4;
}
