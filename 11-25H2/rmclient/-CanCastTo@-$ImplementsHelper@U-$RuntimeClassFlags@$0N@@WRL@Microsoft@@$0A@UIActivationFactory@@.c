/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180002450
 * Callers:
 *     ??$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180002310 (--$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCr.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18000C970 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Implements<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  int IsEqualGUID; // eax
  const struct _GUID *v5; // rcx
  _QWORD *v6; // r10
  __int64 v7; // r11
  unsigned int v8; // r8d
  _QWORD *v10; // r10
  __int64 v11; // r11

  if ( *(_DWORD *)a2 == 53
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000035_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    v3 = a1 + 8;
    if ( *(_DWORD *)a2 == -1796592748
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4]
      || *(_DWORD *)a2 == 3
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
    {
      *a3 = v3;
      return 0;
    }
    else
    {
      if ( *(_DWORD *)a2 == 1550591900
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_5c6c279c_d7ca_4779_9188_4057219ce64c.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_5c6c279c_d7ca_4779_9188_4057219ce64c.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_5c6c279c_d7ca_4779_9188_4057219ce64c.Data4[4] )
      {
        *a3 = v3 + 32;
        v8 = 0;
      }
      else
      {
        if ( *(_DWORD *)a2 == 1861104927
          && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data2
          && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data4
          && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data4[4] )
        {
          *a3 = v3 + 40;
          v8 = 0;
        }
        else
        {
          IsEqualGUID = InlineIsEqualGUID((const struct _GUID *)a2, &GUID_149b59ce_92ad_4e35_89eb_50dfb4c0d91c);
          v8 = 0;
          if ( IsEqualGUID )
          {
            *v6 = v7;
          }
          else if ( (unsigned int)InlineIsEqualGUID(v5, &GUID_c5a94828_e84e_4886_8a0d_44b3190e3b72) )
          {
            *v10 = v11 + 8;
          }
          else
          {
            v8 = -2147467262;
          }
        }
        if ( v8 == -2147467262 )
          v8 = -2147467262;
      }
      if ( v8 == -2147467262 )
        return (unsigned int)-2147467262;
    }
    return v8;
  }
}
