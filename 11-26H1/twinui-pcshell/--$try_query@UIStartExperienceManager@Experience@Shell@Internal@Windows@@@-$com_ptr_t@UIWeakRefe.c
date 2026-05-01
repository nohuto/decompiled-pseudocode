/*
 * XREFs of ??$try_query@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIStartExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801E5230
 * Callers:
 *     CStartExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x18023A330 (CStartExperienceManager--OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 *     CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x180388050 (CStartExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoRemovedEventArgs___lambda_01b8ae2d9cbe4889d05ea36904e58758___::Invoke @ 0x180389550 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180389550.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController_winrt::Windows::Foundation::IInspectable___lambda_49baf166eb88c1aaea4f04c102c07ae0___::Invoke @ 0x1803895A0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Start.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController_winrt::Windows::Foundation::IInspectable___lambda_a7fe895307a8c6dca783ef8ed4834783___::Invoke @ 0x180389620 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180389620.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController_winrt::Windows::Foundation::IInspectable___lambda_c080e3223eed1d171b699a9721fdfe52___::Invoke @ 0x1803896A0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1803896A0.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController_winrt::Windows::Foundation::IInspectable___lambda_d1576cb6f198b0ea5d96a431a7d3193c___::Invoke @ 0x180389720 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180389720.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::try_query<Windows::Internal::Shell::Experience::IStartExperienceManager>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *a1;
  *a2 = 0LL;
  (*(void (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)v3 + 24LL))(
    v3,
    &GUID_94bd88e6_2b15_469b_8b49_352bb7d48d4e,
    a2);
  return a2;
}
