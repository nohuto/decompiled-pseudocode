/*
 * XREFs of ?get_local_iids@?$implements@Uiterator@?$iterable_base@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@URegistrationData@Shell@Internal@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x18061D6E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::iterable_base<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Internal::Shell::RegistrationData,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Internal::Shell::RegistrationData>>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a2 = 1;
  *(_QWORD *)(a2 + 8) = &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Internal::Shell::RegistrationData>>>::value;
  return a2;
}
