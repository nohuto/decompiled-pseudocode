/*
 * XREFs of ?QueryInterface@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000E640
 * Callers:
 *     ?QueryInterface@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800151D0 (-QueryInterface@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Implem_ea_1800151D0.c)
 *     ?QueryInterface@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800151E0 (-QueryInterface@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Implem_ea_1800151E0.c)
 *     ?QueryInterface@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800151F0 (-QueryInterface@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Implem_ea_1800151F0.c)
 *     ?QueryInterface@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180015200 (-QueryInterface@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Implem_ea_180015200.c)
 *     ?QueryInterface@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180015210 (-QueryInterface@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Implem_ea_180015210.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18000C970 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Implements<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::QueryInterface(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // r10
  const struct _GUID *v6; // rcx
  __int64 v7; // r10
  int v8; // eax
  int v10; // eax

  *a3 = 0LL;
  if ( *(_DWORD *)a2
    || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( *(_DWORD *)a2 != -1350114592 )
    {
      if ( *(_DWORD *)a2 == 53
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000035_0000_0000_c000_000000000046.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data4[4] )
      {
        goto LABEL_29;
      }
LABEL_6:
      a1 += 8LL;
      if ( *(_DWORD *)a2 == -1796592748 )
      {
        if ( *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
          || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4 )
        {
          goto LABEL_8;
        }
        v8 = *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4];
      }
      else
      {
        if ( *(_DWORD *)a2 != 3
          || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
          || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4 )
        {
          goto LABEL_8;
        }
        v8 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4];
      }
      if ( *(_DWORD *)(a2 + 12) == v8 )
      {
LABEL_29:
        *a3 = a1;
        v4 = 0;
LABEL_31:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
        return v4;
      }
LABEL_8:
      v4 = -2147467262;
      if ( *(_DWORD *)a2 == 1550591900
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_5c6c279c_d7ca_4779_9188_4057219ce64c.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_5c6c279c_d7ca_4779_9188_4057219ce64c.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_5c6c279c_d7ca_4779_9188_4057219ce64c.Data4[4] )
      {
        *a3 = a1 + 32;
        v10 = 0;
LABEL_44:
        if ( v10 == -2147467262 )
          return v4;
        v4 = v10;
        goto LABEL_31;
      }
      v5 = a1 + 40;
      if ( *(_DWORD *)a2 == 1861104927
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data4[4]
        || InlineIsEqualGUID((const struct _GUID *)a2, &GUID_149b59ce_92ad_4e35_89eb_50dfb4c0d91c) )
      {
        *a3 = v5;
      }
      else
      {
        if ( !InlineIsEqualGUID(v6, &GUID_c5a94828_e84e_4886_8a0d_44b3190e3b72) )
        {
          v10 = -2147467262;
LABEL_42:
          if ( v10 == -2147467262 )
            v10 = -2147467262;
          goto LABEL_44;
        }
        *a3 = v7 + 8;
      }
      v10 = 0;
      goto LABEL_42;
    }
    if ( *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
      goto LABEL_6;
    }
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64, __int64, _QWORD *, __int64))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, a2);
  return 0;
}
