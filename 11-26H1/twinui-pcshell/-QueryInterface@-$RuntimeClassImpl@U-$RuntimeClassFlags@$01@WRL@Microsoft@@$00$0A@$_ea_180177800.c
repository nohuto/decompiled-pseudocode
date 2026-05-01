/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModePositionerManagerPriv@@UITabletModePositionerManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180177800
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModePositionerManagerPriv@@UITabletModePositionerManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180514CA0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180514CA0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModePositionerManagerPriv@@UITabletModePositionerManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180514CB0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180514CB0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModePositionerManagerPriv@@UITabletModePositionerManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180514CC0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180514CC0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModePositionerManagerPriv@@UITabletModePositionerManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180514CD0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180514CD0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,Microsoft::WRL::ChainInterfaces<ITabletModePositionerManagerPriv,ITabletModePositionerManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IWindowManagementShowMoveSizeEvents>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // edi
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v7; // r9
  __int64 v8; // rcx
  int v9; // eax

  v3 = 0;
  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 == -62389853
      && a2[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
      && a2[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
      && a2[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
    {
      *a3 = a1;
      v5 = 0;
      goto LABEL_12;
    }
LABEL_15:
    v7 = a1 + 24;
    if ( *a2 == -428157847
      && a2[1] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
      && a2[2] == *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
      && a2[3] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4]
      || (v7 = a1 + 32, *a2 == 1834041537)
      && a2[1] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
      && a2[2] == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
      && a2[3] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
    {
      *a3 = v7;
      v5 = 0;
    }
    else
    {
      v5 = -2147467262;
    }
    if ( v5 != -2147467262 )
    {
LABEL_11:
      if ( v5 < 0 )
        return (unsigned int)v5;
LABEL_12:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
      return (unsigned int)v5;
    }
    v8 = a1 + 88;
    if ( *a2 == 537924140 )
    {
      if ( a2[1] != *(_DWORD *)&GUID_2010122c_468a_480f_8cd1_b85e76f5882e.Data2
        || a2[2] != *(_DWORD *)GUID_2010122c_468a_480f_8cd1_b85e76f5882e.Data4 )
      {
        goto LABEL_6;
      }
      v9 = *(_DWORD *)&GUID_2010122c_468a_480f_8cd1_b85e76f5882e.Data4[4];
    }
    else
    {
      if ( *a2 != 95180454
        || a2[1] != *(_DWORD *)&GUID_05ac56a6_baf7_414f_b92c_7156052701de.Data2
        || a2[2] != *(_DWORD *)GUID_05ac56a6_baf7_414f_b92c_7156052701de.Data4 )
      {
        goto LABEL_6;
      }
      v9 = *(_DWORD *)&GUID_05ac56a6_baf7_414f_b92c_7156052701de.Data4[4];
    }
    if ( a2[3] == v9 )
    {
      *a3 = v8;
LABEL_31:
      v5 = 0;
      goto LABEL_11;
    }
LABEL_6:
    v4 = v8 + 8;
    if ( *a2 != 1222485622
      || a2[1] != *(_DWORD *)&GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc.Data2
      || a2[2] != *(_DWORD *)GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc.Data4
      || a2[3] != *(_DWORD *)&GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc.Data4[4] )
    {
      v5 = -2147467262;
      goto LABEL_11;
    }
    *a3 = v4;
    goto LABEL_31;
  }
  if ( a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_15;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
