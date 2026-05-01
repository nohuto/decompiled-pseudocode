/*
 * XREFs of ?Clear@?$produce@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IVector@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x18049ABB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1801C53CC (--$_Destroy_range@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@Win.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::RegistrationData>>::Clear(
        __int64 a1)
{
  __int64 v1; // rcx
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v2; // rdi
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v3; // rdx
  __int64 v4; // rbx
  char v6; // [rsp+20h] [rbp-28h] BYREF

  v1 = (a1 - 16) & -(__int64)(a1 != 0);
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 40));
  if ( &v6 != (char *)((v1 & -(__int64)(v1 != -40)) + 48) )
  {
    v2 = *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)((v1 & -(__int64)(v1 != -40))
                                                                                              + 0x30);
    *(_QWORD *)((v1 & -(__int64)(v1 != -40)) + 0x30) = 0LL;
    v3 = *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)((v1 & -(__int64)(v1 != -40))
                                                                                              + 0x38);
    *(_QWORD *)((v1 & -(__int64)(v1 != -40)) + 0x38) = 0LL;
    v4 = *(_QWORD *)((v1 & -(__int64)(v1 != -40)) + 0x40);
    *(_QWORD *)((v1 & -(__int64)(v1 != -40)) + 0x40) = 0LL;
    if ( v2 )
    {
      std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(v2, v3);
      std::_Deallocate<16>(v2, (struct std::nothrow_t *)((v4 - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    }
  }
  return 0LL;
}
