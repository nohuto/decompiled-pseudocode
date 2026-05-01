/*
 * XREFs of ?__abi_QueryInterface@?QObject@Platform@@VirtualDesktopSwitcherController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806C1120
 * Callers:
 *     ?__abi_QueryInterface@?QObject@Platform@@VirtualDesktopSwitcherController@@W7E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806C1290 (-__abi_QueryInterface@-QObject@Platform@@VirtualDesktopSwitcherController@@W7E$AAAJAEAVGuid@2@PE.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@VirtualDesktopSwitcherController@@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806C12A0 (-__abi_QueryInterface@-QObject@Platform@@VirtualDesktopSwitcherController@@WBA@E$AAAJAEAVGuid@2@.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@VirtualDesktopSwitcherController@@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806C12B0 (-__abi_QueryInterface@-QObject@Platform@@VirtualDesktopSwitcherController@@WBI@E$AAAJAEAVGuid@2@.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@VirtualDesktopSwitcherController@@WCA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806C12C0 (-__abi_QueryInterface@-QObject@Platform@@VirtualDesktopSwitcherController@@WCA@E$AAAJAEAVGuid@2@.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@VirtualDesktopSwitcherController@@WCI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806C12D0 (-__abi_QueryInterface@-QObject@Platform@@VirtualDesktopSwitcherController@@WCI@E$AAAJAEAVGuid@2@.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@VirtualDesktopSwitcherController@@WDA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806C12E0 (-__abi_QueryInterface@-QObject@Platform@@VirtualDesktopSwitcherController@@WDA@E$AAAJAEAVGuid@2@.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@VirtualDesktopSwitcherController@@WJI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806C12F0 (-__abi_QueryInterface@-QObject@Platform@@VirtualDesktopSwitcherController@@WJI@E$AAAJAEAVGuid@2@.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@VirtualDesktopSwitcherController@@WKA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806C1310 (-__abi_QueryInterface@-QObject@Platform@@VirtualDesktopSwitcherController@@WKA@E$AAAJAEAVGuid@2@.c)
 * Callees:
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x180180568 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?Increment@__abi_FTMWeakRefData@@QECAKXZ @ 0x180180E1C (-Increment@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x1801B2238 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlBaseViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806B13D0 (-__abi_QueryInterface@-QObject@Platform@@XamlBaseViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 */

__int64 __fastcall ___abi_QueryInterface__QObject_Platform__VirtualDesktopSwitcherController__UE_AAAJAEAVGuid_2_PEAPEAX_Z(
        _QWORD *a1,
        Platform::Guid *a2,
        void **a3)
{
  Platform::Guid *v6; // rcx
  Platform::Guid *v7; // rcx
  Platform::Guid *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  Platform::Guid *v12; // rcx
  unsigned __int64 v13; // rcx
  Platform::Guid *v14; // rcx

  if ( Platform::Guid::Equals(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || Platform::Guid::Equals(v6, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90)
    || Platform::Guid::Equals(v7, &_uuidof__AU__IVirtualDesktopSwitcherControllerPublicNonVirtuals__)
    || (-(__int64)(a1[17] != 0LL) & (unsigned __int64)(a1 + 16)) != 0
    && Platform::Guid::Equals(a2, &_uuidof__AUIAgileObject_Details_Platform__) )
  {
    *a3 = a1;
    v11 = (__int64)(a1 + 16);
    goto LABEL_20;
  }
  if ( Platform::Guid::Equals(a2, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
  {
    v10 = (unsigned __int64)(a1 + 19) & -(__int64)(a1 != 0LL);
LABEL_8:
    *a3 = (void *)v10;
    v11 = v9;
LABEL_20:
    __abi_FTMWeakRefData::Increment(v11);
    return 0LL;
  }
  if ( Platform::Guid::Equals(v8, &_uuidof__AUIXamlMultitaskingViewController__) )
  {
    v13 = (unsigned __int64)(a1 + 2);
LABEL_11:
    v10 = v13 & -(__int64)(a1 != 0LL);
    goto LABEL_8;
  }
  if ( Platform::Guid::Equals(v12, &_uuidof__AUIXamlSwitcherWindowInteractionEvents__) )
  {
    v13 = (unsigned __int64)(a1 + 3);
    goto LABEL_11;
  }
  if ( Platform::Guid::Equals(v14, &_uuidof__AU__IXamlBaseViewControllerPublicNonVirtuals__) )
  {
    v13 = (unsigned __int64)(a1 + 1);
    goto LABEL_11;
  }
  if ( (-(__int64)(a1[17] != 0LL) & v9) == 0
    || (unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                       (__abi_FTMWeakRefData *)(v9 & -(__int64)(a1[17] != 0LL)),
                       a2,
                       a3) )
  {
    return ___abi_QueryInterface__QObject_Platform__XamlBaseViewController__UE_AAAJAEAVGuid_2_PEAPEAX_Z(
             (__int64)(a1 + 1),
             a2);
  }
  return 0LL;
}
