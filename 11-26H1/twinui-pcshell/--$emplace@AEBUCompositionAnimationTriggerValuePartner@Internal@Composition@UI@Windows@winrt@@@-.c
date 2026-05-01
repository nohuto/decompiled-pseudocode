/*
 * XREFs of ??$emplace@AEBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@@1@AEBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Z @ 0x180499320
 * Callers:
 *     ?InsertAt@?$vector_base@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UMenuItem@UI@WindowsUdk@3@@winrt@@QEAAXIAEBUMenuItem@UI@WindowsUdk@2@@Z @ 0x18049C71C (-InsertAt@-$vector_base@U-$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V-$vector@UMenuItem@UI@Win.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??$_Emplace_back_with_unused_capacity@AEBUMenuItem@UI@WindowsUdk@winrt@@@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@AEAAAEAUMenuItem@UI@WindowsUdk@winrt@@AEBU2345@@Z @ 0x180498F8C (--$_Emplace_back_with_unused_capacity@AEBUMenuItem@UI@WindowsUdk@winrt@@@-$vector@UMenuItem@UI@W.c)
 *     ??$_Emplace_reallocate@AEBURegistrationData@Shell@Internal@Windows@winrt@@@?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAPEAURegistrationData@Shell@Internal@Windows@winrt@@QEAU23456@AEBU23456@@Z @ 0x180498FC0 (--$_Emplace_reallocate@AEBURegistrationData@Shell@Internal@Windows@winrt@@@-$vector@URegistratio.c)
 */

__int64 **__fastcall std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::emplace<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner const &>(
        __int64 a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v4; // rdi
  __int64 *v8; // rsi
  __int64 v9; // rax
  __int64 v11[2]; // [rsp+28h] [rbp-10h] BYREF

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
      v11[0] = *a4;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v11);
      v8 = v4 - 1;
      v9 = *(v4 - 1);
      *(v4 - 1) = 0LL;
      *v4 = v9;
      *(_QWORD *)(a1 + 8) += 8LL;
      while ( v8 != a3 )
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(--v4, --v8);
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(a3, v11);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v11);
    }
    *a2 = a3;
  }
  return a2;
}
