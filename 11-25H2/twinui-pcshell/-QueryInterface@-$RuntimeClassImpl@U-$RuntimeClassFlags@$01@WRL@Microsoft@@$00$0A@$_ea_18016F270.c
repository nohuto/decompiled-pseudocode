/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18016F270
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@VFtmBase@23@@Details@WRL@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18047E7E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18047E7E0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@VFtmBase@23@@Details@WRL@Microsoft@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18047E7F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18047E7F0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@VFtmBase@23@@Details@WRL@Microsoft@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18047E800 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18047E800.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v5; // edi
  int v6; // ebx
  _DWORD *v7; // rsi
  _DWORD *v8; // r14
  _DWORD *v9; // rbp
  __int64 v10; // r11
  bool v11; // zf
  _DWORD *v13; // r9
  _DWORD *v14; // rdx
  _DWORD *v15; // rcx

  v5 = 0;
  *a3 = 0LL;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    v13 = a2 + 1;
    v14 = a2 + 2;
    v15 = a2 + 3;
    if ( *a2 == -62389853
      && *v13 == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
      && *v14 == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
      && *v15 == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
    {
      *a3 = a1;
      v6 = 0;
      goto LABEL_19;
    }
    if ( *a2 == -428157847
      && *v13 == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
      && *v14 == *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
      && *v15 == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4] )
    {
      *a3 = a1 + 40;
      v6 = 0;
      v7 = a2 + 3;
      v8 = v14;
      v9 = v13;
    }
    else
    {
      v9 = v13;
      v8 = v14;
      v7 = a2 + 3;
      if ( *a2 == 1834041537
        && *v13 == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
        && *v14 == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
        && *v15 == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
      {
        *a3 = a1 + 48;
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
    {
LABEL_18:
      if ( v6 < 0 )
        return (unsigned int)v6;
LABEL_19:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
      return (unsigned int)v6;
    }
    v10 = a1 + 104;
    if ( *a2 == -1796592748 )
    {
      if ( *v9 == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
        && *v8 == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4 )
      {
        v11 = *v7 == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4];
        goto LABEL_16;
      }
    }
    else if ( *a2 == 3
           && *v13 == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
           && *v14 == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4 )
    {
      v11 = *v15 == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4];
LABEL_16:
      if ( v11 )
      {
        *a3 = v10;
        v6 = 0;
        goto LABEL_18;
      }
    }
    v6 = -2147467262;
    goto LABEL_18;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v5;
}
