/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@UIPriviledgedPositioner@@UIWindowManagementArrangementEvents@@UIImmersiveWindowMessageNotification@@UIImmersiveSettingsCacheNotification@@UIImmersiveShellHookNotification@@UIWindowManagementShowMoveSizeEvents@@UIImmersiveRawInputKeyboardNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18016D8B4
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UISnapComponent@@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@UIPriviledgedPositioner@@UIWindowManagementArrangementEvents@@UIImmersiveWindowMessageNotification@@UIImmersiveSettingsCacheNotification@@UIImmersiveShellHookNotification@@UIWindowManagementShowMoveSizeEvents@@UIImmersiveRawInputKeyboardNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UISnapComponent@@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@UIPriviledgedPositioner@@UIWindowManagementArrangementEvents@@UIImmersiveWindowMessageNotification@@UIImmersiveSettingsCacheNotification@@UIImmersiveShellHookNotification@@UIWindowManagementShowMoveSizeEvents@@UIImmersiveRawInputKeyboardNotification@@UIImmersiveMonitorNotification@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18016D490 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCIm_ea_18016D490.c)
 *     ?QueryInterface@CShellSnapComponent@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18016D6A0 (-QueryInterface@CShellSnapComponent@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::WindowSnapping::ISnapComponent2,IPriviledgedPositioner,IWindowManagementArrangementEvents,IImmersiveWindowMessageNotification,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // r9d
  int v4; // eax
  __int64 v5; // rcx

  v3 = 0;
  if ( *a2 != 497242142
    || a2[1] != *(_DWORD *)&GUID_1da3501e_cf8d_5263_a3c5_7f0e104a514a.Data2
    || a2[2] != *(_DWORD *)GUID_1da3501e_cf8d_5263_a3c5_7f0e104a514a.Data4
    || (v4 = 1, a2[3] != *(_DWORD *)&GUID_1da3501e_cf8d_5263_a3c5_7f0e104a514a.Data4[4]) )
  {
    v4 = 0;
  }
  if ( v4 )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    v5 = a1 + 8;
    if ( *a2 == 46419135
      && a2[1] == *(_DWORD *)&GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6.Data2
      && a2[2] == *(_DWORD *)GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6.Data4
      && a2[3] == *(_DWORD *)&GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6.Data4[4]
      || (v5 += 8LL, *a2 == -1354387640)
      && a2[1] == *(_DWORD *)&GUID_af45af48_c813_4b64_943d_73f6be1b9fdc.Data2
      && a2[2] == *(_DWORD *)GUID_af45af48_c813_4b64_943d_73f6be1b9fdc.Data4
      && a2[3] == *(_DWORD *)&GUID_af45af48_c813_4b64_943d_73f6be1b9fdc.Data4[4]
      || (v5 += 8LL, *a2 == -189734543)
      && a2[1] == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data2
      && a2[2] == *(_DWORD *)GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4
      && a2[3] == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4[4]
      || (v5 += 8LL, *a2 == 188802278)
      && a2[1] == *(_DWORD *)&GUID_0b40e4e6_2749_461f_9a84_29491c297f86.Data2
      && a2[2] == *(_DWORD *)GUID_0b40e4e6_2749_461f_9a84_29491c297f86.Data4
      && a2[3] == *(_DWORD *)&GUID_0b40e4e6_2749_461f_9a84_29491c297f86.Data4[4]
      || (v5 += 8LL, *a2 == 1260763374)
      && a2[1] == *(_DWORD *)&GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data2
      && a2[2] == *(_DWORD *)GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data4
      && a2[3] == *(_DWORD *)&GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data4[4]
      || (v5 += 8LL, *a2 == 1222485622)
      && a2[1] == *(_DWORD *)&GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc.Data2
      && a2[2] == *(_DWORD *)GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc.Data4
      && a2[3] == *(_DWORD *)&GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc.Data4[4]
      || (v5 += 8LL, *a2 == -1717070075)
      && a2[1] == *(_DWORD *)&GUID_99a79705_bfc0_4c43_be58_a929322ee203.Data2
      && a2[2] == *(_DWORD *)GUID_99a79705_bfc0_4c43_be58_a929322ee203.Data4
      && a2[3] == *(_DWORD *)&GUID_99a79705_bfc0_4c43_be58_a929322ee203.Data4[4]
      || (v5 += 8LL, *a2 == -1811144131)
      && a2[1] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
      && a2[2] == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
      && a2[3] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4] )
    {
      *a3 = v5;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v3;
  }
}
