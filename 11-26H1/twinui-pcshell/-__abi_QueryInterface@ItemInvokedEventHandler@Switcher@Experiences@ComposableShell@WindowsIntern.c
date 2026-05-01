/*
 * XREFs of ?__abi_QueryInterface@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x180180750
 * Callers:
 *     ?__abi_QueryInterface@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1806A42E0 (-__abi_QueryInterface@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@_ea_1806A42E0.c)
 *     ?__abi_QueryInterface@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1806A42F0 (-__abi_QueryInterface@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@_ea_1806A42F0.c)
 * Callees:
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x180180568 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?Increment@__abi_FTMWeakRefData@@QECAKXZ @ 0x180180E1C (-Increment@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x1801B2238 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::__abi_QueryInterface(
        _QWORD *a1,
        Platform::Guid *a2,
        __int64 a3)
{
  void **v3; // r11
  Platform::Guid *v4; // r9
  _QWORD *v5; // r10
  int v6; // eax
  _QWORD *v7; // rcx

  v3 = (void **)a3;
  v4 = a2;
  v5 = a1;
  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 != -311896154 || *((_DWORD *)a2 + 1) != 977862981 || *((_DWORD *)a2 + 2) != 926055297 )
      goto LABEL_6;
    v6 = -49783339;
  }
  else
  {
    if ( *((_DWORD *)a2 + 1) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      || *((_DWORD *)a2 + 2) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      goto LABEL_6;
    }
    v6 = *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4];
  }
  if ( *((_DWORD *)a2 + 3) == v6 )
  {
LABEL_8:
    v7 = v5 + 3;
LABEL_15:
    *v3 = v5;
    __abi_FTMWeakRefData::Increment(v7, a2, a3, v4);
    return 0LL;
  }
LABEL_6:
  if ( (-(__int64)(a1[4] != 0LL) & (unsigned __int64)(a1 + 3)) != 0
    && Platform::Guid::Equals(a2, &_uuidof__AUIAgileObject_Details_Platform__) )
  {
    goto LABEL_8;
  }
  if ( Platform::Guid::Equals(
         v4,
         &_uuidof__AU__abi_IDelegate_ItemInvokedEventHandler_Switcher_Experiences_ComposableShell_WindowsInternal__) )
  {
    v7 = (_QWORD *)a3;
    goto LABEL_15;
  }
  if ( (-(__int64)(*(_QWORD *)(a3 + 8) != 0LL) & a3) != 0 )
    return (unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                           (__abi_FTMWeakRefData *)(a3 & -(__int64)(v5[4] != 0LL)),
                           v4,
                           v3) != 0
         ? 0x80004002
         : 0;
  else
    return 2147500034LL;
}
