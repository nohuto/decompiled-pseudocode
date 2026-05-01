/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@UIPrivilegedOperationsConsumer@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180117D54
 * Callers:
 *     ??$MakeAndInitialize@VCFullScreenManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800D703C (--$MakeAndInitialize@VCFullScreenManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkno.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IFullScreenManager,IFullScreenManagerPriv,IFullScreenNotificationService,IFullScreenPositionerNotification,IImmersiveMonitorNotification,IPrivilegedOperationsConsumer>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v3; // ebx
  __int64 v4; // r9
  __int64 v5; // rcx

  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 == -62389853
      && a2[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
      && a2[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
      && a2[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
    {
      *a3 = a1;
      goto LABEL_7;
    }
  }
  else if ( a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
         && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
         && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return 0LL;
  }
  v4 = a1 + 24;
  if ( *a2 != -428157847
    || a2[1] != *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
    || a2[2] != *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
    || a2[3] != *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4] )
  {
    v4 = a1 + 32;
    if ( *a2 != 1834041537
      || a2[1] != *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
      || a2[2] != *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
      || a2[3] != *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
    {
      v3 = -2147467262;
      goto LABEL_20;
    }
  }
  *a3 = v4;
LABEL_7:
  v3 = 0;
LABEL_20:
  if ( v3 == -2147467262 )
  {
    v5 = a1 + 88;
    if ( *a2 == -267831919
      && a2[1] == *(_DWORD *)&GUID_f0093591_bfa3_471f_b9f0_f17f8a979c6d.Data2
      && a2[2] == *(_DWORD *)GUID_f0093591_bfa3_471f_b9f0_f17f8a979c6d.Data4
      && a2[3] == *(_DWORD *)&GUID_f0093591_bfa3_471f_b9f0_f17f8a979c6d.Data4[4]
      || (v5 += 8LL, *a2 == 1601978354)
      && a2[1] == *(_DWORD *)&GUID_5f7c3ff2_e06b_42a9_b4de_c87109b32dd0.Data2
      && a2[2] == *(_DWORD *)GUID_5f7c3ff2_e06b_42a9_b4de_c87109b32dd0.Data4
      && a2[3] == *(_DWORD *)&GUID_5f7c3ff2_e06b_42a9_b4de_c87109b32dd0.Data4[4]
      || (v5 += 8LL, *a2 == -11136999)
      && a2[1] == *(_DWORD *)&GUID_ff561019_e9bf_4cb5_8e4a_cb42e23ce7a2.Data2
      && a2[2] == *(_DWORD *)GUID_ff561019_e9bf_4cb5_8e4a_cb42e23ce7a2.Data4
      && a2[3] == *(_DWORD *)&GUID_ff561019_e9bf_4cb5_8e4a_cb42e23ce7a2.Data4[4]
      || (v5 += 8LL, *a2 == -24019057)
      && a2[1] == *(_DWORD *)&GUID_fe917f8f_4e14_41a5_83ba_a9f9de203a07.Data2
      && a2[2] == *(_DWORD *)GUID_fe917f8f_4e14_41a5_83ba_a9f9de203a07.Data4
      && a2[3] == *(_DWORD *)&GUID_fe917f8f_4e14_41a5_83ba_a9f9de203a07.Data4[4]
      || (v5 += 8LL, *a2 == -1811144131)
      && a2[1] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
      && a2[2] == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
      && a2[3] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4]
      || (v5 += 8LL, *a2 == -1211751484)
      && a2[1] == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data2
      && a2[2] == *(_DWORD *)GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4
      && a2[3] == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4[4] )
    {
      *a3 = v5;
      v3 = 0;
    }
    else
    {
      v3 = -2147467262;
    }
  }
  if ( v3 >= 0 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v3;
}
