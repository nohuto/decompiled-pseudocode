/*
 * XREFs of ?QueryInterface@VirtualDesktopDataSource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E4A80
 * Callers:
 *     ?VirtualDesktopDataSource_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802261CC (-VirtualDesktopDataSource_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktopDataSource@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18047FE30 (-QueryInterface@VirtualDesktopDataSource@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktopDataSource@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18047FE40 (-QueryInterface@VirtualDesktopDataSource@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopDataSource2@5678@UIDesktopVirtualDesktopDataSource@@UIVirtualDesktopDataSourceInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18047FE50 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18047FE50.c)
 *     ?QueryInterface@VirtualDesktopDataSource@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18047FE60 (-QueryInterface@VirtualDesktopDataSource@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopDataSource2@5678@UIDesktopVirtualDesktopDataSource@@UIVirtualDesktopDataSourceInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18047FE70 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18047FE70.c)
 *     ?QueryInterface@VirtualDesktopDataSource@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18047FE80 (-QueryInterface@VirtualDesktopDataSource@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E4E00 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopDataSource::QueryInterface(
        VirtualDesktopDataSource *this,
        const struct _GUID *a2,
        void **a3)
{
  int CanCastTo; // ebx
  char *v6; // rcx

  *a3 = 0LL;
  if ( *(_QWORD *)&a2->Data1 == __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_10;
  }
  if ( a2->Data1 == -1350114592 )
  {
    if ( *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
LABEL_10:
      *a3 = this;
      (*(void (__fastcall **)(VirtualDesktopDataSource *))(*(_QWORD *)this + 8LL))(this);
      return 0;
    }
  }
  else if ( a2->Data1 == -306049295
         && *(_DWORD *)&a2->Data2 == *(_DWORD *)&_uuidof__AUIVirtualDesktopDataSource_Multitasking_ComposableShell_Internal_Windows__.Data2
         && *(_DWORD *)a2->Data4 == *(_DWORD *)_uuidof__AUIVirtualDesktopDataSource_Multitasking_ComposableShell_Internal_Windows__.Data4
         && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&_uuidof__AUIVirtualDesktopDataSource_Multitasking_ComposableShell_Internal_Windows__.Data4[4] )
  {
    goto LABEL_15;
  }
  this = (VirtualDesktopDataSource *)((char *)this + 8);
  if ( a2->Data1 == 56
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
  {
LABEL_15:
    *a3 = this;
    CanCastTo = 0;
LABEL_16:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)CanCastTo;
  }
  v6 = (char *)this + 8;
  if ( a2->Data1 == 39559493
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_025ba145_c552_5575_97e0_c4386a7dc346.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_025ba145_c552_5575_97e0_c4386a7dc346.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_025ba145_c552_5575_97e0_c4386a7dc346.Data4[4]
    || (v6 += 8, a2->Data1 == 2134054290)
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_7f331592_08ca_41ff_a77d_f2138806e857.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_7f331592_08ca_41ff_a77d_f2138806e857.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_7f331592_08ca_41ff_a77d_f2138806e857.Data4[4]
    || (v6 += 8, a2->Data1 == 1782886427)
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_6a44b01b_d9f2_4ed1_afbc_430477598dfc.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_6a44b01b_d9f2_4ed1_afbc_430477598dfc.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_6a44b01b_d9f2_4ed1_afbc_430477598dfc.Data4[4]
    || (v6 += 8, a2->Data1 == -1176114867)
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade.Data4[4] )
  {
    *a3 = v6;
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v6 + 8), a2, a3);
    if ( CanCastTo == -2147467262 )
      CanCastTo = -2147467262;
  }
  if ( CanCastTo >= 0 )
    goto LABEL_16;
  return (unsigned int)CanCastTo;
}
