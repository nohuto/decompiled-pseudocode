/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIImmersiveWindowMessageNotification@@UITouchKeyboardExperienceManager@@UIApplicationStateChangeHandler@@UILightDismissNotification@@UIGlobalRudeWindowNotifications@@UIClipboardViewLauncher@DataTransfer@Internal@ApplicationModel@Windows@@UIDWMStoryboardListener@@UITextInputHostInfoProvider@@UIInputExperienceHost@Text@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIImmersiveWindowMessageNotification@@UITouchKeyboardExperienceManager@@UIApplicationStateChangeHandler@@UILightDismissNotification@@UIGlobalRudeWindowNotifications@@UIClipboardViewLauncher@DataTransfer@Internal@ApplicationModel@Windows@@UIDWMStoryboardListener@@UITextInputHostInfoProvider@@UIInputExperienceHost@Text@Shell@Internal@Windows@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18001F294
 * Callers:
 *     ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18001EA30 (-OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?CreateInstance@TouchKeyboardExperienceManagerCF@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18023CE10 (-CreateInstance@TouchKeyboardExperienceManagerCF@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // r9

  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_11;
  }
  if ( *a2 == -1350114592 && a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2 )
  {
    if ( a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
LABEL_11:
      *a3 = a1;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      return 0LL;
    }
    if ( a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
      goto LABEL_22;
    }
  }
  v9 = a1 + 8;
  if ( *a2 == -62389853
    && a2[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
    && a2[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
    && a2[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
  {
    *a3 = v9;
    goto LABEL_23;
  }
  v5 = a1 + 48;
  if ( *a2 == -428157847
    && a2[1] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
    && a2[2] == *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
    && a2[3] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4] )
  {
    *a3 = v5;
    v6 = 0;
  }
  else
  {
    if ( *a2 == 1834041537
      && a2[1] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
      && a2[2] == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
      && a2[3] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
    {
      *a3 = v9 + 48;
      v6 = 0;
    }
    else
    {
      v6 = -2147467262;
    }
    if ( v6 == -2147467262 )
      v6 = -2147467262;
  }
  if ( v6 != -2147467262 )
  {
LABEL_85:
    if ( v6 < 0 )
      return (unsigned int)v6;
    goto LABEL_24;
  }
  a1 = v9 + 104;
  if ( *a2 != 56
    || a2[1] != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
    || a2[2] != *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
    || a2[3] != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
  {
    v7 = v9 + 112;
    if ( *a2 == -363000348
      && a2[1] == *(_DWORD *)&GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79.Data2
      && a2[2] == *(_DWORD *)GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79.Data4
      && a2[3] == *(_DWORD *)&GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79.Data4[4] )
    {
      goto LABEL_84;
    }
    v7 = v9 + 120;
    if ( *a2 == 1784571261
      && a2[1] == *(_DWORD *)&GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data2
      && a2[2] == *(_DWORD *)GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data4
      && a2[3] == *(_DWORD *)&GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data4[4] )
    {
      goto LABEL_84;
    }
    v7 = v9 + 128;
    if ( *a2 == -189734543
      && a2[1] == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data2
      && a2[2] == *(_DWORD *)GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4
      && a2[3] == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4[4] )
    {
      goto LABEL_84;
    }
    v7 = v9 + 136;
    if ( *a2 == -1793664922
      && a2[1] == *(_DWORD *)&GUID_9516d866_ca0f_40ca_8997_efa618b50f99.Data2
      && a2[2] == *(_DWORD *)GUID_9516d866_ca0f_40ca_8997_efa618b50f99.Data4
      && a2[3] == *(_DWORD *)&GUID_9516d866_ca0f_40ca_8997_efa618b50f99.Data4[4] )
    {
      goto LABEL_84;
    }
    v7 = v9 + 144;
    if ( *a2 == -1219107104
      && a2[1] == *(_DWORD *)&GUID_b755e6e0_b048_49cc_8911_11a041216f5f.Data2
      && a2[2] == *(_DWORD *)GUID_b755e6e0_b048_49cc_8911_11a041216f5f.Data4
      && a2[3] == *(_DWORD *)&GUID_b755e6e0_b048_49cc_8911_11a041216f5f.Data4[4] )
    {
      goto LABEL_84;
    }
    v7 = v9 + 152;
    if ( *a2 == -1924325694
      && a2[1] == *(_DWORD *)&GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb.Data2
      && a2[2] == *(_DWORD *)GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb.Data4
      && a2[3] == *(_DWORD *)&GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb.Data4[4] )
    {
      goto LABEL_84;
    }
    v7 = v9 + 160;
    if ( *a2 == 582646976
      && a2[1] == *(_DWORD *)&GUID_22ba7cc0_8e75_484f_844e_0b6d74105413.Data2
      && a2[2] == *(_DWORD *)GUID_22ba7cc0_8e75_484f_844e_0b6d74105413.Data4
      && a2[3] == *(_DWORD *)&GUID_22ba7cc0_8e75_484f_844e_0b6d74105413.Data4[4] )
    {
      goto LABEL_84;
    }
    v7 = v9 + 168;
    if ( *a2 == -912876147
      && a2[1] == *(_DWORD *)&GUID_c9969d8d_c814_50fd_9f55_84a54e9453fc.Data2
      && a2[2] == *(_DWORD *)GUID_c9969d8d_c814_50fd_9f55_84a54e9453fc.Data4
      && a2[3] == *(_DWORD *)&GUID_c9969d8d_c814_50fd_9f55_84a54e9453fc.Data4[4] )
    {
      goto LABEL_84;
    }
    v7 = v9 + 176;
    if ( *a2 == -1385320689
      && a2[1] == *(_DWORD *)&GUID_ad6daf0f_d2b6_4728_8fb8_30a1d1e2142e.Data2
      && a2[2] == *(_DWORD *)GUID_ad6daf0f_d2b6_4728_8fb8_30a1d1e2142e.Data4
      && a2[3] == *(_DWORD *)&GUID_ad6daf0f_d2b6_4728_8fb8_30a1d1e2142e.Data4[4] )
    {
      goto LABEL_84;
    }
    v7 = v9 + 184;
    if ( *a2 == -977681168
      && a2[1] == *(_DWORD *)&GUID_c5b9c4f0_4906_4a75_a1db_edcf89a57cb7.Data2
      && a2[2] == *(_DWORD *)GUID_c5b9c4f0_4906_4a75_a1db_edcf89a57cb7.Data4
      && a2[3] == *(_DWORD *)&GUID_c5b9c4f0_4906_4a75_a1db_edcf89a57cb7.Data4[4] )
    {
      goto LABEL_84;
    }
    v7 = v9 + 192;
    if ( *a2 == -45699386
      && a2[1] == *(_DWORD *)&GUID_fd46aec6_5098_5808_b55b_9a79dfe56776.Data2
      && a2[2] == *(_DWORD *)GUID_fd46aec6_5098_5808_b55b_9a79dfe56776.Data4
      && a2[3] == *(_DWORD *)&GUID_fd46aec6_5098_5808_b55b_9a79dfe56776.Data4[4] )
    {
      goto LABEL_84;
    }
    v7 = v9 + 200;
    if ( *a2 == -1796592748 )
    {
      if ( a2[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
        && a2[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4 )
      {
        v8 = *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4];
        goto LABEL_83;
      }
    }
    else if ( *a2 == 3
           && a2[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
           && a2[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4 )
    {
      v8 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4];
LABEL_83:
      if ( a2[3] == v8 )
      {
LABEL_84:
        *a3 = v7;
        v6 = 0;
        goto LABEL_85;
      }
    }
    v6 = -2147467262;
    goto LABEL_85;
  }
LABEL_22:
  *a3 = a1;
LABEL_23:
  v6 = 0;
LABEL_24:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v6;
}
