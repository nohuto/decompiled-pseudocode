/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIRetailDemoExperienceManager@RetailDemo@Internal@Windows@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIRetailDemoExperienceManager@RetailDemo@Internal@Windows@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800D237C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIRetailDemoExperienceManager@RetailDemo@Internal@Windows@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D2370 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersive.c)
 *     ?CreateInstance@RetailDemoExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18039D0F0 (-CreateInstance@RetailDemoExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D1CB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,Windows::Internal::RetailDemo::IRetailDemoExperienceManager,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>>(
        char *a1,
        __int64 a2,
        void **a3)
{
  int CanCastTo; // ebx
  void *v4; // r9
  char *v5; // rcx
  int v7; // r10d

  *a3 = 0LL;
  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 != -1350114592
      || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2 )
    {
LABEL_5:
      a1 += 8;
      if ( *(_DWORD *)a2 != -62389853
        || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
        || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
        || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
      {
        v4 = a1 + 40;
        if ( *(_DWORD *)a2 == -428157847
          && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
          && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
          && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4]
          || (v4 = a1 + 48, *(_DWORD *)a2 == 1834041537)
          && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
          && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
          && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
        {
          *a3 = v4;
          CanCastTo = 0;
        }
        else
        {
          CanCastTo = -2147467262;
        }
        if ( CanCastTo == -2147467262 )
        {
          v5 = a1 + 104;
          if ( *(_DWORD *)a2 == 56
            && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
            && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
            && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4]
            || (v5 += 8, *(_DWORD *)a2 == 1784571261)
            && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data2
            && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data4
            && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data4[4]
            || (v5 += 8, *(_DWORD *)a2 == -935410464)
            && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_c83ec4e0_068f_4a90_a1c7_20841a08f99f.Data2
            && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_c83ec4e0_068f_4a90_a1c7_20841a08f99f.Data4
            && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_c83ec4e0_068f_4a90_a1c7_20841a08f99f.Data4[4]
            || (v5 += 8, *(_DWORD *)a2 == -1211751484)
            && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data2
            && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4
            && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4[4] )
          {
            *a3 = v5;
            CanCastTo = 0;
          }
          else
          {
            CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(
                          (Microsoft::WRL::FtmBase *)(v5 + 8),
                          (const struct _GUID *)a2,
                          a3);
            if ( CanCastTo == v7 )
              CanCastTo = v7;
          }
        }
        if ( CanCastTo < 0 )
          return (unsigned int)CanCastTo;
        goto LABEL_26;
      }
LABEL_9:
      *a3 = a1;
      CanCastTo = 0;
LABEL_26:
      (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
      return (unsigned int)CanCastTo;
    }
    if ( *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
      if ( *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
      {
        goto LABEL_9;
      }
      goto LABEL_5;
    }
  }
  else if ( *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
         || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
         || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_5;
  }
  *a3 = a1;
  (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
