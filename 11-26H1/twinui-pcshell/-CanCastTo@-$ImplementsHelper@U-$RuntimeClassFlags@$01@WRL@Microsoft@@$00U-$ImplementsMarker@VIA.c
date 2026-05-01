/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VIActiveZBandNotificationServicePrivate@@@Details@23@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIDesktopVisibilityService@@UIDesktopVisibilityChangesNotification@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800D2F04
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@UIActiveZBand@@UIImmersiveSystemMode@@UIImmersiveSystemModeInternal@@U6@VIImmersiveSystemModeNotificationServicePrivate@@VIActiveZBandNotificationServicePrivate@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIDesktopVisibilityService@@UIDesktopVisibilityChangesNotification@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800D1DF8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$Impleme_ea_1800D1DF8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<IActiveZBandNotificationServicePrivate>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  if ( *a2 == 2088470755
    && a2[1] == *(_DWORD *)&GUID_7c7b88e3_43d0_4574_a0bd_8f8bc0ffee84.Data2
    && a2[2] == *(_DWORD *)GUID_7c7b88e3_43d0_4574_a0bd_8f8bc0ffee84.Data4
    && a2[3] == *(_DWORD *)&GUID_7c7b88e3_43d0_4574_a0bd_8f8bc0ffee84.Data4[4]
    || (a1 += 16LL, *a2 == -1811144131)
    && a2[1] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
    && a2[2] == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
    && a2[3] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4]
    || (a1 += 8LL, *a2 == 720388634)
    && a2[1] == *(_DWORD *)&GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84.Data2
    && a2[2] == *(_DWORD *)GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84.Data4
    && a2[3] == *(_DWORD *)&GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    v4 = a1 + 8;
    if ( *a2 == -62834430
      && a2[1] == *(_DWORD *)&GUID_fc413902_2a24_4522_ad1f_2d27c0ffee84.Data2
      && a2[2] == *(_DWORD *)GUID_fc413902_2a24_4522_ad1f_2d27c0ffee84.Data4
      && a2[3] == *(_DWORD *)&GUID_fc413902_2a24_4522_ad1f_2d27c0ffee84.Data4[4] )
    {
      *a3 = v4;
      result = 0LL;
    }
    else
    {
      result = 2147500034LL;
    }
    if ( (_DWORD)result == -2147467262 )
      return 2147500034LL;
  }
  return result;
}
