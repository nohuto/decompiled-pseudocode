/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UICortanaStoreAppExperienceManager@@UIImmersiveLayoutChanges@@UIInputHostLayoutChanges@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UICortanaStoreAppExperienceManager@@UIImmersiveLayoutChanges@@UIInputHostLayoutChanges@@UIPrivilegedOperationsConsumer@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180167EF4
 * Callers:
 *     ?CreateInstance@CortanaStoreAppExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180167E40 (-CreateInstance@CortanaStoreAppExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rcx

  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 == -1350114592 && a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2 )
    {
      if ( a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
        && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
      {
        goto LABEL_5;
      }
      if ( a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
        && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
        && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
      {
        goto LABEL_17;
      }
    }
  }
  else if ( a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
         && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
         && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
LABEL_5:
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return 0LL;
  }
  a1 += 8LL;
  if ( *a2 != -62389853
    || a2[1] != *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
    || a2[2] != *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
    || a2[3] != *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
  {
    v5 = a1 + 40;
    if ( *a2 == -428157847
      && a2[1] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
      && a2[2] == *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
      && a2[3] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4]
      || (v5 = a1 + 48, *a2 == 1834041537)
      && a2[1] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
      && a2[2] == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
      && a2[3] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
    {
      *a3 = v5;
      v4 = 0;
    }
    else
    {
      v4 = -2147467262;
    }
    if ( v4 == -2147467262 )
    {
      v6 = a1 + 104;
      if ( *a2 == 56
        && a2[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
        && a2[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
        && a2[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4]
        || (v6 += 8LL, *a2 == 1956587284)
        && a2[1] == *(_DWORD *)&GUID_749f2714_937d_445e_9d22_666f49e7ff32.Data2
        && a2[2] == *(_DWORD *)GUID_749f2714_937d_445e_9d22_666f49e7ff32.Data4
        && a2[3] == *(_DWORD *)&GUID_749f2714_937d_445e_9d22_666f49e7ff32.Data4[4]
        || (v6 += 8LL, *a2 == 1784571261)
        && a2[1] == *(_DWORD *)&GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data2
        && a2[2] == *(_DWORD *)GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data4
        && a2[3] == *(_DWORD *)&GUID_6a5e657d_223a_4875_838b_c311ed73523b.Data4[4]
        || (v6 += 8LL, *a2 == 1337586361)
        && a2[1] == *(_DWORD *)&GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e.Data2
        && a2[2] == *(_DWORD *)GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e.Data4
        && a2[3] == *(_DWORD *)&GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e.Data4[4]
        || (v6 += 8LL, *a2 == -1211751484)
        && a2[1] == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data2
        && a2[2] == *(_DWORD *)GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4
        && a2[3] == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4[4] )
      {
        *a3 = v6;
        v4 = 0;
      }
      else
      {
        v4 = -2147467262;
      }
    }
    if ( v4 < 0 )
      return (unsigned int)v4;
    goto LABEL_38;
  }
LABEL_17:
  *a3 = a1;
  v4 = 0;
LABEL_38:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v4;
}
