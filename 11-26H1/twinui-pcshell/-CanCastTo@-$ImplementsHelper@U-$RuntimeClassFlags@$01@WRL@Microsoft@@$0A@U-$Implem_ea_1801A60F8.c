/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveShellComponentWithSite@@@Details@23@UIWindowManagementJointResizeEvents@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@UIImmersiveRawInputKeyboardNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801A60F8
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowManagementJointResizeEvents@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@UIImmersiveRawInputKeyboardNotification@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A6080 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801A6080.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithSite>,IWindowManagementJointResizeEvents,IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,IImmersiveRawInputKeyboardNotification>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // r9

  if ( *a2 == -62389853
    && a2[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
    && a2[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
    && a2[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
  {
LABEL_5:
    *a3 = a1;
    return 0LL;
  }
  v4 = a1 + 24;
  if ( *a2 == -428157847
    && a2[1] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
    && a2[2] == *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
    && a2[3] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4]
    || (v4 = a1 + 32, *a2 == 1834041537)
    && a2[1] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
    && a2[2] == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
    && a2[3] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
  {
    *a3 = v4;
    result = 0LL;
  }
  else
  {
    result = 2147500034LL;
  }
  if ( (_DWORD)result == -2147467262 )
  {
    a1 += 88LL;
    if ( *a2 != -1291114597
      || a2[1] != *(_DWORD *)&GUID_b30b279b_8908_4848_81f8_1c9f6c2165f1.Data2
      || a2[2] != *(_DWORD *)GUID_b30b279b_8908_4848_81f8_1c9f6c2165f1.Data4
      || a2[3] != *(_DWORD *)&GUID_b30b279b_8908_4848_81f8_1c9f6c2165f1.Data4[4] )
    {
      a1 += 8LL;
      if ( *a2 != 1920966295
        || a2[1] != *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data2
        || a2[2] != *(_DWORD *)GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4
        || a2[3] != *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4[4] )
      {
        a1 += 8LL;
        if ( *a2 != 188802278
          || a2[1] != *(_DWORD *)&GUID_0b40e4e6_2749_461f_9a84_29491c297f86.Data2
          || a2[2] != *(_DWORD *)GUID_0b40e4e6_2749_461f_9a84_29491c297f86.Data4
          || a2[3] != *(_DWORD *)&GUID_0b40e4e6_2749_461f_9a84_29491c297f86.Data4[4] )
        {
          a1 += 8LL;
          if ( *a2 != -1717070075
            || a2[1] != *(_DWORD *)&GUID_99a79705_bfc0_4c43_be58_a929322ee203.Data2
            || a2[2] != *(_DWORD *)GUID_99a79705_bfc0_4c43_be58_a929322ee203.Data4
            || a2[3] != *(_DWORD *)&GUID_99a79705_bfc0_4c43_be58_a929322ee203.Data4[4] )
          {
            return 2147500034LL;
          }
        }
      }
    }
    goto LABEL_5;
  }
  return result;
}
