/*
 * XREFs of ??0?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@QEAA@$$QEAV?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@@Z @ 0x1801D1958
 * Callers:
 *     _dynamic_initializer_for__winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData__ @ 0x1801D18D0 (_dynamic_initializer_for__winrt--Windows--Internal--Shell--implementation--RemoteSystemProvider-.c)
 * Callees:
 *     ??0?$producers_base@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@V?$tuple@U?$IVector@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@U?$IVectorView@URegistrationData@Shell@Internal@Windows@winrt@@@2345@U?$IIterable@URegistrationData@Shell@Internal@Windows@winrt@@@2345@@std@@@impl@winrt@@QEAA@XZ @ 0x1801D19C0 (--0-$producers_base@U-$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V-$vector@URe.c)
 */

__int64 __fastcall winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r10
  __int64 *v4; // r9
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 result; // rax

  winrt::impl::producers_base<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>,std::tuple<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::RegistrationData>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Internal::Shell::RegistrationData>>>::producers_base<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>,std::tuple<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::RegistrationData>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Internal::Shell::RegistrationData>>>(
    a1 + 16,
    a2,
    a3,
    a2);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(v3 + 8) = 1LL;
  *(_DWORD *)(v3 + 40) = 0;
  *(_QWORD *)v3 = &winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>::`vftable';
  v5 = v4[2];
  v4[2] = 0LL;
  v6 = v4[1];
  v4[1] = 0LL;
  v7 = *v4;
  *v4 = 0LL;
  *(_QWORD *)(v3 + 48) = v7;
  result = v3;
  *(_QWORD *)(v3 + 56) = v6;
  *(_QWORD *)(v3 + 64) = v5;
  return result;
}
