/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIRetailDemoExperienceManager@RetailDemo@Internal@Windows@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIRetailDemoExperienceManager@RetailDemo@Internal@Windows@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800E443C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIRetailDemoExperienceManager@RetailDemo@Internal@Windows@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180227710 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180227710.c)
 *     ?CreateInstance@RetailDemoExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180394AB0 (-CreateInstance@RetailDemoExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800E4608 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VCW.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E4E00 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,Windows::Internal::RetailDemo::IRetailDemoExperienceManager,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>>(
        char *a1,
        _DWORD *a2,
        void **a3)
{
  __int64 v5; // rdx
  int CanCastTo; // ebx
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
      goto LABEL_17;
    }
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CImmersiveShellComponent>::CanCastTo(a1 + 8);
  if ( CanCastTo != -2147467262 )
  {
LABEL_26:
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
    goto LABEL_18;
  }
  a1 = v7 + 104;
  if ( *(_DWORD *)v5 != 56
    || *(_DWORD *)(v5 + 4) != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
    || *(_DWORD *)(v5 + 8) != *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
    || *(_DWORD *)(v5 + 12) != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
  {
    v8 = v7 + 112;
    if ( *(_DWORD *)v5 == 1784571261
      && *(_DWORD *)(v5 + 4) == *(_DWORD *)&GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data2
      && *(_DWORD *)(v5 + 8) == *(_DWORD *)GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data4
      && *(_DWORD *)(v5 + 12) == *(_DWORD *)&GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data4[4]
      || (v8 = v7 + 120, *(_DWORD *)v5 == -935410464)
      && *(_DWORD *)(v5 + 4) == *(_DWORD *)&GUID_c83ec4e0_068f_4a90_a1c7_20841a08f99f.Data2
      && *(_DWORD *)(v5 + 8) == *(_DWORD *)GUID_c83ec4e0_068f_4a90_a1c7_20841a08f99f.Data4
      && *(_DWORD *)(v5 + 12) == *(_DWORD *)&GUID_c83ec4e0_068f_4a90_a1c7_20841a08f99f.Data4[4]
      || (v8 = v7 + 128, *(_DWORD *)v5 == -1211751484)
      && *(_DWORD *)(v5 + 4) == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data2
      && *(_DWORD *)(v5 + 8) == *(_DWORD *)GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4
      && *(_DWORD *)(v5 + 12) == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4[4] )
    {
      *a3 = v8;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(
                    (Microsoft::WRL::FtmBase *)(v7 + 136),
                    (const struct _GUID *)v5,
                    a3);
      if ( CanCastTo == v9 )
        CanCastTo = v9;
    }
    goto LABEL_26;
  }
LABEL_17:
  *a3 = a1;
  CanCastTo = 0;
LABEL_18:
  (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)CanCastTo;
}
