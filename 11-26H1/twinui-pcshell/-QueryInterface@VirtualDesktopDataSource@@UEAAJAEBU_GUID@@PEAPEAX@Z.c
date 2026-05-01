/*
 * XREFs of ?QueryInterface@VirtualDesktopDataSource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D1770
 * Callers:
 *     ?VirtualDesktopDataSource_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D52D8 (-VirtualDesktopDataSource_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktopDataSource@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180490A10 (-QueryInterface@VirtualDesktopDataSource@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktopDataSource@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180490A20 (-QueryInterface@VirtualDesktopDataSource@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopDataSource2@5678@UIDesktopVirtualDesktopDataSource@@UIVirtualDesktopDataSourceInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180490A30 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180490A30.c)
 *     ?QueryInterface@VirtualDesktopDataSource@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180490A40 (-QueryInterface@VirtualDesktopDataSource@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopDataSource2@5678@UIDesktopVirtualDesktopDataSource@@UIVirtualDesktopDataSourceInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180490A50 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180490A50.c)
 *     ?QueryInterface@VirtualDesktopDataSource@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180490A60 (-QueryInterface@VirtualDesktopDataSource@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D1CB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopDataSource::QueryInterface(
        VirtualDesktopDataSource *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  char *v5; // rcx
  int CanCastTo; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( !a2->Data1 )
  {
    if ( *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      goto LABEL_6;
    }
    v4 = *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4];
    goto LABEL_5;
  }
  if ( a2->Data1 != -1350114592 )
  {
    if ( a2->Data1 == -306049295
      && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_edc20ef1_f931_59f6_8d25_38a177958110.Data2
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_edc20ef1_f931_59f6_8d25_38a177958110.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_edc20ef1_f931_59f6_8d25_38a177958110.Data4[4] )
    {
      goto LABEL_42;
    }
    goto LABEL_6;
  }
  if ( *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
  {
    v4 = *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4];
LABEL_5:
    if ( *(_DWORD *)&a2->Data4[4] == v4 )
    {
      *a3 = this;
      (*(void (__fastcall **)(VirtualDesktopDataSource *))(*(_QWORD *)this + 8LL))(this);
      return v3;
    }
  }
LABEL_6:
  this = (VirtualDesktopDataSource *)((char *)this + 8);
  if ( a2->Data1 != 56
    || *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
    || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
    || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
  {
    v5 = (char *)this + 8;
    if ( a2->Data1 == 39559493
      && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_025ba145_c552_5575_97e0_c4386a7dc346.Data2
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_025ba145_c552_5575_97e0_c4386a7dc346.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_025ba145_c552_5575_97e0_c4386a7dc346.Data4[4]
      || (v5 += 8, a2->Data1 == 2134054290)
      && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_7f331592_08ca_41ff_a77d_f2138806e857.Data2
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_7f331592_08ca_41ff_a77d_f2138806e857.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_7f331592_08ca_41ff_a77d_f2138806e857.Data4[4]
      || (v5 += 8, a2->Data1 == 1782886427)
      && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_6a44b01b_d9f2_4ed1_afbc_430477598dfc.Data2
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_6a44b01b_d9f2_4ed1_afbc_430477598dfc.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_6a44b01b_d9f2_4ed1_afbc_430477598dfc.Data4[4]
      || (v5 += 8, a2->Data1 == -1176114867)
      && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade.Data2
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade.Data4[4] )
    {
      *a3 = v5;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v5 + 8), a2, a3);
      if ( CanCastTo == -2147467262 )
        CanCastTo = -2147467262;
    }
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
    goto LABEL_28;
  }
LABEL_42:
  *a3 = this;
  CanCastTo = 0;
LABEL_28:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)CanCastTo;
}
