/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UIXamlAltTabViewHostInternal@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015A220
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UIXamlAltTabViewHostInternal@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18069ED50 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18069ED50.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UIXamlAltTabViewHostInternal@@@Details@WRL@Microsoft@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18069ED60 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18069ED60.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<IAltTabViewHost>,IXamlAltTabViewHostInternal>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // edi
  int v4; // ebx
  int v5; // eax

  v3 = 0;
  *a3 = 0LL;
  switch ( *a2 )
  {
    case 0:
      if ( a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
        && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
        && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
      {
        *a3 = a1;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
        return v3;
      }
LABEL_5:
      if ( *a2 == 1045680491
        && a2[1] == *(_DWORD *)&GUID_3e53d16b_fedb_45ad_802b_4418c91afa31.Data2
        && a2[2] == *(_DWORD *)GUID_3e53d16b_fedb_45ad_802b_4418c91afa31.Data4
        && a2[3] == *(_DWORD *)&GUID_3e53d16b_fedb_45ad_802b_4418c91afa31.Data4[4] )
      {
        *a3 = a1 + 120;
        v4 = 0;
      }
      else
      {
        v4 = -2147467262;
      }
      if ( v4 < 0 )
        return (unsigned int)v4;
      goto LABEL_19;
    case 0x405444D2:
      if ( a2[1] != *(_DWORD *)&GUID_405444d2_baa5_48ed_abfe_a673f70be863.Data2
        || a2[2] != *(_DWORD *)GUID_405444d2_baa5_48ed_abfe_a673f70be863.Data4 )
      {
        goto LABEL_5;
      }
      v5 = *(_DWORD *)&GUID_405444d2_baa5_48ed_abfe_a673f70be863.Data4[4];
LABEL_16:
      if ( a2[3] != v5 )
        goto LABEL_5;
      *a3 = a1;
      goto LABEL_18;
    case 0x49484DFC:
      if ( a2[1] != *(_DWORD *)&GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9.Data2
        || a2[2] != *(_DWORD *)GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9.Data4 )
      {
        goto LABEL_5;
      }
      v5 = *(_DWORD *)&GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9.Data4[4];
      goto LABEL_16;
  }
  if ( *a2 != -1811144131
    || a2[1] != *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
    || a2[2] != *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
    || a2[3] != *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4] )
  {
    goto LABEL_5;
  }
  *a3 = a1 + 8;
LABEL_18:
  v4 = 0;
LABEL_19:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v4;
}
