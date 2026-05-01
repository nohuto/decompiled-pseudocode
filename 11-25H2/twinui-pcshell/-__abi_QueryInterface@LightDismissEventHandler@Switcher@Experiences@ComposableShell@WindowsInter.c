/*
 * XREFs of ?__abi_QueryInterface@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x18018AC00
 * Callers:
 *     ?__abi_QueryInterface@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x18067D4E0 (-__abi_QueryInterface@LightDismissEventHandler@Switcher@Experiences@ComposableShell_ea_18067D4E0.c)
 *     ?__abi_QueryInterface@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x18067D4F0 (-__abi_QueryInterface@LightDismissEventHandler@Switcher@Experiences@ComposableShell_ea_18067D4F0.c)
 * Callees:
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x18018AA2C (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?Increment@__abi_FTMWeakRefData@@QECAKXZ @ 0x18018B444 (-Increment@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x1801B8D40 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::__abi_QueryInterface(
        _QWORD *a1,
        Platform::Guid *a2,
        void **a3)
{
  void **v3; // r11
  _QWORD *v4; // r10
  _QWORD *v5; // rcx
  __int64 v6; // r8
  struct Platform::Guid *v7; // r9

  v3 = a3;
  v4 = a1;
  if ( !*(_DWORD *)a2
    && *((_DWORD *)a2 + 1) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && *((_DWORD *)a2 + 2) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *((_DWORD *)a2 + 3) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || *(_DWORD *)a2 == 270577340
    && *((_DWORD *)a2 + 1) == *(_DWORD *)&_uuidof__AU__abi_IDelegate_LightDismissEventHandler_Switcher_Experiences_ComposableShell_WindowsInternal__.Data2
    && *((_DWORD *)a2 + 2) == *(_DWORD *)_uuidof__AU__abi_IDelegate_LightDismissEventHandler_Switcher_Experiences_ComposableShell_WindowsInternal__.Data4
    && *((_DWORD *)a2 + 3) == *(_DWORD *)&_uuidof__AU__abi_IDelegate_LightDismissEventHandler_Switcher_Experiences_ComposableShell_WindowsInternal__.Data4[4]
    || (-(__int64)(a1[4] != 0LL) & (unsigned __int64)(a1 + 3)) != 0
    && *(_DWORD *)a2 == -1796592748
    && *((_DWORD *)a2 + 1) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
    && *((_DWORD *)a2 + 2) == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
    && *((_DWORD *)a2 + 3) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
  {
    v5 = a1 + 3;
LABEL_17:
    *v3 = v4;
    __abi_FTMWeakRefData::Increment(v5);
    return 0LL;
  }
  if ( Platform::Guid::Equals(
         a2,
         &_uuidof__AU__abi_IDelegate_LightDismissEventHandler_Switcher_Experiences_ComposableShell_WindowsInternal__) )
  {
    v5 = (_QWORD *)v6;
    goto LABEL_17;
  }
  if ( (-(__int64)(*(_QWORD *)(v6 + 8) != 0LL) & v6) != 0 )
    return (unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                           (__abi_FTMWeakRefData *)(v6 & -(__int64)(v4[4] != 0LL)),
                           v7,
                           v3) != 0
         ? 0x80004002
         : 0;
  else
    return 2147500034LL;
}
