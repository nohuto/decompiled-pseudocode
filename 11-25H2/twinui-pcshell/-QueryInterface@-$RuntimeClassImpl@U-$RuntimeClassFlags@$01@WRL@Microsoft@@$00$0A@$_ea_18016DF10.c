/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIMultitaskingViewServiceProvider@@UIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18016DF10
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIMultitaskingViewServiceProvider@@UIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180485C30 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180485C30.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIMultitaskingViewServiceProvider@@UIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180485C40 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180485C40.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIMultitaskingViewServiceProvider@@UIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180485C50 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180485C50.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIMultitaskingViewServiceProvider@@UIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180485C60 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180485C60.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IMultitaskingViewServiceProvider,IMultitaskingViewTaskScheduler>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // r11
  unsigned int v5; // edi
  _DWORD *v6; // r9
  _DWORD *v7; // rdx
  _DWORD *v8; // rcx
  int v9; // ebx
  _DWORD *v11; // r14
  _DWORD *v12; // rbp
  _DWORD *v13; // rsi
  __int64 v14; // r11

  v4 = a1;
  v5 = 0;
  *a3 = 0LL;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    v6 = a2 + 1;
    v7 = a2 + 2;
    v8 = a2 + 3;
    if ( *a2 == -62389853
      && *v6 == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
      && *v7 == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
      && *v8 == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
    {
      goto LABEL_10;
    }
    if ( *a2 == -428157847
      && *v6 == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
      && *v7 == *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
      && *v8 == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4] )
    {
      *a3 = v4 + 24;
      v9 = 0;
      v11 = a2 + 3;
      v12 = v7;
      v13 = v6;
    }
    else
    {
      v13 = v6;
      v12 = v7;
      v11 = a2 + 3;
      if ( *a2 == 1834041537
        && *v6 == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
        && *v7 == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
        && *v8 == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
      {
        *a3 = v4 + 32;
        v9 = 0;
      }
      else
      {
        v9 = -2147467262;
      }
      if ( v9 == -2147467262 )
        v9 = -2147467262;
    }
    if ( v9 == -2147467262 )
    {
      v4 += 88LL;
      if ( *a2 == -1867662663
        && *v13 == *(_DWORD *)&GUID_90adbab9_cdb8_43dd_8daa_ba1180be5215.Data2
        && *v12 == *(_DWORD *)GUID_90adbab9_cdb8_43dd_8daa_ba1180be5215.Data4
        && *v11 == *(_DWORD *)&GUID_90adbab9_cdb8_43dd_8daa_ba1180be5215.Data4[4] )
      {
LABEL_10:
        *a3 = v4;
        v9 = 0;
LABEL_11:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
        return (unsigned int)v9;
      }
      v14 = v4 + 8;
      if ( *a2 == -1203480974
        && *v6 == *(_DWORD *)&GUID_b8445672_ee65_4e59_b5ef_fd73ca6b61e2.Data2
        && *v7 == *(_DWORD *)GUID_b8445672_ee65_4e59_b5ef_fd73ca6b61e2.Data4
        && *v8 == *(_DWORD *)&GUID_b8445672_ee65_4e59_b5ef_fd73ca6b61e2.Data4[4] )
      {
        *a3 = v14;
        v9 = 0;
      }
      else
      {
        v9 = -2147467262;
      }
    }
    if ( v9 < 0 )
      return (unsigned int)v9;
    goto LABEL_11;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v5;
}
