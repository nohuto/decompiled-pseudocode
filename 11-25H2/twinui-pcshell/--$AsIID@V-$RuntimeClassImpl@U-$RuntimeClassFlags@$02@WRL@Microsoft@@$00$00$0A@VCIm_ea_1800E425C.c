/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIAcrylicPolicyManager@@UIImmersiveWindowMessageNotification@@UIBatterySaverStateChangedHandler@@UICompositionCapabilitiesChangedHandler@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIAcrylicPolicyManager@@UIImmersiveWindowMessageNotification@@UIBatterySaverStateChangedHandler@@UICompositionCapabilitiesChangedHandler@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800E425C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIAcrylicPolicyManager@@UIImmersiveWindowMessageNotification@@UIBatterySaverStateChangedHandler@@UICompositionCapabilitiesChangedHandler@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18022B370 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18022B370.c)
 *     ??$MakeAndInitialize@VAcrylicPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802E0EF4 (--$MakeAndInitialize@VAcrylicPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnk.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800E4608 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VCW.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E4E00 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IAcrylicPolicyManager,IImmersiveWindowMessageNotification,IBatterySaverStateChangedHandler,ICompositionCapabilitiesChangedHandler,Microsoft::WRL::FtmBase>>(
        char *a1,
        _DWORD *a2,
        void **a3)
{
  int CanCastTo; // ebx
  __int64 v6; // rdx
  char *v7; // r10
  void *v8; // rcx
  int v9; // r11d

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
      (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
      return 0LL;
    }
    if ( a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
      goto LABEL_15;
    }
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CImmersiveShellComponent>::CanCastTo(a1 + 8);
  if ( CanCastTo != -2147467262 )
  {
LABEL_33:
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
    goto LABEL_16;
  }
  a1 = v7 + 104;
  if ( *(_DWORD *)v6 != 56
    || *(_DWORD *)(v6 + 4) != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
    || *(_DWORD *)(v6 + 8) != *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
    || *(_DWORD *)(v6 + 12) != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
  {
    v8 = v7 + 112;
    if ( *(_DWORD *)v6 == -1578697978
      && *(_DWORD *)(v6 + 4) == *(_DWORD *)&GUID_a1e6fb06_77d4_47f1_acd4_841acd227c09.Data2
      && *(_DWORD *)(v6 + 8) == *(_DWORD *)GUID_a1e6fb06_77d4_47f1_acd4_841acd227c09.Data4
      && *(_DWORD *)(v6 + 12) == *(_DWORD *)&GUID_a1e6fb06_77d4_47f1_acd4_841acd227c09.Data4[4]
      || (v8 = v7 + 120, *(_DWORD *)v6 == -189734543)
      && *(_DWORD *)(v6 + 4) == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data2
      && *(_DWORD *)(v6 + 8) == *(_DWORD *)GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4
      && *(_DWORD *)(v6 + 12) == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4[4]
      || (v8 = v7 + 128, *(_DWORD *)v6 == 409345329)
      && *(_DWORD *)(v6 + 4) == *(_DWORD *)&GUID_18661d31_3944_41b1_bd96_da3defc2c268.Data2
      && *(_DWORD *)(v6 + 8) == *(_DWORD *)GUID_18661d31_3944_41b1_bd96_da3defc2c268.Data4
      && *(_DWORD *)(v6 + 12) == *(_DWORD *)&GUID_18661d31_3944_41b1_bd96_da3defc2c268.Data4[4]
      || (v8 = v7 + 136, *(_DWORD *)v6 == -464873413)
      && *(_DWORD *)(v6 + 4) == *(_DWORD *)&GUID_e44a983b_30a7_416c_b8a5_04d032bd352d.Data2
      && *(_DWORD *)(v6 + 8) == *(_DWORD *)GUID_e44a983b_30a7_416c_b8a5_04d032bd352d.Data4
      && *(_DWORD *)(v6 + 12) == *(_DWORD *)&GUID_e44a983b_30a7_416c_b8a5_04d032bd352d.Data4[4] )
    {
      *a3 = v8;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(
                    (Microsoft::WRL::FtmBase *)(v7 + 144),
                    (const struct _GUID *)v6,
                    a3);
      if ( CanCastTo == v9 )
        CanCastTo = v9;
    }
    goto LABEL_33;
  }
LABEL_15:
  *a3 = a1;
  CanCastTo = 0;
LABEL_16:
  (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)CanCastTo;
}
