/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UIWeakReferenceSource@@UIAcrylicPolicyManager@@UIImmersiveWindowMessageNotification@@UIBatterySaverStateChangedHandler@@UICompositionCapabilitiesChangedHandler@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800D3C40
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIAcrylicPolicyManager@@UIImmersiveWindowMessageNotification@@UIBatterySaverStateChangedHandler@@UICompositionCapabilitiesChangedHandler@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIAcrylicPolicyManager@@UIImmersiveWindowMessageNotification@@UIBatterySaverStateChangedHandler@@UICompositionCapabilitiesChangedHandler@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800D3ABC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCIm_ea_1800D3ABC.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIAcrylicPolicyManager@@UIImmersiveWindowMessageNotification@@UIBatterySaverStateChangedHandler@@UICompositionCapabilitiesChangedHandler@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D3B80 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800D3B80.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D1CB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,IAcrylicPolicyManager,IImmersiveWindowMessageNotification,IBatterySaverStateChangedHandler,ICompositionCapabilitiesChangedHandler,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  __int64 result; // rax
  void *v4; // r9

  if ( *(_DWORD *)a2 == -62389853
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
  {
LABEL_5:
    *a3 = (void *)a1;
    return 0LL;
  }
  v4 = (void *)(a1 + 40);
  if ( *(_DWORD *)a2 == -428157847
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4]
    || (v4 = (void *)(a1 + 48), *(_DWORD *)a2 == 1834041537)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
  {
    *a3 = v4;
    result = 0LL;
  }
  else
  {
    result = 2147500034LL;
  }
  if ( (_DWORD)result == -2147467262 )
  {
    a1 += 104LL;
    if ( *(_DWORD *)a2 == 56
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
    {
      goto LABEL_5;
    }
    a1 += 8LL;
    if ( *(_DWORD *)a2 == -1578697978
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_a1e6fb06_77d4_47f1_acd4_841acd227c09.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_a1e6fb06_77d4_47f1_acd4_841acd227c09.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_a1e6fb06_77d4_47f1_acd4_841acd227c09.Data4[4] )
    {
      goto LABEL_5;
    }
    a1 += 8LL;
    if ( *(_DWORD *)a2 == -189734543
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4[4] )
    {
      goto LABEL_5;
    }
    a1 += 8LL;
    if ( *(_DWORD *)a2 == 409345329
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_18661d31_3944_41b1_bd96_da3defc2c268.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_18661d31_3944_41b1_bd96_da3defc2c268.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_18661d31_3944_41b1_bd96_da3defc2c268.Data4[4] )
    {
      goto LABEL_5;
    }
    a1 += 8LL;
    if ( *(_DWORD *)a2 == -464873413
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_e44a983b_30a7_416c_b8a5_04d032bd352d.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_e44a983b_30a7_416c_b8a5_04d032bd352d.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_e44a983b_30a7_416c_b8a5_04d032bd352d.Data4[4] )
    {
      goto LABEL_5;
    }
    return Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 8), (const struct _GUID *)a2, a3);
  }
  return result;
}
