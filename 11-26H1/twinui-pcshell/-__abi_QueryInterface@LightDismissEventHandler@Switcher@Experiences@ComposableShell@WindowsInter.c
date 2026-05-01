/*
 * XREFs of ?__abi_QueryInterface@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x180180300
 * Callers:
 *     ?__abi_QueryInterface@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1806A4300 (-__abi_QueryInterface@LightDismissEventHandler@Switcher@Experiences@ComposableShell_ea_1806A4300.c)
 *     ?__abi_QueryInterface@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1806A4310 (-__abi_QueryInterface@LightDismissEventHandler@Switcher@Experiences@ComposableShell_ea_1806A4310.c)
 * Callees:
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x180180568 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?Increment@__abi_FTMWeakRefData@@QECAKXZ @ 0x180180E1C (-Increment@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x1801B2238 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::__abi_QueryInterface(
        _QWORD *a1,
        struct Platform::Guid *a2,
        __int64 a3)
{
  void **v3; // r11
  struct Platform::Guid *v4; // r9
  _QWORD *v5; // r10
  _QWORD *v6; // rcx

  v3 = (void **)a3;
  v4 = a2;
  v5 = a1;
  if ( !*(_DWORD *)a2 )
  {
    if ( *((_DWORD *)a2 + 1) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      || *((_DWORD *)a2 + 2) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      goto LABEL_9;
    }
    if ( *((_DWORD *)a2 + 3) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
    {
LABEL_14:
      v6 = a1 + 3;
LABEL_17:
      *v3 = v5;
      __abi_FTMWeakRefData::Increment(v6, a2, a3, v4);
      return 0LL;
    }
  }
  if ( *(_DWORD *)a2 == 270577340
    && *((_DWORD *)a2 + 1) == 918411712
    && *((_DWORD *)a2 + 2) == 862922652
    && *((_DWORD *)a2 + 3) == -1888654876 )
  {
    goto LABEL_14;
  }
LABEL_9:
  a3 = (__int64)(a1 + 3);
  if ( (-(__int64)(a1[4] != 0LL) & (unsigned __int64)(a1 + 3)) != 0
    && *(_DWORD *)a2 == -1796592748
    && *((_DWORD *)a2 + 1) == *(_DWORD *)&_uuidof__AUIAgileObject_Details_Platform__.Data2
    && *((_DWORD *)a2 + 2) == *(_DWORD *)_uuidof__AUIAgileObject_Details_Platform__.Data4
    && *((_DWORD *)a2 + 3) == *(_DWORD *)&_uuidof__AUIAgileObject_Details_Platform__.Data4[4] )
  {
    goto LABEL_14;
  }
  if ( Platform::Guid::Equals(
         a2,
         &_uuidof__AU__abi_IDelegate_LightDismissEventHandler_Switcher_Experiences_ComposableShell_WindowsInternal__) )
  {
    v6 = (_QWORD *)a3;
    goto LABEL_17;
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
