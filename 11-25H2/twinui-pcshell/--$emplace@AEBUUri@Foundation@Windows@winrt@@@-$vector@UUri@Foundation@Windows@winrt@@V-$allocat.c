/*
 * XREFs of ??$emplace@AEBUUri@Foundation@Windows@winrt@@@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UUri@Foundation@Windows@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUri@Foundation@Windows@winrt@@@std@@@std@@@1@AEBUUri@Foundation@Windows@winrt@@@Z @ 0x1805A1470
 * Callers:
 *     ?InsertAt@?$produce@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAX@Z @ 0x1805AF5E0 (-InsertAt@-$produce@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundation@Wind.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??$_Emplace_back_with_unused_capacity@AEBUMenuItem@UI@WindowsUdk@winrt@@@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@AEAAAEAUMenuItem@UI@WindowsUdk@winrt@@AEBU2345@@Z @ 0x180488264 (--$_Emplace_back_with_unused_capacity@AEBUMenuItem@UI@WindowsUdk@winrt@@@-$vector@UMenuItem@UI@W.c)
 *     ??$_Emplace_reallocate@AEBUUri@Foundation@Windows@winrt@@@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@AEAAPEAUUri@Foundation@Windows@winrt@@QEAU2345@AEBU2345@@Z @ 0x1805A06C0 (--$_Emplace_reallocate@AEBUUri@Foundation@Windows@winrt@@@-$vector@UUri@Foundation@Windows@winrt.c)
 */

__int64 **__fastcall std::vector<winrt::Windows::Foundation::Uri>::emplace<winrt::Windows::Foundation::Uri const &>(
        __int64 a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v4; // r15
  __int64 *v8; // rdi
  __int64 v9; // rax
  __int64 *v10; // rcx
  __int64 v12[2]; // [rsp+28h] [rbp-10h] BYREF

  v4 = *(__int64 **)(a1 + 8);
  if ( v4 == *(__int64 **)(a1 + 16) )
  {
    *a2 = std::vector<winrt::Windows::Foundation::Uri>::_Emplace_reallocate<winrt::Windows::Foundation::Uri const &>(
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
      v12[0] = *a4;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v12);
      v8 = v4 - 1;
      v9 = *(v4 - 1);
      *(v4 - 1) = 0LL;
      *v4 = v9;
      *(_QWORD *)(a1 + 8) += 8LL;
      while ( v8 != a3 )
      {
        v10 = v8--;
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(v10, v8);
      }
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(a3, v12);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v12);
    }
    *a2 = a3;
  }
  return a2;
}
