/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@UIActiveZBand@@UIImmersiveSystemMode@@UIImmersiveSystemModeInternal@@U6@VIImmersiveSystemModeNotificationServicePrivate@@VIActiveZBandNotificationServicePrivate@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIDesktopVisibilityService@@UIDesktopVisibilityChangesNotification@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800E4E68
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIActiveZBand@@UIImmersiveSystemMode@@UIImmersiveSystemModeInternal@@U6@VIImmersiveSystemModeNotificationServicePrivate@@VIActiveZBandNotificationServicePrivate@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIDesktopVisibilityService@@UIDesktopVisibilityChangesNotification@@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E49F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800E49F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,IActiveZBand,IImmersiveSystemMode,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 != -62389853
    || a2[1] != *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
    || a2[2] != *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
    || a2[3] != *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
  {
    a1 += 40LL;
    if ( *a2 != -646306375
      || a2[1] != *(_DWORD *)&GUID_d97a25b9_e3df_444c_afc6_2d12c0ffee84.Data2
      || a2[2] != *(_DWORD *)GUID_d97a25b9_e3df_444c_afc6_2d12c0ffee84.Data4
      || a2[3] != *(_DWORD *)&GUID_d97a25b9_e3df_444c_afc6_2d12c0ffee84.Data4[4] )
    {
      a1 += 8LL;
      if ( *a2 != -358962051
        || a2[1] != *(_DWORD *)&GUID_ea9aac7d_0cac_4ceb_981c_4545a28bada2.Data2
        || a2[2] != *(_DWORD *)GUID_ea9aac7d_0cac_4ceb_981c_4545a28bada2.Data4
        || a2[3] != *(_DWORD *)&GUID_ea9aac7d_0cac_4ceb_981c_4545a28bada2.Data4[4] )
      {
        a1 += 8LL;
        if ( *a2 != 1688863789
          || a2[1] != *(_DWORD *)&GUID_64aa042d_4144_4c88_afb9_aed881c0ffee.Data2
          || a2[2] != *(_DWORD *)GUID_64aa042d_4144_4c88_afb9_aed881c0ffee.Data4
          || a2[3] != *(_DWORD *)&GUID_64aa042d_4144_4c88_afb9_aed881c0ffee.Data4[4] )
        {
          a1 += 8LL;
          if ( *a2 != -646306375
            || a2[1] != *(_DWORD *)&GUID_d97a25b9_e3df_444c_afc6_2d12c0ffee84.Data2
            || a2[2] != *(_DWORD *)GUID_d97a25b9_e3df_444c_afc6_2d12c0ffee84.Data4
            || a2[3] != *(_DWORD *)&GUID_d97a25b9_e3df_444c_afc6_2d12c0ffee84.Data4[4] )
          {
            a1 += 8LL;
            if ( *a2 != -1406469880
              || a2[1] != *(_DWORD *)&GUID_ac2af908_82b1_40b3_a94d_18c2c0ffee84.Data2
              || a2[2] != *(_DWORD *)GUID_ac2af908_82b1_40b3_a94d_18c2c0ffee84.Data4
              || a2[3] != *(_DWORD *)&GUID_ac2af908_82b1_40b3_a94d_18c2c0ffee84.Data4[4] )
            {
              return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<IActiveZBandNotificationServicePrivate>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>::CanCastTo(
                       a1 + 16,
                       a2,
                       a3,
                       *(unsigned int *)&GUID_d97a25b9_e3df_444c_afc6_2d12c0ffee84.Data4[4]);
            }
          }
        }
      }
    }
  }
  *a3 = a1;
  return 0LL;
}
