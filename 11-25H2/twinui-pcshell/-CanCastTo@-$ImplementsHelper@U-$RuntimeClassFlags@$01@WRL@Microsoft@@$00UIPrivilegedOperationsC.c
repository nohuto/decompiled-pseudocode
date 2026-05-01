/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIPrivilegedOperationsConsumer@@UIWindowManagementShowMoveSizeEvents@@UIWindowManagementChannelSeverEvents@@UIWindowManagementWindowGroupingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801B24C8
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIViewPresentationMediator@@UIPrivilegedOperationsConsumer@@UIWindowManagementShowMoveSizeEvents@@UIWindowManagementChannelSeverEvents@@UIWindowManagementWindowGroupingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIViewPresentationMediator@@UIPrivilegedOperationsConsumer@@UIWindowManagementShowMoveSizeEvents@@UIWindowManagementChannelSeverEvents@@UIWindowManagementWindowGroupingEvents@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801B2360 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCI_ea_1801B2360.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPrivilegedOperationsConsumer,IWindowManagementShowMoveSizeEvents,IWindowManagementChannelSeverEvents,IWindowManagementWindowGroupingEvents,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 != -1211751484
    || a2[1] != *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data2
    || a2[2] != *(_DWORD *)GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4
    || a2[3] != *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4[4] )
  {
    a1 += 8LL;
    if ( *a2 != 1222485622
      || a2[1] != *(_DWORD *)&GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc.Data2
      || a2[2] != *(_DWORD *)GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc.Data4
      || a2[3] != *(_DWORD *)&GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc.Data4[4] )
    {
      a1 += 8LL;
      if ( *a2 != 692055875
        || a2[1] != *(_DWORD *)&GUID_293fef43_b5f7_4987_ae4c_a6c281bbbae0.Data2
        || a2[2] != *(_DWORD *)GUID_293fef43_b5f7_4987_ae4c_a6c281bbbae0.Data4
        || a2[3] != *(_DWORD *)&GUID_293fef43_b5f7_4987_ae4c_a6c281bbbae0.Data4[4] )
      {
        a1 += 8LL;
        if ( *a2 != -1696701788
          || a2[1] != *(_DWORD *)&GUID_9ade62a4_f8bb_4b95_ba4f_9d2b05faafa2.Data2
          || a2[2] != *(_DWORD *)GUID_9ade62a4_f8bb_4b95_ba4f_9d2b05faafa2.Data4
          || a2[3] != *(_DWORD *)&GUID_9ade62a4_f8bb_4b95_ba4f_9d2b05faafa2.Data4[4] )
        {
          return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>::CanCastTo(
                   a1 + 8,
                   a2,
                   a3);
        }
      }
    }
  }
  *a3 = a1;
  return 0LL;
}
