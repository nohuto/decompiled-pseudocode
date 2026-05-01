/*
 * XREFs of ?get_local_iids@?$implements@VWindowRegistration@@UIClosable@Foundation@Windows@winrt@@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x1805FD580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<WindowRegistration,winrt::Windows::Foundation::IClosable>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a2 = 1;
  *(_QWORD *)(a2 + 8) = &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Foundation::IClosable>>::value;
  return a2;
}
