/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UITaskDataCacheBroker@Activities@Data@Internal@Windows@@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180183D7C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180183C10 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActiv.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Data::Activities::ITaskDataCacheBroker,CImmersiveShellComponentWithGITSite,ICDPUserActivitySettingsCallback,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // r9
  int v5; // eax
  __int64 result; // rax
  __int64 v7; // rcx

  if ( *a2 == 1335057372
    && a2[1] == *(_DWORD *)&GUID_4f935bdc_7650_5db7_a233_ce467a34bc72.Data2
    && a2[2] == *(_DWORD *)GUID_4f935bdc_7650_5db7_a233_ce467a34bc72.Data4
    && a2[3] == *(_DWORD *)&GUID_4f935bdc_7650_5db7_a233_ce467a34bc72.Data4[4] )
  {
    goto LABEL_17;
  }
  v4 = a1 + 8;
  if ( *a2 == -62389853
    && a2[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
    && a2[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
    && a2[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
  {
    *a3 = v4;
    return 0LL;
  }
  v7 = a1 + 48;
  if ( *a2 == -428157847
    && a2[1] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
    && a2[2] == *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
    && a2[3] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4] )
  {
    *a3 = v7;
    result = 0LL;
  }
  else
  {
    if ( *a2 == 1834041537
      && a2[1] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
      && a2[2] == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
      && a2[3] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
    {
      *a3 = v4 + 48;
      result = 0LL;
    }
    else
    {
      result = 2147500034LL;
    }
    if ( (_DWORD)result == -2147467262 )
      result = 2147500034LL;
  }
  if ( (_DWORD)result == -2147467262 )
  {
    a1 = v4 + 104;
    if ( *a2 == 355594254
      && a2[1] == *(_DWORD *)&GUID_1531f00e_3fe1_4b79_b0bc_f6cde362f7ea.Data2
      && a2[2] == *(_DWORD *)GUID_1531f00e_3fe1_4b79_b0bc_f6cde362f7ea.Data4
      && a2[3] == *(_DWORD *)&GUID_1531f00e_3fe1_4b79_b0bc_f6cde362f7ea.Data4[4] )
    {
      goto LABEL_17;
    }
    a1 = v4 + 112;
    if ( *a2 == -1796592748 )
    {
      if ( a2[1] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
        || a2[2] != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4 )
      {
        return 2147500034LL;
      }
      v5 = *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4];
    }
    else
    {
      if ( *a2 != 3
        || a2[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
        || a2[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4 )
      {
        return 2147500034LL;
      }
      v5 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4];
    }
    if ( a2[3] == v5 )
    {
LABEL_17:
      *a3 = a1;
      return 0LL;
    }
    return 2147500034LL;
  }
  return result;
}
