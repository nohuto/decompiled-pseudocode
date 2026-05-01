/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@6789@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@6789@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800E40E0
 * Callers:
 *     ??$MakeAndInitialize@VFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800E39F8 (--$MakeAndInitialize@VFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIUnknown@@.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@6789@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18022D8E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18022D8E0.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800E4608 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VCW.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E4E00 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::FamilySafety::AppLimits::IFamilyAppUsageManager,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,Microsoft::WRL::FtmBase>>(
        char *a1,
        _DWORD *a2,
        void **a3)
{
  int CanCastTo; // ebx
  __int64 v5; // rdx
  char *v6; // r10
  void *v7; // rcx
  int v8; // r11d

  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_5;
  }
  if ( *a2 == -1350114592 )
  {
    if ( a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
LABEL_5:
      *a3 = a1;
      (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
      return 0LL;
    }
    if ( *a2 == -1350114592
      && a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
      goto LABEL_10;
    }
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CImmersiveShellComponent>::CanCastTo(a1 + 8);
  if ( CanCastTo != -2147467262 )
  {
LABEL_32:
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
    goto LABEL_11;
  }
  a1 = v6 + 104;
  if ( *(_DWORD *)v5 != 56
    || *(_DWORD *)(v5 + 4) != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
    || *(_DWORD *)(v5 + 8) != *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
    || *(_DWORD *)(v5 + 12) != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
  {
    v7 = v6 + 112;
    if ( *(_DWORD *)v5 == 2010491477
      && *(_DWORD *)(v5 + 4) == *(_DWORD *)&GUID_77d5aa55_5b12_56e8_8e0c_0db6e187f3e3.Data2
      && *(_DWORD *)(v5 + 8) == *(_DWORD *)GUID_77d5aa55_5b12_56e8_8e0c_0db6e187f3e3.Data4
      && *(_DWORD *)(v5 + 12) == *(_DWORD *)&GUID_77d5aa55_5b12_56e8_8e0c_0db6e187f3e3.Data4[4]
      || (v7 = v6 + 120, *(_DWORD *)v5 == -384237560)
      && *(_DWORD *)(v5 + 4) == *(_DWORD *)&GUID_e9190008_2b75_44a0_bb98_1556309f70f1.Data2
      && *(_DWORD *)(v5 + 8) == *(_DWORD *)GUID_e9190008_2b75_44a0_bb98_1556309f70f1.Data4
      && *(_DWORD *)(v5 + 12) == *(_DWORD *)&GUID_e9190008_2b75_44a0_bb98_1556309f70f1.Data4[4] )
    {
      *a3 = v7;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(
                    (Microsoft::WRL::FtmBase *)(v6 + 128),
                    (const struct _GUID *)v5,
                    a3);
      if ( CanCastTo == v8 )
        CanCastTo = v8;
    }
    goto LABEL_32;
  }
LABEL_10:
  *a3 = a1;
  CanCastTo = 0;
LABEL_11:
  (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)CanCastTo;
}
