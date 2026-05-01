/*
 * XREFs of ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180180C20
 * Callers:
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@W7E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806B1330 (-__abi_QueryInterface@-QObject@Platform@@XamlAltTabViewController@@W7E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806B1340 (-__abi_QueryInterface@-QObject@Platform@@XamlAltTabViewController@@WBA@E$AAAJAEAVGuid@2@PEAPEAX@.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806B1350 (-__abi_QueryInterface@-QObject@Platform@@XamlAltTabViewController@@WBI@E$AAAJAEAVGuid@2@PEAPEAX@.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@WCA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806B1360 (-__abi_QueryInterface@-QObject@Platform@@XamlAltTabViewController@@WCA@E$AAAJAEAVGuid@2@PEAPEAX@.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@WCI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806B1370 (-__abi_QueryInterface@-QObject@Platform@@XamlAltTabViewController@@WCI@E$AAAJAEAVGuid@2@PEAPEAX@.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@WDA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806B1380 (-__abi_QueryInterface@-QObject@Platform@@XamlAltTabViewController@@WDA@E$AAAJAEAVGuid@2@PEAPEAX@.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@WJI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806B1390 (-__abi_QueryInterface@-QObject@Platform@@XamlAltTabViewController@@WJI@E$AAAJAEAVGuid@2@PEAPEAX@.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@WKA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806B13B0 (-__abi_QueryInterface@-QObject@Platform@@XamlAltTabViewController@@WKA@E$AAAJAEAVGuid@2@PEAPEAX@.c)
 * Callees:
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x180180568 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?Increment@__abi_FTMWeakRefData@@QECAKXZ @ 0x180180E1C (-Increment@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x1801B2238 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlBaseViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1806B13D0 (-__abi_QueryInterface@-QObject@Platform@@XamlBaseViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 */

__int64 __fastcall ___abi_QueryInterface__QObject_Platform__XamlAltTabViewController__UE_AAAJAEAVGuid_2_PEAPEAX_Z(
        __int64 a1,
        struct Platform::Guid *a2,
        void **a3,
        __int64 a4)
{
  void **v4; // rsi
  struct Platform::Guid *v5; // rbx
  Platform::Guid *v7; // rcx
  __int64 v8; // rax
  void **v9; // rcx
  __int64 v11; // rcx
  Platform::Guid *v12; // rcx
  Platform::Guid *v13; // rcx

  v4 = a3;
  v5 = a2;
  if ( !*(_DWORD *)a2 )
  {
    if ( *((_DWORD *)a2 + 1) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      || *((_DWORD *)a2 + 2) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      goto LABEL_4;
    }
    if ( *((_DWORD *)a2 + 3) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
      goto LABEL_11;
  }
  if ( *(_DWORD *)a2 == -1350114592 )
  {
    if ( *((_DWORD *)a2 + 1) != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      || *((_DWORD *)a2 + 2) != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      goto LABEL_4;
    }
    if ( *((_DWORD *)a2 + 3) == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
LABEL_11:
      *v4 = (void *)a1;
      v9 = (void **)(a1 + 128);
LABEL_12:
      __abi_FTMWeakRefData::Increment(v9, a2, a3, a4);
      return 0LL;
    }
  }
  if ( *(_DWORD *)a2 == 1862818061
    && *((_DWORD *)a2 + 1) == 961883367
    && *((_DWORD *)a2 + 2) == -567777393
    && *((_DWORD *)a2 + 3) == -1036765875 )
  {
    goto LABEL_11;
  }
LABEL_4:
  a3 = (void **)(a1 + 128);
  if ( (-(__int64)(*(_QWORD *)(a1 + 136) != 0LL) & (a1 + 128)) != 0
    && *(_DWORD *)a2 == -1796592748
    && *((_DWORD *)a2 + 1) == *(_DWORD *)&_uuidof__AUIAgileObject_Details_Platform__.Data2
    && *((_DWORD *)a2 + 2) == *(_DWORD *)_uuidof__AUIAgileObject_Details_Platform__.Data4
    && *((_DWORD *)a2 + 3) == *(_DWORD *)&_uuidof__AUIAgileObject_Details_Platform__.Data4[4] )
  {
    goto LABEL_11;
  }
  if ( Platform::Guid::Equals(a2, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
  {
    a2 = (struct Platform::Guid *)(a1 + 152);
    v8 = (a1 + 152) & -(__int64)(a1 != 0);
LABEL_28:
    *v4 = (void *)v8;
    v9 = a3;
    goto LABEL_12;
  }
  if ( Platform::Guid::Equals(v7, &_uuidof__AUIXamlMultitaskingViewController__) )
  {
    v11 = a1 + 16;
LABEL_27:
    v8 = v11 & -(__int64)(a1 != 0);
    goto LABEL_28;
  }
  if ( Platform::Guid::Equals(v12, &_uuidof__AUIXamlSwitcherWindowInteractionEvents__) )
  {
    v11 = a1 + 24;
    goto LABEL_27;
  }
  if ( Platform::Guid::Equals(v13, &_uuidof__AU__IXamlBaseViewControllerPublicNonVirtuals__) )
  {
    v11 = a1 + 8;
    goto LABEL_27;
  }
  if ( (-(__int64)(*(_QWORD *)(a1 + 136) != 0LL) & (unsigned __int64)a3) != 0
    && !(unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                        (__abi_FTMWeakRefData *)((unsigned __int64)a3 & -(__int64)(*(_QWORD *)(a1 + 136) != 0LL)),
                        v5,
                        v4) )
  {
    return 0LL;
  }
  return ___abi_QueryInterface__QObject_Platform__XamlBaseViewController__UE_AAAJAEAVGuid_2_PEAPEAX_Z(a1 + 8, v5, v4);
}
