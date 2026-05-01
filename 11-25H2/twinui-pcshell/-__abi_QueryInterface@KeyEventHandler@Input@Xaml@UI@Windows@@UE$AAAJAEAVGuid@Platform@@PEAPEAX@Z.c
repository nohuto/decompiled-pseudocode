/*
 * XREFs of ?__abi_QueryInterface@KeyEventHandler@Input@Xaml@UI@Windows@@UE$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x18018A8D0
 * Callers:
 *     ?__abi_QueryInterface@KeyEventHandler@Input@Xaml@UI@Windows@@W7E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x18068A160 (-__abi_QueryInterface@KeyEventHandler@Input@Xaml@UI@Windows@@W7E$AAAJAEAVGuid@Platform@@PEAPEAX@.c)
 *     ?__abi_QueryInterface@KeyEventHandler@Input@Xaml@UI@Windows@@WBA@E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x18068A170 (-__abi_QueryInterface@KeyEventHandler@Input@Xaml@UI@Windows@@WBA@E$AAAJAEAVGuid@Platform@@PEAPEA.c)
 * Callees:
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x18018AA2C (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?Increment@__abi_FTMWeakRefData@@QECAKXZ @ 0x18018B444 (-Increment@__abi_FTMWeakRefData@@QECAKXZ.c)
 */

__int64 __fastcall Windows::UI::Xaml::Input::KeyEventHandler::__abi_QueryInterface(
        _QWORD *a1,
        struct Platform::Guid *a2,
        void **a3)
{
  int v4; // eax

  if ( !*(_DWORD *)a2
    && *((_DWORD *)a2 + 1) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && *((_DWORD *)a2 + 2) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *((_DWORD *)a2 + 3) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || *(_DWORD *)a2 == 2086916837
    && *((_DWORD *)a2 + 1) == 1309833742
    && *((_DWORD *)a2 + 2) == 360147641
    && *((_DWORD *)a2 + 3) == -923701334 )
  {
    goto LABEL_12;
  }
  if ( (-(__int64)(a1[4] != 0LL) & (unsigned __int64)(a1 + 3)) != 0 && *(_DWORD *)a2 == -1796592748 )
  {
    if ( *((_DWORD *)a2 + 1) != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
      || *((_DWORD *)a2 + 2) != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4 )
    {
      goto LABEL_6;
    }
    v4 = *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4];
  }
  else
  {
    if ( *(_DWORD *)a2 != 2086916837 || *((_DWORD *)a2 + 1) != 1309833742 || *((_DWORD *)a2 + 2) != 360147641 )
      goto LABEL_6;
    v4 = -923701334;
  }
  if ( *((_DWORD *)a2 + 3) == v4 )
  {
LABEL_12:
    *a3 = a1;
    __abi_FTMWeakRefData::Increment(a1 + 3);
    return 0LL;
  }
LABEL_6:
  if ( (-(__int64)(a1[4] != 0LL) & (unsigned __int64)(a1 + 3)) != 0 )
    return (unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                           (__abi_FTMWeakRefData *)((unsigned __int64)(a1 + 3) & -(__int64)(a1[4] != 0LL)),
                           a2,
                           a3) != 0
         ? 0x80004002
         : 0;
  else
    return 2147500034LL;
}
