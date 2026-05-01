/*
 * XREFs of ??$emplace@AEBUUri@Foundation@Windows@winrt@@@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UUri@Foundation@Windows@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUri@Foundation@Windows@winrt@@@std@@@std@@@1@AEBUUri@Foundation@Windows@winrt@@@Z @ 0x1805C5728
 * Callers:
 *     ?InsertAt@?$produce@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAX@Z @ 0x1805D3560 (-InsertAt@-$produce@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundation@Wind.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??$_Emplace_back_with_unused_capacity@AEBUMenuItem@UI@WindowsUdk@winrt@@@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@AEAAAEAUMenuItem@UI@WindowsUdk@winrt@@AEBU2345@@Z @ 0x180498F8C (--$_Emplace_back_with_unused_capacity@AEBUMenuItem@UI@WindowsUdk@winrt@@@-$vector@UMenuItem@UI@W.c)
 *     ??$_Emplace_reallocate@AEBURegistrationData@Shell@Internal@Windows@winrt@@@?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAPEAURegistrationData@Shell@Internal@Windows@winrt@@QEAU23456@AEBU23456@@Z @ 0x180498FC0 (--$_Emplace_reallocate@AEBURegistrationData@Shell@Internal@Windows@winrt@@@-$vector@URegistratio.c)
 */

__int64 **__fastcall std::vector<winrt::Windows::Foundation::Uri>::emplace<winrt::Windows::Foundation::Uri const &>(
        __int64 a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v4; // rdi
  __int64 *v8; // rsi
  __int64 v10[2]; // [rsp+28h] [rbp-10h] BYREF

  v4 = *(__int64 **)(a1 + 8);
  if ( v4 == *(__int64 **)(a1 + 16) )
  {
    *a2 = std::vector<winrt::Windows::Internal::Shell::RegistrationData>::_Emplace_reallocate<winrt::Windows::Internal::Shell::RegistrationData const &>(
            (__int64 **)a1,
            a3,
            a4);
  }
  else
  {
    if ( a3 == v4 )
    {
      std::vector<winrt::WindowsUdk::UI::MenuItem>::_Emplace_back_with_unused_capacity<winrt::WindowsUdk::UI::MenuItem const &>(
        a1,
        a4);
    }
    else
    {
      v10[0] = *a4;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v10);
      v8 = v4 - 1;
      *v4 = *(v4 - 1);
      *(v4 - 1) = 0LL;
      *(_QWORD *)(a1 + 8) += 8LL;
      while ( v8 != a3 )
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(--v4, --v8);
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(a3, v10);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v10);
    }
    *a2 = a3;
  }
  return a2;
}
