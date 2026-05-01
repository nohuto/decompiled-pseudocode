/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIHolographicPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInternalFullScreenHandler@@UIHolographicViewManager@@UIHolographicViewTransitionNotificationService@@UIHolographicViewHostItemSource@Holographic@Shell@Internal@Windows@@@23@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$ChainInterfaces@U?$CloakedIid@UIShellPositionerViewHandoffWithShowCommand@@@WRL@Microsoft@@U?$CloakedIid@UIShellPositionerViewHandoff@@@23@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@23@U?$CloakedIid@UIApplicationViewChangeListener@@@23@UITopLevelAppViewSource@ComposableShell@Internal@Windows@@UITopLevelAppViewManager@789@@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIHolographicPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInternalFullScreenHandler@@UIHolographicViewManager@@UIHolographicViewTransitionNotificationService@@UIHolographicViewHostItemSource@Holographic@Shell@Internal@Windows@@@23@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$ChainInterfaces@U?$CloakedIid@UIShellPositionerViewHandoffWithShowCommand@@@WRL@Microsoft@@U?$CloakedIid@UIShellPositionerViewHandoff@@@23@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@23@U?$CloakedIid@UIApplicationViewChangeListener@@@23@UITopLevelAppViewSource@ComposableShell@Internal@Windows@@UITopLevelAppViewManager@789@@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180158CA0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIHolographicPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInternalFullScreenHandler@@UIHolographicViewManager@@UIHolographicViewTransitionNotificationService@@UIHolographicViewHostItemSource@Holographic@Shell@Internal@Windows@@@23@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$ChainInterfaces@U?$CloakedIid@UIShellPositionerViewHandoffWithShowCommand@@@WRL@Microsoft@@U?$CloakedIid@UIShellPositionerViewHandoff@@@23@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@23@U?$CloakedIid@UIApplicationViewChangeListener@@@23@UITopLevelAppViewSource@ComposableShell@Internal@Windows@@UITopLevelAppViewManager@789@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18021F860 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18021F860.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInternalFullScreenHandler,IHolographicViewManager,IHolographicViewTransitionNotificationService,Windows::Internal::Shell::Holographic::IHolographicViewHostItemSource>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::ChainInterfaces<Microsoft::WRL::CloakedIid<IShellPositionerViewHandoffWithShowCommand>,Microsoft::WRL::CloakedIid<IShellPositionerViewHandoff>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::CloakedIid<IApplicationViewChangeListener>,Windows::Internal::ComposableShell::ITopLevelAppViewSource,Windows::Internal::ComposableShell::ITopLevelAppViewManager>>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx

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
    goto LABEL_34;
  a1 = v9 + 104;
  if ( *a2 != 56
    || a2[1] != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
    || a2[2] != *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
    || a2[3] != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
  {
    v7 = v9 + 112;
    if ( *a2 == -2027141065 )
    {
      if ( a2[1] != *(_DWORD *)&GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa.Data2
        || a2[2] != *(_DWORD *)GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa.Data4 )
      {
        goto LABEL_54;
      }
      v8 = *(_DWORD *)&GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa.Data4[4];
    }
    else
    {
      if ( *a2 != 684124641
        || a2[1] != *(_DWORD *)&GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data2
        || a2[2] != *(_DWORD *)GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data4 )
      {
        goto LABEL_54;
      }
      v8 = *(_DWORD *)&GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data4[4];
    }
    if ( a2[3] == v8 )
    {
      *a3 = v7;
LABEL_33:
      v6 = 0;
      goto LABEL_34;
    }
LABEL_54:
    v10 = a1 + 16;
    if ( *a2 == -1010941077
      && a2[1] == *(_DWORD *)&GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775.Data2
      && a2[2] == *(_DWORD *)GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775.Data4
      && a2[3] == *(_DWORD *)&GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775.Data4[4] )
    {
      goto LABEL_58;
    }
    v11 = v7 + 16;
    if ( *a2 == 1401100229
      && a2[1] == *(_DWORD *)&GUID_538317c5_5bad_4847_962d_42da294f5e0a.Data2
      && a2[2] == *(_DWORD *)GUID_538317c5_5bad_4847_962d_42da294f5e0a.Data4
      && a2[3] == *(_DWORD *)&GUID_538317c5_5bad_4847_962d_42da294f5e0a.Data4[4]
      || (v11 = v7 + 24, *a2 == 1351671349)
      && a2[1] == *(_DWORD *)&GUID_5090de35_ed23_43be_9714_586c5041026a.Data2
      && a2[2] == *(_DWORD *)GUID_5090de35_ed23_43be_9714_586c5041026a.Data4
      && a2[3] == *(_DWORD *)&GUID_5090de35_ed23_43be_9714_586c5041026a.Data4[4]
      || (v11 = v7 + 32, *a2 == 860524149)
      && a2[1] == *(_DWORD *)&GUID_334a8e75_f9cf_4161_9035_68246f9ea21d.Data2
      && a2[2] == *(_DWORD *)GUID_334a8e75_f9cf_4161_9035_68246f9ea21d.Data4
      && a2[3] == *(_DWORD *)&GUID_334a8e75_f9cf_4161_9035_68246f9ea21d.Data4[4] )
    {
      *a3 = v11;
      v6 = 0;
    }
    else
    {
      v6 = -2147467262;
    }
    if ( v6 != -2147467262 )
      goto LABEL_34;
    if ( *a2 == -837101594 )
    {
      if ( a2[1] == *(_DWORD *)&GUID_ce1ad7e6_6f3e_45e0_bbf3_cca1181639d0.Data2
        && a2[2] == *(_DWORD *)GUID_ce1ad7e6_6f3e_45e0_bbf3_cca1181639d0.Data4 )
      {
        v12 = *(_DWORD *)&GUID_ce1ad7e6_6f3e_45e0_bbf3_cca1181639d0.Data4[4];
        goto LABEL_73;
      }
    }
    else if ( *a2 == -301920745
           && a2[1] == *(_DWORD *)&GUID_ee010e17_919a_4068_868b_675acf787303.Data2
           && a2[2] == *(_DWORD *)GUID_ee010e17_919a_4068_868b_675acf787303.Data4 )
    {
      v12 = *(_DWORD *)&GUID_ee010e17_919a_4068_868b_675acf787303.Data4[4];
LABEL_73:
      if ( a2[3] == v12 )
      {
        *a3 = v7 + 48;
        goto LABEL_33;
      }
    }
    v10 = v7 + 56;
    if ( *a2 == 1920966295
      && a2[1] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data2
      && a2[2] == *(_DWORD *)GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4
      && a2[3] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4[4] )
    {
LABEL_58:
      *a3 = v10;
      goto LABEL_33;
    }
    v13 = v7 + 64;
    if ( *a2 == 1032731074
      && a2[1] == *(_DWORD *)&GUID_3d8e39c2_c7b7_4b58_90b1_6bac0b0d4fe6.Data2
      && a2[2] == *(_DWORD *)GUID_3d8e39c2_c7b7_4b58_90b1_6bac0b0d4fe6.Data4
      && a2[3] == *(_DWORD *)&GUID_3d8e39c2_c7b7_4b58_90b1_6bac0b0d4fe6.Data4[4]
      || (v13 = v7 + 72, *a2 == -1890187054)
      && a2[1] == *(_DWORD *)&GUID_8f5608d2_f9be_457f_bcb5_789270f3b7e9.Data2
      && a2[2] == *(_DWORD *)GUID_8f5608d2_f9be_457f_bcb5_789270f3b7e9.Data4
      && a2[3] == *(_DWORD *)&GUID_8f5608d2_f9be_457f_bcb5_789270f3b7e9.Data4[4] )
    {
      *a3 = v13;
      v6 = 0;
    }
    else
    {
      v6 = -2147467262;
    }
    if ( v6 == -2147467262 )
      v6 = -2147467262;
LABEL_34:
    if ( v6 < 0 )
      return (unsigned int)v6;
    goto LABEL_24;
  }
LABEL_22:
  *a3 = a1;
LABEL_23:
  v6 = 0;
LABEL_24:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v6;
}
