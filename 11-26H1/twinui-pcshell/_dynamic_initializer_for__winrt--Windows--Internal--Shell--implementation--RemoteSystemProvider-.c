/*
 * XREFs of _dynamic_initializer_for__winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData__ @ 0x1801C52D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@QEAA@$$QEAV?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@@Z @ 0x1801C535C (--0-$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V-$vector@URegistrationData@She.c)
 *     ??$_Destroy_range@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1801C53CC (--$_Destroy_range@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@Win.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
int dynamic_initializer_for__winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData__()
{
  _QWORD *v0; // r11
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v2[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]
  void *v4; // [rsp+50h] [rbp+8h]

  *(_OWORD *)v2 = 0LL;
  v3 = 0LL;
  v4 = operator new(0x48uLL);
  winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>(
    v4,
    v2);
  *v0 = &winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>::`vftable';
  winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData = (__int64)(v0 + 2);
  if ( v2[0] )
  {
    std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(v2[0]);
    std::_Deallocate<16>(v2[0], (v3 - (unsigned __int64)v2[0]) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData__);
}
