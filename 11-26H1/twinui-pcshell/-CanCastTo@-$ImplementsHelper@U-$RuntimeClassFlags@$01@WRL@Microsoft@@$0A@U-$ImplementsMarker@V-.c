/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@@Details@23@UIAllUpViewHostInternal@@UITabletModeChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801BF8BC
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UIAllUpViewHostInternal@@UITabletModeChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801BF840 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801BF840.c)
 * Callees:
 *     ?CanCastTo@?$ChainInterfaces@UIAllUpViewHost@@UIMultitaskingViewHost@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801BF9C4 (-CanCastTo@-$ChainInterfaces@UIAllUpViewHost@@UIMultitaskingViewHost@@VNil@Details@WRL@Microsoft.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewHostBase<IAllUpViewHost>>,IAllUpViewHostInternal,ITabletModeChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::CanCastTo(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  _DWORD *v4; // rdx
  _QWORD *v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rcx
  __int64 v8; // r9

  result = Microsoft::WRL::ChainInterfaces<IAllUpViewHost,IMultitaskingViewHost,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
             a1,
             a2,
             a3,
             a1);
  if ( (int)result < 0 )
  {
    if ( *v4 == -1811144131
      && (v7 = v4 + 1, v4[1] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2)
      && v4[2] == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
      && v4[3] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4] )
    {
      *v5 = v6 + 8;
      result = 0LL;
    }
    else
    {
      result = 2147500034LL;
      v7 = v4 + 1;
    }
    if ( (_DWORD)result == -2147467262 )
    {
      v8 = v6 + 120;
      if ( *v4 == 618013551
        && (v7 = v4 + 1, v4[1] == *(_DWORD *)&GUID_24d6236f_83b7_4abc_b7a9_082c901b9839.Data2)
        && v4[2] == *(_DWORD *)GUID_24d6236f_83b7_4abc_b7a9_082c901b9839.Data4
        && v4[3] == *(_DWORD *)&GUID_24d6236f_83b7_4abc_b7a9_082c901b9839.Data4[4]
        || (v8 += 8LL, *v4 == -2030348378)
        && *v7 == *(_DWORD *)&GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data2
        && v4[2] == *(_DWORD *)GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data4
        && v4[3] == *(_DWORD *)&GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data4[4]
        || (v8 += 8LL, *v4 == -1176114867)
        && v4[1] == *(_DWORD *)&GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade.Data2
        && v4[2] == *(_DWORD *)GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade.Data4
        && v4[3] == *(_DWORD *)&GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade.Data4[4] )
      {
        *v5 = v8;
        return 0LL;
      }
      else
      {
        return 2147500034LL;
      }
    }
  }
  return result;
}
