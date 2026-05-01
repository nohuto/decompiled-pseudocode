/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@U?$ChainInterfaces@UIKioskPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIPositionerApplicationClosePolicy@@UIApplicationViewChangeListener@@UIInternalFullScreenHandler@@UIWindowManagementShowMoveSizeEvents@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@U?$ChainInterfaces@UIKioskPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIPositionerApplicationClosePolicy@@UIApplicationViewChangeListener@@UIInternalFullScreenHandler@@UIWindowManagementShowMoveSizeEvents@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800D12BC
 * Callers:
 *     ??$MakeAndInitialize@VKioskPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800D0B68 (--$MakeAndInitialize@VKioskPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@U?$ChainInterfaces@UIKioskPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIPositionerApplicationClosePolicy@@UIApplicationViewChangeListener@@UIInternalFullScreenHandler@@UIWindowManagementShowMoveSizeEvents@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D12B0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiv.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D1CB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::ChainInterfaces<IKioskPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IPositionerApplicationClosePolicy,IApplicationViewChangeListener,IInternalFullScreenHandler,IWindowManagementShowMoveSizeEvents,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>>(
        char *a1,
        __int64 a2,
        void **a3)
{
  void *v3; // r9
  int CanCastTo; // ebx
  char *v5; // rcx
  int v6; // eax
  char *v8; // rcx
  int v9; // r10d

  *a3 = 0LL;
  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 == -62389853
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
    {
      *a3 = a1;
      goto LABEL_31;
    }
  }
  else if ( *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
         && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
         && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
    return 0LL;
  }
  v3 = a1 + 40;
  if ( *(_DWORD *)a2 != -428157847
    || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
    || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
    || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4] )
  {
    v3 = a1 + 48;
    if ( *(_DWORD *)a2 != 1834041537
      || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
      || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
      || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
    {
      CanCastTo = -2147467262;
      goto LABEL_14;
    }
  }
  *a3 = v3;
LABEL_31:
  CanCastTo = 0;
LABEL_14:
  if ( CanCastTo == -2147467262 )
  {
    v5 = a1 + 104;
    if ( *(_DWORD *)a2 == 1125698773 )
    {
      if ( *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_4318ccd5_092f_4ad4_9bc2_6962f0b2d986.Data2
        || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_4318ccd5_092f_4ad4_9bc2_6962f0b2d986.Data4 )
      {
        goto LABEL_36;
      }
      v6 = *(_DWORD *)&GUID_4318ccd5_092f_4ad4_9bc2_6962f0b2d986.Data4[4];
    }
    else
    {
      if ( *(_DWORD *)a2 != 684124641
        || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data2
        || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data4 )
      {
        goto LABEL_36;
      }
      v6 = *(_DWORD *)&GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data4[4];
    }
    if ( *(_DWORD *)(a2 + 12) == v6 )
    {
      *a3 = v5;
LABEL_21:
      CanCastTo = 0;
      goto LABEL_22;
    }
LABEL_36:
    v8 = v5 + 8;
    if ( *(_DWORD *)a2 != -301920745
      || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_ee010e17_919a_4068_868b_675acf787303.Data2
      || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_ee010e17_919a_4068_868b_675acf787303.Data4
      || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_ee010e17_919a_4068_868b_675acf787303.Data4[4] )
    {
      v8 += 8;
      if ( *(_DWORD *)a2 != -1811144131
        || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
        || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
        || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4] )
      {
        v8 += 8;
        if ( *(_DWORD *)a2 != 680509485
          || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_288fc02d_5a3a_4a73_8ee6_52de772339ac.Data2
          || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_288fc02d_5a3a_4a73_8ee6_52de772339ac.Data4
          || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_288fc02d_5a3a_4a73_8ee6_52de772339ac.Data4[4] )
        {
          v8 += 8;
          if ( *(_DWORD *)a2 != 1920966295
            || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data2
            || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4
            || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4[4] )
          {
            v8 += 8;
            if ( *(_DWORD *)a2 != -1010941077
              || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775.Data2
              || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775.Data4
              || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775.Data4[4] )
            {
              v8 += 8;
              if ( *(_DWORD *)a2 != 1222485622
                || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc.Data2
                || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc.Data4
                || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc.Data4[4] )
              {
                v8 += 8;
                if ( *(_DWORD *)a2 != -1211751484
                  || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data2
                  || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4
                  || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4[4] )
                {
                  CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(
                                (Microsoft::WRL::FtmBase *)(v8 + 8),
                                (const struct _GUID *)a2,
                                a3);
                  if ( CanCastTo == v9 )
                    CanCastTo = v9;
                  goto LABEL_22;
                }
              }
            }
          }
        }
      }
    }
    *a3 = v8;
    goto LABEL_21;
  }
LABEL_22:
  if ( CanCastTo >= 0 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)CanCastTo;
}
