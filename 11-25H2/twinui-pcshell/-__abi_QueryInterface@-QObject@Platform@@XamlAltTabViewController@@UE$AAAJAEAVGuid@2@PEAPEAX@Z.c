/*
 * XREFs of ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18018B240
 * Callers:
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@W7E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180689F70 (-__abi_QueryInterface@-QObject@Platform@@XamlAltTabViewController@@W7E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180689F80 (-__abi_QueryInterface@-QObject@Platform@@XamlAltTabViewController@@WBA@E$AAAJAEAVGuid@2@PEAPEAX@.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180689F90 (-__abi_QueryInterface@-QObject@Platform@@XamlAltTabViewController@@WBI@E$AAAJAEAVGuid@2@PEAPEAX@.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@WCA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180689FA0 (-__abi_QueryInterface@-QObject@Platform@@XamlAltTabViewController@@WCA@E$AAAJAEAVGuid@2@PEAPEAX@.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@WCI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180689FB0 (-__abi_QueryInterface@-QObject@Platform@@XamlAltTabViewController@@WCI@E$AAAJAEAVGuid@2@PEAPEAX@.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@WDA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180689FC0 (-__abi_QueryInterface@-QObject@Platform@@XamlAltTabViewController@@WDA@E$AAAJAEAVGuid@2@PEAPEAX@.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@WJI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180689FD0 (-__abi_QueryInterface@-QObject@Platform@@XamlAltTabViewController@@WJI@E$AAAJAEAVGuid@2@PEAPEAX@.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@WKA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180689FF0 (-__abi_QueryInterface@-QObject@Platform@@XamlAltTabViewController@@WKA@E$AAAJAEAVGuid@2@PEAPEAX@.c)
 * Callees:
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x18018AA2C (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?Increment@__abi_FTMWeakRefData@@QECAKXZ @ 0x18018B444 (-Increment@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x1801B8D40 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlBaseViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18068A010 (-__abi_QueryInterface@-QObject@Platform@@XamlBaseViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 */

__int64 __fastcall ___abi_QueryInterface__QObject_Platform__XamlAltTabViewController__UE_AAAJAEAVGuid_2_PEAPEAX_Z(
        _QWORD *a1,
        Platform::Guid *a2,
        void **a3)
{
  Platform::Guid *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  _QWORD *v9; // rcx
  unsigned __int64 v11; // rcx
  Platform::Guid *v12; // rcx
  Platform::Guid *v13; // rcx

  if ( !*(_DWORD *)a2
    && *((_DWORD *)a2 + 1) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && *((_DWORD *)a2 + 2) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *((_DWORD *)a2 + 3) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || *(_DWORD *)a2 == -1350114592
    && *((_DWORD *)a2 + 1) == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    && *((_DWORD *)a2 + 2) == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    && *((_DWORD *)a2 + 3) == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4]
    || *(_DWORD *)a2 == 1862818061
    && *((_DWORD *)a2 + 1) == 961883367
    && *((_DWORD *)a2 + 2) == -567777393
    && *((_DWORD *)a2 + 3) == -1036765875
    || (-(__int64)(a1[17] != 0LL) & (unsigned __int64)(a1 + 16)) != 0
    && *(_DWORD *)a2 == -1796592748
    && *((_DWORD *)a2 + 1) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
    && *((_DWORD *)a2 + 2) == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
    && *((_DWORD *)a2 + 3) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
  {
    *a3 = a1;
    v9 = a1 + 16;
LABEL_12:
    __abi_FTMWeakRefData::Increment(v9);
    return 0LL;
  }
  if ( Platform::Guid::Equals(a2, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
  {
    v8 = (unsigned __int64)(a1 + 19) & -(__int64)(a1 != 0LL);
LABEL_28:
    *a3 = (void *)v8;
    v9 = (_QWORD *)v7;
    goto LABEL_12;
  }
  if ( Platform::Guid::Equals(v6, &_uuidof__AUIXamlMultitaskingViewController__) )
  {
    v11 = (unsigned __int64)(a1 + 2);
LABEL_27:
    v8 = v11 & -(__int64)(a1 != 0LL);
    goto LABEL_28;
  }
  if ( Platform::Guid::Equals(v12, &_uuidof__AUIXamlSwitcherWindowInteractionEvents__) )
  {
    v11 = (unsigned __int64)(a1 + 3);
    goto LABEL_27;
  }
  if ( Platform::Guid::Equals(v13, &_uuidof__AU__IXamlBaseViewControllerPublicNonVirtuals__) )
  {
    v11 = (unsigned __int64)(a1 + 1);
    goto LABEL_27;
  }
  if ( (-(__int64)(a1[17] != 0LL) & v7) != 0
    && !(unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                        (__abi_FTMWeakRefData *)(v7 & -(__int64)(a1[17] != 0LL)),
                        a2,
                        a3) )
  {
    return 0LL;
  }
  return ___abi_QueryInterface__QObject_Platform__XamlBaseViewController__UE_AAAJAEAVGuid_2_PEAPEAX_Z(a1 + 1, a2, a3);
}
