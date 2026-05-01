/*
 * XREFs of ??$As@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18033B5D4
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_09d6a5938551e11ba4f4f6c676a8faa5___::Invoke @ 0x180348510 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180348510.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_fbca4f682b4592a86644e763e0581c87___::Invoke @ 0x180348590 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180348590.c)
 *     _lambda_31d8d0e2e273500a7c1ca167a6f55928_::operator() @ 0x180357B94 (_lambda_31d8d0e2e273500a7c1ca167a6f55928_--operator().c)
 *     ?HandleSessionItemSimpleVolumeChanged@AppList@GamingAudio@@QEAAXH@Z @ 0x180358AA4 (-HandleSessionItemSimpleVolumeChanged@AppList@GamingAudio@@QEAAXH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall Microsoft::WRL::WeakRef::As<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager>(
        Microsoft::WRL::WeakRef *this,
        struct IInspectable **a2)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a2);
  return Microsoft::WRL::WeakRef::InternalResolve(this, &GUID_c44450f0_731e_4fdb_95fe_d031838a5b14, a2);
}
