/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIAppTransitionManager@@UIAppTransitionTargetManagerSink@@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIAppTransitionManager@@UIAppTransitionTargetManagerSink@@UIApplicationViewChangeListener@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180080F30
 * Callers:
 *     ??$MakeAndInitialize@VCAppTransitionManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180080E14 (--$MakeAndInitialize@VCAppTransitionManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUn.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IAppTransitionManager,IAppTransitionTargetManagerSink,IApplicationViewChangeListener>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v4; // ebx
  __int64 v6; // rcx

  *a3 = 0LL;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( *a2 == -62389853
      && a2[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
      && a2[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
      && a2[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
    {
      goto LABEL_8;
    }
    if ( *a2 == -428157847
      && a2[1] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
      && a2[2] == *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
      && a2[3] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4] )
    {
      *a3 = a1 + 24;
      v4 = 0;
    }
    else
    {
      if ( *a2 == 1834041537
        && a2[1] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
        && a2[2] == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
        && a2[3] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
      {
        *a3 = a1 + 32;
        v4 = 0;
      }
      else
      {
        v4 = -2147467262;
      }
      if ( v4 == -2147467262 )
        v4 = -2147467262;
    }
    if ( v4 == -2147467262 )
    {
      a1 += 88LL;
      if ( *a2 == -1093554228
        && a2[1] == *(_DWORD *)&GUID_bed1afcc_2de8_451c_9d0f_b5e62404b714.Data2
        && a2[2] == *(_DWORD *)GUID_bed1afcc_2de8_451c_9d0f_b5e62404b714.Data4
        && a2[3] == *(_DWORD *)&GUID_bed1afcc_2de8_451c_9d0f_b5e62404b714.Data4[4] )
      {
LABEL_8:
        *a3 = a1;
        v4 = 0;
LABEL_9:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
        return (unsigned int)v4;
      }
      v6 = a1 + 8;
      if ( *a2 == 1626835649
        && a2[1] == *(_DWORD *)&GUID_60f78ac1_5edd_4b6d_9d29_b2300ef43343.Data2
        && a2[2] == *(_DWORD *)GUID_60f78ac1_5edd_4b6d_9d29_b2300ef43343.Data4
        && a2[3] == *(_DWORD *)&GUID_60f78ac1_5edd_4b6d_9d29_b2300ef43343.Data4[4]
        || (v6 += 8LL, *a2 == 1920966295)
        && a2[1] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data2
        && a2[2] == *(_DWORD *)GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4
        && a2[3] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4[4] )
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
    goto LABEL_9;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
